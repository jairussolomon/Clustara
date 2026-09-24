#!/usr/bin/env bash
#
# Clustara: run the regression serially and print a summary.
#
#   ./scripts/run_regression.sh              run every test
#   ./scripts/run_regression.sh add sub lw   run only these
#
# Phase 5 replaces the loop with one pod per bucket, but the per test
# command stays exactly the same.

set -u -o pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

if [ "$#" -gt 0 ]; then
	TESTS=("$@")
else
	mapfile -t TESTS < <(make -s -C sw list)
fi

mkdir -p results
PASSED=()
FAILED=()

START=$(date +%s)

for t in "${TESTS[@]}"; do
	if [ ! -f "sw/build/${t}.hex" ]; then
		echo "SKIP ${t} (no hex, run make sw first)"
		FAILED+=("$t")
		continue
	fi

	if make -s -C tb TEST_NAME="$t" > "results/${t}.log" 2>&1; then
		echo "PASS ${t}"
		PASSED+=("$t")
	else
		echo "FAIL ${t}   see results/${t}.log"
		FAILED+=("$t")
	fi
done

END=$(date +%s)

echo
echo "----------------------------------------"
echo "passed  : ${#PASSED[@]}"
echo "failed  : ${#FAILED[@]}"
echo "wall time: $((END - START))s"
echo "----------------------------------------"

if [ "${#FAILED[@]}" -gt 0 ]; then
	echo "failing tests: ${FAILED[*]}"
	exit 1
fi

exit 0

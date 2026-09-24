// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 4U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 8U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0xcU;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x10U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x14U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x18U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x1cU;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x20U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x24U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x28U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x2cU;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x30U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x34U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x38U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x3cU;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0x40U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__i = 1U;
    vlSelfRef.tb_top__DOT__i = 0U;
    while (VL_GTS_III(32, 0x8000U, vlSelfRef.tb_top__DOT__i)) {
        vlSelfRef.tb_top__DOT__memory[(0x7fffU & vlSelfRef.tb_top__DOT__i)] = 0U;
        vlSelfRef.tb_top__DOT__i = ((IData)(1U) + vlSelfRef.tb_top__DOT__i);
    }
    if (VL_LIKELY(VL_VALUEPLUSARGS_INW(1024, std::string{"hex=%s"}, 
                                       vlSelfRef.tb_top__DOT__hexfile))) {
        VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(32, vlSelfRef.tb_top__DOT__hexfile)
                     ,  &(vlSelfRef.tb_top__DOT__memory)
                     , 0, ~0ULL);
    } else {
        VL_WRITEF_NX("tb_top: no +hex=<file> given, memory is empty\n",0);
        VL_FINISH_MT("/home/jairussolomon/Desktop/Clustara/rtl/tb_top.v", 56, "");
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword_xfer = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_use_prefetched_high_word = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/jairussolomon/Desktop/Clustara/rtl/tb_top.v", 15, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->trap = VL_RAND_RESET_I(1);
    vlSelf->out_valid = VL_RAND_RESET_I(1);
    vlSelf->out_char = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__out_char = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_top__DOT__mem_rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_top__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(1024, vlSelf->tb_top__DOT__hexfile);
    vlSelf->tb_top__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_top__DOT__cpu__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__irq = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__eoi = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__trace_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__trace_data = VL_RAND_RESET_Q(36);
    vlSelf->tb_top__DOT__cpu__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_mem_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__irq_delay = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__irq_pending = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__cpu__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_top__DOT__cpu__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_mul_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_mul_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_mul_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_mul_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_div_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_div_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_div_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_div_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_int_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_int_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_int_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_int_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->tb_top__DOT__cpu__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->tb_top__DOT__cpu__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_xfer = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_firstword = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_firstword_xfer = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    vlSelf->tb_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_rdata_latched = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__mem_la_use_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_fence = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_getq = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_setq = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_retirq = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_timer = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__instr_trap = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__decoded_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_next = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->tb_top__DOT__cpu__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->tb_top__DOT__cpu__DOT__dbg_ascii_state);
    vlSelf->tb_top__DOT__cpu__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_trace = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__latched_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->tb_top__DOT__cpu__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__alu_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__alu_add_sub = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__alu_shl = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__alu_shr = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__alu_eq = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__alu_ltu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__alu_lts = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__decoded_rs = VL_RAND_RESET_I(5);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_RAND_RESET_Q(64);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_RAND_RESET_I(7);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_RAND_RESET_Q(63);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_RAND_RESET_I(32);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vtop__ConstPool__TABLE_hcd7b38fe_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0;
    tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0 = 0;
    CData/*0:0*/ tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0;
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 = 0;
    CData/*3:0*/ tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0;
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_ready = vlSelfRef.tb_top__DOT__mem_ready;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata = vlSelfRef.tb_top__DOT__mem_rdata;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn;
    vlSelfRef.tb_top__DOT__mem_valid = vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_valid 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_ready 
        = vlSelfRef.tb_top__DOT__mem_ready;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_rdata 
        = vlSelfRef.tb_top__DOT__mem_rdata;
    vlSelfRef.trap = vlSelfRef.tb_top__DOT__cpu__DOT__trap;
    vlSelfRef.tb_top__DOT__trap = vlSelfRef.tb_top__DOT__cpu__DOT__trap;
    vlSelfRef.out_valid = vlSelfRef.tb_top__DOT__out_valid;
    vlSelfRef.out_char = vlSelfRef.tb_top__DOT__out_char;
    vlSelfRef.tb_top__DOT__mem_addr = vlSelfRef.tb_top__DOT__cpu__DOT__mem_addr;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_addr = vlSelfRef.tb_top__DOT__cpu__DOT__mem_addr;
    vlSelfRef.tb_top__DOT__mem_wstrb = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wstrb;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_wstrb 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wstrb;
    vlSelfRef.tb_top__DOT__mem_wdata = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wdata;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_wdata 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wdata;
    vlSelfRef.tb_top__DOT__mem_instr = vlSelfRef.tb_top__DOT__cpu__DOT__mem_instr;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_instr 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_instr;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    if ((0U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wdata 
            = vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2;
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb = 0xfU;
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word 
            = vlSelfRef.tb_top__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2));
        if ((2U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)) {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)) {
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word 
                    = (vlSelfRef.tb_top__DOT__mem_rdata 
                       >> 0x10U);
            }
        } else {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb = 3U;
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word 
                = (0xffffU & vlSelfRef.tb_top__DOT__mem_rdata);
        }
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2))));
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)));
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)
                ? ((1U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)
                    ? (vlSelfRef.tb_top__DOT__mem_rdata 
                       >> 0x18U) : (0xffU & (vlSelfRef.tb_top__DOT__mem_rdata 
                                             >> 0x10U)))
                : ((1U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)
                    ? (0xffU & (vlSelfRef.tb_top__DOT__mem_rdata 
                                >> 8U)) : (0xffU & vlSelfRef.tb_top__DOT__mem_rdata)));
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_shl = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2));
    vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1 = 
        ((0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs1))
          ? vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs
         [vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs1]
          : 0U);
    vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2 = 
        ((0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2))
          ? vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs
         [vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2]
          : 0U);
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.tb_top__DOT__cpu__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state)) 
           & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_write = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_write = 
        ((IData)(vlSelfRef.resetn) & ((~ (IData)((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state)))) 
                                      & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata)));
    __Vtableidx1 = vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_state[0U] 
        = Vtop__ConstPool__TABLE_hcd7b38fe_0[__Vtableidx1][0U];
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_state[1U] 
        = Vtop__ConstPool__TABLE_hcd7b38fe_0[__Vtableidx1][1U];
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_state[2U] 
        = Vtop__ConstPool__TABLE_hcd7b38fe_0[__Vtableidx1][2U];
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_state[3U] 
        = Vtop__ConstPool__TABLE_hcd7b38fe_0[__Vtableidx1][3U];
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_shr = (IData)(
                                                       (0x1ffffffffULL 
                                                        & VL_SHIFTRS_QQI(33,33,5, 
                                                                         (((QData)((IData)(
                                                                                (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra) 
                                                                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai)) 
                                                                                & (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1))), 
                                                                         (0x1fU 
                                                                          & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2))));
    vlSelfRef.tb_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstrh))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_imm = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_imm;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_opcode 
        = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_opcode;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs1 = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs2 = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rs2;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rd = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rd;
    vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word 
        = vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__prefetched_high_word)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.resetn))))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wait 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_wait 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_read = 
        ((IData)(vlSelfRef.resetn) & ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_use_prefetched_high_word)) 
                                      & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state)))) 
                                         & ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
                                            | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch) 
                                               | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata))))));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1 = vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wr = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_rd = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_wr = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_rd = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2 = vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
        if (vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch) {
            vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_write = 1U;
            vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_wrdata 
                = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_pc 
                   + ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch)))) {
            vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_write = 1U;
            vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_stalu)
                    ? vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_q
                    : vlSelfRef.tb_top__DOT__cpu__DOT__reg_out);
        }
    }
    vlSelfRef.tb_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.tb_top__DOT__resetn = vlSelfRef.resetn;
    vlSelfRef.tb_top__DOT__cpu__DOT__next_pc = (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_store))
                                                 ? 
                                                (0xfffffffeU 
                                                 & vlSelfRef.tb_top__DOT__cpu__DOT__reg_out)
                                                 : vlSelfRef.tb_top__DOT__cpu__DOT__reg_next_pc);
    tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata)));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_ready 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_ready 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
            ? vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
            : 0ULL);
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2)));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 3U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffff0ULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 7U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffffff0fULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0xbU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffff0ffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 8U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0xfU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffff0fffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0xcU));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x13U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffff0ffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x10U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x17U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffff0fffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x14U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x1bU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffff0ffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x18U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x1fU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffff0fffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x1cU));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x23U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffff0ffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x20U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x27U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffff0fffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x24U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x2bU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffff0ffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x28U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x2fU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffff0fffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x2cU));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x33U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfff0ffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x30U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x37U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xff0fffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x34U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x3bU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xf0ffffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x38U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x3fU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x3cU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt, 1U);
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1, 1U);
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2, 1U);
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_eq = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                                               == vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_lts = VL_LTS_III(32, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_ltu = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                                                < vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer = (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__mem_ready)) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
                                                    & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_use_prefetched_high_word)));
    vlSelfRef.tb_top__DOT__cpu__DOT__instr_trap = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui) 
                                                       | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_auipc) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr) 
                                                                 | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_beq) 
                                                                    | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bne) 
                                                                       | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_blt) 
                                                                          | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bge) 
                                                                             | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bltu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bgeu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lb) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lh) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lw) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lbu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lhu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sb) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sh) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sw) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_addi) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slti) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltu)))))))))))))))))))))))))))))) 
                                                             | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_xor) 
                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srl) 
                                                                   | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_or) 
                                                                         | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_and) 
                                                                            | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycle) 
                                                                               | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycleh) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstr) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_timer) 
                                                                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_waitirq)))))))))))))))))))));
    vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_auipc) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_beq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bne) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_blt) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bge) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bltu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bgeu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lb) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lh) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lw) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lbu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lhu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sb) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sh) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sw) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_addi) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_slti) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltiu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_xori) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_ori) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_andi) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_slli) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_srli) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_add) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sub) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_add_sub 
            = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
               - vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x737562ULL;
    } else {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_add_sub 
            = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
               + vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sll) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_slt) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_xor) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_srl) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_or) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_and) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycle) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycleh) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstr) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstrh) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_fence) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_getq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_setq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_retirq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_maskirq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_waitirq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_timer) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wait 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wait) 
           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_wait));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
    vlSelfRef.tb_top__DOT__cpu__DOT__clk = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.tb_top__DOT__cpu__DOT__resetn = vlSelfRef.tb_top__DOT__resetn;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_addr = 
        (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch) 
          | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst))
          ? (((vlSelfRef.tb_top__DOT__cpu__DOT__next_pc 
               >> 2U) + (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword_xfer)) 
             << 2U) : (0xfffffffcU & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1));
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_busy = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch) 
                                                 | (IData)(tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_ready 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_ready) 
           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_ready));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wr = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_rd = 0U;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_ready) {
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wr;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_rd 
            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_rd;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_ready) {
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_wr;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_rd 
            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_rd;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 = 0U;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_beq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.tb_top__DOT__cpu__DOT__alu_eq;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bne) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__alu_eq)));
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bge) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__alu_lts)));
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bgeu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__alu_ltu)));
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_slti_blt_slt) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.tb_top__DOT__cpu__DOT__alu_lts;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.tb_top__DOT__cpu__DOT__alu_ltu;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = 0U;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = vlSelfRef.tb_top__DOT__cpu__DOT__alu_add_sub;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_compare) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_xori) 
                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_xor))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = 
            (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
             ^ vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_ori) 
                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_or))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = 
            (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
             | vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_andi) 
                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_and))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = 
            (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
             & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer)
            ? vlSelfRef.tb_top__DOT__mem_rdata : vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q);
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_instr 
        = vlSelfRef.tb_top__DOT__cpu__DOT__q_ascii_instr;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__dbg_next) {
        if (vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_imm;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_opcode 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_opcode;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rs1;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rs2;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rd;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode))
                    ? vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode
                    : (0xffffU & vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode));
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs1 
                = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs1;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rd;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__clk 
        = vlSelfRef.tb_top__DOT__cpu__DOT__clk;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__clk 
        = vlSelfRef.tb_top__DOT__cpu__DOT__clk;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__resetn 
        = vlSelfRef.tb_top__DOT__cpu__DOT__resetn;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__resetn 
        = vlSelfRef.tb_top__DOT__cpu__DOT__resetn;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_done = ((IData)(vlSelfRef.resetn) 
                                                 & ((((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer) 
                                                      & ((0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state)) 
                                                         & (IData)(tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0))) 
                                                     | ((3U 
                                                         == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state)) 
                                                        & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst))) 
                                                    & ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword)) 
                                                       | ((~ (IData)(
                                                                     (3U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched)))) 
                                                          & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer)))));
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0;
    tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0 = 0;
    CData/*0:0*/ tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0;
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 = 0;
    CData/*3:0*/ tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0;
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__mem_ready;
    __Vdly__tb_top__DOT__mem_ready = 0;
    CData/*1:0*/ __Vdly__tb_top__DOT__cpu__DOT__mem_state;
    __Vdly__tb_top__DOT__cpu__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__tb_top__DOT__cpu__DOT__reg_sh;
    __Vdly__tb_top__DOT__cpu__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__cpu__DOT__reg_out;
    __Vdly__tb_top__DOT__cpu__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__tb_top__DOT__cpu__DOT__count_cycle;
    __Vdly__tb_top__DOT__cpu__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__decoder_trigger;
    __Vdly__tb_top__DOT__cpu__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__decoder_pseudo_trigger;
    __Vdly__tb_top__DOT__cpu__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst;
    __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize;
    __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__latched_is_lu;
    __Vdly__tb_top__DOT__cpu__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__latched_is_lh;
    __Vdly__tb_top__DOT__cpu__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__latched_is_lb;
    __Vdly__tb_top__DOT__cpu__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__cpu__DOT__reg_pc;
    __Vdly__tb_top__DOT__cpu__DOT__reg_pc = 0;
    QData/*63:0*/ __Vdly__tb_top__DOT__cpu__DOT__count_instr;
    __Vdly__tb_top__DOT__cpu__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__mem_do_prefetch;
    __Vdly__tb_top__DOT__cpu__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__tb_top__DOT__cpu__DOT__cpu_state;
    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__cpu__DOT__reg_op1;
    __Vdly__tb_top__DOT__cpu__DOT__reg_op1 = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid;
    __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = 0;
    CData/*3:0*/ __Vdly__tb_top__DOT__cpu__DOT__pcpi_timeout_counter;
    __Vdly__tb_top__DOT__cpu__DOT__pcpi_timeout_counter = 0;
    CData/*6:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0;
    CData/*0:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend = 0;
    QData/*62:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__memory__v0;
    __VdlyVal__tb_top__DOT__memory__v0 = 0;
    SData/*14:0*/ __VdlyDim0__tb_top__DOT__memory__v0;
    __VdlyDim0__tb_top__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__memory__v0;
    __VdlySet__tb_top__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__memory__v1;
    __VdlyVal__tb_top__DOT__memory__v1 = 0;
    SData/*14:0*/ __VdlyDim0__tb_top__DOT__memory__v1;
    __VdlyDim0__tb_top__DOT__memory__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__memory__v1;
    __VdlySet__tb_top__DOT__memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__memory__v2;
    __VdlyVal__tb_top__DOT__memory__v2 = 0;
    SData/*14:0*/ __VdlyDim0__tb_top__DOT__memory__v2;
    __VdlyDim0__tb_top__DOT__memory__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__memory__v2;
    __VdlySet__tb_top__DOT__memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__memory__v3;
    __VdlyVal__tb_top__DOT__memory__v3 = 0;
    SData/*14:0*/ __VdlyDim0__tb_top__DOT__memory__v3;
    __VdlyDim0__tb_top__DOT__memory__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__memory__v3;
    __VdlySet__tb_top__DOT__memory__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_top__DOT__cpu__DOT__cpuregs__v0;
    __VdlyVal__tb_top__DOT__cpu__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__cpu__DOT__cpuregs__v0;
    __VdlyDim0__tb_top__DOT__cpu__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__cpu__DOT__cpuregs__v0;
    __VdlySet__tb_top__DOT__cpu__DOT__cpuregs__v0 = 0;
    // Body
    __Vdly__tb_top__DOT__cpu__DOT__pcpi_timeout_counter 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout_counter;
    __Vdly__tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __VdlySet__tb_top__DOT__memory__v0 = 0U;
    __VdlySet__tb_top__DOT__memory__v1 = 0U;
    __VdlySet__tb_top__DOT__memory__v2 = 0U;
    __VdlySet__tb_top__DOT__memory__v3 = 0U;
    __Vdly__tb_top__DOT__mem_ready = vlSelfRef.tb_top__DOT__mem_ready;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__tb_top__DOT__cpu__DOT__reg_sh = vlSelfRef.tb_top__DOT__cpu__DOT__reg_sh;
    __Vdly__tb_top__DOT__cpu__DOT__count_cycle = vlSelfRef.tb_top__DOT__cpu__DOT__count_cycle;
    __Vdly__tb_top__DOT__cpu__DOT__decoder_pseudo_trigger 
        = vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger;
    __Vdly__tb_top__DOT__cpu__DOT__latched_is_lu = vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lu;
    __Vdly__tb_top__DOT__cpu__DOT__latched_is_lh = vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lh;
    __Vdly__tb_top__DOT__cpu__DOT__latched_is_lb = vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lb;
    __Vdly__tb_top__DOT__cpu__DOT__count_instr = vlSelfRef.tb_top__DOT__cpu__DOT__count_instr;
    __Vdly__tb_top__DOT__cpu__DOT__decoder_trigger 
        = vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger;
    __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid;
    __Vdly__tb_top__DOT__cpu__DOT__reg_pc = vlSelfRef.tb_top__DOT__cpu__DOT__reg_pc;
    __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize;
    __Vdly__tb_top__DOT__cpu__DOT__mem_do_prefetch 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch;
    __Vdly__tb_top__DOT__cpu__DOT__reg_out = vlSelfRef.tb_top__DOT__cpu__DOT__reg_out;
    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state;
    __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst;
    __VdlySet__tb_top__DOT__cpu__DOT__cpuregs__v0 = 0U;
    __Vdly__tb_top__DOT__cpu__DOT__reg_op1 = vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1;
    __Vdly__tb_top__DOT__cpu__DOT__mem_state = vlSelfRef.tb_top__DOT__cpu__DOT__mem_state;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    if ((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_rd)))) {
        __VdlyVal__tb_top__DOT__cpu__DOT__cpuregs__v0 
            = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_wrdata;
        __VdlyDim0__tb_top__DOT__cpu__DOT__cpuregs__v0 
            = vlSelfRef.tb_top__DOT__cpu__DOT__latched_rd;
        __VdlySet__tb_top__DOT__cpu__DOT__cpuregs__v0 = 1U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_wait_2 = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__trace_data = 0ULL;
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_wait = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__trace_valid = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rd = vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rd;
    vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rs2 = vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs2;
    vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rs1 = vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_opcode 
        = vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_opcode;
    vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_imm = vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_imm;
    vlSelfRef.tb_top__DOT__cpu__DOT__q_ascii_instr 
        = vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_instr;
    vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__launch_next_insn) {
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_addr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__next_pc;
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs2val = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs2val_valid = 0U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0_q = vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.tb_top__DOT__cpu__DOT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__latched_trace = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__irq_mask = 0xffffffffU;
        vlSelfRef.tb_top__DOT__cpu__DOT__eoi = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__next_irq_pending = 0U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__irq_pending = vlSelfRef.tb_top__DOT__cpu__DOT__next_irq_pending;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_next = vlSelfRef.tb_top__DOT__cpu__DOT__launch_next_insn;
    vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait) 
           & (IData)(vlSelfRef.resetn));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 0U;
    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlSelfRef.resetn))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 1U;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 1U;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd 
            = (IData)(((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rd, 0x20U)
                        : vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    if ((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid)) 
         & (0x2000033U == (0xfe00007fU & vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn)))) {
        if ((0U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
        if ((0U != (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U != (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((2U != (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((3U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
                if ((2U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
            if ((1U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    if (((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready))) 
         & (0x2000033U == (0xfe00007fU & vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn)))) {
        if ((4U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
        if ((4U != (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
            if ((5U != (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((6U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
                if ((6U != (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((7U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger_q) {
        vlSelfRef.tb_top__DOT__cpu__DOT__cached_ascii_instr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr;
        vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rd 
            = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rd;
        vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rs1 
            = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs1;
        vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rs2 
            = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2;
        vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode))
                ? vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode
                : (0xffffU & vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode));
        vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_imm 
            = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__trap)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_valid_insn = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__launch_next_insn) {
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word) {
        vlSelfRef.tb_top__DOT__cpu__DOT__prefetched_high_word = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__trap))))) {
        if (vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_write) {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_wdata 
                = vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_read) 
             | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_write))) {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_addr 
                = vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_addr;
        }
    }
    if (__VdlySet__tb_top__DOT__cpu__DOT__cpuregs__v0) {
        vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs[__VdlyDim0__tb_top__DOT__cpu__DOT__cpuregs__v0] 
            = __VdlyVal__tb_top__DOT__cpu__DOT__cpuregs__v0;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul;
    if (vlSelfRef.resetn) {
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait 
            = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_ready 
            = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_rd 
            = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_wdata 
            = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wdata;
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_addr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__mem_addr;
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__last_mem_valid)))) {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword_reg 
                = vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword;
        }
    } else {
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_ready 
            = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_rd 
            = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_wdata 
            = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wdata;
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_addr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__mem_addr;
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.resetn) && ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid) 
                                         & (~ (IData)(vlSelfRef.tb_top__DOT__mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
            __Vdly__tb_top__DOT__cpu__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.tb_top__DOT__mem_ready)))) {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid = 0U;
        }
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_read) 
             | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_write))) {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_wstrb 
                = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata))) {
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid 
                    = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_use_prefetched_high_word)));
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_instr 
                    = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst));
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_wstrb = 0U;
                __Vdly__tb_top__DOT__cpu__DOT__mem_state = 1U;
            }
            if (vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata) {
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid = 1U;
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_instr = 0U;
                __Vdly__tb_top__DOT__cpu__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state))) {
            if (vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer) {
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid = 0U;
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_secondword = 0U;
                __Vdly__tb_top__DOT__cpu__DOT__mem_state 
                    = (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state))) {
            if (vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer) {
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid = 0U;
                __Vdly__tb_top__DOT__cpu__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state))) {
            if (vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) {
                __Vdly__tb_top__DOT__cpu__DOT__mem_state = 0U;
            }
        }
    }
    if (vlSelfRef.resetn) {
        if (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1)
                    : (QData)((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1)));
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2)
                    : (QData)((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2)));
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x3eU : 0x1eU);
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start)));
        } else {
            __Vdly__tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x7fU & ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                            - (IData)(1U)));
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x40U & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
    } else {
        vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    if (vlSelfRef.resetn) {
        if (vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1 
                       >> 0x1fU)) ? (- vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1)
                    : vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1);
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & VL_SHIFTL_QQI(63,63,32, 
                                                         ((((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                                            | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                                           & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2 
                                                              >> 0x1fU))
                                                           ? 
                                                          (- (QData)((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2)))
                                                           : (QData)((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2))), 0x1fU));
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
        } else if (((~ (IData)((0U != vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk))) 
                    & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 1U;
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 1U;
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd 
                = (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & VL_SHIFTR_QQI(63,63,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor, 1U));
            __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk, 1U);
        }
    } else {
        __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wait 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_wait 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
            ? vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
            : 0ULL);
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2)));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 3U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffff0ULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 7U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffffff0fULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0xbU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffff0ffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 8U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0xfU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffff0fffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0xcU));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x13U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffff0ffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x10U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x17U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffff0fffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x14U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x1bU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffff0ffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x18U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x1fU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffff0fffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x1cU));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x23U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffff0ffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x20U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x27U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffff0fffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x24U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x2bU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffff0ffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x28U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x2fU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffff0fffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x2cU));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x33U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfff0ffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x30U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x37U));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xff0fffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x34U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x3bU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xf0ffffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x38U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0 
        = (1U & ((((0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0 
        = (0xfU & (((IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h008d3f60__0)) 
              << 0x3fU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffffULL & vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h0185a4fa__0)) 
              << 0x3cU));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt, 1U);
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = VL_SHIFTR_QQI(64,64,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1, 1U);
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2, 1U);
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_wr = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_rd = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_ready 
        = vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_timer = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_maskirq = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_getq = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_setq = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_fence 
            = ((0xfU == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)) 
               & (~ (IData)((0U != (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                          >> 0xcU))))));
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn 
            = vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_insn;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs1 = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_opcode 
        = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_opcode;
    if (vlSelfRef.resetn) {
        if (vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1 
                         >> 0x1fU) != (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2 
                                       >> 0x1fU))) 
                    & (0U != vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2)) 
                   | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1 
                         >> 0x1fU)));
        }
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = __Vdly__tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_state = __Vdly__tb_top__DOT__cpu__DOT__mem_state;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_wstrb 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wstrb;
    vlSelfRef.tb_top__DOT__mem_instr = vlSelfRef.tb_top__DOT__cpu__DOT__mem_instr;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_instr 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_instr;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_valid 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid;
    vlSelfRef.tb_top__DOT__cpu__DOT__trap = 0U;
    __Vdly__tb_top__DOT__cpu__DOT__reg_sh = 0U;
    __Vdly__tb_top__DOT__cpu__DOT__reg_out = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_wdata = 0U;
    __Vdly__tb_top__DOT__cpu__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done));
    vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger_q 
        = vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger;
    __Vdly__tb_top__DOT__cpu__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelfRef.resetn) {
        __Vdly__tb_top__DOT__cpu__DOT__count_cycle 
            = (1ULL + vlSelfRef.tb_top__DOT__cpu__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
                vlSelfRef.tb_top__DOT__cpu__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
                __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__do_waitirq))));
                __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = 0U;
                __Vdly__tb_top__DOT__cpu__DOT__latched_is_lu = 0U;
                __Vdly__tb_top__DOT__cpu__DOT__latched_is_lh = 0U;
                __Vdly__tb_top__DOT__cpu__DOT__latched_is_lb = 0U;
                vlSelfRef.tb_top__DOT__cpu__DOT__latched_rd 
                    = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rd;
                vlSelfRef.tb_top__DOT__cpu__DOT__latched_compr 
                    = vlSelfRef.tb_top__DOT__cpu__DOT__compressed_instr;
                vlSelfRef.tb_top__DOT__cpu__DOT__current_pc 
                    = vlSelfRef.tb_top__DOT__cpu__DOT__reg_next_pc;
                if (vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch) {
                    vlSelfRef.tb_top__DOT__cpu__DOT__current_pc 
                        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_stalu)
                                               ? vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_q
                                               : vlSelfRef.tb_top__DOT__cpu__DOT__reg_out))
                            : vlSelfRef.tb_top__DOT__cpu__DOT__reg_next_pc);
                }
                __Vdly__tb_top__DOT__cpu__DOT__reg_pc 
                    = vlSelfRef.tb_top__DOT__cpu__DOT__current_pc;
                vlSelfRef.tb_top__DOT__cpu__DOT__reg_next_pc 
                    = vlSelfRef.tb_top__DOT__cpu__DOT__current_pc;
                vlSelfRef.tb_top__DOT__cpu__DOT__latched_store = 0U;
                vlSelfRef.tb_top__DOT__cpu__DOT__latched_stalu = 0U;
                vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch = 0U;
                if (vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger) {
                    __Vdly__tb_top__DOT__cpu__DOT__count_instr 
                        = (1ULL + vlSelfRef.tb_top__DOT__cpu__DOT__count_instr);
                    vlSelfRef.tb_top__DOT__cpu__DOT__irq_delay 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__irq_active;
                    vlSelfRef.tb_top__DOT__cpu__DOT__reg_next_pc 
                        = (vlSelfRef.tb_top__DOT__cpu__DOT__current_pc 
                           + ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal) {
                        __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                        vlSelfRef.tb_top__DOT__cpu__DOT__reg_next_pc 
                            = (vlSelfRef.tb_top__DOT__cpu__DOT__current_pc 
                               + vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j);
                        vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 0U;
                        __Vdly__tb_top__DOT__cpu__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_retirq))));
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
                __Vdly__tb_top__DOT__cpu__DOT__reg_op1 = 0U;
                vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_trap) 
                      | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_lui_auipc_jal))) {
                    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_trap) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__reg_sh 
                            = (0x1fU & vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2);
                        vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2;
                        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs2val 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2;
                        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_ready) {
                            __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                            __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = 0U;
                            __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                                = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_rd;
                            vlSelfRef.tb_top__DOT__cpu__DOT__latched_store 
                                = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wr;
                            __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout) 
                                    | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_ecall_ebreak))) {
                            __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = 0U;
                            __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x80U;
                        }
                    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycle) {
                            __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                                = (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__count_cycle);
                        } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycleh) {
                            __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                                = (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstr) {
                            __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                                = (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__count_instr);
                        } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstrh) {
                            __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                                = (IData)((vlSelfRef.tb_top__DOT__cpu__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.tb_top__DOT__cpu__DOT__latched_store = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_lui_auipc_jal) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui)
                                ? 0U : vlSelfRef.tb_top__DOT__cpu__DOT__reg_pc);
                        vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm;
                        __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch;
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 8U;
                    } else {
                        vlSelfRef.tb_top__DOT__cpu__DOT__latched_store = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__timer;
                        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                        vlSelfRef.tb_top__DOT__cpu__DOT__timer 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_trap)))) {
                    __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 1U;
                    __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_slli_srli_srai) {
                    __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__tb_top__DOT__cpu__DOT__reg_sh 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2;
                    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 4U;
                } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm;
                    __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 8U;
                } else {
                    __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__tb_top__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2);
                    vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs2val 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2;
                    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.tb_top__DOT__cpu__DOT__is_sb_sh_sw) {
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 2U;
                        __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_sll_srl_sra) {
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch;
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
                __Vdly__tb_top__DOT__cpu__DOT__reg_sh 
                    = (0x1fU & vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2);
                vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                    = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2;
                vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs2val 
                    = vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2;
                vlSelfRef.tb_top__DOT__cpu__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_trap) {
                    __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = 1U;
                    if (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_ready) {
                        __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = 0U;
                        __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_rd;
                        vlSelfRef.tb_top__DOT__cpu__DOT__latched_store 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wr;
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout) 
                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_ecall_ebreak))) {
                        __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = 0U;
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x80U;
                    }
                } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_sb_sh_sw) {
                    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 2U;
                    __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_sll_srl_sra) {
                    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 4U;
                } else {
                    __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
                __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                    = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_pc 
                       + vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm);
                if (vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.tb_top__DOT__cpu__DOT__latched_rd = 0U;
                    vlSelfRef.tb_top__DOT__cpu__DOT__latched_store 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0;
                    vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0;
                    if (vlSelfRef.tb_top__DOT__cpu__DOT__mem_done) {
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0) {
                        vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_rinst = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr;
                    vlSelfRef.tb_top__DOT__cpu__DOT__latched_store = 1U;
                    vlSelfRef.tb_top__DOT__cpu__DOT__latched_stalu = 1U;
                    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
                vlSelfRef.tb_top__DOT__cpu__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__reg_sh))) {
                    __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1;
                    __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst 
                        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch;
                    __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slli) 
                         | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sll))) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srli) 
                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srl))) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai) 
                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra))) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1, 4U);
                    }
                    __Vdly__tb_top__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__reg_sh) 
                                    - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slli) 
                         | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sll))) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srli) 
                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srl))) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai) 
                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra))) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1, 1U);
                    }
                    __Vdly__tb_top__DOT__cpu__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__reg_sh) 
                                    - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata)))) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                               + vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm);
                        vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sb) {
                            __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sh) {
                            __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sw) {
                            __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done))) {
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                        __Vdly__tb_top__DOT__cpu__DOT__decoder_trigger = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.tb_top__DOT__cpu__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done))) {
                        if (vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lu) {
                            __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                                = vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word;
                        } else if (vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lh) {
                            __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word));
                        } else if (vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lb) {
                            __Vdly__tb_top__DOT__cpu__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word));
                        }
                        __Vdly__tb_top__DOT__cpu__DOT__decoder_trigger = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata)))) {
                        __Vdly__tb_top__DOT__cpu__DOT__reg_op1 
                            = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                               + vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm);
                        vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lb) 
                             | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lbu))) {
                            __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lhu))) {
                            __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lw) {
                            __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__tb_top__DOT__cpu__DOT__latched_is_lu 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__is_lbu_lhu_lw;
                        __Vdly__tb_top__DOT__cpu__DOT__latched_is_lh 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__instr_lh;
                        __Vdly__tb_top__DOT__cpu__DOT__latched_is_lb 
                            = vlSelfRef.tb_top__DOT__cpu__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__tb_top__DOT__cpu__DOT__count_cycle = 0ULL;
        __Vdly__tb_top__DOT__cpu__DOT__count_instr = 0ULL;
        vlSelfRef.tb_top__DOT__cpu__DOT__timer = 0U;
        __Vdly__tb_top__DOT__cpu__DOT__reg_pc = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__reg_next_pc = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__latched_store = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__latched_stalu = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch = 0U;
        __Vdly__tb_top__DOT__cpu__DOT__latched_is_lu = 0U;
        __Vdly__tb_top__DOT__cpu__DOT__latched_is_lh = 0U;
        __Vdly__tb_top__DOT__cpu__DOT__latched_is_lb = 0U;
        __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__irq_delay = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__latched_rd = 2U;
        __Vdly__tb_top__DOT__cpu__DOT__reg_out = 0x18000U;
        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x40U;
        vlSelfRef.tb_top__DOT__cpu__DOT__latched_store = 1U;
    }
    if (((IData)(vlSelfRef.resetn) & ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata) 
                                      | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)))) {
            __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize)) 
             & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)) {
            __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_pc)))) {
        __Vdly__tb_top__DOT__cpu__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.resetn)) | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done)))) {
        __Vdly__tb_top__DOT__cpu__DOT__mem_do_prefetch = 0U;
        __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_rinst) {
        __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_rdata) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__set_mem_do_wdata) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__current_pc = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__reg_sh = __Vdly__tb_top__DOT__cpu__DOT__reg_sh;
    vlSelfRef.tb_top__DOT__cpu__DOT__count_cycle = __Vdly__tb_top__DOT__cpu__DOT__count_cycle;
    vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lu 
        = __Vdly__tb_top__DOT__cpu__DOT__latched_is_lu;
    vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lh 
        = __Vdly__tb_top__DOT__cpu__DOT__latched_is_lh;
    vlSelfRef.tb_top__DOT__cpu__DOT__latched_is_lb 
        = __Vdly__tb_top__DOT__cpu__DOT__latched_is_lb;
    vlSelfRef.tb_top__DOT__cpu__DOT__count_instr = __Vdly__tb_top__DOT__cpu__DOT__count_instr;
    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_waitirq = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs1 
            = (0x1fU & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
                        >> 0xfU));
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs1 = 
        ((0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs1))
          ? vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs
         [vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs1]
          : 0U);
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_ready 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_ready) 
           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_ready));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_rd = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wr = 0U;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_ready) {
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_rd 
            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_rd;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wr;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_ready) {
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_rd 
            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_rd;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wr 
            = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_wr;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__reg_pc = __Vdly__tb_top__DOT__cpu__DOT__reg_pc;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize = __Vdly__tb_top__DOT__cpu__DOT__mem_wordsize;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch 
        = __Vdly__tb_top__DOT__cpu__DOT__mem_do_prefetch;
    vlSelfRef.tb_top__DOT__cpu__DOT__reg_out = __Vdly__tb_top__DOT__cpu__DOT__reg_out;
    vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state = __Vdly__tb_top__DOT__cpu__DOT__cpu_state;
    vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 = __Vdly__tb_top__DOT__cpu__DOT__reg_op1;
    vlSelfRef.trap = vlSelfRef.tb_top__DOT__cpu__DOT__trap;
    vlSelfRef.tb_top__DOT__trap = vlSelfRef.tb_top__DOT__cpu__DOT__trap;
    vlSelfRef.tb_top__DOT__cpu__DOT__do_waitirq = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_write = 
        ((IData)(vlSelfRef.resetn) & ((~ (IData)((0U 
                                                  != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state)))) 
                                      & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata)));
    __Vtableidx1 = vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_state[0U] 
        = Vtop__ConstPool__TABLE_hcd7b38fe_0[__Vtableidx1][0U];
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_state[1U] 
        = Vtop__ConstPool__TABLE_hcd7b38fe_0[__Vtableidx1][1U];
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_state[2U] 
        = Vtop__ConstPool__TABLE_hcd7b38fe_0[__Vtableidx1][2U];
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_state[3U] 
        = Vtop__ConstPool__TABLE_hcd7b38fe_0[__Vtableidx1][3U];
    vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_write = 0U;
    vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word 
        = vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__prefetched_high_word)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__irq_state = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.resetn))))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__next_pc = (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch) 
                                                 & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_store))
                                                 ? 
                                                (0xfffffffeU 
                                                 & vlSelfRef.tb_top__DOT__cpu__DOT__reg_out)
                                                 : vlSelfRef.tb_top__DOT__cpu__DOT__reg_next_pc);
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_q = vlSelfRef.tb_top__DOT__cpu__DOT__alu_out;
    if ((((IData)(vlSelfRef.resetn) & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid)) 
         & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wait)))) {
        if ((0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout_counter))) {
            __Vdly__tb_top__DOT__cpu__DOT__pcpi_timeout_counter 
                = (0xfU & ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout_counter) 
                           - (IData)(1U)));
        }
    } else {
        __Vdly__tb_top__DOT__cpu__DOT__pcpi_timeout_counter = 0xfU;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout = 
        (1U & (~ (IData)((0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout_counter)))));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2 = vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2;
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_shl = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1 = vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1;
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_eq = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                                               == vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_lts = VL_LTS_III(32, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1, vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_ltu = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                                                < vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    vlSelfRef.tb_top__DOT__cpu__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lhu) 
              | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lw)));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_int_wait 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_mul_wait) 
           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_div_wait));
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout_counter 
        = __Vdly__tb_top__DOT__cpu__DOT__pcpi_timeout_counter;
    vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid = __Vdly__tb_top__DOT__cpu__DOT__pcpi_valid;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs2;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_rs1;
    vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state))) {
        if (vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch) {
            vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_write = 1U;
            vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_wrdata 
                = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_pc 
                   + ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_branch)))) {
            vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_write = 1U;
            vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__latched_stalu)
                    ? vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_q
                    : vlSelfRef.tb_top__DOT__cpu__DOT__reg_out);
        }
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid;
    vlSelfRef.tb_top__DOT__cpu__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
        = vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_valid;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rd = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__compressed_instr = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rd 
            = (0x1fU & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
                        >> 7U));
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2 
            = (0x1fU & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
                        >> 0x14U));
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs_rs2 = 
        ((0U != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2))
          ? vlSelfRef.tb_top__DOT__cpu__DOT__cpuregs
         [vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2]
          : 0U);
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs2 = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                     >> 0x15U))))) 
               & (~ (IData)((0U != (0x1fffU & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                               >> 7U))))));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstrh))));
    vlSelfRef.tb_top__DOT__cpu__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_auipc) 
              | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal)));
    vlSelfRef.tb_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_add) 
                          | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sub)))))));
    vlSelfRef.tb_top__DOT__cpu__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slti) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_blt) 
              | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slt)));
    vlSelfRef.tb_top__DOT__cpu__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bltu) 
              | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltu)));
    vlSelfRef.tb_top__DOT__cpu__DOT__is_compare = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                   | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slti) 
                                                      | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slt) 
                                                         | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltiu) 
                                                            | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_beq 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_bne 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x1000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_blt 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x4000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_bge 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x5000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_bltu 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x6000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x7000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_lb = 
            ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
             & (0U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_lh = 
            ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
             & (0x1000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_lw = 
            ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
             & (0x2000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_lbu 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x4000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_lhu 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x5000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sb = 
            ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_sb_sh_sw) 
             & (0U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sh = 
            ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_sb_sh_sw) 
             & (0x1000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sw = 
            ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_sb_sh_sw) 
             & (0x2000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_addi 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_slti 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x2000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x3000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_xori 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x4000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_ori 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x6000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_andi 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x7000U == (0x7000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_slli 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x1000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_srli 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x5000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))))));
        vlSelfRef.tb_top__DOT__cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSelfRef.tb_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__is_compare = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal)
                ? vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui) 
                    | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                               >> 0xcU), 0xcU)
                    : (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_add 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sub 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sll 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x1000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_slt 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x2000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltu 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x3000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_xor 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x4000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_srl 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x5000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_or = 
            ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
             & (0x6000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_and 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & (0x7000U == (0xfe007000U & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q)));
        vlSelfRef.tb_top__DOT__cpu__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q))))));
    }
    if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_done))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_retirq = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.tb_top__DOT__cpu__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.tb_top__DOT__cpu__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffffU & vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
                                                  >> 0xbU)))));
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
                                               >> 0xbU)))));
        vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched));
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr 
            = (IData)((0x67U == (0x707fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched)));
        vlSelfRef.tb_top__DOT__cpu__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_fence = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__irq_active = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__pcpi_timeout = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__is_compare = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_beq = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_bne = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_blt = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_bge = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_bltu = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_bgeu = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_addi = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_slti = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltiu = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_xori = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_ori = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_andi = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_add = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sub = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sll = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_slt = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltu = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_xor = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_srl = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_or = 0U;
        vlSelfRef.tb_top__DOT__cpu__DOT__instr_and = 0U;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_imm = vlSelfRef.tb_top__DOT__cpu__DOT__q_insn_imm;
    vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger 
        = __Vdly__tb_top__DOT__cpu__DOT__decoder_pseudo_trigger;
    vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger 
        = __Vdly__tb_top__DOT__cpu__DOT__decoder_trigger;
    vlSelfRef.tb_top__DOT__cpu__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cpu_state)) 
           & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_trigger));
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_shr = (IData)(
                                                       (0x1ffffffffULL 
                                                        & VL_SHIFTRS_QQI(33,33,5, 
                                                                         (((QData)((IData)(
                                                                                (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra) 
                                                                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai)) 
                                                                                & (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1))), 
                                                                         (0x1fU 
                                                                          & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2))));
    vlSelfRef.tb_top__DOT__cpu__DOT__instr_trap = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui) 
                                                       | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_auipc) 
                                                          | (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr) 
                                                                 | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_beq) 
                                                                    | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bne) 
                                                                       | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_blt) 
                                                                          | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bge) 
                                                                             | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bltu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_bgeu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lb) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lh) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lw) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lbu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_lhu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sb) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sh) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sw) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_addi) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slti) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltu)))))))))))))))))))))))))))))) 
                                                             | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_xor) 
                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_srl) 
                                                                   | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra) 
                                                                      | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_or) 
                                                                         | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_and) 
                                                                            | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycle) 
                                                                               | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycleh) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstr) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_timer) 
                                                                                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_waitirq)))))))))))))))))))));
    vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lui) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_auipc) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_jal) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_jalr) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_beq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bne) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_blt) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bge) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bltu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bgeu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lb) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lh) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lw) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lbu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_lhu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sb) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sh) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sw) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_addi) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_slti) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltiu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_xori) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_ori) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_andi) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_slli) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_srli) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_srai) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_add) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sub) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_add_sub 
            = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
               - vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x737562ULL;
    } else {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_add_sub 
            = (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
               + vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sll) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_slt) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sltu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_xor) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_srl) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_sra) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_or) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_and) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycle) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdcycleh) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstr) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_rdinstrh) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_fence) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_getq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_setq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_retirq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_maskirq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_waitirq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_timer) {
        vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 = 0U;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_beq) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.tb_top__DOT__cpu__DOT__alu_eq;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bne) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__alu_eq)));
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bge) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__alu_lts)));
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__instr_bgeu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__alu_ltu)));
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_slti_blt_slt) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.tb_top__DOT__cpu__DOT__alu_lts;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0 
            = vlSelfRef.tb_top__DOT__cpu__DOT__alu_ltu;
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = 0U;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = vlSelfRef.tb_top__DOT__cpu__DOT__alu_add_sub;
    } else if (vlSelfRef.tb_top__DOT__cpu__DOT__is_compare) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = vlSelfRef.tb_top__DOT__cpu__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_xori) 
                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_xor))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = 
            (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
             ^ vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_ori) 
                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_or))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = 
            (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
             | vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_andi) 
                | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__instr_and))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__alu_out = 
            (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1 
             & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2);
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_instr 
        = vlSelfRef.tb_top__DOT__cpu__DOT__q_ascii_instr;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__dbg_next) {
        vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs1 
            = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger_q)
                ? (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rs1)
                : (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs1));
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer) {
        vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode 
            = vlSelfRef.tb_top__DOT__mem_rdata;
    }
    if (vlSelfRef.tb_top__DOT__cpu__DOT__dbg_next) {
        if (vlSelfRef.tb_top__DOT__cpu__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_opcode 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_opcode;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rd;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_rs2;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_insn_imm;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelfRef.tb_top__DOT__cpu__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode))
                    ? vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode
                    : (0xffffU & vlSelfRef.tb_top__DOT__cpu__DOT__next_insn_opcode));
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rd 
                = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rd;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_rs2 
                = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_rs2;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_insn_imm 
                = vlSelfRef.tb_top__DOT__cpu__DOT__decoded_imm;
            vlSelfRef.tb_top__DOT__cpu__DOT__dbg_ascii_instr 
                = vlSelfRef.tb_top__DOT__cpu__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst = __Vdly__tb_top__DOT__cpu__DOT__mem_do_rinst;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_addr = 
        (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch) 
          | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst))
          ? (((vlSelfRef.tb_top__DOT__cpu__DOT__next_pc 
               >> 2U) + (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword_xfer)) 
             << 2U) : (0xfffffffcU & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1));
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_read = 
        ((IData)(vlSelfRef.resetn) & ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_use_prefetched_high_word)) 
                                      & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state)))) 
                                         & ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
                                            | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch) 
                                               | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata))))));
    tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_wdata)));
    vlSelfRef.tb_top__DOT__out_valid = 0U;
    __Vdly__tb_top__DOT__mem_ready = 0U;
    if (vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q 
            = vlSelfRef.tb_top__DOT__mem_rdata;
    }
    if (vlSelfRef.resetn) {
        if (((IData)(vlSelfRef.tb_top__DOT__mem_valid) 
             & (~ (IData)(vlSelfRef.tb_top__DOT__mem_ready)))) {
            __Vdly__tb_top__DOT__mem_ready = 1U;
            if ((0x20000U > vlSelfRef.tb_top__DOT__mem_addr)) {
                vlSelfRef.tb_top__DOT__mem_rdata = 
                    vlSelfRef.tb_top__DOT__memory[(0x7fffU 
                                                   & (vlSelfRef.tb_top__DOT__mem_addr 
                                                      >> 2U))];
                if ((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wstrb))) {
                    __VdlyVal__tb_top__DOT__memory__v0 
                        = (0xffU & vlSelfRef.tb_top__DOT__mem_wdata);
                    __VdlyDim0__tb_top__DOT__memory__v0 
                        = (0x7fffU & (vlSelfRef.tb_top__DOT__mem_addr 
                                      >> 2U));
                    __VdlySet__tb_top__DOT__memory__v0 = 1U;
                }
                if ((2U & (IData)(vlSelfRef.tb_top__DOT__mem_wstrb))) {
                    __VdlyVal__tb_top__DOT__memory__v1 
                        = (0xffU & (vlSelfRef.tb_top__DOT__mem_wdata 
                                    >> 8U));
                    __VdlyDim0__tb_top__DOT__memory__v1 
                        = (0x7fffU & (vlSelfRef.tb_top__DOT__mem_addr 
                                      >> 2U));
                    __VdlySet__tb_top__DOT__memory__v1 = 1U;
                }
                if ((4U & (IData)(vlSelfRef.tb_top__DOT__mem_wstrb))) {
                    __VdlyVal__tb_top__DOT__memory__v2 
                        = (0xffU & (vlSelfRef.tb_top__DOT__mem_wdata 
                                    >> 0x10U));
                    __VdlyDim0__tb_top__DOT__memory__v2 
                        = (0x7fffU & (vlSelfRef.tb_top__DOT__mem_addr 
                                      >> 2U));
                    __VdlySet__tb_top__DOT__memory__v2 = 1U;
                }
                if ((8U & (IData)(vlSelfRef.tb_top__DOT__mem_wstrb))) {
                    __VdlyVal__tb_top__DOT__memory__v3 
                        = (vlSelfRef.tb_top__DOT__mem_wdata 
                           >> 0x18U);
                    __VdlyDim0__tb_top__DOT__memory__v3 
                        = (0x7fffU & (vlSelfRef.tb_top__DOT__mem_addr 
                                      >> 2U));
                    __VdlySet__tb_top__DOT__memory__v3 = 1U;
                }
            } else if ((0x10000000U == vlSelfRef.tb_top__DOT__mem_addr)) {
                vlSelfRef.tb_top__DOT__mem_rdata = 0U;
                if ((0U != (IData)(vlSelfRef.tb_top__DOT__mem_wstrb))) {
                    vlSelfRef.tb_top__DOT__out_char 
                        = (0xffU & vlSelfRef.tb_top__DOT__mem_wdata);
                    vlSelfRef.tb_top__DOT__out_valid = 1U;
                }
            } else {
                vlSelfRef.tb_top__DOT__mem_rdata = 0U;
            }
        }
    } else {
        __Vdly__tb_top__DOT__mem_ready = 0U;
        vlSelfRef.tb_top__DOT__out_valid = 0U;
    }
    if ((0U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wdata 
            = vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2;
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb = 0xfU;
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word 
            = vlSelfRef.tb_top__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2));
        if ((2U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)) {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)) {
                vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word 
                    = (vlSelfRef.tb_top__DOT__mem_rdata 
                       >> 0x10U);
            }
        } else {
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb = 3U;
            vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word 
                = (0xffffU & vlSelfRef.tb_top__DOT__mem_rdata);
        }
    } else if ((2U == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_wordsize))) {
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wdata 
            = ((vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op2))));
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)));
        vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)
                ? ((1U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)
                    ? (vlSelfRef.tb_top__DOT__mem_rdata 
                       >> 0x18U) : (0xffU & (vlSelfRef.tb_top__DOT__mem_rdata 
                                             >> 0x10U)))
                : ((1U & vlSelfRef.tb_top__DOT__cpu__DOT__reg_op1)
                    ? (0xffU & (vlSelfRef.tb_top__DOT__mem_rdata 
                                >> 8U)) : (0xffU & vlSelfRef.tb_top__DOT__mem_rdata)));
    }
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_busy = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_prefetch) 
                                                 | (IData)(tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0));
    vlSelfRef.tb_top__DOT__mem_valid = vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid;
    vlSelfRef.tb_top__DOT__mem_addr = vlSelfRef.tb_top__DOT__cpu__DOT__mem_addr;
    vlSelfRef.tb_top__DOT__mem_wstrb = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wstrb;
    vlSelfRef.tb_top__DOT__mem_wdata = vlSelfRef.tb_top__DOT__cpu__DOT__mem_wdata;
    if (__VdlySet__tb_top__DOT__memory__v0) {
        vlSelfRef.tb_top__DOT__memory[__VdlyDim0__tb_top__DOT__memory__v0] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__memory
                [__VdlyDim0__tb_top__DOT__memory__v0]) 
               | (IData)(__VdlyVal__tb_top__DOT__memory__v0));
    }
    if (__VdlySet__tb_top__DOT__memory__v1) {
        vlSelfRef.tb_top__DOT__memory[__VdlyDim0__tb_top__DOT__memory__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__memory
                [__VdlyDim0__tb_top__DOT__memory__v1]) 
               | ((IData)(__VdlyVal__tb_top__DOT__memory__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_top__DOT__memory__v2) {
        vlSelfRef.tb_top__DOT__memory[__VdlyDim0__tb_top__DOT__memory__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__memory
                [__VdlyDim0__tb_top__DOT__memory__v2]) 
               | ((IData)(__VdlyVal__tb_top__DOT__memory__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_top__DOT__memory__v3) {
        vlSelfRef.tb_top__DOT__memory[__VdlyDim0__tb_top__DOT__memory__v3] 
            = ((0xffffffU & vlSelfRef.tb_top__DOT__memory
                [__VdlyDim0__tb_top__DOT__memory__v3]) 
               | ((IData)(__VdlyVal__tb_top__DOT__memory__v3) 
                  << 0x18U));
    }
    vlSelfRef.tb_top__DOT__mem_ready = __Vdly__tb_top__DOT__mem_ready;
    vlSelfRef.out_valid = vlSelfRef.tb_top__DOT__out_valid;
    vlSelfRef.out_char = vlSelfRef.tb_top__DOT__out_char;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata = vlSelfRef.tb_top__DOT__mem_rdata;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_rdata 
        = vlSelfRef.tb_top__DOT__mem_rdata;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_ready = vlSelfRef.tb_top__DOT__mem_ready;
    vlSelfRef.tb_top__DOT__cpu__DOT__dbg_mem_ready 
        = vlSelfRef.tb_top__DOT__mem_ready;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer = (((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_valid) 
                                                  & (IData)(vlSelfRef.tb_top__DOT__mem_ready)) 
                                                 | ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst) 
                                                    & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_use_prefetched_high_word)));
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched 
        = ((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer)
            ? vlSelfRef.tb_top__DOT__mem_rdata : vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_q);
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched_noshuffle 
        = vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched;
    vlSelfRef.tb_top__DOT__cpu__DOT__mem_done = ((IData)(vlSelfRef.resetn) 
                                                 & ((((IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer) 
                                                      & ((0U 
                                                          != (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state)) 
                                                         & (IData)(tb_top__DOT__cpu__DOT____VdfgRegularize_h44c39374_0_0))) 
                                                     | ((3U 
                                                         == (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_state)) 
                                                        & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_do_rinst))) 
                                                    & ((~ (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_la_firstword)) 
                                                       | ((~ (IData)(
                                                                     (3U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelfRef.tb_top__DOT__cpu__DOT__mem_rdata_latched)))) 
                                                          & (IData)(vlSelfRef.tb_top__DOT__cpu__DOT__mem_xfer)))));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/jairussolomon/Desktop/Clustara/rtl/tb_top.v", 15, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/jairussolomon/Desktop/Clustara/rtl/tb_top.v", 15, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/jairussolomon/Desktop/Clustara/rtl/tb_top.v", 15, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG

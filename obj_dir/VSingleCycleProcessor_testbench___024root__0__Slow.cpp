// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleProcessor_testbench.h for the primary calling header

#include "VSingleCycleProcessor_testbench__pch.h"

void VSingleCycleProcessor_testbench___024root___timing_ready(VSingleCycleProcessor_testbench___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_static(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_static\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK;
    VSingleCycleProcessor_testbench___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_initial__TOP(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("SingleCycleTest.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[0U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[1U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[2U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[3U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[4U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[5U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[6U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[7U] = 1U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[8U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[9U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[10U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[11U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[12U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[13U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[14U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[15U] = 0x0aU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[16U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[17U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[18U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[19U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[20U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[21U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[22U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[23U] = 5U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[24U] = 0x0fU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[25U] = 0xfbU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[26U] = 0xeaU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[27U] = 0x7dU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[28U] = 0xeaU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[29U] = 0xdbU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[30U] = 0xeeU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[31U] = 0xffU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[32U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[33U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[34U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[35U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[36U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[37U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[38U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[39U] = 0U;
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_final(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_final\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSingleCycleProcessor_testbench___024root___eval_phase__stl(VSingleCycleProcessor_testbench___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_settle(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_settle\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VSingleCycleProcessor_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/SingleCycleProcessor_testbench.sv", 20, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VSingleCycleProcessor_testbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool VSingleCycleProcessor_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VSingleCycleProcessor_testbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VSingleCycleProcessor_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<56>/*1791:0*/ VSingleCycleProcessor_testbench__ConstPool__CONST_hd7154f67_0;
extern const VlUnpacked<IData/*31:0*/, 14> VSingleCycleProcessor_testbench__ConstPool__TABLE_h429d31e9_0;
extern const VlWide<2048>/*65535:0*/ VSingleCycleProcessor_testbench__ConstPool__CONST_h082bc731_0;

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___stl_sequent__TOP__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___stl_sequent__TOP__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(((0x00ffU == (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__watchdog))))) {
        VL_WRITEF_NX("Watchdog timer expired\n",0);
        VL_FINISH_MT("tb/SingleCycleProcessor_testbench.sv", 180, "");
    }
    __Vtemp_1 = VL_MATCHMASKED_Q(64, vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc, VSingleCycleProcessor_testbench__ConstPool__CONST_hd7154f67_0);
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
        = VSingleCycleProcessor_testbench__ConstPool__TABLE_h429d31e9_0
        [__Vtemp_1];
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA 
        = (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
           [(0x0000001fU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                            >> 5U))] & (- (QData)((IData)(
                                                          (0x1fU 
                                                           != 
                                                           (0x0000001fU 
                                                            & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                               >> 5U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x00003fffU 
                                                & VSingleCycleProcessor_testbench__ConstPool__CONST_h082bc731_0
                                                [(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                  >> 0x00000015U)]);
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__rn 
        = (0x0000001fU & ((1U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                           ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction
                           : (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                              >> 0x00000010U)));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm 
        = ((0U == (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                         >> 8U))) ? (QData)((IData)(
                                                    (0x00000fffU 
                                                     & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                        >> 0x0000000aU))))
            : ((1U == (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                             >> 8U))) ? (((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                                 >> 0x00000014U))))) 
                                          << 9U) | (QData)((IData)(
                                                                   (0x000001ffU 
                                                                    & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                                       >> 0x0000000cU)))))
                : ((2U == (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 8U))) ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                                     >> 0x00000019U))))) 
                                              << 0x0000001aU) 
                                             | (QData)((IData)(
                                                               (0x03ffffffU 
                                                                & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction))))
                    : (((- (QData)((IData)((1U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                  >> 0x00000017U))))) 
                        << 0x00000013U) | (QData)((IData)(
                                                          (0x0007ffffU 
                                                           & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                              >> 5U))))))));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
        = (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
           [vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__rn] 
           & (- (QData)((IData)((0x1fU != (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__rn))))));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b 
        = ((0x00000040U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
            ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm
            : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB);
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout 
        = (((0x00001000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
             ? (((0x00000400U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                  ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b
                  : (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA 
                     - vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b)) 
                & (- (QData)((IData)((1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                            >> 0x0000000bU))))))
             : ((0x00000800U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                 ? ((- (QData)((IData)((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                 >> 0x0000000aU)))))) 
                    & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b 
                       + vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA))
                 : ((0x00000400U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                     ? (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b 
                        | vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA)
                     : (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b 
                        & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA)))) 
           & (- (QData)((IData)((1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                          >> 0x0000000dU)))))));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__nextpc 
        = ((1U & (((0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout) 
                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                      >> 2U)) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                 >> 1U))) ? (vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc 
                                             + (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm 
                                                << 2U))
            : (4ULL + vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc));
}

VL_ATTR_COLD bool VSingleCycleProcessor_testbench___024root___eval_phase__stl(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_phase__stl\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleProcessor_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VSingleCycleProcessor_testbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                VSingleCycleProcessor_testbench___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool VSingleCycleProcessor_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VSingleCycleProcessor_testbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge SingleCycleProcessor_testbench.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge SingleCycleProcessor_testbench.CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___ctor_var_reset(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___ctor_var_reset\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->SingleCycleProcessor_testbench__DOT__resetl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6747380284912699907ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12245290335480439017ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__startpc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13121252653471664292ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__currentpc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6179568948364316322ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__passed = 0;
    vlSelf->SingleCycleProcessor_testbench__DOT__num_tests = 0;
    vlSelf->SingleCycleProcessor_testbench__DOT__watchdog = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5073417492880628659ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__nextpc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17195562202417874979ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9379790455353590453ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__rn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2223643160873275754ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11129832512094592686ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15069134174659460821ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__aluout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4309022560605503144ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__extimm = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 761275861738368158ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14633902962773049506ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 110131042675900200ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15736083273007455080ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__Vintraval_h40f7a48f__0 = 0;
    vlSelf->__Vintraidx_hd0738fc1__0 = 0;
    vlSelf->__Vintraval_h8b8501e5__0 = 0;
    vlSelf->__Vintraidx_hbfdadc99__0 = 0;
    vlSelf->__Vintraval_h2969d9f9__0 = 0;
    vlSelf->__Vintraidx_hbfead287__0 = 0;
    vlSelf->__Vintraval_h1689638a__0 = 0;
    vlSelf->__Vintraidx_hbff3c351__0 = 0;
    vlSelf->__Vintraval_h4e00ab7c__0 = 0;
    vlSelf->__Vintraidx_hbfeaaf84__0 = 0;
    vlSelf->__Vintraval_h74b7d881__0 = 0;
    vlSelf->__Vintraidx_hcd1ca7dd__0 = 0;
    vlSelf->__Vintraval_h1ec82ccd__0 = 0;
    vlSelf->__Vintraidx_hbf52f623__0 = 0;
    vlSelf->__Vintraval_h23ce0746__0 = 0;
    vlSelf->__Vintraidx_hbfe7b308__0 = 0;
    vlSelf->__Vintraval_hf560da96__0 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__currentpc__v0 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__currentpc__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

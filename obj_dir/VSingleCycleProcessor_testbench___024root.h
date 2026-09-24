// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleProcessor_testbench.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLEPROCESSOR_TESTBENCH___024ROOT_H_
#define VERILATED_VSINGLECYCLEPROCESSOR_TESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VSingleCycleProcessor_testbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSingleCycleProcessor_testbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SingleCycleProcessor_testbench__DOT__resetl;
        CData/*0:0*/ SingleCycleProcessor_testbench__DOT__CLK;
        CData/*4:0*/ SingleCycleProcessor_testbench__DOT__uut__DOT__rn;
        CData/*7:0*/ __Vintraval_h8b8501e5__0;
        CData/*7:0*/ __Vintraval_h2969d9f9__0;
        CData/*7:0*/ __Vintraval_h1689638a__0;
        CData/*7:0*/ __Vintraval_h4e00ab7c__0;
        CData/*7:0*/ __Vintraval_h74b7d881__0;
        CData/*7:0*/ __Vintraval_h1ec82ccd__0;
        CData/*7:0*/ __Vintraval_h23ce0746__0;
        CData/*7:0*/ __Vintraval_hf560da96__0;
        CData/*7:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0;
        CData/*7:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1;
        CData/*7:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2;
        CData/*7:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3;
        CData/*7:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4;
        CData/*7:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5;
        CData/*7:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6;
        CData/*7:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7;
        CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__currentpc__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ SingleCycleProcessor_testbench__DOT__watchdog;
        SData/*13:0*/ __VdfgRegularize_hebeb780c_0_0;
        SData/*9:0*/ __Vintraidx_hd0738fc1__0;
        SData/*9:0*/ __Vintraidx_hbfdadc99__0;
        SData/*9:0*/ __Vintraidx_hbfead287__0;
        SData/*9:0*/ __Vintraidx_hbff3c351__0;
        SData/*9:0*/ __Vintraidx_hbfeaaf84__0;
        SData/*9:0*/ __Vintraidx_hcd1ca7dd__0;
        SData/*9:0*/ __Vintraidx_hbf52f623__0;
        SData/*9:0*/ __Vintraidx_hbfe7b308__0;
        SData/*9:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0;
        SData/*9:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1;
        SData/*9:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2;
        SData/*9:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3;
        SData/*9:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4;
        SData/*9:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5;
        SData/*9:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6;
        SData/*9:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7;
        IData/*31:0*/ SingleCycleProcessor_testbench__DOT__passed;
        IData/*31:0*/ SingleCycleProcessor_testbench__DOT__num_tests;
        IData/*31:0*/ SingleCycleProcessor_testbench__DOT__uut__DOT__instruction;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*63:0*/ SingleCycleProcessor_testbench__DOT__startpc;
        QData/*63:0*/ SingleCycleProcessor_testbench__DOT__currentpc;
        QData/*63:0*/ SingleCycleProcessor_testbench__DOT__uut__DOT__nextpc;
        QData/*63:0*/ SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA;
        QData/*63:0*/ SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB;
        QData/*63:0*/ SingleCycleProcessor_testbench__DOT__uut__DOT__aluout;
    };
    struct {
        QData/*63:0*/ SingleCycleProcessor_testbench__DOT__uut__DOT__extimm;
        QData/*63:0*/ SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b;
        QData/*63:0*/ __Vintraval_h40f7a48f__0;
        QData/*63:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__currentpc__v0;
        VlUnpacked<CData/*7:0*/, 1024> SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank;
        VlUnpacked<QData/*63:0*/, 32> SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    std::string __Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__testName;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc63e34e0__0;
    VlTriggerScheduler __VtrigSched_hc63e3491__0;

    // INTERNAL VARIABLES
    VSingleCycleProcessor_testbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VSingleCycleProcessor_testbench___024root(VSingleCycleProcessor_testbench__Syms* symsp, const char* namep);
    ~VSingleCycleProcessor_testbench___024root();
    VL_UNCOPYABLE(VSingleCycleProcessor_testbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

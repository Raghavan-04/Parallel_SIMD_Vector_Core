// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_accelerator.h for the primary calling header

#ifndef VERILATED_VTOP_ACCELERATOR___024ROOT_H_
#define VERILATED_VTOP_ACCELERATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_accelerator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_accelerator___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(acc_clr,0,0);
        VL_IN8(pipeline_en,0,0);
        VL_IN8(v_in,0,0);
        VL_OUT8(r_ready,0,0);
        VL_OUT8(v_out,0,0);
        CData/*0:0*/ top_accelerator__DOT__mac_exec_en;
        CData/*2:0*/ top_accelerator__DOT__valid_pipe;
        CData/*0:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty;
        CData/*7:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__dout;
        CData/*0:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__full;
        CData/*0:0*/ top_accelerator__DOT____Vcellinp__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__wr_en;
        CData/*7:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__dout;
        CData/*0:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty;
        CData/*7:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__dout;
        CData/*0:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__full;
        CData/*7:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__dout;
        CData/*0:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty;
        CData/*7:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__dout;
        CData/*0:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__full;
        CData/*7:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__dout;
        CData/*0:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty;
        CData/*7:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__dout;
        CData/*0:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__full;
        CData/*7:0*/ top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__dout;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__wr_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__rd_ptr;
        CData/*0:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__full;
        CData/*0:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__empty;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__wr_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__rd_ptr;
        CData/*0:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__full;
        CData/*0:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__empty;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__wr_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__rd_ptr;
        CData/*0:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__full;
        CData/*0:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__empty;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__wr_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__rd_ptr;
        CData/*0:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__full;
        CData/*0:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__empty;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr;
        CData/*4:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        SData/*15:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__mult_reg;
        SData/*15:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__mult_reg;
        SData/*15:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__mult_reg;
        SData/*15:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__mult_reg;
        VL_IN(vec_din_a,31,0);
        VL_IN(vec_din_b,31,0);
        VL_OUTW(vec_acc_out,127,0,4);
        IData/*31:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg;
        IData/*31:0*/ top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc;
        IData/*31:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg;
    };
    struct {
        IData/*31:0*/ top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc;
        IData/*31:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg;
        IData/*31:0*/ top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc;
        IData/*31:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg;
        IData/*31:0*/ top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 4> top_accelerator__DOT__fifo_a_out;
        VlUnpacked<CData/*7:0*/, 4> top_accelerator__DOT__fifo_b_out;
        VlUnpacked<IData/*31:0*/, 4> top_accelerator__DOT__lane_out;
        VlUnpacked<CData/*7:0*/, 16> top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16> top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16> top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16> top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16> top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16> top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16> top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16> top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop_accelerator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_accelerator___024root(Vtop_accelerator__Syms* symsp, const char* namep);
    ~Vtop_accelerator___024root();
    VL_UNCOPYABLE(Vtop_accelerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

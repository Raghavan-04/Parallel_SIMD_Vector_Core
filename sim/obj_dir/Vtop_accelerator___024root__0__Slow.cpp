// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_accelerator.h for the primary calling header

#include "Vtop_accelerator__pch.h"

VL_ATTR_COLD void Vtop_accelerator___024root___eval_static(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___eval_static\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vtop_accelerator___024root___eval_initial(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___eval_initial\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop_accelerator___024root___eval_final(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___eval_final\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_accelerator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_accelerator___024root___eval_phase__stl(Vtop_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtop_accelerator___024root___eval_settle(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___eval_settle\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_accelerator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/top_accelerator.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop_accelerator___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop_accelerator___024root___eval_triggers__stl(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___eval_triggers__stl\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_accelerator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop_accelerator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_accelerator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_accelerator___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_accelerator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop_accelerator___024root___stl_sequent__TOP__0(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___stl_sequent__TOP__0\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.v_out = (1U & ((IData)(vlSelfRef.top_accelerator__DOT__valid_pipe) 
                             >> 1U));
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc 
        = (vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg 
           + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__mult_reg)));
    if (((VL_LTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg) 
          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__mult_reg)))) 
         & VL_GTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc))) {
        vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc = 0x7fffffffU;
    } else if (((VL_GTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg) 
                 & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__mult_reg)))) 
                & VL_LTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc))) {
        vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc = 0x80000000U;
    }
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc 
        = (vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg 
           + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__mult_reg)));
    if (((VL_LTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg) 
          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__mult_reg)))) 
         & VL_GTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc))) {
        vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc = 0x7fffffffU;
    } else if (((VL_GTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg) 
                 & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__mult_reg)))) 
                & VL_LTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc))) {
        vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc = 0x80000000U;
    }
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc 
        = (vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg 
           + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__mult_reg)));
    if (((VL_LTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg) 
          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__mult_reg)))) 
         & VL_GTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc))) {
        vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc = 0x7fffffffU;
    } else if (((VL_GTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg) 
                 & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__mult_reg)))) 
                & VL_LTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc))) {
        vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc = 0x80000000U;
    }
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc 
        = (vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg 
           + VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__mult_reg)));
    if (((VL_LTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg) 
          & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__mult_reg)))) 
         & VL_GTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc))) {
        vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc = 0x7fffffffU;
    } else if (((VL_GTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg) 
                 & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__mult_reg)))) 
                & VL_LTS_III(32, 0U, vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc))) {
        vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc = 0x80000000U;
    }
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__empty 
        = ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr));
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__full 
        = (((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr))));
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__empty 
        = ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr));
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__full 
        = (((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr))));
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__empty 
        = ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr));
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__full 
        = (((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr))));
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__empty 
        = ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr));
    vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__full 
        = (((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr))));
    vlSelfRef.vec_acc_out[0U] = vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg;
    vlSelfRef.vec_acc_out[1U] = vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg;
    vlSelfRef.vec_acc_out[2U] = (IData)((((QData)((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg))));
    vlSelfRef.vec_acc_out[3U] = (IData)(((((QData)((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg))) 
                                         >> 0x00000020U));
    vlSelfRef.top_accelerator__DOT__lane_out[0U] = vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg;
    vlSelfRef.top_accelerator__DOT__lane_out[1U] = vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg;
    vlSelfRef.top_accelerator__DOT__lane_out[2U] = vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg;
    vlSelfRef.top_accelerator__DOT__lane_out[3U] = vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg;
    vlSelfRef.top_accelerator__DOT__fifo_a_out[0U] 
        = vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__dout;
    vlSelfRef.top_accelerator__DOT__fifo_a_out[1U] 
        = vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__dout;
    vlSelfRef.top_accelerator__DOT__fifo_a_out[2U] 
        = vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__dout;
    vlSelfRef.top_accelerator__DOT__fifo_a_out[3U] 
        = vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__dout;
    vlSelfRef.top_accelerator__DOT__fifo_b_out[0U] 
        = vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__dout;
    vlSelfRef.top_accelerator__DOT__fifo_b_out[1U] 
        = vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__dout;
    vlSelfRef.top_accelerator__DOT__fifo_b_out[2U] 
        = vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__dout;
    vlSelfRef.top_accelerator__DOT__fifo_b_out[3U] 
        = vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__dout;
    vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty 
        = ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__wr_ptr));
    vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty 
        = ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__wr_ptr));
    vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty 
        = ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__wr_ptr));
    vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty 
        = ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__rd_ptr) 
           == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__wr_ptr));
    vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__full 
        = (((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__rd_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__wr_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__rd_ptr))));
    vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__full 
        = (((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__rd_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__wr_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__rd_ptr))));
    vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__full 
        = (((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__rd_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__wr_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__rd_ptr))));
    vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__full 
        = (((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__wr_ptr) 
                   >> 4U)) != (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__rd_ptr) 
                                     >> 4U))) & ((0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__wr_ptr)) 
                                                 == 
                                                 (0x0000000fU 
                                                  & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__rd_ptr))));
    vlSelfRef.top_accelerator__DOT__mac_exec_en = (
                                                   (~ 
                                                    ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty) 
                                                     | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty) 
                                                        | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty) 
                                                           | (IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty))))) 
                                                   & (IData)(vlSelfRef.pipeline_en));
    vlSelfRef.r_ready = (1U & (~ ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__full) 
                                  | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__full) 
                                     | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__full) 
                                        | (IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__full))))));
    vlSelfRef.top_accelerator__DOT____Vcellinp__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__wr_en 
        = ((IData)(vlSelfRef.r_ready) & (IData)(vlSelfRef.v_in));
}

VL_ATTR_COLD void Vtop_accelerator___024root____Vm_traceActivitySetAll(Vtop_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtop_accelerator___024root___eval_stl(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___eval_stl\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop_accelerator___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_accelerator___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_accelerator___024root___eval_phase__stl(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___eval_phase__stl\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_accelerator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop_accelerator___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_accelerator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_accelerator___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_accelerator___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_accelerator___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop_accelerator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_accelerator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_accelerator___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_accelerator___024root____Vm_traceActivitySetAll(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root____Vm_traceActivitySetAll\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtop_accelerator___024root___ctor_var_reset(Vtop_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root___ctor_var_reset\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->acc_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1614537328018866142ull);
    vlSelf->pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10584906822872696314ull);
    vlSelf->v_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15535939310143791139ull);
    vlSelf->r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812217113783743825ull);
    vlSelf->vec_din_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14920539009839615796ull);
    vlSelf->vec_din_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14096060847488551077ull);
    vlSelf->v_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18169291617073991825ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->vec_acc_out, __VscopeHash, 2262685606935371094ull);
    vlSelf->top_accelerator__DOT__mac_exec_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10499687875082377420ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_accelerator__DOT__fifo_a_out[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10440203722563088077ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_accelerator__DOT__fifo_b_out[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8425622211419089525ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_accelerator__DOT__lane_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15881884945214439760ull);
    }
    vlSelf->top_accelerator__DOT__valid_pipe = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12992799514090391301ull);
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__dout = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__full = 0;
    vlSelf->top_accelerator__DOT____Vcellinp__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__wr_en = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__dout = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__dout = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__full = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__dout = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__dout = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__full = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__dout = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__dout = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__full = 0;
    vlSelf->top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__dout = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4549820289472176980ull);
    }
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1282296336100972495ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18416097003263629112ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9039590293186539493ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18414620839544125163ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18091042468756127847ull);
    }
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8585103406126781232ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12225037925820657045ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__mult_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14971285620616043217ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 33379562879765438ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18267557920298209160ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 294624266792025526ull);
    }
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6469701782092142528ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 506002334829763142ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15311559727088947966ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8202978361489574159ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11575477294158440623ull);
    }
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10699323075096666144ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1612084229281106849ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__mult_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8739830463149158269ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2025365526207366648ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5836295512781619157ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4978127224520101133ull);
    }
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4935071343479494913ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11114303212899380636ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8545820233695319912ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13912800789820832833ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11574226825776719030ull);
    }
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11031186031432046165ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4528839069102950544ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__mult_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11856951083075225626ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4636922930310761220ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14446717847884980205ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6401284615205801405ull);
    }
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11667505854291949409ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16620264027886260390ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1899771755184278537ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11514791708506113267ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15621891493758496175ull);
    }
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4141655301250390130ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15586260014597393532ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__mult_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1950951896046239824ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13247436159817073752ull);
    vlSelf->top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7504138885973268765ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

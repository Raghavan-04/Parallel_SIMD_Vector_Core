// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop_accelerator__Syms.h"


void Vtop_accelerator___024root__trace_chg_0_sub_0(Vtop_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_accelerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_chg_0\n"); );
    // Body
    Vtop_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_accelerator___024root*>(voidSelf);
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop_accelerator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_accelerator___024root__trace_chg_0_sub_0(Vtop_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_chg_0_sub_0\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(((((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty) 
                                  << 3U) | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty) 
                                    << 1U) | (IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty)))),4);
        bufp->chgCData(oldp+1,(((((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__full) 
                                  << 3U) | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__full) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__full) 
                                    << 1U) | (IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__full)))),4);
        bufp->chgBit(oldp+2,((1U & (~ ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty) 
                                       | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty) 
                                          | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty) 
                                             | (IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty))))))));
        bufp->chgCData(oldp+3,(vlSelfRef.top_accelerator__DOT__fifo_a_out[0]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.top_accelerator__DOT__fifo_a_out[1]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.top_accelerator__DOT__fifo_a_out[2]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.top_accelerator__DOT__fifo_a_out[3]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.top_accelerator__DOT__fifo_b_out[0]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.top_accelerator__DOT__fifo_b_out[1]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.top_accelerator__DOT__fifo_b_out[2]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.top_accelerator__DOT__fifo_b_out[3]),8);
        bufp->chgIData(oldp+11,(vlSelfRef.top_accelerator__DOT__lane_out[0]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top_accelerator__DOT__lane_out[1]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top_accelerator__DOT__lane_out[2]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top_accelerator__DOT__lane_out[3]),32);
        bufp->chgCData(oldp+15,(vlSelfRef.top_accelerator__DOT__valid_pipe),3);
        bufp->chgBit(oldp+16,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__full));
        bufp->chgCData(oldp+17,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__dout),8);
        bufp->chgBit(oldp+18,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty));
        bufp->chgCData(oldp+19,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[0]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[1]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[2]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[3]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[4]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[5]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[6]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[7]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[8]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[9]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[10]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[11]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[12]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[13]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[14]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[15]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__wr_ptr),5);
        bufp->chgCData(oldp+36,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__rd_ptr),5);
        bufp->chgBit(oldp+37,((((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                                       >> 4U)) != (1U 
                                                   & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                                      >> 4U))) 
                               & ((0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                  == (0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr))))));
        bufp->chgCData(oldp+38,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__dout),8);
        bufp->chgBit(oldp+39,(((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                               == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr))));
        bufp->chgCData(oldp+40,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[0]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[1]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[2]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[3]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[4]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[5]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[6]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[7]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[8]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[9]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[10]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[11]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[12]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[13]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[14]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[15]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr),5);
        bufp->chgCData(oldp+57,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr),5);
        bufp->chgIData(oldp+58,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg),32);
        bufp->chgSData(oldp+59,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__mult_reg),16);
        bufp->chgIData(oldp+60,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc),32);
        bufp->chgBit(oldp+61,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__full));
        bufp->chgCData(oldp+62,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__dout),8);
        bufp->chgBit(oldp+63,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty));
        bufp->chgCData(oldp+64,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[0]),8);
        bufp->chgCData(oldp+65,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[1]),8);
        bufp->chgCData(oldp+66,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[2]),8);
        bufp->chgCData(oldp+67,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[3]),8);
        bufp->chgCData(oldp+68,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[4]),8);
        bufp->chgCData(oldp+69,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[5]),8);
        bufp->chgCData(oldp+70,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[6]),8);
        bufp->chgCData(oldp+71,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[7]),8);
        bufp->chgCData(oldp+72,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[8]),8);
        bufp->chgCData(oldp+73,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[9]),8);
        bufp->chgCData(oldp+74,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[10]),8);
        bufp->chgCData(oldp+75,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[11]),8);
        bufp->chgCData(oldp+76,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[12]),8);
        bufp->chgCData(oldp+77,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[13]),8);
        bufp->chgCData(oldp+78,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[14]),8);
        bufp->chgCData(oldp+79,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[15]),8);
        bufp->chgCData(oldp+80,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__wr_ptr),5);
        bufp->chgCData(oldp+81,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__rd_ptr),5);
        bufp->chgBit(oldp+82,((((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                                       >> 4U)) != (1U 
                                                   & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                                      >> 4U))) 
                               & ((0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                  == (0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr))))));
        bufp->chgCData(oldp+83,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__dout),8);
        bufp->chgBit(oldp+84,(((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                               == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr))));
        bufp->chgCData(oldp+85,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[0]),8);
        bufp->chgCData(oldp+86,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[1]),8);
        bufp->chgCData(oldp+87,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[2]),8);
        bufp->chgCData(oldp+88,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[3]),8);
        bufp->chgCData(oldp+89,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[4]),8);
        bufp->chgCData(oldp+90,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[5]),8);
        bufp->chgCData(oldp+91,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[6]),8);
        bufp->chgCData(oldp+92,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[7]),8);
        bufp->chgCData(oldp+93,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[8]),8);
        bufp->chgCData(oldp+94,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[9]),8);
        bufp->chgCData(oldp+95,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[10]),8);
        bufp->chgCData(oldp+96,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[11]),8);
        bufp->chgCData(oldp+97,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[12]),8);
        bufp->chgCData(oldp+98,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[13]),8);
        bufp->chgCData(oldp+99,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[14]),8);
        bufp->chgCData(oldp+100,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[15]),8);
        bufp->chgCData(oldp+101,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr),5);
        bufp->chgCData(oldp+102,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr),5);
        bufp->chgIData(oldp+103,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg),32);
        bufp->chgSData(oldp+104,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__mult_reg),16);
        bufp->chgIData(oldp+105,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc),32);
        bufp->chgBit(oldp+106,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__full));
        bufp->chgCData(oldp+107,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__dout),8);
        bufp->chgBit(oldp+108,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty));
        bufp->chgCData(oldp+109,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[0]),8);
        bufp->chgCData(oldp+110,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[1]),8);
        bufp->chgCData(oldp+111,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[2]),8);
        bufp->chgCData(oldp+112,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[3]),8);
        bufp->chgCData(oldp+113,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[4]),8);
        bufp->chgCData(oldp+114,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[5]),8);
        bufp->chgCData(oldp+115,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[6]),8);
        bufp->chgCData(oldp+116,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[7]),8);
        bufp->chgCData(oldp+117,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[8]),8);
        bufp->chgCData(oldp+118,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[9]),8);
        bufp->chgCData(oldp+119,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[10]),8);
        bufp->chgCData(oldp+120,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[11]),8);
        bufp->chgCData(oldp+121,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[12]),8);
        bufp->chgCData(oldp+122,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[13]),8);
        bufp->chgCData(oldp+123,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[14]),8);
        bufp->chgCData(oldp+124,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[15]),8);
        bufp->chgCData(oldp+125,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__wr_ptr),5);
        bufp->chgCData(oldp+126,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__rd_ptr),5);
        bufp->chgBit(oldp+127,((((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                        >> 4U))) & 
                                ((0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                 == (0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr))))));
        bufp->chgCData(oldp+128,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__dout),8);
        bufp->chgBit(oldp+129,(((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr))));
        bufp->chgCData(oldp+130,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[0]),8);
        bufp->chgCData(oldp+131,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[1]),8);
        bufp->chgCData(oldp+132,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[2]),8);
        bufp->chgCData(oldp+133,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[3]),8);
        bufp->chgCData(oldp+134,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[4]),8);
        bufp->chgCData(oldp+135,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[5]),8);
        bufp->chgCData(oldp+136,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[6]),8);
        bufp->chgCData(oldp+137,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[7]),8);
        bufp->chgCData(oldp+138,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[8]),8);
        bufp->chgCData(oldp+139,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[9]),8);
        bufp->chgCData(oldp+140,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[10]),8);
        bufp->chgCData(oldp+141,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[11]),8);
        bufp->chgCData(oldp+142,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[12]),8);
        bufp->chgCData(oldp+143,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[13]),8);
        bufp->chgCData(oldp+144,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[14]),8);
        bufp->chgCData(oldp+145,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[15]),8);
        bufp->chgCData(oldp+146,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr),5);
        bufp->chgCData(oldp+147,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr),5);
        bufp->chgIData(oldp+148,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg),32);
        bufp->chgSData(oldp+149,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__mult_reg),16);
        bufp->chgIData(oldp+150,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc),32);
        bufp->chgBit(oldp+151,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__full));
        bufp->chgCData(oldp+152,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__dout),8);
        bufp->chgBit(oldp+153,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty));
        bufp->chgCData(oldp+154,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[0]),8);
        bufp->chgCData(oldp+155,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[1]),8);
        bufp->chgCData(oldp+156,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[2]),8);
        bufp->chgCData(oldp+157,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[3]),8);
        bufp->chgCData(oldp+158,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[4]),8);
        bufp->chgCData(oldp+159,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[5]),8);
        bufp->chgCData(oldp+160,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[6]),8);
        bufp->chgCData(oldp+161,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[7]),8);
        bufp->chgCData(oldp+162,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[8]),8);
        bufp->chgCData(oldp+163,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[9]),8);
        bufp->chgCData(oldp+164,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[10]),8);
        bufp->chgCData(oldp+165,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[11]),8);
        bufp->chgCData(oldp+166,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[12]),8);
        bufp->chgCData(oldp+167,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[13]),8);
        bufp->chgCData(oldp+168,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[14]),8);
        bufp->chgCData(oldp+169,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[15]),8);
        bufp->chgCData(oldp+170,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__wr_ptr),5);
        bufp->chgCData(oldp+171,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__rd_ptr),5);
        bufp->chgBit(oldp+172,((((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                        >> 4U))) & 
                                ((0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                 == (0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr))))));
        bufp->chgCData(oldp+173,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__dout),8);
        bufp->chgBit(oldp+174,(((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr))));
        bufp->chgCData(oldp+175,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[0]),8);
        bufp->chgCData(oldp+176,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[1]),8);
        bufp->chgCData(oldp+177,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[2]),8);
        bufp->chgCData(oldp+178,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[3]),8);
        bufp->chgCData(oldp+179,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[4]),8);
        bufp->chgCData(oldp+180,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[5]),8);
        bufp->chgCData(oldp+181,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[6]),8);
        bufp->chgCData(oldp+182,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[7]),8);
        bufp->chgCData(oldp+183,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[8]),8);
        bufp->chgCData(oldp+184,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[9]),8);
        bufp->chgCData(oldp+185,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[10]),8);
        bufp->chgCData(oldp+186,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[11]),8);
        bufp->chgCData(oldp+187,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[12]),8);
        bufp->chgCData(oldp+188,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[13]),8);
        bufp->chgCData(oldp+189,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[14]),8);
        bufp->chgCData(oldp+190,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[15]),8);
        bufp->chgCData(oldp+191,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr),5);
        bufp->chgCData(oldp+192,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr),5);
        bufp->chgIData(oldp+193,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg),32);
        bufp->chgSData(oldp+194,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__mult_reg),16);
        bufp->chgIData(oldp+195,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc),32);
    }
    bufp->chgBit(oldp+196,(vlSelfRef.clk));
    bufp->chgBit(oldp+197,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+198,(vlSelfRef.acc_clr));
    bufp->chgBit(oldp+199,(vlSelfRef.pipeline_en));
    bufp->chgBit(oldp+200,(vlSelfRef.v_in));
    bufp->chgBit(oldp+201,(vlSelfRef.r_ready));
    bufp->chgIData(oldp+202,(vlSelfRef.vec_din_a),32);
    bufp->chgIData(oldp+203,(vlSelfRef.vec_din_b),32);
    bufp->chgBit(oldp+204,(vlSelfRef.v_out));
    bufp->chgWData(oldp+205,(vlSelfRef.vec_acc_out),128);
    bufp->chgBit(oldp+209,(vlSelfRef.top_accelerator__DOT__mac_exec_en));
    bufp->chgBit(oldp+210,(vlSelfRef.top_accelerator__DOT____Vcellinp__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__wr_en));
    bufp->chgCData(oldp+211,((0x000000ffU & vlSelfRef.vec_din_a)),8);
    bufp->chgCData(oldp+212,((0x000000ffU & vlSelfRef.vec_din_b)),8);
    bufp->chgCData(oldp+213,((0x000000ffU & (vlSelfRef.vec_din_a 
                                             >> 8U))),8);
    bufp->chgCData(oldp+214,((0x000000ffU & (vlSelfRef.vec_din_b 
                                             >> 8U))),8);
    bufp->chgCData(oldp+215,((0x000000ffU & (vlSelfRef.vec_din_a 
                                             >> 0x00000010U))),8);
    bufp->chgCData(oldp+216,((0x000000ffU & (vlSelfRef.vec_din_b 
                                             >> 0x00000010U))),8);
    bufp->chgCData(oldp+217,((vlSelfRef.vec_din_a >> 0x00000018U)),8);
    bufp->chgCData(oldp+218,((vlSelfRef.vec_din_b >> 0x00000018U)),8);
}

void Vtop_accelerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_cleanup\n"); );
    // Body
    Vtop_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_accelerator___024root*>(voidSelf);
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

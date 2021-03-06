// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xblur.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XBlur_CfgInitialize(XBlur *InstancePtr, XBlur_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XBlur_Set_image_in(XBlur *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBlur_WriteReg(InstancePtr->Axilites_BaseAddress, XBLUR_AXILITES_ADDR_IMAGE_IN_DATA, Data);
}

u32 XBlur_Get_image_in(XBlur *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBlur_ReadReg(InstancePtr->Axilites_BaseAddress, XBLUR_AXILITES_ADDR_IMAGE_IN_DATA);
    return Data;
}

void XBlur_Set_image_out(XBlur *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBlur_WriteReg(InstancePtr->Axilites_BaseAddress, XBLUR_AXILITES_ADDR_IMAGE_OUT_DATA, Data);
}

u32 XBlur_Get_image_out(XBlur *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBlur_ReadReg(InstancePtr->Axilites_BaseAddress, XBLUR_AXILITES_ADDR_IMAGE_OUT_DATA);
    return Data;
}


#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/cp_sup.cpp

// 004F1390 CPanelTy::OutProc
#line 4 "decomp/ST.exe/functions/004F1390/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::OutProc

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004F1390 -> 006B4640 @ 004F13CD */

void __thiscall
st::fn_004F1390(CPanelTy *this,DDXContext *param_1,undefined4 param_2,undefined4 param_3,
                 int param_4,int param_5,undefined4 param_6,undefined4 param_7,BITMAPINFO *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_006B4640(param_1,param_4,param_5,param_8,nullptr);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0xf,0,errorCode,st::mutable_c_string("%s"),
                             "CPanelTy::OutProc");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0xf);
  return;
}

// 004F1460 CPanelTy::OutProc
#line 4 "decomp/ST.exe/functions/004F1460/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::OutProc */

void __thiscall
st::fn_004F1460(CPanelTy *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,BITMAPINFO *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_006B48A0(param_1,param_4,param_5,param_8,nullptr,0xff);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x17,0,errorCode,st::mutable_c_string("%s")
                             ,"CPanelTy::OutProc");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x17);
  return;
}

// 004F1530 CPanelTy::OutProc
#line 4 "decomp/ST.exe/functions/004F1530/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::OutProc

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 004F1530 -> 006B48E0 @ 004F1587 */

void __thiscall
st::fn_004F1530(CPanelTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,
                 AnonPointee_MReportTy_0073 *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_006B48E0
              (param_1,param_4,param_5,param_8,0,0,0,param_8->field_0004,param_8->field_0008,
               PTR_008032b4,0,0x10000ff);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1f,0,errorCode,st::mutable_c_string("%s")
                             ,"CPanelTy::OutProc");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1f);
  return;
}

// 004F1D90 CPanelTy::PaintDamageXY
#line 4 "decomp/ST.exe/functions/004F1D90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintDamageXY
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004F1E0A MOV ECX,dword ptr [EBP + 0x14];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_004F1D90
          (CPanelTy *this,int param_1,int param_2,uint param_3,byte param_4,UINT param_5)

{
  CPanelTy *pCVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_00710A90(local_8->field_01B8,param_1,0,param_2,param_3,0x30,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 1;
    iVar5 = -1;
    iVar3 = 0;
    pcVar4 = st::fn_006B0140(param_5,g_hINSTANCE_00807618);
    st::fn_00711B70(pCVar2->field_01B8,pcVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar2->field_01E1),st::mutable_c_string("%d"),param_4);
    st::fn_00710A90(pCVar2->field_01B8,param_1,0,param_2 + 0x30,param_3,0x11,10);
    st::fn_00711B70(pCVar2->field_01B8,&pCVar2->field_01E1,-3,-1,0,-1,-1);
    st::fn_00710A90(pCVar2->field_01B8,param_1,0,param_2 + 0x42,param_3,10,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 1;
    iVar5 = -1;
    iVar3 = -1;
    pcVar4 = st::fn_006B0140(0x36b2,g_hINSTANCE_00807618);
    st::fn_00711B70(pCVar2->field_01B8,pcVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x8f,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintDamageXY");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x8f);
  return;
}

// 004F1F60 CPanelTy::PaintDamageXY
#line 4 "decomp/ST.exe/functions/004F1F60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintDamageXY
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004F1FDA MOV ECX,dword ptr [EBP + 0x14];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_004F1F60
          (CPanelTy *this,int param_1,int param_2,int param_3,byte param_4,UINT param_5)

{
  CPanelTy *pCVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_00710A90(local_8->field_01B8,param_1,0,param_2,param_3,0x30,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 5;
    iVar5 = -1;
    iVar3 = 0;
    pcVar4 = st::fn_006B0140(param_5,g_hINSTANCE_00807618);
    st::fn_00711B70(pCVar2->field_01B8,pcVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar2->field_01E1),st::mutable_c_string("%3d"),param_4);
    st::fn_00710A90(pCVar2->field_01BC,param_1,0,param_2 + 0xc,param_3 + 10,0x14,0xf);
    st::fn_00711B70(pCVar2->field_01BC,&pCVar2->field_01E1,-3,-1,1,-1,-1);
    st::fn_00710A90(pCVar2->field_01B8,param_1,0,param_2 + 0x22,param_3 + 0xd,10,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar6 = 5;
    iVar5 = -1;
    iVar3 = -1;
    pcVar4 = st::fn_006B0140(0x36b2,g_hINSTANCE_00807618);
    st::fn_00711B70(pCVar2->field_01B8,pcVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0xa3,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintDamageXY");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0xa3);
  return;
}

// 004F2130 CPanelTy::PaintCostsXY
#line 4 "decomp/ST.exe/functions/004F2130/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintCostsXY
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:6: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=004F2202 MOV ECX,dword ptr [EBP +
   0x1c]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:7: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=004F2269 MOV EDX,dword ptr [EBP +
   0x20]; first-use mask */

void __thiscall
st::fn_004F2130
          (CPanelTy *this,int param_1,int param_2,int param_3,ushort param_4,ushort param_5,
          ushort param_6,ushort param_7)

{
  CPanelTy *pCVar2;
  int iVar3;
  char *resourceString;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    if ((param_4 != 0xffff) || (param_5 != 0xffff)) {
      st::fn_00710A90(local_8->field_01B8,param_1,0,param_2,param_3,0x30,10);
      iVar7 = -1;
      iVar6 = -1;
      uVar5 = 1;
      iVar4 = -1;
      iVar3 = 0;
      resourceString = st::fn_006B0140(0x36b3,g_hINSTANCE_00807618);
      st::fn_00711B70(pCVar2->field_01B8,resourceString,iVar3,iVar4,uVar5,iVar6,iVar7);
    }
    if (param_4 != 0xffff) {
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar2->field_01E1),st::mutable_c_string("%d"),param_4);
      st::fn_00710A90(pCVar2->field_01B8,param_1,0,param_2 + 0x30,param_3,0x11,10);
      st::fn_00711B70(pCVar2->field_01B8,&pCVar2->field_01E1,-3,-1,(uint)param_6,-1,-1);
    }
    if (param_5 != 0xffff) {
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar2->field_01E1),st::mutable_c_string("%d"),param_5);
      st::fn_00710A90(pCVar2->field_01B8,param_1,0,param_2 + 0x30,param_3 + 0xb,0x11,10);
      st::fn_00711B70(pCVar2->field_01B8,&pCVar2->field_01E1,-3,-1,(uint)param_7,-1,-1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0xbe,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintCostsXY");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0xbe);
  return;
}

// 004F2350 CPanelTy::PaintCostsXYSI
#line 4 "decomp/ST.exe/functions/004F2350/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintCostsXYSI
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=004F2418 MOV EAX,dword ptr [EBP +
   0x14]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=004F2474 MOV EDX,dword ptr [EBP +
   0x18]; first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_004F2350
          (CPanelTy *this,int param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  CPanelTy *pCVar2;
  int iVar3;
  char *resourceString;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    if ((param_2 != 0xffff) || (param_3 != 0xffff)) {
      st::fn_00710A90(local_8->field_01B8,param_1,0,0x5c,0x50,0x3c,10);
      iVar7 = -1;
      iVar6 = -1;
      uVar5 = 5;
      iVar4 = -1;
      iVar3 = -1;
      resourceString = st::fn_006B0140(0x36b3,g_hINSTANCE_00807618);
      st::fn_00711B70(pCVar2->field_01B8,resourceString,iVar3,iVar4,uVar5,iVar6,iVar7);
    }
    if (param_2 != 0xffff) {
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar2->field_01E1),st::mutable_c_string("%4d"),param_2);
      st::fn_00710A90(pCVar2->field_01C4,param_1,0,0x7d,0x5a,0x18,0xf);
      st::fn_00711B70(pCVar2->field_01C4,&pCVar2->field_01E1,-3,-1,(uint)param_4,-1,-1);
    }
    if (param_3 != 0xffff) {
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar2->field_01E1),st::mutable_c_string("%4d"),param_3);
      st::fn_00710A90(pCVar2->field_01C4,param_1,0,0x5f,0x5a,0x18,0xf);
      st::fn_00711B70(pCVar2->field_01C4,&pCVar2->field_01E1,-3,-1,(uint)param_5,-1,-1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0xd9,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintCostsXYSI");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0xd9);
  return;
}

// 004F2560 CPanelTy::PaintWeap
#line 4 "decomp/ST.exe/functions/004F2560/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintWeap

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004F2560(CPanelTy *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  Global_sub_005259B0_param_1Enum GVar3;
  CPanelTy *pCVar5;
  int iVar6;
  uint local_EAX_218;
  UINT UVar6;
  uint uVar7;
  char *pcVar7_mg0;
  int iVar16;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  AnonShape_004F2560_DB98CB49 *pAVar12;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar17;
  int iVar18;
  int iVar19;
  InternalExceptionFrame local_7c;
  CPanelTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  RecoveredSourceFamily_dibcopy *local_20;
  uint local_1c;
  AnonShape_004F2560_DB98CB49 *local_18;
  int local_14;
  AnonShape_004F2560_E9671A44 *local_10;
  uint local_c;
  char local_5;

  local_18 = (AnonShape_004F2560_DB98CB49 *)&this->field_0B63;
  if (param_1 == 0) {
    local_20 = (RecoveredSourceFamily_dibcopy *)this->field_019C;
    local_18 = (AnonShape_004F2560_DB98CB49 *)&this->field_0C51;
    local_28 = this->field_0058;
    local_2c = this->field_00B0;
  }
  else {
    local_20 = (RecoveredSourceFamily_dibcopy *)this->field_0184;
    local_28 = this->field_0040;
    local_2c = this->field_0098;
  }
  local_30 = 5;
  local_14 = 0x2f;
  local_1c = 0;
  if (param_1 == 0) {
    local_24 = st::pointer_boundary_cast<undefined1 *>(&this->field_0x664);
  }
  else {
    local_24 = st::pointer_boundary_cast<undefined1 *>(&this->field_0x31c);
  }
  local_c = local_c & 0xffffff00;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_38 = this;
  iVar6 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
  pAVar12 = local_18;
  pCVar5 = local_38;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x146,0,iVar6,st::mutable_c_string("%s")
                                ,"CPanelTy::PaintWeap");
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x146);
    return;
  }
  memset(&local_38->field_0x31c, 0, 0x118); /* compiler bulk-zero initialization */
  iVar7 = local_30;
  if (local_18->field_0020 != 0) {
    local_EAX_218 = st::fn_0040137F(local_18->field_0020,local_18->field_0024,'\0');
    local_10 = (AnonShape_004F2560_E9671A44 *)
               st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_028E,local_EAX_218);
    iVar7 = local_30;
    local_1c = -(uint)(pAVar12->field_0x7 != '\x03') & 5;
    local_34 = local_1c + local_14;
    st::fn_00403229(local_20,local_30,local_34,'\x06',(byte *)local_10);
    uVar2 = *(ushort *)(pAVar12 + 1);
    if (uVar2 != 0xffff) {
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar5->field_01E1),st::mutable_c_string("%d"),(uint)uVar2);
      st::fn_00710A90(pCVar5->field_01B8,(int)local_20,0,iVar7 + 0x2f,
                       (local_10->field_0008 + -0xc) / 2 + local_1c + local_14,0x11,0xc);
      st::fn_00711B70(pCVar5->field_01B8,&pCVar5->field_01E1,-3,-1,0,-1,-1);
      piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
      *piVar10 = iVar7 + 0x2f + local_28;
      piVar10[1] = local_34 + local_2c;
      piVar10[2] = 0x11;
      piVar10[3] = 0xc;
      UVar6 = st::fn_00404494(local_18->field_0020);
      piVar10[6] = UVar6;
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
    }
    piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar10 = iVar7 + local_28;
    piVar10[1] = local_34 + local_2c;
    piVar10[2] = local_10->field_0004;
    piVar10[3] = local_10->field_0008;
    UVar6 = st::fn_00404494(local_18->field_0020);
    piVar10[6] = UVar6;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
  }
  pAVar12 = local_18;
  GVar3 = local_18->field_001E;
  if (GVar3 == 0) {
    g_currentExceptionFrame = local_7c.previous;
    return;
  }
  if (GVar3 == 0xdd) {
    pAVar17 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_02D6;
    iVar15 = 0;
  }
  else {
    if (GVar3 != 0xde) {
      uVar7 = st::fn_0040137F(GVar3,local_18->field_0022,'\0');
      local_10 = (AnonShape_004F2560_E9671A44 *)
                 st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_028E,uVar7);
      goto LAB_004f27ff;
    }
    pAVar17 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_02D6;
    iVar15 = 1;
  }
  local_10 = (AnonShape_004F2560_E9671A44 *)st::fn_0070B3A0(pAVar17,iVar15);
LAB_004f27ff:
  switch(pAVar12->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar9 = local_14 + 2;
    iVar15 = iVar7 + 1;
    break;
  default:
    if (pAVar12->field_0020 == 0) {
      local_1c = (0x24 - (((BITMAPINFO *)local_10)->bmiHeader).biHeight) / 2;
    }
    else {
      local_1c = ((-(uint)(pAVar12->field_0x7 != '\x03') & 0xfffffffa) + 0x22) -
                 (((BITMAPINFO *)local_10)->bmiHeader).biHeight;
    }
    iVar9 = local_1c + local_14;
    iVar15 = iVar7;
  }
  st::fn_00403229(local_20,iVar15,iVar9,'\x06',(byte *)local_10);
  if (pAVar12->field_001E == 0xff) {
    st::fn_00710A90(pCVar5->field_01B8,(int)local_20,0,iVar7 + 1,local_14 + 2,local_10->field_0004,
                     local_10->field_0008);
    iVar19 = -1;
    iVar18 = -1;
    uVar16 = 1;
    iVar9 = -1;
    iVar15 = -2;
    pcVar7_mg0 = st::fn_006B0140(0x2715,g_hINSTANCE_00807618);
    st::fn_00711B70(pCVar5->field_01B8,pcVar7_mg0,iVar15,iVar9,uVar16,iVar18,iVar19);
  }
  local_5 = '\x01';
  if (*(short *)&pAVar12->field_0x26 == -1) {
    switch(pAVar12->field_001E) {
    case 0xa3:
    case 0xa8:
    case 0xb2:
    case 0xbe:
    case 0xff:
      local_5 = '\0';
      break;
    default:
      uVar16 = 0xffffffff;
      pcVar11 = &st_global_007C1B00;
      do {
        pcVar14 = pcVar11;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar14 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar14;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pcVar11 = pcVar14 + -uVar16;
      pcVar14 = &pCVar5->field_01E1;
      for (uVar8 = uVar16 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar16 = uVar16 & 3; pAVar12 = local_18, iVar7 = local_30, uVar16 != 0;
          uVar16 = uVar16 - 1) {
        *pcVar14 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  else {
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar5->field_01E1),st::mutable_c_string("%d"),*(short *)&pAVar12->field_0x26);
  }
  if (local_5 != '\0') {
    local_34 = 0;
    if ((0x9b < (ushort)pAVar12->field_001E) && ((ushort)pAVar12->field_001E < 0x9f)) {
      local_34 = 4;
    }
    st::fn_00710A90(pCVar5->field_01B8,(int)local_20,0,iVar7 + 0x2f,
                     (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14,0x11,0xc);
    st::fn_00711B70(pCVar5->field_01B8,&pCVar5->field_01E1,-3,-1,0,-1,-1);
    piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar10 = iVar7 + 0x2f + local_28;
    piVar10[1] = (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14 + local_2c;
    piVar10[2] = 0x11;
    piVar10[3] = 0xc;
    UVar6 = st::fn_00404494(local_18->field_001E);
    piVar10[6] = UVar6;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
    pAVar12 = local_18;
  }
  switch(pAVar12->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar10 = iVar7 + 1 + local_28;
    piVar10[1] = local_14 + 2 + local_2c;
    break;
  default:
    piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar10 = iVar7 + local_28;
    piVar10[1] = local_1c + local_14 + local_2c;
  }
  piVar10[2] = local_10->field_0004;
  piVar10[3] = local_10->field_0008;
  UVar6 = st::fn_00404494(pAVar12->field_001E);
  piVar10[6] = UVar6;
  g_currentExceptionFrame = local_7c.previous;
  return;
}

// 004F2E40 CPanelTy::SetButStruct
#line 4 "decomp/ST.exe/functions/004F2E40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::SetButStruct

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00502360 -> 004F2E40 @ 00502527 | 00503450 -> 004F2E40 @ 00503643 | 005097E0 ->
   004F2E40 @ 005099DD | 0050E7D0 -> 004F2E40 @ 0050EA07

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: 00502360 -> 004F2E40 @ 00502527; literal 1 at 005024F0 | 00503450 -> 004F2E40 @
   00503643; literal 1 at 00503609 | 005097E0 -> 004F2E40 @ 005099DD; literal 1 at 005099A6 |
   0050E7D0 -> 004F2E40 @ 0050EA07; literal 1 at 0050E9D0

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: 00502360 -> 004F2E40 @ 00502527; literal 0 at 005024EE | 00503450 -> 004F2E40 @
   00503643; literal 0 at 00503607 | 005097E0 -> 004F2E40 @ 005099DD; literal 0 at 005099A4 |
   0050E7D0 -> 004F2E40 @ 0050EA07; literal 0 at 0050E9CE */

void __thiscall
st::fn_004F2E40
          (CPanelTy *this,AnonShape_004F2E40_DC76A8C6 *param_1,byte param_2,undefined4 param_3,
          int param_4,int param_5,byte param_6,LPSTR param_7,ushort param_8,ushort param_9,
          undefined4 param_10,char *param_11)

{
  char *text;
  uint uVar2;
  ushort uVar3;
  int local_EAX_42;
  ushort *puVar4;
  int iVar4;
  int iVar5;
  int iVar6;
  AnonShape_004F2E40_DC76A8C6 *pAVar7;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  ushort *local_8;

  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  local_EAX_42 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (local_EAX_42 == 0) {
    pAVar7 = param_1;
    for (iVar6 = 0x5f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pAVar7 = 0;
      pAVar7 = (AnonShape_004F2E40_DC76A8C6 *)((int)&pAVar7->field_0001 + 3);
    }
    *(undefined4 *)param_1 = param_3;
    uVar2 = (uint)param_2;
    *(int *)&param_1->field_0x8 = (&local_c->field_003C)[uVar2] + param_4;
    iVar6 = local_c->field_0130;
    switch(uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar6 = local_c->field_0134;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar6 = local_c->field_0138;
    }
    if (iVar6 == 0) {
      if ((param_2 == 1) || (param_2 == 7)) {
        iVar6 = local_c->field_00C0;
      }
      else {
        iVar6 = 0;
      }
      iVar6 = iVar6 + DAT_00806734;
    }
    else {
      iVar6 = (&local_c->field_0094)[uVar2];
    }
    text = &local_c->field_01E1;
    *(int *)&param_1->field_0xc = iVar6 + param_5;
    param_1->field_0108 = 1;
    param_1->field_010C = 1;
    st::external_00000080(text,st::mutable_c_string("%s0"),param_7);
    local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_6,text,nullptr,1);
    uVar3 = local_8[3];
    *(ushort *)&param_1->field_0x10 = local_8[2];
    *(ushort *)&param_1->field_0x12 = uVar3;
    uVar3 = local_8[5];
    *(ushort *)&param_1->field_0x14 = local_8[4];
    *(ushort *)&param_1->field_0x16 = uVar3;
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
    *(undefined4 *)&param_1->field_0x84 = 3;
    *(undefined4 *)&param_1->field_0xa8 = 3;
    *(undefined4 *)&param_1->field_0x80 = 0x101;
    *(undefined4 *)&param_1->field_0x88 = 0x4201;
    *(ushort *)&param_1->field_0x8c = param_9;
    param_1->field_008E = param_8;
    *(undefined4 *)&param_1->field_0x90 = param_10;
    *(undefined4 *)&param_1->field_0x98 = 0;
    param_1->field_00BC = 1;
    *(undefined4 *)&param_1->field_0xa4 = 0x101;
    *(undefined4 *)&param_1->field_0xac = 0x4202;
    *(ushort *)&param_1->field_0xb0 = param_9;
    param_1->field_00B2 = param_8;
    *(undefined4 *)&param_1->field_0xb4 = param_10;
    if (param_11 != nullptr) {
      puVar4 = st::fn_0070AA70(g_cMf32_00806790,param_11,0,1);
      param_1->field_0124 = st::machine_word_boundary_cast<undefined4>(puVar4);
      iVar4 = st::fn_0070A6F0(g_cMf32_00806790,0x12,param_11,1);
      param_1->field_0128 = iVar4;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x171,0,local_EAX_42,
                             st::mutable_c_string("%s"),"CPanelTy::SetButStruct");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_42,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x171);
  return;
}

// 004F3130 CPanelTy::CreateBut
#line 4 "decomp/ST.exe/functions/004F3130/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::CreateBut

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0050E7D0 -> 004F3130 @ 0050EC8C | 0050E7D0 -> 004F3130 @ 0050ECDA | 0050E7D0 ->
   004F3130 @ 0050EF83 | 0050E7D0 -> 004F3130 @ 0050EFC5 | 0050E7D0 -> 004F3130 @ 0050F00A |
   0050E7D0 -> 004F3130 @ 0050F04F

   [STPrototypeApplier] Propagated parameter 11.
   Evidence: 004F5690 -> 004F3130 @ 004F6C51; literal 0 at 004F6BF9 | 004F5690 -> 004F3130 @
   004F6CD2; literal 0 at 004F6C89 | 004F5690 -> 004F3130 @ 004F6D27; literal 0 at 004F6CE7 |
   004F5690 -> 004F3130 @ 004F6D81; literal 0 at 004F6D3C | 004F5690 -> 004F3130 @ 004F6DDB; literal
   0 at 004F6D96 | 004F5690 -> 004F3130 @ 004F6E32; literal 0 at 004F6DF0 | 004F5690 -> 004F3130 @
   004F6E87; literal 0 at 004F6E47 | 004F5690 -> 004F3130 @ 004F6F25; literal 0 at 004F6ED0 |
   004F5690 -> 004F3130 @ 004F6FC6; literal 0 at 004F6F71 | 00502360 -> 004F3130 @ 005026A1; literal
   0 at 00502669 | 00502360 -> 004F3130 @ 005026FA; literal 0 at 005026C2 | 00502360 -> 004F3130 @
   005027B9; literal 0 at 0050278B | 00503450 -> 004F3130 @ 005037F8; literal 0 at 005037C0 |
   00503450 -> 004F3130 @ 00503854; literal 0 at 0050381C | 00503450 -> 004F3130 @ 00503980; literal
   0 at 00503968 | 005097E0 -> 004F3130 @ 00509B32; literal 0 at 00509B07 | 005097E0 -> 004F3130 @
   00509BA5; literal 0 at 00509B6A | 005097E0 -> 004F3130 @ 00509CE7; literal 0 at 00509CAE |
   005097E0 -> 004F3130 @ 00509F30; literal 0 at 00509F10 | 005097E0 -> 004F3130 @ 00509FE3; literal
   0 at 00509FC0 | 0050E7D0 -> 004F3130 @ 0050EC8C; literal 0 at 0050EC6C | 0050E7D0 -> 004F3130 @
   0050ECDA; literal 0 at 0050ECB7 | 0050E7D0 -> 004F3130 @ 0050EF1B; literal 0 at 0050EEF1 |
   0050E7D0 -> 004F3130 @ 0050EF83; literal 0 at 0050EF5C | 0050E7D0 -> 004F3130 @ 0050EFC5; literal
   0 at 0050EF98 | 0050E7D0 -> 004F3130 @ 0050F00A; literal 0 at 0050EFDA | 0050E7D0 -> 004F3130 @
   0050F04F; literal 0 at 0050F019 | 0050E7D0 -> 004F3130 @ 0050F08E; literal 0 at 0050F064 |
   0050E7D0 -> 004F3130 @ 0050F0D0; literal 0 at 0050F0A3 */

undefined4 __thiscall
st::fn_004F3130(CPanelTy *this,byte param_1,undefined4 param_2,int param_3,int param_4,
                   int param_5,byte param_6,char *text,undefined4 param_8,undefined4 param_9,
                   short param_10,ushort param_11,int param_12,char *param_13,int param_14,
                   undefined4 param_15,undefined4 param_16)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar4;
  int iVar6;
  InternalExceptionFrame local_1d0;
  int local_18c [4];
  int local_17c;
  undefined4 local_178;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ushort local_100;
  short local_fe;
  int local_fc;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  ushort local_dc;
  short local_da;
  int local_d8;
  undefined4 local_d0;
  undefined4 local_84;
  undefined4 local_80;
  ushort *local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  CPanelTy *local_10;
  undefined4 local_c;
  ushort *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_1d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1d0;
  local_10 = this;
  iVar4 = st::fn_0072D7F0(local_1d0.jumpBuffer,0);
  pCVar3 = local_10;
  if (iVar4 == 0) {
    memset(local_18c, 0, 0x17c); /* compiler bulk-zero initialization */
    local_18c[1] = param_2;
    local_18c[0] = param_3;
    if (text != nullptr) {
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pCVar3->field_01E1),st::mutable_c_string("%s0"),text);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_6,&pCVar3->field_01E1,nullptr,1);
    }
    if (param_6 == 1) {
      local_17c = *(int *)(local_8 + 2);
      local_178 = *(undefined4 *)(local_8 + 4);
    }
    else {
      local_17c = param_14;
      local_178 = param_15;
      if (param_6 == 6) {
        local_17c = *(int *)(local_8 + 2);
        local_178 = *(undefined4 *)(local_8 + 4);
      }
    }
    if (param_4 < 0) {
      param_4 = ((&pCVar3->field_0068)[param_1] - local_17c) / 2;
    }
    uVar2 = (uint)param_1;
    local_18c[2] = (&pCVar3->field_003C)[uVar2] + param_4;
    iVar6 = pCVar3->field_0130;
    switch(uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar6 = pCVar3->field_0134;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar6 = pCVar3->field_0138;
    }
    if (iVar6 == 0) {
      if ((param_1 == 1) || (param_1 == 7)) {
        local_18c[3] = pCVar3->field_00C0;
      }
      else {
        local_18c[3] = 0;
      }
      local_18c[3] = st::machine_word_boundary_cast<int>(local_18c[3] + DAT_00806734);
    }
    else {
      local_18c[3] = (&pCVar3->field_0094)[uVar2];
    }
    local_18c[3] = st::machine_word_boundary_cast<int>(local_18c[3] + param_5);
    if (local_8 != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
    }
    local_16c = pCVar3->field_0008;
    local_124 = param_9;
    local_164 = param_8;
    local_168 = 2;
    local_148 = 2;
    local_128 = 2;
    local_144 = param_16;
    local_84 = 1;
    local_80 = 1;
    if (param_10 != 0) {
      local_10c = 0x101;
      local_108 = 3;
      local_104 = 0x4201;
      local_100 = param_11;
      local_fe = param_10;
      local_fc = param_12;
      local_f4 = 0;
      local_d0 = 1;
      local_e8 = 0x101;
      local_e4 = 3;
      local_e0 = 0x4202;
      local_dc = param_11;
      local_da = param_10;
      local_d8 = param_12;
    }
    if ((param_10 == 1) && (-1 < *(int *)(param_12 + 9))) {
      local_5c = *(undefined4 *)(&DAT_00807e66 + *(int *)(param_12 + 9) * 4);
      local_60 = 8;
    }
    local_14c = local_16c;
    local_12c = local_16c;
    if (param_13 != nullptr) {
      local_68 = st::fn_0070AA70(g_cMf32_00806790,param_13,0,1);
      local_64 = st::fn_0070A6F0(g_cMf32_00806790,0x12,param_13,1);
    }
    (*pCVar3->field_000C->vtable->CreateObject)
              ((SystemClassTy *)pCVar3->field_000C,2,&local_c,nullptr,st::machine_word_boundary_cast<undefined4>(local_18c),0);
    g_currentExceptionFrame = local_1d0.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_1d0.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1b3,0,iVar4,st::mutable_c_string("%s"),
                             "CPanelTy::CreateBut");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1b3);
  return 0;
}

// 004F3540 CPanelTy::PaintBut
#line 4 "decomp/ST.exe/functions/004F3540/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintBut

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004FB060 -> 004F3540 @ 004FD4D0 | 004FB060 -> 004F3540 @ 004FD51D

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F3540 @ 004FD4D0 | 004FB060 -> 004F3540 @ 004FD51D

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=15, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_004F3540(CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *text,
                  undefined *param_5)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR text_00;
  int iVar6;
  int iVar5;
  int iVar7;
  InternalExceptionFrame local_54;
  int *local_10;
  ushort *local_c;
  CPanelTy *local_8;

  local_10 = st::pointer_boundary_cast<int *>((param_2->arg1).ptr);
  local_c = nullptr;
  if (param_5 == nullptr) {
    return;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = (int *)st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (errorCode != nullptr) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1cd,0,(int)errorCode,
                               st::mutable_c_string("%s"),"CPanelTy::PaintBut");
    if (iVar6 == 0) {
      st::fn_006A5E40((int)errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1cd);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar4 = (*(code *)param_5)(param_2);
  text_00 = st::fn_006F2C00(text,1,uVar4);
  local_c = st::fn_006F1CE0(g_cMf32_00806790,param_3,text_00,errorCode,iVar7);
  pCVar3 = local_8;
  uVar2 = (uint)param_1;
  iVar7 = local_10[1];
  iVar5 = DAT_00806734;
  switch(uVar2) {
  case 1:
    if (local_8->field_0134 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
      break;
    }
    goto LAB_004f3636;
  default:
    if (local_8->field_0130 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 3:
    if (local_8->field_0134 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 5:
    if (local_8->field_0138 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 7:
    if (local_8->field_0138 != 0) {
      iVar5 = (&local_8->field_0094)[uVar2];
      break;
    }
LAB_004f3636:
    iVar7 = iVar7 - local_8->field_00C0;
  }
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_8->field_0148[uVar2 + 0xe],
         *local_10 - (&local_8->field_003C)[uVar2],iVar7 - iVar5,param_3,(byte *)local_c);
  st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_c);
  if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
               (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 004F37C0 CPanelTy::PaintBBut
#line 4 "decomp/ST.exe/functions/004F37C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintBBut

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F37C0 @ 004FD224
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004F3805 MOV EDX,dword ptr [EBP + 0x18];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_004F37C0(CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *param_4,
                   byte param_5)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  LPSTR text;
  int iVar5;
  int iVar4;
  int iVar6;
  InternalExceptionFrame local_54;
  int *local_10;
  ushort *local_c;
  CPanelTy *local_8;

  local_10 = st::pointer_boundary_cast<int *>((param_2->arg1).ptr);
  local_c = nullptr;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = (int *)st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (errorCode != nullptr) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1de,0,(int)errorCode,
                               st::mutable_c_string("%s"),"CPanelTy::PaintBBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40((int)errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1de);
    return;
  }
  iVar6 = 1;
  text = st::fn_006F2C00(param_4,1,(uint)param_5);
  local_c = st::fn_006F1CE0(g_cMf32_00806790,param_3,text,errorCode,iVar6);
  pCVar3 = local_8;
  uVar2 = (uint)param_1;
  iVar6 = local_10[1];
  iVar4 = DAT_00806734;
  switch(uVar2) {
  case 1:
    if (local_8->field_0134 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
      break;
    }
    goto LAB_004f38ad;
  default:
    if (local_8->field_0130 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 3:
    if (local_8->field_0134 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 5:
    if (local_8->field_0138 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
    }
    break;
  case 7:
    if (local_8->field_0138 != 0) {
      iVar4 = (&local_8->field_0094)[uVar2];
      break;
    }
LAB_004f38ad:
    iVar6 = iVar6 - local_8->field_00C0;
  }
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_8->field_0148[uVar2 + 0xe],
         *local_10 - (&local_8->field_003C)[uVar2],iVar6 - iVar4,param_3,(byte *)local_c);
  st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_c);
  if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
               (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 004F3A30 CPanelTy::PaintTxtBut
#line 4 "decomp/ST.exe/functions/004F3A30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTxtBut

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F3A30 @ 004FCADA */

void __thiscall
st::fn_004F3A30
          (CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *param_4,UINT param_5,
          undefined *param_6)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  uint uVar4;
  char *resourceString;
  int iVar6;
  int iVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_5c;
  int *local_18;
  uint local_14;
  CPanelTy *local_10;
  int local_c;
  ushort *local_8;

  uVar2 = (uint)param_1;
  local_18 = st::pointer_boundary_cast<int *>((param_2->arg1).ptr);
  local_8 = nullptr;
  iVar5 = local_18[1];
  local_c = *local_18 - (&this->field_003C)[uVar2];
  switch(uVar2) {
  case 1:
    iVar7 = this->field_0134;
    goto LAB_004f3aaa;
  default:
    if (this->field_0130 != 0) {
      local_14 = iVar5 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_14 = iVar5 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_14 = iVar5 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    break;
  case 7:
    iVar7 = this->field_0138;
LAB_004f3aaa:
    if (iVar7 != 0) {
      local_14 = iVar5 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3AC3;
    }
    iVar5 = iVar5 - this->field_00C0;
  }
  local_14 = iVar5 - DAT_00806734;
cf_common_join_004F3AC3:
  if (param_6 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_10 = this;
    iVar4 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
    if (iVar4 == 0) {
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_3,param_4,nullptr,1);
      pCVar3 = local_10;
      uVar4 = local_14;
      uVar2 = (uint)param_1;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_10->field_0148[uVar2 + 0xe],local_c,local_14,
             param_3,(byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      st::fn_00710A90(pCVar3->field_01B8,(int)pCVar3->field_0148[uVar2 + 0xe],0,local_c,uVar4,
                       local_18[2],local_18[3]);
      iVar9 = -1;
      iVar8 = -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_6)(param_2);
      iVar7 = -1;
      iVar5 = -2;
      resourceString = st::fn_006B0140(param_5,g_hINSTANCE_00807618);
      st::fn_00711B70(pCVar3->field_01B8,resourceString,iVar5,iVar7,uVar4,iVar8,iVar9);
      if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
                   (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1f8,0,iVar4,st::mutable_c_string("%s"),
                               "CPanelTy::PaintTxtBut");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x1f8);
  }
  return;
}

// 004F3CF0 CPanelTy::PaintTxtBut
#line 4 "decomp/ST.exe/functions/004F3CF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTxtBut

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F3CF0 @ 004FCB08 | 004FB060 -> 004F3CF0 @ 004FCB36

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_004F3CF0
          (CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *param_4,UINT param_5,
          undefined *param_6)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR text;
  uint uVar5;
  char *resourceString;
  int iVar8;
  int iVar6;
  int iVar7;
  int iVar9;
  int iVar10;
  InternalExceptionFrame local_5c;
  int *local_18;
  CPanelTy *local_14;
  int local_10;
  uint local_c;
  ushort *local_8;

  uVar2 = (uint)param_1;
  local_18 = st::pointer_boundary_cast<int *>((param_2->arg1).ptr);
  local_8 = nullptr;
  iVar9 = local_18[1];
  local_10 = *local_18 - (&this->field_003C)[uVar2];
  switch(uVar2) {
  case 1:
    iVar6 = this->field_0134;
    goto LAB_004f3d6a;
  default:
    if (this->field_0130 != 0) {
      local_c = iVar9 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_c = iVar9 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_c = iVar9 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 7:
    iVar6 = this->field_0138;
LAB_004f3d6a:
    if (iVar6 != 0) {
      local_c = iVar9 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    iVar9 = iVar9 - this->field_00C0;
  }
  local_c = iVar9 - DAT_00806734;
cf_common_join_004F3D83:
  if (param_6 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_14 = this;
    errorCode = (int *)st::fn_0072D7F0(local_5c.jumpBuffer,0);
    if (errorCode == nullptr) {
      iVar9 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_6)(param_2);
      text = st::fn_006F2C00(param_4,1,uVar4);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_3,text,errorCode,iVar9);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0148[uVar2 + 0xe],local_10,local_c,
             param_3,(byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      st::fn_00710A90(g_interSystem_00802A28->field_0024,(int)pCVar3->field_0148[uVar2 + 0xe],0,
                       local_10,local_c,local_18[2],local_18[3]);
      iVar10 = -1;
      iVar7 = -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar5 = (*(code *)param_6)(param_2);
      iVar6 = -1;
      iVar9 = -2;
      resourceString = st::fn_006B0140(param_5,g_hINSTANCE_00807618);
      st::fn_00711B70(g_interSystem_00802A28->field_0024,resourceString,iVar9,iVar6,uVar5,iVar7,
                     iVar10);
      if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
                   (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x212,0,(int)errorCode,
                               st::mutable_c_string("%s"),"CPanelTy::PaintTxtBut");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40((int)errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x212);
  }
  return;
}

// 004F3FE0 CPanelTy::PaintLBut
#line 4 "decomp/ST.exe/functions/004F3FE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintLBut */

void __thiscall
st::fn_004F3FE0(CPanelTy *this,byte param_1,AnonShape_004F3FE0_1578D6B9 *param_2,byte param_3,
                   char *param_4,char *param_5,undefined *param_6)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  undefined4 uVar4;
  LPSTR text;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_58;
  CPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  uVar2 = (uint)param_1;
  local_8 = nullptr;
  local_c = param_2->field_0018->field_0004;
  local_10 = st::machine_word_boundary_cast<int>(param_2->field_0018->field_0000 - (&this->field_003C)[uVar2]);
  switch(uVar2) {
  case 1:
    iVar6 = this->field_0134;
    goto LAB_004f4057;
  default:
    if (this->field_0130 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4070;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4070;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4070;
    }
    break;
  case 7:
    iVar6 = this->field_0138;
LAB_004f4057:
    if (iVar6 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4070;
    }
    local_c = local_c - this->field_00C0;
  }
  local_c = local_c - DAT_00806734;
cf_common_join_004F4070:
  if (param_6 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (iVar4 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_6)(param_2);
      text = st::fn_006F2C00(param_4,1,uVar4);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_3,text,nullptr,1);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0148[uVar2 + 0xe],local_10,local_c,
             param_3,(byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      if (param_2->field_0014 == 3) {
        local_8 = st::fn_006F1CE0(g_cMf32_00806790,6,param_5,nullptr,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar3->field_0148[uVar2 + 0xe],local_10,local_c,
               '\x06',(byte *)local_8);
        st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      }
      if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
                   (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x235,0,iVar4,st::mutable_c_string("%s"),
                               "CPanelTy::PaintLBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x235);
  }
  return;
}

// 004F42A0 CPanelTy::PaintTab
#line 4 "decomp/ST.exe/functions/004F42A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTab

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F42A0 @ 004FD148 | 004FB060 -> 004F42A0 @ 004FD176

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004FB060 -> 004F42A0 @ 004FD148 | 004FB060 -> 004F42A0 @ 004FD176

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_004F42A0(CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *text,
                  char *param_5,callback_004F42A0_p6 *param_6)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  undefined4 uVar4;
  LPSTR text_00;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_58;
  CPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  uVar2 = (uint)param_1;
  local_8 = nullptr;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(int *)((param_2->arg0).u32 + 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(int *)((param_2->arg0).u32 + 0xc) - (&this->field_003C)[uVar2];
  switch(uVar2) {
  case 1:
    iVar6 = this->field_0134;
    goto LAB_004f4318;
  default:
    if (this->field_0130 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4331;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4331;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4331;
    }
    break;
  case 7:
    iVar6 = this->field_0138;
LAB_004f4318:
    if (iVar6 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4331;
    }
    local_c = local_c - this->field_00C0;
  }
  local_c = local_c - DAT_00806734;
cf_common_join_004F4331:
  if (param_6 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (iVar4 == 0) {
      uVar4 = (*param_6)((AnonShape_0052A7B0_DD603BF4 *)param_2);
      text_00 = st::fn_006F2C00(text,2,uVar4);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_3,text_00,nullptr,1);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0148[uVar2 + 0xe],local_10,local_c,
             param_3,(byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      if ((*(int *)((param_2->arg0).u32 + 4) == 3) && (param_5 != nullptr)) {
        local_8 = st::fn_006F1CE0(g_cMf32_00806790,6,param_5,nullptr,1);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pCVar3->field_0148[uVar2 + 0xe],local_10,local_c,
               '\x06',(byte *)local_8);
        st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      }
      if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
                   (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x256,0,iVar4,st::mutable_c_string("%s"),
                               "CPanelTy::PaintTab");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\cp_sup.cpp"),0x256);
  }
  return;
}


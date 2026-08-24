#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepAsses
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PrepAsses(OptPanelTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005328C8 RET | 005328F7 RET | 0053293B RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall OptPanelTy::PrepAsses(OptPanelTy *this)

{
  byte *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar5;
  int local_EAX_67;
  int iVar5;
  cMf32 *pcVar6;
  OptPanelTy_field_02FDDArray *pOVar7;
  char *pcVar7_mg0;
  char *pcVar7_mg1;
  int iVar9;
  int iVar8;
  uint uVar10;
  OptPanelTy *pOVar12;
  char *pcVar13;
  uint *puVar14;
  char *pcVar15;
  byte *pbVar16;
  bool bVar17;
  char local_12c [108];
  undefined4 local_c0;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  uint local_c;
  OptPanelTy *local_8;

  this->field_0028 = 0x20;
  this->field_002C = 0;
  this->field_002E = 0;
  local_8 = this;
  FUN_006e6080(this,2,this->field_01B5[0],(undefined4 *)&this->field_0x18);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_67 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pOVar12 = local_8;
  if (local_EAX_67 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x3ad,0,local_EAX_67,
                               "%s","OptPanelTy::PrepAsses");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_67,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x3ad);
    return;
  }
  if (local_8->field_02FD != nullptr) {
    DArrayDestroy((DArrayTy *)local_8->field_02FD);
  }
  pOVar12->field_02FD = nullptr;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  iVar5 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_94.previous;
    pOVar7 = (OptPanelTy_field_02FDDArray *)
             Library::DKW::TBL::DArrayCreate(nullptr,1,0x98,1);
    local_8->field_02FD = pOVar7;
    pOVar12 = local_8;
    goto LAB_00532758;
  }
  switch(DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    /* ST_CALLSITE[00532688]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079acf0,
              PTR_s_STRATEGS_0079acfc);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    /* ST_CALLSITE[005326A7]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
  }
  pcVar6 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  pOVar12 = local_8;
  switch(DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    pOVar7 = (OptPanelTy_field_02FDDArray *)
             /* ST_CALLSITE[005326FD]: CALL 0x00404255; direct=00404255 CreateAssistantList */
             CreateAssistantList((int)pcVar6,(uint)DAT_0080874e,DAT_0080995c);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    pOVar7 = (OptPanelTy_field_02FDDArray *)
             /* ST_CALLSITE[00532710]: CALL 0x0040466a; direct=0040466A CreateStrategList */
             CreateStrategList((int)pcVar6,(uint)DAT_0080874d,0xffffffff);
    break;
  default:
    goto switchD_005326e6_caseD_9;
  }
  pOVar12->field_02FD = pOVar7;
switchD_005326e6_caseD_9:
  cMf32::delete(pcVar6);
  g_currentExceptionFrame = local_94.previous;
LAB_00532758:
  if ((&stack0x00000000 != (undefined1 *)0x12c) &&
     (pcVar7_mg0 = LoadResourceString(0x2711,g_hINSTANCE_00807618), pcVar7_mg0 != nullptr)) {
    pcVar7_mg1 = LoadResourceString(0x2711,g_hINSTANCE_00807618);
    uVar10 = 0xffffffff;
    do {
      pcVar13 = pcVar7_mg1;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar13 = pcVar7_mg1 + 1;
      cVar2 = *pcVar7_mg1;
      pcVar7_mg1 = pcVar13;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar13 + -uVar10;
    pcVar15 = local_12c;
    memmove(pcVar15, pcVar13, uVar10); /* compiler REP MOVS byte copy */
  }
  local_c0 = 1;
  Library::DKW::TBL::FUN_006b11d0(&pOVar12->field_02FD->flags,0,(undefined4 *)local_12c);
  pOVar12->field_0028 = 0x28;
  puVar1 = &pOVar12->field_0x18;
  uVar5 = *(undefined2 *)((int)&pOVar12->field_02FD->count + 2);
  pOVar12->field_002C = *(undefined2 *)&pOVar12->field_02FD->count;
  pOVar12->field_002E = uVar5;
  FUN_006e6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  pOVar12->field_0028 = 0x20;
  pOVar12->field_002C = 1;
  pOVar12->field_002E = 0;
  FUN_006e6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  iVar9 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
  if (iVar9 == 0) {
    pOVar12->field_0028 = 0x22;
    pOVar12->field_002C = 0;
    pOVar12->field_002E = 0;
    FUN_006e6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  }
  else {
    pOVar7 = pOVar12->field_02FD;
    local_c = 0;
    if (pOVar7->count != 0) {
      if (pOVar7->count == 0) {
        puVar14 = nullptr;
        goto LAB_00532855;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        puVar14 = (uint *)((int)&pOVar7->data->field_0000 + pOVar7->elementSize * local_c);
LAB_00532855:
        pbVar16 = (byte *)&DAT_0080f33a;
        do {
          bVar3 = (byte)*puVar14;
          bVar17 = bVar3 < *pbVar16;
          if (bVar3 != *pbVar16) {
LAB_0053287e:
            iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_00532883;
          }
          if (bVar3 == 0) break;
          bVar3 = STField<byte>(puVar14,1);
          bVar17 = bVar3 < pbVar16[1];
          if (bVar3 != pbVar16[1]) goto LAB_0053287e;
          puVar14 = (uint *)((int)puVar14 + 2);
          pbVar16 = pbVar16 + 2;
        } while (bVar3 != 0);
        iVar9 = 0;
LAB_00532883:
        if (iVar9 == 0) {
          pOVar12->field_002C = (undefined2)local_c;
          pOVar12->field_002E = STPiece<2,2>(local_c);
          pOVar12->field_0028 = 0x22;
          FUN_006e6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)&pOVar12->field_0x18);
        }
        pOVar7 = pOVar12->field_02FD;
        local_c = local_c + 1;
        if (pOVar7->count <= local_c) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}


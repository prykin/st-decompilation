#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  int local_EAX_67;
  int iVar5;
  cMf32 *pcVar5;
  OptPanelTy_field_02FDDArray *pOVar6;
  char *pcVar7_mg0;
  char *pcVar7_mg1;
  int iVar7;
  int iVar8;
  uint uVar8;
  OptPanelTy *pOVar10;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  byte *pbVar14;
  bool bVar15;
  char local_12c [108];
  undefined4 local_c0;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  uint local_c;
  OptPanelTy *local_8;

  this->field_0028 = 0x20;
  *(undefined4 *)&this->field_0x2c = 0;
  local_8 = this;
  FUN_006e6080(this,2,this->field_01B5[0],(undefined4 *)&this->field_0x18);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_67 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pOVar10 = local_8;
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
  pOVar10->field_02FD = nullptr;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  iVar5 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_94.previous;
    pOVar6 = (OptPanelTy_field_02FDDArray *)
             Library::DKW::TBL::DArrayCreate(nullptr,1,0x98,1);
    local_8->field_02FD = pOVar6;
    pOVar10 = local_8;
    goto LAB_00532758;
  }
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_SYSTEM__0079acf0,
              PTR_s_STRATEGS_0079acfc);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,&DAT_0080ef1e);
  }
  pcVar5 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  pOVar10 = local_8;
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    pOVar6 = (OptPanelTy_field_02FDDArray *)
             CreateAssistantList((int)pcVar5,(uint)DAT_0080874e,DAT_0080995c);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    pOVar6 = (OptPanelTy_field_02FDDArray *)
             CreateStrategList((int)pcVar5,(uint)DAT_0080874d,0xffffffff);
    break;
  default:
    goto switchD_005326e6_caseD_9;
  }
  pOVar10->field_02FD = pOVar6;
switchD_005326e6_caseD_9:
  cMf32::delete(pcVar5);
  g_currentExceptionFrame = local_94.previous;
LAB_00532758:
  if ((&stack0x00000000 != (undefined1 *)0x12c) &&
     (pcVar7_mg0 = LoadResourceString(0x2711,g_hINSTANCE_00807618), pcVar7_mg0 != nullptr)) {
    pcVar7_mg1 = LoadResourceString(0x2711,g_hINSTANCE_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar11 = pcVar7_mg1;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar7_mg1 + 1;
      cVar2 = *pcVar7_mg1;
      pcVar7_mg1 = pcVar11;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8;
    pcVar11 = pcVar11 + -uVar8;
    pcVar13 = local_12c;
    memmove(pcVar13, pcVar11, uVar8); /* compiler REP MOVS byte copy */
  }
  local_c0 = 1;
  Library::DKW::TBL::FUN_006b11d0(&pOVar10->field_02FD->flags,0,(undefined4 *)local_12c);
  pOVar10->field_0028 = 0x28;
  puVar1 = &pOVar10->field_0x18;
  *(dword *)&pOVar10->field_0x2c = pOVar10->field_02FD->count;
  FUN_006e6080(pOVar10,2,pOVar10->field_01B5[0],(undefined4 *)puVar1);
  pOVar10->field_0028 = 0x20;
  *(undefined4 *)&pOVar10->field_0x2c = 1;
  FUN_006e6080(pOVar10,2,pOVar10->field_01B5[0],(undefined4 *)puVar1);
  iVar7 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
  if (iVar7 == 0) {
    pOVar10->field_0028 = 0x22;
    *(undefined4 *)&pOVar10->field_0x2c = 0;
    FUN_006e6080(pOVar10,2,pOVar10->field_01B5[0],(undefined4 *)puVar1);
  }
  else {
    pOVar6 = pOVar10->field_02FD;
    local_c = 0;
    if (pOVar6->count != 0) {
      if (pOVar6->count == 0) {
        puVar12 = nullptr;
        goto LAB_00532855;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        puVar12 = (uint *)((int)&pOVar6->data->field_0000 + pOVar6->elementSize * local_c);
LAB_00532855:
        pbVar14 = (byte *)&DAT_0080f33a;
        do {
          bVar3 = (byte)*puVar12;
          bVar15 = bVar3 < *pbVar14;
          if (bVar3 != *pbVar14) {
LAB_0053287e:
            iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00532883;
          }
          if (bVar3 == 0) break;
          bVar3 = STField<byte>(puVar12,1);
          bVar15 = bVar3 < pbVar14[1];
          if (bVar3 != pbVar14[1]) goto LAB_0053287e;
          puVar12 = (uint *)((int)puVar12 + 2);
          pbVar14 = pbVar14 + 2;
        } while (bVar3 != 0);
        iVar7 = 0;
LAB_00532883:
        if (iVar7 == 0) {
          *(uint *)&pOVar10->field_0x2c = local_c;
          pOVar10->field_0028 = 0x22;
          FUN_006e6080(pOVar10,2,pOVar10->field_01B5[0],(undefined4 *)&pOVar10->field_0x18);
        }
        pOVar6 = pOVar10->field_02FD;
        local_c = local_c + 1;
        if (pOVar6->count <= local_c) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}


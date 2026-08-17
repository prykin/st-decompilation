#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::SetObjectives

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
StartSystemTy::SetObjectives(StartSystemTy *this,int param_1,char *param_2,int param_3)

{
  ccFntTy *pcVar1;
  DArrayTy *pDVar3;
  StartSystemTy *this_00;
  int iVar4;
  DArrayTy *pDVar4_mg0;
  undefined1 *puVar6;
  DArrayTy *pDVar4_mg2;
  char *pcVar7_mg1;
  uint uVar7;
  char *pcVar7_mg2;
  char *pcVar7_mg3;
  char *pcVar7_mg4;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_70;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  DArrayTy *local_c;
  StartSystemTy *local_8;
  char *puVar5;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x26b,0,iVar4,"%s"
                               ,"StartSystemTy::SetObjectives");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\startsys.cpp",0x26b);
    return;
  }
  if (param_1 != 0) {
    if (g_dArray_0080C4C7 != nullptr) {
      FUN_006b5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)
         Library::Ourlib::MFSARR::mfSarLoad((cMf32 *)param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (g_dArray_0080C4C7 == nullptr) {
      g_dArray_0080C4C7 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    }
    if (g_dArray_0080C4CB != nullptr) {
      FUN_006b5570(g_dArray_0080C4CB);
    }
    if (param_2 != nullptr) {
      g_dArray_0080C4CB = (DArrayTy *)Library::Ourlib::MFSARR::mfSarLoad((cMf32 *)param_1,param_2,0);
    }
    if (g_dArray_0080C4CB == nullptr) {
      g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    }
    this_00 = local_8;
    if ((DArrayTy *)local_8->field_0548 != nullptr) {
      FUN_006b5570((DArrayTy *)local_8->field_0548);
    }
    pDVar4_mg0 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    this_00->field_0548 = &pDVar4_mg0->flags;
    iVar4 = 0;
    if (0 < (int)g_dArray_0080C4CB->elementSize) {
      if ((int)g_dArray_0080C4CB->elementSize < 1) {
        pcVar8 = nullptr;
        goto LAB_005dc828;
      }
      do {
        pcVar8 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar4 * 4);
LAB_005dc828:
        thunk_FUN_005411a0((DArrayTy *)this_00->field_0548,pcVar8,"@- %s");
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)g_dArray_0080C4CB->elementSize);
    }
    pcVar1 = this_00->field_0034;
    pcVar1->field_007E = 1;
    puVar6 = &pcVar1->field_0x9e;
    *(undefined2 *)puVar6 = 0;
    *puVar6 = DAT_007cc854;
    local_c = (DArrayTy *)
              ccFntTy::FormIndentSarr
                        (this_00->field_0034,(DArrayTy *)this_00->field_0548,
                         " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                         this_00->field_0544->field_0004 + -0x14,0,0xffffffff,nullptr,1);
    if ((DArrayTy *)this_00->field_0548 != nullptr) {
      FUN_006b5570((DArrayTy *)this_00->field_0548);
    }
    pDVar4_mg2 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    this_00->field_0548 = &pDVar4_mg2->flags;
    puVar5 = &this_00->field_003C;
    pcVar7_mg1 = LoadResourceString(0x2347,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005DC8DA]: CALL EBX */
    wsprintfA(puVar5,"&2 %s:",pcVar7_mg1);
    Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,puVar5);
    /* ST_CALLSITE[005DC8F7]: CALL EBX */
    wsprintfA(puVar5,"&0 %s",&CHAR_00h_0080c3c3);
    Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,puVar5);
    Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,&CHAR___007c3b5c);
    uVar7 = _DAT_008087c4 & 0xffff;
    uVar10 = (uint)DAT_008087c2;
    pcVar7_mg2 = LoadResourceString(0x2344,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005DC947]: CALL EBX */
    wsprintfA(puVar5,"&2 %s: &0%d&2x&0%d",pcVar7_mg2,uVar10,uVar7);
    Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,puVar5);
    uVar7 = _DAT_008087c4 >> 0x10 & 0xff;
    pcVar7_mg3 = LoadResourceString(0x2345,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005DC97A]: CALL EBX */
    wsprintfA(puVar5,"&2 %s: &0%d",pcVar7_mg3,uVar7);
    Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,puVar5);
    Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,&CHAR___007c3b5c);
    pcVar7_mg4 = LoadResourceString(0x2346,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005DC9B5]: CALL EBX */
    wsprintfA(puVar5,"&2 %s:",pcVar7_mg4);
    Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,puVar5);
    Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,&CHAR___007c3b5c);
    pDVar3 = local_c;
    if (local_c != nullptr) {
      if (local_c->elementSize != 0) {
        ccFntTy::SepColorStrInSarr(this_00->field_0034,&local_c->flags,&local_c->flags);
      }
      iVar4 = 0;
      if (0 < (int)pDVar3->elementSize) {
        if ((int)pDVar3->elementSize < 1) {
          pcVar8 = nullptr;
          goto LAB_005dca07;
        }
        do {
          pcVar8 = *(char **)(pDVar3->growCapacity + iVar4 * 4);
LAB_005dca07:
          Library::DKW::TBL::FUN_006b5aa0((DArrayTy *)this_00->field_0548,pcVar8);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)pDVar3->elementSize);
      }
      FUN_006b5570(pDVar3);
    }
    local_1c = 0x28;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT22((short)this_00->field_0548[2],1);
    if (this_00->field_0389 != 0) {
      SystemClassTy::SendMessage((SystemClassTy *)this_00,2,this_00->field_0389,(int)local_2c);
    }
    local_1c = 0x22;
    local_18 = 0;
    if (this_00->field_0389 != 0) {
      SystemClassTy::SendMessage((SystemClassTy *)this_00,2,this_00->field_0389,(int)local_2c);
    }
    local_1c = 0x20;
    local_18 = (uint)(param_3 != 0);
    if (this_00->field_0389 != 0) {
      SystemClassTy::SendMessage((SystemClassTy *)this_00,2,this_00->field_0389,(int)local_2c);
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}


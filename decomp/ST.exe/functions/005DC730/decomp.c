#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::SetObjectives */

void __thiscall
StartSystemTy::SetObjectives(StartSystemTy *this,int param_1,char *param_2,int param_3)

{
  ccFntTy *pcVar1;
  code *pcVar2;
  StartSystemTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  undefined1 *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_70;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  DArrayTy *local_c;
  StartSystemTy *local_8;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x26b,0,iVar3,"%s"
                               ,"StartSystemTy::SetObjectives");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x26b);
    return;
  }
  if (param_1 != 0) {
    if (g_dArray_0080C4C7 != (DArrayTy *)0x0) {
      FUN_006b5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)
         Library::Ourlib::MFSARR::mfSarLoad((cMf32 *)param_1,PTR_s_DESCRIPTION_0079c1d0,0);
    if (g_dArray_0080C4C7 == (DArrayTy *)0x0) {
      g_dArray_0080C4C7 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    if (g_dArray_0080C4CB != (DArrayTy *)0x0) {
      FUN_006b5570(g_dArray_0080C4CB);
    }
    if (param_2 != (char *)0x0) {
      g_dArray_0080C4CB = (DArrayTy *)Library::Ourlib::MFSARR::mfSarLoad((cMf32 *)param_1,param_2,0)
      ;
    }
    if (g_dArray_0080C4CB == (DArrayTy *)0x0) {
      g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    this_00 = local_8;
    if ((DArrayTy *)local_8->field_0548 != (DArrayTy *)0x0) {
      FUN_006b5570((DArrayTy *)local_8->field_0548);
    }
    pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    this_00->field_0548 = &pDVar4->flags;
    iVar3 = 0;
    if (0 < (int)g_dArray_0080C4CB->elementSize) {
      if ((int)g_dArray_0080C4CB->elementSize < 1) {
        pcVar6 = (char *)0x0;
        goto LAB_005dc828;
      }
      do {
        pcVar6 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar3 * 4);
LAB_005dc828:
        thunk_FUN_005411a0((DArrayTy *)this_00->field_0548,pcVar6,"@- %s");
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)g_dArray_0080C4CB->elementSize);
    }
    pcVar1 = this_00->field_0034;
    pcVar1->field_007E = 1;
    puVar5 = &pcVar1->field_0x9e;
    *(undefined2 *)puVar5 = 0;
    *puVar5 = DAT_007cc854;
    local_c = (DArrayTy *)
              ccFntTy::FormIndentSarr
                        (this_00->field_0034,(DArrayTy *)this_00->field_0548,
                         " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                         this_00->field_0544->field_0004 + -0x14,0,0xffffffff,(char *)0x0,1);
    if ((DArrayTy *)this_00->field_0548 != (DArrayTy *)0x0) {
      FUN_006b5570((DArrayTy *)this_00->field_0548);
    }
    pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    this_00->field_0548 = &pDVar4->flags;
    puVar5 = &this_00->field_0x3c;
    pcVar6 = LoadResourceString(0x2347,g_module_00807618);
    wsprintfA(puVar5,"&2 %s:",pcVar6);
    Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,puVar5);
    wsprintfA(puVar5,"&0 %s",&DAT_0080c3c3);
    Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,puVar5);
    Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,&DAT_007c3b5c);
    uVar7 = DAT_008087c4 & 0xffff;
    uVar9 = (uint)DAT_008087c2;
    pcVar6 = LoadResourceString(0x2344,g_module_00807618);
    wsprintfA(puVar5,"&2 %s: &0%d&2x&0%d",pcVar6,uVar9,uVar7);
    Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,puVar5);
    uVar7 = DAT_008087c4 >> 0x10 & 0xff;
    pcVar6 = LoadResourceString(0x2345,g_module_00807618);
    wsprintfA(puVar5,"&2 %s: &0%d",pcVar6,uVar7);
    Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,puVar5);
    Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,&DAT_007c3b5c);
    pcVar6 = LoadResourceString(0x2346,g_module_00807618);
    wsprintfA(puVar5,"&2 %s:",pcVar6);
    Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,puVar5);
    Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,&DAT_007c3b5c);
    pDVar4 = local_c;
    if (local_c != (DArrayTy *)0x0) {
      if (local_c->elementSize != 0) {
        ccFntTy::SepColorStrInSarr(this_00->field_0034,&local_c->flags,&local_c->flags);
      }
      iVar3 = 0;
      if (0 < (int)pDVar4->elementSize) {
        if ((int)pDVar4->elementSize < 1) {
          pcVar6 = (char *)0x0;
          goto LAB_005dca07;
        }
        do {
          pcVar6 = *(char **)(pDVar4->growCapacity + iVar3 * 4);
LAB_005dca07:
          Library::DKW::TBL::FUN_006b5aa0(this_00->field_0548,pcVar6);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)pDVar4->elementSize);
      }
      FUN_006b5570(pDVar4);
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


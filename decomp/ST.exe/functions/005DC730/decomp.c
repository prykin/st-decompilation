#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::SetObjectives */

void __thiscall
StartSystemTy::SetObjectives(StartSystemTy *this,int param_1,char *param_2,int param_3)

{
  ccFntTy *pcVar1;
  code *pcVar2;
  AnonShape_006B5570_4D68B99C *pAVar3;
  StartSystemTy *this_00;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_70;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  AnonShape_006B5570_4D68B99C *local_c;
  StartSystemTy *local_8;

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
    if (PTR_0080c4c7 != (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4c7);
    }
    PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                   Library::Ourlib::MFSARR::mfSarLoad((cMf32 *)param_1,PTR_s_DESCRIPTION_0079c1d0,0)
    ;
    if (PTR_0080c4c7 == (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                     Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
    }
    if (param_2 != (char *)0x0) {
      PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                     Library::Ourlib::MFSARR::mfSarLoad((cMf32 *)param_1,param_2,0);
    }
    if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                     Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    this_00 = local_8;
    if ((AnonShape_006B5570_4D68B99C *)local_8->field_0548 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_8->field_0548);
    }
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_00->field_0548 = puVar5;
    iVar4 = 0;
    if (0 < PTR_0080c4cb->field_0008) {
      if (PTR_0080c4cb->field_0008 < 1) {
        pcVar7 = (char *)0x0;
        goto LAB_005dc828;
      }
      do {
        pcVar7 = *(char **)(PTR_0080c4cb->field_0014 + iVar4 * 4);
LAB_005dc828:
        thunk_FUN_005411a0((uint *)this_00->field_0548,pcVar7,"@- %s");
        iVar4 = iVar4 + 1;
      } while (iVar4 < PTR_0080c4cb->field_0008);
    }
    pcVar1 = this_00->field_0034;
    pcVar1->field_007E = 1;
    puVar6 = &pcVar1->field_0x9e;
    *(undefined2 *)puVar6 = 0;
    *puVar6 = DAT_007cc854;
    local_c = (AnonShape_006B5570_4D68B99C *)
              ccFntTy::FormIndentSarr
                        (this_00->field_0034,(uint *)this_00->field_0548," ,.;:!?/\\()[]{}",
                         (uint *)&DAT_007c21ec,this_00->field_0544->field_0004 + -0x14,0,0xffffffff,
                         (char *)0x0,1);
    if ((AnonShape_006B5570_4D68B99C *)this_00->field_0548 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_00->field_0548);
    }
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_00->field_0548 = puVar5;
    puVar6 = &this_00->field_0x3c;
    pcVar7 = LoadResourceString(0x2347,HINSTANCE_00807618);
    wsprintfA(puVar6,"&2 %s:",pcVar7);
    Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,puVar6);
    wsprintfA(puVar6,"&0 %s",&DAT_0080c3c3);
    Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,puVar6);
    Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,&DAT_007c3b5c);
    uVar8 = DAT_008087c4 & 0xffff;
    uVar10 = (uint)DAT_008087c2;
    pcVar7 = LoadResourceString(0x2344,HINSTANCE_00807618);
    wsprintfA(puVar6,"&2 %s: &0%d&2x&0%d",pcVar7,uVar10,uVar8);
    Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,puVar6);
    uVar8 = DAT_008087c4 >> 0x10 & 0xff;
    pcVar7 = LoadResourceString(0x2345,HINSTANCE_00807618);
    wsprintfA(puVar6,"&2 %s: &0%d",pcVar7,uVar8);
    Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,puVar6);
    Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,&DAT_007c3b5c);
    pcVar7 = LoadResourceString(0x2346,HINSTANCE_00807618);
    wsprintfA(puVar6,"&2 %s:",pcVar7);
    Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,puVar6);
    Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,&DAT_007c3b5c);
    pAVar3 = local_c;
    if (local_c != (AnonShape_006B5570_4D68B99C *)0x0) {
      if (local_c->field_0008 != 0) {
        ccFntTy::SepColorStrInSarr(this_00->field_0034,(uint *)local_c,(uint *)local_c);
      }
      iVar4 = 0;
      if (0 < (int)pAVar3->field_0008) {
        if ((int)pAVar3->field_0008 < 1) {
          pcVar7 = (char *)0x0;
          goto LAB_005dca07;
        }
        do {
          pcVar7 = *(char **)(pAVar3->field_0014 + iVar4 * 4);
LAB_005dca07:
          Library::DKW::TBL::FUN_006b5aa0((uint *)this_00->field_0548,pcVar7);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)pAVar3->field_0008);
      }
      FUN_006b5570(pAVar3);
    }
    local_1c = 0x28;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT22(*(undefined2 *)(this_00->field_0548 + 8),1);
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


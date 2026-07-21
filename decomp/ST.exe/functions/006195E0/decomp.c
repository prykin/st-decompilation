#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::LoadImagJMine */

undefined4 __thiscall STJumpMineC::LoadImagJMine(STJumpMineC *this,int param_1)

{
  code *pcVar1;
  int errorCode;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  STJumpMineC *pSVar6;
  InternalExceptionFrame local_4c;
  STJumpMineC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar6 = local_8;
  if (errorCode == 0) {
    if (param_1 == 1) {
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,s_jmpmine_007d00d4,0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      pSVar6 = local_8;
      puVar5 = &local_8->field_0097;
      FUN_006e8660(PTR_00807598,(int *)puVar5,1,0,*(uint *)((int)puVar2 + 9),
                   *(uint *)((int)puVar2 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(PTR_00807598,*puVar5,0,*(undefined4 *)puVar2,*(int *)((int)puVar2 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar5,0,pSVar6->field_00AB);
      uVar4 = *(undefined4 *)puVar2;
      pSVar6->field_009B = puVar2;
      pSVar6->field_00AF = uVar4;
      if (DAT_00807326 != '\0') {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                  ((AnonReceiver_004248D0 *)PTR_00807598,*puVar5,0,0x401109,
                   (uint)&pSVar6->field_0x4d);
      }
    }
    else {
      puVar5 = &local_8->field_0097;
      if (-1 < (int)local_8->field_0097) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                  ((AnonReceiver_004248D0 *)PTR_00807598,local_8->field_0097,0,0,(uint)local_8);
        FUN_006e8ba0(PTR_00807598,*puVar5);
      }
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,s_exptme_007d00dc,0xffffffff,0,1,0,(undefined4 *)0x0)
      ;
      FUN_006e8660(PTR_00807598,(int *)puVar5,3,0,*(uint *)((int)puVar2 + 9),
                   *(uint *)((int)puVar2 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(PTR_00807598,*puVar5,0,*(undefined4 *)puVar2,*(int *)((int)puVar2 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar5,0,pSVar6->field_00AB);
      pSVar6->field_00AF = *(undefined4 *)puVar2;
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,s_expmask2_007d00e4,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      FUN_006e98e0(PTR_00807598,*puVar5,1,*(undefined4 *)puVar2,*(int *)((int)puVar2 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar5,1,pSVar6->field_00BC);
      FUN_006ea800(PTR_00807598,*puVar5,1,1);
      FUN_006ea790(PTR_00807598,*puVar5,DAT_008032b8,0x10);
      pSVar6->field_00C0 = *(undefined4 *)puVar2;
      pSVar6->field_00BB = 1;
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,s_bulb_n4_007d00f0,0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      FUN_006e98e0(PTR_00807598,*puVar5,2,*(undefined4 *)puVar2,*(int *)((int)puVar2 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar5,2,pSVar6->field_00B7);
      FUN_006e9d40(PTR_00807598,(uint *)*puVar5,2);
      pSVar6->field_00B3 = *(undefined4 *)puVar2;
    }
    FUN_006ea960(PTR_00807598,*puVar5,(float)pSVar6->field_009F * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar6->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar6->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(PTR_00807598,*puVar5,0);
    pSVar6->field_00C4 = 1;
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_nick_to_jump_mine_cp_007d0100,0x151,0,errorCode,
                             &DAT_007a4ccc,s_STJumpMineC__LoadImagJMine_007d0144);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_nick_to_jump_mine_cp_007d0100,0x153);
  return 0xffff;
}


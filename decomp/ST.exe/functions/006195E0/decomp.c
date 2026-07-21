#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::LoadImagJMine */

undefined4 __thiscall STJumpMineC::LoadImagJMine(STJumpMineC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  STJumpMineC *pSVar7;
  InternalExceptionFrame local_4c;
  STJumpMineC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar7 = local_8;
  if (iVar2 == 0) {
    if (param_1 == 1) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,"jmpmine",0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      pSVar7 = local_8;
      puVar6 = &local_8->field_0097;
      FUN_006e8660(PTR_00807598,(int *)puVar6,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(PTR_00807598,*puVar6,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar6,0,pSVar7->field_00AB);
      iVar2 = *(int *)puVar3;
      pSVar7->field_009B = puVar3;
      pSVar7->field_00AF = iVar2;
      if (DAT_00807326 != '\0') {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                  ((AnonReceiver_004248D0 *)PTR_00807598,*puVar6,0,0x401109,
                   (uint)&pSVar7->field_0x4d);
      }
    }
    else {
      puVar6 = &local_8->field_0097;
      if (-1 < (int)local_8->field_0097) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                  ((AnonReceiver_004248D0 *)PTR_00807598,local_8->field_0097,0,0,(uint)local_8);
        FUN_006e8ba0(PTR_00807598,*puVar6);
      }
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,"exptme",0xffffffff,0,1,0,(undefined4 *)0x0)
      ;
      FUN_006e8660(PTR_00807598,(int *)puVar6,3,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(PTR_00807598,*puVar6,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar6,0,pSVar7->field_00AB);
      pSVar7->field_00AF = *(int *)puVar3;
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,"expmask2",0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      FUN_006e98e0(PTR_00807598,*puVar6,1,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar6,1,pSVar7->field_00BC);
      FUN_006ea800(PTR_00807598,*puVar6,1,1);
      FUN_006ea790(PTR_00807598,*puVar6,DAT_008032b8,0x10);
      pSVar7->field_00C0 = *(undefined4 *)puVar3;
      pSVar7->field_00BB = 1;
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,"bulb_n4",0xffffffff,0,1,0,(undefined4 *)0x0
                         );
      FUN_006e98e0(PTR_00807598,*puVar6,2,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,*puVar6,2,pSVar7->field_00B7);
      FUN_006e9d40(PTR_00807598,(uint *)*puVar6,2);
      pSVar7->field_00B3 = *(int *)puVar3;
    }
    FUN_006ea960(PTR_00807598,*puVar6,(float)pSVar7->field_009F * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar7->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
                 (float)pSVar7->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(PTR_00807598,*puVar6,0);
    pSVar7->field_00C4 = 1;
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_jump_mine.cpp",0x151,0,iVar2,"%s"
                             ,"STJumpMineC::LoadImagJMine");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\nick\\to_jump_mine.cpp",0x153);
  return 0xffff;
}


#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::SwitchTV */

void __thiscall CPanelTy::SwitchTV(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *this_00;
  uint uVar2;
  undefined1 *puVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_58;
  byte local_14;
  undefined3 uStack_13;
  CPanelTy *local_10;
  uint local_c;
  undefined1 *local_8;

  if (param_1 == 0) {
    local_8 = &this->field_0C51;
  }
  else {
    local_8 = &this->field_0B63;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT31(local_c._1_3_,param_1 == 0);
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  puVar3 = local_8;
  uVar2 = local_c;
  this_00 = local_10;
  if (iVar5 == 0) {
    uVar8 = local_c & 0xff;
    if ((&local_10->field_02EC)[uVar8] == '\x01') {
      puVar11 = (undefined4 *)0x0;
      iVar10 = 0;
      iVar5 = 1;
      bVar4 = 0;
      uVar9 = 6;
      if (DAT_0080731a != 0) {
        pcVar6 = thunk_FUN_00526100(local_8,1);
        puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_1F,pcVar6,uVar9,bVar4,iVar5,iVar10,puVar11);
        (&this_00->field_02E2)[uVar8] = puVar7;
        (&this_00->field_02EC)[uVar8] = 5;
        (&this_00->field_02EA)[uVar8] = 0;
        pcVar6 = thunk_FUN_00526100(puVar3,0);
        *(char **)(&this_00->field_0x2f6 + uVar8 * 4) = pcVar6;
        thunk_FUN_005252c0(0xb3);
        g_currentExceptionFrame = local_58.previous;
        return;
      }
      pcVar6 = thunk_FUN_00526100(local_8,0);
      puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_1F,pcVar6,uVar9,bVar4,iVar5,iVar10,puVar11);
      (&this_00->field_02E2)[uVar8] = puVar7;
      (&this_00->field_02EA)[uVar8] = 0;
      thunk_FUN_004f1890(this_00,(byte)uVar2);
      bVar4 = (-(param_1 != 0) & 0xf8U) + 8;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_14 = CONCAT31(uStack_13,bVar4);
      if (bVar4 < 0xb) {
        if (-1 < (&this_00->field_0148)[bVar4]) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,(&this_00->field_0148)[bVar4],0xffffffff,
                     (&this_00->field_003C)[bVar4],(&this_00->field_0094)[bVar4]);
        }
      }
    }
    else if ((&local_10->field_02EC)[uVar8] == '\x05') {
      pcVar6 = thunk_FUN_00526100(local_8,0);
      *(char **)(&this_00->field_0x2f6 + uVar8 * 4) = pcVar6;
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0xd3,0,iVar5,"%s",
                              "CPanelTy::SwitchTV");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0xd3);
  return;
}


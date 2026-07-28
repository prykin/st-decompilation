#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::SwitchTV

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::SwitchTV(CPanelTy *this,int param_1)

{
  char cVar1;
  code *pcVar2;
  CPanelTy *this_00;
  uint uVar3;
  undefined1 *puVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  puVar4 = local_8;
  uVar3 = local_c;
  this_00 = local_10;
  if (iVar6 == 0) {
    uVar9 = local_c & 0xff;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cVar1 = *(char *)((int)local_10->field_0308 + (uVar9 - 0x1c));
    if (cVar1 == '\x01') {
      puVar12 = (undefined4 *)0x0;
      iVar11 = 0;
      iVar6 = 1;
      bVar5 = 0;
      uVar10 = 6;
      if (DAT_0080731a != 0) {
        pcVar7 = thunk_FUN_00526100(local_8,1);
        puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_1F,pcVar7,uVar10,bVar5,iVar6,iVar11,puVar12);
        *(ushort **)((int)this_00->field_0308 + uVar9 * 4 + -0x26) = puVar8;
        *(undefined1 *)((int)this_00->field_0308 + (uVar9 - 0x1c)) = 5;
        *(undefined1 *)((int)this_00->field_0308 + (uVar9 - 0x1e)) = 0;
        pcVar7 = thunk_FUN_00526100(puVar4,0);
        *(char **)((int)this_00->field_0308 + uVar9 * 4 + -0x12) = pcVar7;
        thunk_FUN_005252c0(0xb3);
        g_currentExceptionFrame = local_58.previous;
        return;
      }
      pcVar7 = thunk_FUN_00526100(local_8,0);
      puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_1F,pcVar7,uVar10,bVar5,iVar6,iVar11,puVar12);
      *(ushort **)((int)this_00->field_0308 + uVar9 * 4 + -0x26) = puVar8;
      *(undefined1 *)((int)this_00->field_0308 + (uVar9 - 0x1e)) = 0;
      thunk_FUN_004f1890(this_00,(byte)uVar3);
      bVar5 = (-(param_1 != 0) & 0xf8U) + 8;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_14 = CONCAT31(uStack_13,bVar5);
      if (bVar5 < 0xb) {
        if (-1 < (int)this_00->field_0148[bVar5]) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[bVar5],0xffffffff,
                     (&this_00->field_003C)[bVar5],(&this_00->field_0094)[bVar5]);
        }
      }
    }
    else if (cVar1 == '\x05') {
      pcVar7 = thunk_FUN_00526100(local_8,0);
      *(char **)((int)this_00->field_0308 + uVar9 * 4 + -0x12) = pcVar7;
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0xd3,0,iVar6,"%s",
                              "CPanelTy::SwitchTV");
  if (iVar11 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0xd3);
  return;
}


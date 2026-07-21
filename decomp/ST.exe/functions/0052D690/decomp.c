#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeNumStr */

void __thiscall PopUpTy::ChangeNumStr(PopUpTy *this)

{
  AnonPointee_PopUpTy_0090 *pAVar1;
  code *pcVar2;
  PopUpTy *this_00;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  char *resourceString;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x7e,0,iVar4,&DAT_007a4ccc,
                               s_PopUpTy__ChangeNumStr_007c6ff4);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x7e);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pAVar1 = local_18->field_0090;
  uVar9 = pAVar1->field_0014;
  if (uVar9 == 0) {
    uVar9 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar1->field_0008;
  }
  puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar5 = 0x89898989;
    puVar5 = puVar5 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  local_c = 0x1e;
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar5 = 0x89;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  local_10 = -0x18 - (int)this_00;
  local_14 = 0;
  puVar10 = &this_00->field_0018;
  do {
    iVar4 = local_14;
    if ((DAT_00807342 == 0) || (DAT_00807346 <= (byte)local_8)) {
LAB_0052d7d4:
      puVar10[0xf] = 0;
      FUN_006b2800((int)DAT_008075a8,*puVar10,0,0x13);
      FUN_006b3af0(DAT_008075a8,*puVar10);
    }
    else {
      iVar6 = this_00->field_0098;
      if (local_14 < *(int *)(iVar6 + 8)) {
        iVar8 = *(int *)(*(int *)(iVar6 + 0x14) + local_10 + (int)puVar10);
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 == 0) goto LAB_0052d7d4;
      if (local_14 < *(int *)(iVar6 + 8)) {
        resourceString = *(char **)(*(int *)(iVar6 + 0x14) + local_10 + (int)puVar10);
      }
      else {
        resourceString = (char *)0x0;
      }
      uVar7 = FUN_00711110(this_00->field_0094,resourceString);
      uVar9 = this_00->field_0090->field_0004;
      if ((int)uVar9 <= (int)uVar7) {
        uVar7 = uVar9;
      }
      puVar10[0xf] = uVar7;
      FUN_006b2800((int)DAT_008075a8,*puVar10,uVar7,0x13);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar10,0xffffffff,0xd,local_c);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar10);
    }
    bVar3 = (byte)local_8 + 1;
    local_14 = iVar4 + 1;
    puVar10 = puVar10 + 1;
    local_c = local_c + 0x13;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = CONCAT31(local_8._1_3_,bVar3);
    if (0xe < bVar3) {
      iVar4 = *(int *)(this_00->field_0098 + 8);
      bVar3 = DAT_00807346;
      if (iVar4 < (int)(uint)DAT_00807346) {
        bVar3 = (byte)iVar4;
      }
      this_00->field_009C = bVar3;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = (uint)local_8._1_3_ << 8;
      if (DAT_00807346 != 0) {
        do {
          if ((int)(local_8 & 0xff) < *(int *)(this_00->field_0098 + 8)) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar4 = *(int *)(*(int *)(this_00->field_0098 + 0x14) + (local_8 & 0xff) * 4);
          }
          else {
            iVar4 = 0;
          }
          if (iVar4 != 0) {
            OutStr(this_00,local_8);
          }
          bVar3 = (byte)local_8 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < DAT_00807346);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}


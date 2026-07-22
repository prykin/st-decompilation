#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::RestoreSpr */

void __thiscall
STT3DSprC::RestoreSpr(STT3DSprC *this,int *param_1,AnonShape_004AD790_77673787 *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  char cVar3;
  code *pcVar4;
  STT3DSprC *this_00;
  AnonShape_004ADBA0_0D812343 *pAVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  InternalExceptionFrame local_68;
  STT3DSprC *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  AnonShape_004ADBA0_0D812343 *local_10;
  char local_c;
  undefined3 uStack_b;
  int local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_24;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x43d,0,iVar6,"%s",
                               "STT3DSprC::RestoreSpr");
    if (iVar6 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_24->field_0004 = *(undefined4 *)param_2;
  local_24->field_0008 = *(undefined4 *)&param_2->field_0x4;
  local_24->field_0010 = param_2->field_0x8;
  local_24->field_0011 = param_2->field_0009;
  local_24->field_0012 = param_2->field_000A;
  local_24->field_000C = param_2->field_000B;
  local_24->field_0014 = param_2->field_000F;
  local_24->field_0024 = param_2->field_0013;
  local_24->field_0028 = param_2->field_0017;
  local_24->field_002C = param_2->field_001B;
  local_24->field_0013 = param_2->field_001F;
  local_24->field_0030 = *(undefined4 *)(param_2 + 1);
  local_24->field_0038 = param_1[6];
  sub_004AD3C0(local_24,(float)local_24->field_0024,(float)local_24->field_0028,
               (float)local_24->field_002C);
  FUN_006e9830(this_00->field_003C,this_00->field_0018,this_00->field_0004,this_00->field_0008);
  if (param_1[1] != 0) {
    sub_004ACE30(this_00,param_1[1],param_1[2]);
  }
  if (param_1[3] != 0) {
    sub_004ACEF0(this_00,param_1[3]);
  }
  if (param_1[4] != 0) {
    sub_004ACF20(this_00,param_1[4],param_1[5]);
  }
  local_10 = (AnonShape_004ADBA0_0D812343 *)&param_2[1].field_0x4;
  iVar6 = this_00->field_0014;
  local_1c = (char *)((int)local_10 + iVar6 * 0x24);
  iVar10 = iVar6;
  local_14 = local_1c;
  if (0 < iVar6) {
    do {
      local_18 = iVar10;
      uVar7 = 0xffffffff;
      pcVar8 = local_14;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      local_14 = local_14 + ~uVar7;
      local_18 = local_18 + -1;
      iVar10 = local_18;
    } while (local_18 != 0);
  }
  local_8 = 0;
  if (0 < iVar6) {
    local_18 = 0;
    do {
      iVar6 = -1;
      local_20 = 0;
      pcVar8 = local_1c;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      if (iVar6 != -2) {
        *(undefined1 *)(local_18 + 0xc + this_00->field_0020) = local_10->field_0x4;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        LoadSequence(this_00,(byte)local_8,*(int **)(*param_1 + local_8 * 4),local_1c,
                     *(byte *)(local_18 + 0xc + this_00->field_0020));
        pAVar5 = local_10;
        local_20 = *(uint *)local_10 << 2;
        pcVar8 = local_14;
        pcVar9 = *(char **)(local_18 + 4 + this_00->field_0020);
        for (uVar7 = *(uint *)local_10 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        *(undefined4 *)(local_18 + 0x10 + this_00->field_0020) = local_10->field_000B;
        *(undefined4 *)(local_18 + 0x14 + this_00->field_0020) = local_10->field_000F;
        *(undefined4 *)(local_18 + 0x18 + this_00->field_0020) = local_10->field_0013;
        *(undefined4 *)(local_18 + 0x20 + this_00->field_0020) = local_10->field_001B;
        StartShow(this_00,(byte)local_8,local_10->field_0017);
        if (pAVar5->field_0x5 == '\0') {
          StopShow(this_00,(byte)local_8);
        }
      }
      iVar6 = local_18;
      if (local_10->field_0006 == '\0') {
        puVar2 = (ushort *)(local_18 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        pbVar1 = (byte *)(local_18 + 0xe + this_00->field_0020);
        *pbVar1 = *pbVar1 | 1;
      }
      *(undefined1 *)(local_18 + 0xd + this_00->field_0020) = local_10->field_0007;
      if (local_10->field_0x8 == '\0') {
        puVar2 = (ushort *)(local_18 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfffd;
      }
      else {
        pbVar1 = (byte *)(local_18 + 0xe + this_00->field_0020);
        *pbVar1 = *pbVar1 | 2;
      }
      if (local_10->field_0009 == '\0') {
        puVar2 = (ushort *)(local_18 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfdff;
      }
      else {
        pbVar1 = (byte *)(local_18 + 0xf + this_00->field_0020);
        *pbVar1 = *pbVar1 | 2;
      }
      if (local_10->field_000A == '\0') {
        puVar2 = (ushort *)(local_18 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfffb;
      }
      else {
        pbVar1 = (byte *)(local_18 + 0xe + this_00->field_0020);
        *pbVar1 = *pbVar1 | 4;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,(char)local_8);
      if (local_10->field_001F == '\0') {
        sub_004ACE60(this_00,(char)local_8);
      }
      else {
        thunk_FUN_004aceb0(this_00,(char)local_8);
      }
      pAVar5 = local_10;
      if (*(char *)(local_10 + 1) == '\x01') {
        sub_004ACF50(this_00,(char)_local_c);
      }
      else {
        sub_004ACF90(this_00,(char)_local_c);
      }
      if (pAVar5[1].field_0x1 == '\x01') {
        sub_004ACFE0(this_00,(char)_local_c);
      }
      else {
        sub_004AD020(this_00,(char)_local_c);
      }
      if (pAVar5[1].field_0x2 == '\x01') {
        sub_004AD070(this_00,(byte)_local_c);
      }
      if (pAVar5[1].field_0x3 == '\0') {
        puVar2 = (ushort *)(iVar6 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfeff;
      }
      else {
        pbVar1 = (byte *)(iVar6 + 0xf + this_00->field_0020);
        *pbVar1 = *pbVar1 | 1;
      }
      local_10 = (AnonShape_004ADBA0_0D812343 *)&pAVar5[1].field_0x4;
      uVar7 = 0xffffffff;
      pcVar8 = local_1c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      local_18 = iVar6 + 0x24;
      local_1c = local_1c + ~uVar7;
      local_14 = local_14 + local_20;
      local_8 = local_8 + 1;
    } while (local_8 < this_00->field_0014);
  }
  if ((-1 < this_00->field_000C) && (iVar6 = 0, 0 < this_00->field_0014)) {
    iVar10 = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(byte *)(this_00->field_0020 + 0xf + iVar10) & 1) != 0) {
        FUN_006e93c0(this_00->field_003C,this_00->field_0018,iVar6,this_00->field_000C);
      }
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar6 < this_00->field_0014);
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}


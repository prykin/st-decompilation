#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::RestoreSpr

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=17, used=0), and
   decompilation contains no value return */

void __thiscall
STT3DSprC::RestoreSpr(STT3DSprC *this,int *param_1,AnonShape_004AD790_77673787 *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  char cVar3;
  STT3DSprC *this_00;
  AnonShape_004ADBA0_0D812343 *pAVar5;
  int local_EAX_35;
  int iVar6;
  uint uVar6;
  int iVar7;
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
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_24;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x43d,0,local_EAX_35,
                               "%s","STT3DSprC::RestoreSpr");
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
  /* ST_CALLSITE[004ADC37]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  sub_004AD3C0(local_24,(float)local_24->field_0024,(float)local_24->field_0028,
               (float)local_24->field_002C);
  Library::Ourlib::ST3DSMAP::SprSetHotSpot
            (this_00->field_003C,this_00->field_0018,this_00->field_0004,this_00->field_0008);
  if (param_1[1] != 0) {
    /* ST_CALLSITE[004ADC5E]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
    sub_004ACE30(this_00,param_1[1],param_1[2]);
  }
  if ((ushort *)param_1[3] != nullptr) {
    /* ST_CALLSITE[004ADC6D]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
    sub_004ACEF0(this_00,(ushort *)param_1[3]);
  }
  if ((ushort *)param_1[4] != nullptr) {
    /* ST_CALLSITE[004ADC80]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    sub_004ACF20(this_00,(ushort *)param_1[4],param_1[5]);
  }
  local_10 = (AnonShape_004ADBA0_0D812343 *)&param_2[1].field_0x4;
  iVar7 = this_00->field_0014;
  local_1c = (char *)((int)local_10 + iVar7 * 0x24);
  iVar10 = iVar7;
  local_14 = local_1c;
  if (0 < iVar7) {
    do {
      local_18 = iVar10;
      uVar6 = 0xffffffff;
      pcVar8 = local_14;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      local_14 = local_14 + ~uVar6;
      local_18 = local_18 + -1;
      iVar10 = local_18;
    } while (local_18 != 0);
  }
  local_8 = 0;
  if (0 < iVar7) {
    local_18 = 0;
    do {
      iVar7 = -1;
      local_20 = 0;
      pcVar8 = local_1c;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      if (iVar7 != -2) {
        (&this_00->field_0020->field_0xc)[local_18] = local_10->field_0x4;
        /* ST_CALLSITE[004ADD18]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        LoadSequence(this_00,(byte)local_8,*(int **)(*param_1 + local_8 * 4),local_1c,
                     (&this_00->field_0020->field_0xc)[local_18]);
        pAVar5 = local_10;
        local_20 = *(uint *)local_10 << 2;
        pcVar8 = local_14;
        pcVar9 = *(char **)(&this_00->field_0020->field_0x4 + local_18);
        for (uVar6 = *(uint *)local_10 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        *(undefined4 *)(&this_00->field_0020->field_0x10 + local_18) = local_10->field_000B;
        *(undefined4 *)(&this_00->field_0020->field_0x14 + local_18) = local_10->field_000F;
        *(undefined4 *)(&this_00->field_0020->field_0x18 + local_18) = local_10->field_0013;
        *(undefined4 *)(&this_00->field_0020->field_0x20 + local_18) = local_10->field_001B;
        /* ST_CALLSITE[004ADD78]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        StartShow(this_00,(byte)local_8,local_10->field_0017);
        if (pAVar5->field_0x5 == '\0') {
          /* ST_CALLSITE[004ADD8A]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          StopShow(this_00,(byte)local_8);
        }
      }
      iVar7 = local_18;
      if (local_10->field_0006 == '\0') {
        puVar2 = (ushort *)(&this_00->field_0020->field_0xe + local_18);
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xe + local_18;
        *pbVar1 = *pbVar1 | 1;
      }
      (&this_00->field_0020->field_0xd)[local_18] = local_10->field_0007;
      if (local_10->field_0x8 == '\0') {
        puVar2 = (ushort *)(&this_00->field_0020->field_0xe + local_18);
        *puVar2 = *puVar2 & 0xfffd;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xe + local_18;
        *pbVar1 = *pbVar1 | 2;
      }
      if (local_10->field_0009 == '\0') {
        puVar2 = (ushort *)(&this_00->field_0020->field_0xe + local_18);
        *puVar2 = *puVar2 & 0xfdff;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xf + local_18;
        *pbVar1 = *pbVar1 | 2;
      }
      if (local_10->field_000A == '\0') {
        puVar2 = (ushort *)(&this_00->field_0020->field_0xe + local_18);
        *puVar2 = *puVar2 & 0xfffb;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xe + local_18;
        *pbVar1 = *pbVar1 | 4;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,(char)local_8);
      if (local_10->field_001F == '\0') {
        /* ST_CALLSITE[004ADE3B]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        sub_004ACE60(this_00,(char)local_8);
      }
      else {
        thunk_FUN_004aceb0(this_00,(char)local_8);
      }
      pAVar5 = local_10;
      if (((char *)local_10)[1] == '\x01') {
        /* ST_CALLSITE[004ADE56]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
        sub_004ACF50(this_00,(char)_local_c);
      }
      else {
        /* ST_CALLSITE[004ADE63]: CALL 0x0040461f; direct=0040461F STT3DSprC::sub_004ACF90 */
        sub_004ACF90(this_00,(char)_local_c);
      }
      if (pAVar5[1].field_0001 == '\x01') {
        /* ST_CALLSITE[004ADE74]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
        sub_004ACFE0(this_00,(char)_local_c);
      }
      else {
        /* ST_CALLSITE[004ADE81]: CALL 0x00401951; direct=00401951 STT3DSprC::sub_004AD020 */
        sub_004AD020(this_00,(char)_local_c);
      }
      if (pAVar5[1].field_0x2 == '\x01') {
        /* ST_CALLSITE[004ADE92]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
        sub_004AD070(this_00,(byte)_local_c);
      }
      if (pAVar5[1].field_0x3 == '\0') {
        puVar2 = (ushort *)(&this_00->field_0020->field_0xe + iVar7);
        *puVar2 = *puVar2 & 0xfeff;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xf + iVar7;
        *pbVar1 = *pbVar1 | 1;
      }
      local_10 = (AnonShape_004ADBA0_0D812343 *)&pAVar5[1].field_0x4;
      uVar6 = 0xffffffff;
      pcVar8 = local_1c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      local_18 = iVar7 + 0x24;
      local_1c = local_1c + ~uVar6;
      local_14 = local_14 + local_20;
      local_8 = local_8 + 1;
    } while (local_8 < this_00->field_0014);
  }
  if ((-1 < this_00->field_000C) && (iVar7 = 0, 0 < this_00->field_0014)) {
    iVar10 = 0;
    do {
      if (((&this_00->field_0020->field_0xf)[iVar10] & 1) != 0) {
        FUN_006e93c0(this_00->field_003C,this_00->field_0018,iVar7,this_00->field_000C);
      }
      iVar7 = iVar7 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar7 < this_00->field_0014);
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}


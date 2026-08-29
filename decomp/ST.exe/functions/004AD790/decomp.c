#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SaveSpr */

undefined4 * __thiscall STT3DSprC::SaveSpr(STT3DSprC *this,uint *param_1)

{
  char cVar1;
  STT3DSprC *this_00;
  int local_EAX_35;
  int iVar4;
  uint uVar5;
  int iVar3;
  uint *puVar6;
  uint uVar7;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  RecoveredRecordView_004AD790_D4DB5A31 *pRVar13;
  InternalExceptionFrame local_60;
  char *local_1c;
  STT3DSprC *local_18;
  RecoveredRecordView_004AD790_D4DB5A31 *local_14;
  int local_10;
  char *local_c;
  int local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_18 = this;

  local_EAX_35 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_60.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x3da,0,local_EAX_35,
                               "%s","STT3DSprC::SaveSpr");
    if (iVar3 == 0) {
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar10 = 0;
  *param_1 = (local_18->field_0014 + 1) * 0x24;
  if (0 < local_18->field_0014) {
    local_c = nullptr;
    do {
      /* ST_CALLSITE[004AD7E4]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar4 = sub_004ACD30(this_00,(char)iVar10);
      uVar9 = *param_1 + iVar4 * 4;
      *param_1 = uVar9;
      pcVar11 = *(char **)(&this_00->field_0020->field_0x8 + (int)local_c);
      if (pcVar11 == nullptr) {
        *param_1 = uVar9 + 1;
      }
      else {
        uVar7 = 0xffffffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        *param_1 = ~uVar7 + uVar9;
      }
      iVar10 = iVar10 + 1;
      local_c = (char *)((int)local_c + 0x24);
    } while (iVar10 < this_00->field_0014);
  }

  local_14 = Library::DKW::LIB::MemAlloc(*param_1);
  uVar9 = *param_1;
  pRVar13 = local_14;
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pRVar13 = 0;
    pRVar13 = (RecoveredRecordView_004AD790_D4DB5A31 *)&pRVar13->field_0x4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)pRVar13 = 0;
    pRVar13 = (RecoveredRecordView_004AD790_D4DB5A31 *)&pRVar13->field_0x1;
  }
  pcVar11 = &local_14[1].field_0x4;
  *(undefined4 *)local_14 = this_00->field_0004;
  *(undefined4 *)&local_14->field_0x4 = this_00->field_0008;
  local_14->field_0x8 = this_00->field_0010;
  local_14->field_0009 = this_00->field_0011;
  local_14->field_000A = this_00->field_0012;
  local_14->field_000B = this_00->field_000C;
  local_14->field_000F = this_00->field_0014;
  local_14->field_0013 = this_00->field_0024;
  local_14->field_0017 = this_00->field_0028;
  local_14->field_001B = this_00->field_002C;
  local_14->field_001F = this_00->field_0013;
  *(undefined4 *)(local_14 + 1) = this_00->field_0030;
  local_8 = 0;
  if (0 < this_00->field_0014) {
    iVar10 = 0;
    pcVar12 = pcVar11;
    local_c = pcVar11;
    do {
      /* ST_CALLSITE[004AD8B3]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      uVar5 = sub_004ACD30(this_00,(char)local_8);
      *(undefined4 *)pcVar12 = uVar5;
      pcVar11 = pcVar12 + 0x24;
      pcVar12[4] = (&this_00->field_0020->field_0xc)[iVar10];
      pcVar12[5] = (byte)(this_00->field_001C >> ((byte)local_8 & 0x1f)) & 1;
      pcVar12[6] = (&this_00->field_0020->field_0xe)[iVar10] & 1;
      pcVar12[7] = (&this_00->field_0020->field_0xd)[iVar10];
      pcVar12[8] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 1 & 1;
      pcVar12[9] = (byte)((ushort)*(undefined2 *)(&this_00->field_0020->field_0xe + iVar10) >> 9) &
                   1;
      pcVar12[10] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 2 & 1;
      *(undefined4 *)(pcVar12 + 0xb) = *(undefined4 *)(&this_00->field_0020->field_0x10 + iVar10);
      *(undefined4 *)(pcVar12 + 0xf) = *(undefined4 *)(&this_00->field_0020->field_0x14 + iVar10);
      *(undefined4 *)(pcVar12 + 0x13) = *(undefined4 *)(&this_00->field_0020->field_0x18 + iVar10);
      *(undefined4 *)(pcVar12 + 0x17) = *(undefined4 *)(&this_00->field_0020->field_0x1c + iVar10);
      *(undefined4 *)(pcVar12 + 0x1b) = *(undefined4 *)(&this_00->field_0020->field_0x20 + iVar10);
      pcVar12[0x1f] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 5 & 1;
      pcVar12[0x20] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 6 & 1;
      pcVar12[0x21] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 7;
      pcVar12[0x22] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 3 & 1;
      local_8 = local_8 + 1;
      pcVar12[0x23] = (&this_00->field_0020->field_0xf)[iVar10] & 1;
      iVar10 = iVar10 + 0x24;
      pcVar12 = pcVar11;
    } while (local_8 < this_00->field_0014);
  }
  local_8 = 0;
  local_c = pcVar11;
  if (0 < this_00->field_0014) {
    local_10 = 0;
    do {
      local_1c = *(char **)(&this_00->field_0020->field_0x8 + local_10);
      if (local_1c == nullptr) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0xffffffff;
        pcVar11 = local_1c;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        uVar7 = 0xffffffff;
        pcVar11 = local_1c;
        do {
          pcVar12 = pcVar11;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar12 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar11 = pcVar12 + -uVar7;
        pcVar12 = local_c;
        memmove(pcVar12, pcVar11, uVar7); /* compiler REP MOVS byte copy */
        uVar7 = 0;
      }
      local_c = local_c + uVar9;
      local_8 = local_8 + 1;
      local_10 = local_10 + 0x24;
    } while (local_8 < this_00->field_0014);
  }
  local_8 = 0;
  if (0 < this_00->field_0014) {
    local_10 = 0;
    do {
      pcVar11 = local_c;
      /* ST_CALLSITE[004ADA3C]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      uVar9 = sub_004ACD30(this_00,(char)local_8);
      pcVar12 = *(char **)(&this_00->field_0020->field_0x4 + local_10);
      for (uVar7 = uVar9 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar11 = pcVar11 + 4;
      }
      local_10 = local_10 + 0x24;
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *pcVar11 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_c = local_c + uVar9 * 4;
      local_8 = local_8 + 1;
    } while (local_8 < this_00->field_0014);
  }
  g_currentExceptionFrame = local_60.previous;
  return (undefined4 *)local_14;
}


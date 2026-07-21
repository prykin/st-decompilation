#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SaveSpr */

undefined4 * __thiscall STT3DSprC::SaveSpr(STT3DSprC *this,uint *param_1)

{
  char cVar1;
  code *pcVar2;
  STT3DSprC *this_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  AnonShape_004AD790_77673787 *pAVar12;
  InternalExceptionFrame local_60;
  char *local_1c;
  STT3DSprC *local_18;
  AnonShape_004AD790_77673787 *local_14;
  int local_10;
  char *local_c;
  int local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  this_00 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x3da,0,iVar3,"%s",
                               "STT3DSprC::SaveSpr");
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar3 = 0;
  *param_1 = (local_18->field_0014 + 1) * 0x24;
  if (0 < local_18->field_0014) {
    local_c = (char *)0x0;
    do {
      iVar4 = thunk_FUN_004acd30(this_00,(char)iVar3);
      uVar9 = *param_1 + iVar4 * 4;
      *param_1 = uVar9;
      pcVar10 = *(char **)((int)local_c + 8 + this_00->field_0020);
      if (pcVar10 == (char *)0x0) {
        *param_1 = uVar9 + 1;
      }
      else {
        uVar7 = 0xffffffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        *param_1 = ~uVar7 + uVar9;
      }
      iVar3 = iVar3 + 1;
      local_c = (char *)((int)local_c + 0x24);
    } while (iVar3 < this_00->field_0014);
  }
  local_14 = (AnonShape_004AD790_77673787 *)Library::DKW::LIB::FUN_006aac70(*param_1);
  uVar9 = *param_1;
  pAVar12 = local_14;
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pAVar12 = 0;
    pAVar12 = (AnonShape_004AD790_77673787 *)&pAVar12->field_0x4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)pAVar12 = 0;
    pAVar12 = (AnonShape_004AD790_77673787 *)&pAVar12->field_0x1;
  }
  pcVar10 = &local_14[1].field_0x4;
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
    iVar3 = 0;
    pcVar11 = pcVar10;
    local_c = pcVar10;
    do {
      uVar5 = thunk_FUN_004acd30(this_00,(char)local_8);
      *(undefined4 *)pcVar11 = uVar5;
      pcVar10 = pcVar11 + 0x24;
      pcVar11[4] = *(char *)(iVar3 + 0xc + this_00->field_0020);
      pcVar11[5] = (byte)(this_00->field_001C >> ((byte)local_8 & 0x1f)) & 1;
      pcVar11[6] = *(byte *)(iVar3 + 0xe + this_00->field_0020) & 1;
      pcVar11[7] = *(char *)(iVar3 + 0xd + this_00->field_0020);
      pcVar11[8] = *(byte *)(iVar3 + 0xe + this_00->field_0020) >> 1 & 1;
      pcVar11[9] = (byte)((ushort)*(undefined2 *)(iVar3 + 0xe + this_00->field_0020) >> 9) & 1;
      pcVar11[10] = *(byte *)(iVar3 + 0xe + this_00->field_0020) >> 2 & 1;
      *(undefined4 *)(pcVar11 + 0xb) = *(undefined4 *)(iVar3 + 0x10 + this_00->field_0020);
      *(undefined4 *)(pcVar11 + 0xf) = *(undefined4 *)(iVar3 + 0x14 + this_00->field_0020);
      *(undefined4 *)(pcVar11 + 0x13) = *(undefined4 *)(iVar3 + 0x18 + this_00->field_0020);
      *(undefined4 *)(pcVar11 + 0x17) = *(undefined4 *)(iVar3 + 0x1c + this_00->field_0020);
      *(undefined4 *)(pcVar11 + 0x1b) = *(undefined4 *)(iVar3 + 0x20 + this_00->field_0020);
      pcVar11[0x1f] = *(byte *)(iVar3 + 0xe + this_00->field_0020) >> 5 & 1;
      pcVar11[0x20] = *(byte *)(iVar3 + 0xe + this_00->field_0020) >> 6 & 1;
      pcVar11[0x21] = *(byte *)(iVar3 + 0xe + this_00->field_0020) >> 7;
      pcVar11[0x22] = *(byte *)(iVar3 + 0xe + this_00->field_0020) >> 3 & 1;
      local_8 = local_8 + 1;
      pcVar11[0x23] = *(byte *)(iVar3 + 0xf + this_00->field_0020) & 1;
      iVar3 = iVar3 + 0x24;
      pcVar11 = pcVar10;
    } while (local_8 < this_00->field_0014);
  }
  local_8 = 0;
  local_c = pcVar10;
  if (0 < this_00->field_0014) {
    local_10 = 0;
    do {
      local_1c = *(char **)(this_00->field_0020 + 8 + local_10);
      if (local_1c == (char *)0x0) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0xffffffff;
        pcVar10 = local_1c;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        uVar7 = 0xffffffff;
        pcVar10 = local_1c;
        do {
          pcVar11 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar10 = pcVar11 + -uVar7;
        pcVar11 = local_c;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
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
      pcVar10 = local_c;
      uVar9 = thunk_FUN_004acd30(this_00,(char)local_8);
      pcVar11 = *(char **)(this_00->field_0020 + 4 + local_10);
      for (uVar7 = uVar9 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar10 = pcVar10 + 4;
      }
      local_10 = local_10 + 0x24;
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pcVar10 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_c = local_c + uVar9 * 4;
      local_8 = local_8 + 1;
    } while (local_8 < this_00->field_0014);
  }
  g_currentExceptionFrame = local_60.previous;
  return (undefined4 *)local_14;
}


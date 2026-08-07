#include "../../pseudocode_runtime.h"


void __thiscall FUN_00721080(void *this,int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar4;
  uint uVar3;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  void *this_00;
  byte *pbVar11;
  int local_10;
  int local_c;

  iVar9 = STField<int>(this,0x138);
  if (iVar9 == 0) {
    return;
  }
  iVar5 = *(int *)(iVar9 + 8);
  if (iVar5 == 0) {
    return;
  }
  uVar6 = STField<int>(this,0x144) + param_2;
  if ((int)uVar6 < 0) {
    return;
  }
  if (iVar5 <= (int)uVar6) {
    uVar6 = iVar5 - 1;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == 0xfff) {
    if ((int)uVar6 < iVar5) {
      pcVar7 = *(char **)(*(int *)(iVar9 + 0x14) + uVar6 * 4);
    }
    else {
      pcVar7 = nullptr;
    }
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = ~uVar3 - 1;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == 0xffe) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = 0;
      goto LAB_0072111d;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = STField<int>(this,0x148) + param_1;
  }
  if ((int)param_2 < 0) {
    return;
  }
LAB_0072111d:
  if ((int)uVar6 < iVar5) {
    pcVar7 = *(char **)(*(int *)(STField<int>(this,0x138) + 0x14) + uVar6 * 4);
  }
  else {
    pcVar7 = nullptr;
  }
  uVar3 = 0xffffffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (~uVar3 - 1 < param_2) {
    if ((int)uVar6 < iVar5) {
      pcVar7 = *(char **)(*(int *)(STField<int>(this,0x138) + 0x14) + uVar6 * 4);
    }
    else {
      pcVar7 = nullptr;
    }
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = ~uVar3 - 1;
  }
  if (param_2 < STField<uint>(this,0x148)) {
    STField<uint>(this,0x148) = param_2;
  }
  if (uVar6 < STField<uint>(this,0x144)) {
    STField<uint>(this,0x144) = uVar6;
  }
  do {
    iVar9 = STField<int>(this,0x144);
    bVar2 = false;
    local_c = 0;
    if ((int)uVar6 < iVar9) {
LAB_0072122f:
      iVar9 = 0;
    }
    else {
      do {
        if (iVar9 < *(int *)(STField<int>(this,0x138) + 8)) {
          pcVar7 = *(char **)(*(int *)(STField<int>(this,0x138) + 0x14) + iVar9 * 4);
        }
        else {
          pcVar7 = nullptr;
        }
        iVar5 = -1;
        pcVar8 = pcVar7;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = PTR_CHAR___007f0afc;
        if ((iVar5 == -2) ||
           (pcVar8 = pcVar7, pcVar7 = PTR_CHAR___007f0b00, (STField<byte>(this,0x20) & 0x20) == 0
           )) {
          pcVar7 = pcVar8;
        }
        iVar4 = FUN_007111c0(STField<void *>(this,0x214),pcVar7);
        if (STField<int>(this,0x30) < iVar4 + local_c) {
          bVar2 = true;
          STField<int>(this,0x144) = STField<int>(this,0x144) + 1;
          break;
        }
        local_c = local_c + *(int *)(STField<int>(this,0x214) + 0x5c) + iVar4;
        iVar9 = iVar9 + 1;
      } while (iVar9 <= (int)uVar6);
      if (local_c < 1) goto LAB_0072122f;
      iVar9 = (local_c - *(int *)(STField<int>(this,0x214) + 0x5c)) - iVar4;
    }
    STField<int>(this,0x208) = iVar9;
  } while (bVar2);
  do {
    bVar2 = false;
    if ((*(int *)(STField<int>(this,0x138) + 8) <= (int)uVar6) ||
       (iVar9 = *(int *)(*(int *)(STField<int>(this,0x138) + 0x14) + uVar6 * 4), iVar9 == 0)) {
      STField<undefined4>(this,0x204) = 0;
      break;
    }
    local_10 = STField<int>(this,0x148);
    local_c = 0;
    if (local_10 < (int)param_2) {
      pbVar10 = (byte *)(iVar9 + local_10);
      do {
        if ((STField<byte>(this,0x20) & 0x20) == 0) {
          this_00 = STField<void *>(this,0x214);
          pbVar11 = pbVar10;
        }
        else {
          this_00 = STField<void *>(this,0x214);
          pbVar11 = PTR_CHAR___007f0b00;
        }
        uVar3 = FUN_00710fb0(this_00,pbVar11);
        iVar9 = *(int *)(STField<int>(this,0x214) + 0x58) +
                (int)*(short *)(STField<int>(this_00,0x9a) + 0x6a + (uVar3 & 0xffff) * 10) +
                local_c;
        if (STField<int>(this,0x2c) < iVar9) {
          bVar2 = true;
          STField<int>(this,0x148) = STField<int>(this,0x148) + 1;
          break;
        }
        local_10 = local_10 + 1;
        pbVar10 = pbVar10 + 1;
        local_c = iVar9;
      } while (local_10 < (int)param_2);
    }
    STField<int>(this,0x204) = local_c;
  } while (bVar2);
  STField<uint>(this,0x210) = param_2 - STField<int>(this,0x148);
  STField<uint>(this,0x20c) = uVar6 - STField<int>(this,0x144);
  return;
}


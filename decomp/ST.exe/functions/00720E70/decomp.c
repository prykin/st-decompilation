#include "../../pseudocode_runtime.h"


void __thiscall FUN_00720e70(void *this,int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  int local_10;
  int local_c;
  int local_8;

  iVar6 = STField<int>(this,0x138);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 8) != 0)) {
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    STField<undefined4>(this,0x208) = 0xffffffff;
    *(undefined4 *)(iVar6 + 4) = STField<undefined4>(this,0x144);
    while( true ) {
      iVar6 = STField<int>(this,0x138);
      if (*(int *)(iVar6 + 8) <= *(int *)(iVar6 + 4)) break;
      iVar5 = *(int *)(iVar6 + 4) + 1;
      pcVar8 = *(char **)(*(int *)(iVar6 + 0x14) + -4 + iVar5 * 4);
      *(int *)(iVar6 + 4) = iVar5;
      if ((pcVar8 == nullptr) || (STField<int>(this,0x30) <= local_c))
      goto cf_break_loop_00720F4E;
      iVar6 = -1;
      pcVar10 = pcVar8;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      pcVar10 = PTR_CHAR___007f0afc;
      if ((iVar6 != -2) && (pcVar10 = pcVar8, (STField<byte>(this,0x20) & 0x20) != 0)) {
        pcVar10 = PTR_CHAR___007f0b00;
      }
      iVar4 = FUN_007111c0(STField<void *>(this,0x214),pcVar10);
      iVar6 = local_c;
      iVar5 = iVar4 + *(int *)(STField<int>(this,0x214) + 0x5c);
      if ((local_c <= param_2) && (param_2 < iVar5 + local_c)) {
        STField<int>(this,0x208) = local_c;
        STField<int>(this,0x20c) = local_8;
        goto cf_break_loop_00720F4E;
      }
      local_c = local_c + iVar5;
      local_8 = local_8 + 1;
      local_10 = iVar6;
    }
    pcVar8 = nullptr;
cf_break_loop_00720F4E:
    if (STField<int>(this,0x208) < 0) {
      STField<int>(this,0x208) = local_10;
      param_1 = STField<int>(this,0x2c) + -1;
      STField<int>(this,0x20c) = local_8 + -1;
      iVar6 = STField<int>(this,0x144) + local_8 + -1;
      if (iVar6 < *(int *)(STField<int>(this,0x138) + 8)) {
        pcVar8 = *(char **)(*(int *)(STField<int>(this,0x138) + 0x14) + iVar6 * 4);
      }
      else {
        pcVar8 = nullptr;
      }
    }
    uVar7 = 0xffffffff;
    STField<undefined4>(this,0x204) = 0xffffffff;
    pcVar10 = pcVar8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    local_8 = STField<int>(this,0x148);
    iVar6 = ~uVar7 - 1;
    if (local_8 < iVar6) {
      pbVar9 = (byte *)(pcVar8 + local_8);
      do {
        if ((STField<byte>(this,0x20) & 0x20) == 0) {
          pvVar3 = STField<void *>(this,0x214);
          uVar7 = FUN_00710fb0(pvVar3,pbVar9);
          sVar2 = *(short *)(STField<int>(pvVar3,0x9a) + 0x6a + (uVar7 & 0xffff) * 10);
        }
        else {
          pvVar3 = STField<void *>(this,0x214);
          uVar7 = FUN_00710fb0(pvVar3,PTR_CHAR___007f0b00);
          sVar2 = *(short *)(STField<int>(pvVar3,0x9a) + 0x6a + (uVar7 & 0xffff) * 10);
        }
        iVar5 = *(int *)(STField<int>(this,0x214) + 0x58) + (int)sVar2;
        if ((param_2 <= param_1) && (param_1 < iVar5 + param_2)) {
          STField<int>(this,0x204) = param_2;
          STField<int>(this,0x210) = local_8;
          break;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + iVar5;
        local_8 = local_8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (local_8 < iVar6);
    }
    if (STField<int>(this,0x204) < 0) {
      STField<int>(this,0x210) = iVar6;
      STField<int>(this,0x204) = param_2;
    }
  }
  return;
}


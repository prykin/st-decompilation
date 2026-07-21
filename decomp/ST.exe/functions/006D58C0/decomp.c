#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006d58c0(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  AnonShape_006BB8B0_D6DE56CA *pAVar2;
  int iVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_58 [18];
  void *local_10;
  AnonShape_006BB8B0_D6DE56CA *local_c;
  _RTL_CRITICAL_SECTION *local_8;

  local_58[1] = (undefined4 *)0x0;
  local_58[2] = (undefined4 *)0x0;
  local_58[3] = (undefined4 *)0x0;
  local_58[5] = (undefined4 *)0x0;
  iVar1 = *(int *)(*(int *)((int)this + 0xe0) + 0x288);
  local_8 = *(_RTL_CRITICAL_SECTION **)((int)this + 0xe4);
  local_58[6] = (undefined4 *)0x0;
  local_58[0xc] = (undefined4 *)0x0;
  local_58[7] = (undefined4 *)0x0;
  local_c = *(AnonShape_006BB8B0_D6DE56CA **)(iVar1 + 0x28);
  local_58[0xd] = (undefined4 *)0x0;
  local_58[0] = (undefined4 *)0x0;
  local_58[4] = (undefined4 *)0x0;
  local_58[8] = (undefined4 *)0x1;
  local_58[9] = (undefined4 *)0x0;
  local_58[10] = (undefined4 *)0x0;
  local_58[0xb] = (undefined4 *)0x0;
  local_58[0xe] = (undefined4 *)0x0;
  local_58[0xf] = (undefined4 *)0x0;
  local_58[0x10] = (undefined4 *)0x0;
  local_58[0x11] = &DAT_00856900;
  local_10 = this;
  EnterCriticalSection(local_8);
  pAVar2 = local_c;
  if (((*(int *)(iVar1 + 0x90) == 0) || (*(int *)(iVar1 + 0x94) == 0)) ||
     (*(int *)(*(int *)((int)this + 0xe0) + 0x30c) == 0)) {
    LeaveCriticalSection(local_8);
    return 0x8000ffff;
  }
  if (param_1 < 0) {
    LeaveCriticalSection(local_8);
    return 0x80070057;
  }
  if (0 < param_1) {
    LeaveCriticalSection(local_8);
    return 0x40103;
  }
  ppuVar4 = local_58;
  puVar5 = param_2;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *param_2 = DAT_007a1348;
  param_2[1] = DAT_007a134c;
  param_2[2] = DAT_007a1350;
  param_2[3] = DAT_007a1354;
  param_2[0xb] = DAT_007a1358;
  param_2[0xc] = DAT_007a135c;
  param_2[0xd] = DAT_007a1360;
  param_2[0xe] = DAT_007a1364;
  param_2[0x10] = 0x58;
  memset(&DAT_00856900, 0, 0x468); /* compiler bulk-zero initialization */
  DAT_00856900 = 0;
  DAT_00856904 = 0;
  _DAT_00856908 = *(undefined4 *)(iVar1 + 0x90);
  _DAT_0085690c = *(undefined4 *)(iVar1 + 0x94);
  _DAT_00856910 = 0;
  _DAT_00856914 = 0;
  _DAT_00856918 = *(undefined4 *)(iVar1 + 0x90);
  _DAT_0085691c = *(undefined4 *)(iVar1 + 0x94);
  _DAT_00856930 = 0x28;
  _DAT_00856934 = *(int *)(iVar1 + 0x90);
  _DAT_00856938 = -*(int *)(iVar1 + 0x94);
  _DAT_0085693c = 1;
  DAT_0085693e = *(short *)&local_c->field_0x20;
  _DAT_00856940 = 0;
  _DAT_00856950 = 0;
  if (((byte)*(undefined4 *)(iVar1 + 4) & 0xf) == 2) {
    iVar3 = FUN_006bb8b0(local_c);
    if (iVar3 == 0) {
      _DAT_00856934 = *(int *)(pAVar2 + 1) / *(int *)&pAVar2->field_0x28;
      _DAT_00856938 = -*(int *)&pAVar2->field_0x1c;
      FUN_006bb980((AnonShape_006BB980_E41494A1 *)pAVar2);
      *(undefined4 *)(*(int *)((int)local_10 + 0xe0) + 0x310) = 1;
    }
  }
  _DAT_00856944 = FUN_00749841((AnonShape_006B5B10_E0D06CF1 *)&DAT_00856930);
  if (DAT_0085693e == 0x10) {
    if (((*(int *)&pAVar2[1].field_0x4c != 0x7c00) && (*(int *)&pAVar2[1].field_0x50 != 0x3e00)) &&
       (*(int *)&pAVar2[1].field_0x54 != 0x1f)) {
      DAT_0085695c = *(undefined4 *)&pAVar2[1].field_0x50;
      _DAT_00856960 = *(undefined4 *)&pAVar2[1].field_0x54;
      _DAT_00856940 = 3;
      DAT_00856958 = *(int *)&pAVar2[1].field_0x4c;
      param_2[0x10] = param_2[0x10] + 0xc;
      param_2[4] = DAT_007a1700;
      param_2[5] = DAT_007a1704;
      param_2[6] = DAT_007a1708;
      param_2[7] = DAT_007a170c;
      LeaveCriticalSection(local_8);
      return 0;
    }
    param_2[4] = DAT_007a16f0;
    param_2[5] = DAT_007a16f4;
    param_2[6] = DAT_007a16f8;
    param_2[7] = DAT_007a16fc;
    LeaveCriticalSection(local_8);
    return 0;
  }
  if (DAT_0085693e == 8) {
    param_2[4] = DAT_007a16e0;
    param_2[5] = DAT_007a16e4;
    param_2[6] = DAT_007a16e8;
    param_2[7] = DAT_007a16ec;
    puVar5 = (undefined4 *)(iVar1 + 0x108);
    puVar6 = &DAT_00856958;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    param_2[0x10] = param_2[0x10] + 0x400;
    LeaveCriticalSection(local_8);
    return 0;
  }
  if (DAT_0085693e == 0x18) {
    param_2[4] = DAT_007a16d0;
    param_2[5] = DAT_007a16d4;
    param_2[6] = DAT_007a16d8;
    param_2[7] = DAT_007a16dc;
    LeaveCriticalSection(local_8);
    return 0;
  }
  param_2[4] = DAT_007a16c0;
  param_2[5] = DAT_007a16c4;
  param_2[6] = DAT_007a16c8;
  param_2[7] = DAT_007a16cc;
  LeaveCriticalSection(local_8);
  return 0;
}


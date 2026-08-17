#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006d58c0(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  AnonShape_006BB8B0_D6DE56CA *pAVar2;
  int iVar3;
  int iVar4;
  undefined4 **ppuVar5;
  byte *puVar6;
  byte *puVar7;
  undefined4 *local_58 [18];
  void *local_10;
  AnonShape_006BB8B0_D6DE56CA *local_c;
  _RTL_CRITICAL_SECTION *local_8;

  local_58[1] = nullptr;
  local_58[2] = nullptr;
  local_58[3] = nullptr;
  local_58[5] = nullptr;
  iVar1 = *(int *)(STField<int>(this,0xe0) + 0x288);
  local_8 = STField<_RTL_CRITICAL_SECTION *>(this,0xe4);
  local_58[6] = nullptr;
  local_58[0xc] = nullptr;
  local_58[7] = nullptr;
  local_c = *(AnonShape_006BB8B0_D6DE56CA **)(iVar1 + 0x28);
  local_58[0xd] = nullptr;
  local_58[0] = nullptr;
  local_58[4] = nullptr;
  local_58[8] = (undefined4 *)0x1;
  local_58[9] = nullptr;
  local_58[10] = nullptr;
  local_58[0xb] = nullptr;
  local_58[0xe] = nullptr;
  local_58[0xf] = nullptr;
  local_58[0x10] = nullptr;
  local_58[0x11] = &DAT_00856900;
  local_10 = this;
  /* ST_CALLSITE[006D5930]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(local_8);
  pAVar2 = local_c;
  if (((*(int *)(iVar1 + 0x90) == 0) || (*(int *)(iVar1 + 0x94) == 0)) ||
     (*(int *)(STField<int>(this,0xe0) + 0x30c) == 0)) {
    /* ST_CALLSITE[006D5CAF]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(local_8);
    return 0x8000ffff;
  }
  if (param_1 < 0) {
    /* ST_CALLSITE[006D596B]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(local_8);
    return 0x80070057;
  }
  if (0 < param_1) {
    /* ST_CALLSITE[006D5985]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(local_8);
    return 0x40103;
  }
  ppuVar5 = local_58;
  puVar6 = (byte *)(param_2);
  memmove(puVar6, ppuVar5, 0x48); /* compiler REP MOVS byte copy */
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
  iVar4 = 0;
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
      *(undefined4 *)(STField<int>(local_10,0xe0) + 0x310) = 1;
    }
  }
  _DAT_00856944 = FUN_00749841((RecoveredSourceFamily_dibcopy *)&DAT_00856930);
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
      /* ST_CALLSITE[006D5B7A]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(local_8);
      return 0;
    }
    param_2[4] = DAT_007a16f0;
    param_2[5] = DAT_007a16f4;
    param_2[6] = DAT_007a16f8;
    param_2[7] = DAT_007a16fc;
    /* ST_CALLSITE[006D5BB8]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(local_8);
    return 0;
  }
  if (DAT_0085693e == 8) {
    param_2[4] = DAT_007a16e0;
    param_2[5] = DAT_007a16e4;
    param_2[6] = DAT_007a16e8;
    param_2[7] = DAT_007a16ec;
    puVar6 = (byte *)(iVar1 + 0x108);
    puVar7 = (byte *)(&DAT_00856958);
    memmove(puVar7, puVar6, 0x400); /* compiler REP MOVS byte copy */
    param_2[0x10] = param_2[0x10] + 0x400;
    /* ST_CALLSITE[006D5C1B]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(local_8);
    return 0;
  }
  if (DAT_0085693e == 0x18) {
    param_2[4] = DAT_007a16d0;
    param_2[5] = DAT_007a16d4;
    param_2[6] = DAT_007a16d8;
    param_2[7] = DAT_007a16dc;
    /* ST_CALLSITE[006D5C5F]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(local_8);
    return 0;
  }
  param_2[4] = DAT_007a16c0;
  param_2[5] = DAT_007a16c4;
  param_2[6] = DAT_007a16c8;
  param_2[7] = DAT_007a16cc;
  /* ST_CALLSITE[006D5C9A]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(local_8);
  return 0;
}


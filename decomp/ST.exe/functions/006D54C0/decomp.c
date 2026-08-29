#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_006d54c0(AnonShape_006D54C0_FBA73A61 *param_1)

{
  AnonNested_AnonShape_006D54C0_FBA73A61_0284_041C9282 *pAVar1;
  AnonNested_AnonShape_006D54C0_FBA73A61_0288_92098C55 *pAVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_1c;
  _RTL_CRITICAL_SECTION *local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;

  local_14 = 0;
  local_18 = (_RTL_CRITICAL_SECTION *)&param_1->field_0x7c;
  /* ST_CALLSITE[006D54D9]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(local_18);

  Library::Win32::COMSupport::FUN_0074a193(param_1);
  pAVar1 = param_1->field_0284;
  iVar6 = pAVar1->field_000C - pAVar1->field_0004;
  iVar4 = pAVar1->field_0008 - pAVar1->field_0000;
  if ((iVar4 == 0) || (iVar6 == 0)) {
    iVar4 = pAVar1[3].field_0004;
    uVar5 = (int)pAVar1[3].field_0008 >> 0x1f;
    iVar6 = (pAVar1[3].field_0008 ^ uVar5) - uVar5;
  }
  param_1->field_0288->field_0018 = 0;
  param_1->field_0288->field_001C = 0;
  param_1->field_0288->field_0020 = iVar4;
  param_1->field_0288->field_0024 = iVar6;
  param_1->field_0288->field_0008 = 0;
  param_1->field_0288->field_000C = 0;
  param_1->field_0288->field_0010 = iVar4;
  param_1->field_0288->field_0014 = iVar6;
  param_1->field_0288->field_0098 =
       (uint)*(ushort *)&pAVar1[3].field_000C * (uint)*(ushort *)((int)&pAVar1[3].field_000C + 2);
  pAVar2 = param_1->field_0288;
  pAVar2->field_00B0 = pAVar1[2].field_0008;
  pAVar2->field_00B4 = pAVar1[2].field_000C;
  param_1->field_0288->field_00B8 = pAVar1[2].field_0000;
  param_1->field_0288->field_00BC = pAVar1[2].field_0004;
  uVar5 = (int)pAVar1[3].field_0008 >> 0x1f;

  local_10 = Library::DKW::DDX::FUN_006c4350
                       (param_1->field_0288->field_0028,&local_8,pAVar1[3].field_0004,
                        (pAVar1[3].field_0008 ^ uVar5) - uVar5,0,0);
  if (local_10 == 0) {
    local_10 = 0;
    local_c = 0;
    do {

      local_10 = FUN_006bbe40(local_8,&local_1c,(int *)&local_14,0);
      if (local_10 == 0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_006d5620:
        /* ST_CALLSITE[006D5628]: CALL dword ptr [ECX + 0x80] */
        (**(code **)(*local_8 + 0x80))(local_8,0);
        break;
      }
      if (local_10 != -0x7789fe3e) {
        if (local_10 == 0) goto LAB_006d5620;
        break;
      }
      /* ST_CALLSITE[006D560B]: CALL dword ptr [EDX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_8 + 0x6c))(local_8);
      local_c = local_c + 1;
    } while (local_c < 2);
  }
  if (local_8 != nullptr) {
    /* ST_CALLSITE[006D5638]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = nullptr;
  }
  if ((((((local_10 != 0) || (pAVar2 = param_1->field_0288, pAVar2->field_0090 != iVar4)) ||
        (pAVar2->field_0094 != iVar6)) ||
       ((uVar5 = (uint)*(ushort *)((int)&pAVar1[3].field_000C + 2),
        (pAVar1[3].field_0004 * uVar5 + 0x1f >> 3 & 0x1ffffffc) != local_14 ||
        (-1 < (int)pAVar1[3].field_0008)))) ||
      (iVar3 = pAVar2->field_0028, uVar5 != STField<uint>(iVar3,0x20))) ||
     ((pAVar1[4].field_0000 == 3 &&
      (((pAVar1[5].field_0008 != STField<int>(iVar3,0x4C4) ||
        (pAVar1[5].field_000C != STField<int>(iVar3,0x4C8))) ||
       (pAVar1[6].field_0000 != STField<int>(iVar3,0x4CC))))))) {
    FUN_006c3500((AnonShape_006C3500_19C01617 *)param_1->field_0288);
    param_1->field_030C = 0;
    param_1->field_0288->field_0090 = iVar4;
    param_1->field_0288->field_0094 = iVar6;
  }
  param_1->field_028C = iVar4;
  param_1->field_0290 = iVar6;
  /* ST_CALLSITE[006D5701]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(local_18);
  return 0;
}


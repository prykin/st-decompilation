
int FUN_006b8f10(AnonShape_006B8F10_41B61BA9 *param_1,int *param_2)

{
  uint uVar1;
  AnonShape_006B8F10_41B61BA9 *pAVar2;
  int iVar3;
  int iVar4;
  undefined4 local_b4;
  undefined4 local_b0;
  byte *local_ac;
  uint local_a8;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte *local_8;

  pAVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)param_1 + 0x40) == 0) {
    return 0;
  }
  param_2[3] = 0;
  param_2[2] = 0;
  if ((param_1->field_0004 & 0x8000) != 0) {
    *param_2 = param_1->field_0010;
    param_2[1] = param_1->field_0014;
    param_2[2] = param_1->field_0018;
    param_2[3] = param_1->field_001C;
  }
  if (((param_1->field_0004 & 0x4000) != 0) && (iVar3 = FUN_006b8e30((int *)param_1), iVar3 != 0)) {
    return iVar3;
  }
  uVar1 = param_1->field_0004;
  param_1->field_0004 = uVar1 & 0xffffefff;
  iVar3 = param_1->field_0008 - param_1->field_0020;
  local_18 = param_1->field_000C - param_1->field_0024;
  local_14 = iVar3;
  local_10 = local_18;
  if ((uVar1 & 0x8000000) == 0) {
    if ((uVar1 & 0x20000000) == 0) {
      if ((uVar1 & 0xa0000000) == 0) {
        return -0x51;
      }
      param_1 = *(AnonShape_006B8F10_41B61BA9 **)(param_1->field_0038 + param_1->field_0028 * 4);
      local_b4 = 0x7c;
      local_b0 = 6;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*(int *)param_1 + 0x58))(param_1,&local_b4);
      if (iVar4 != 0) {
        return iVar4;
      }
      local_c = local_a8;
      local_8 = local_ac;
    }
    else {
      local_c = param_1->field_0030;
      local_8 = param_1->field_0034;
      param_1 = (AnonShape_006B8F10_41B61BA9 *)param_1->field_0038;
    }
  }
  else {
    param_1 = *(AnonShape_006B8F10_41B61BA9 **)(param_1->field_0038 + param_1->field_0028 * 4);
    local_c = param_1->field_0004;
    local_8 = (byte *)param_1->field_0008;
  }
  iVar4 = FUN_006b91a0((int *)pAVar2,&local_14);
  if (iVar4 == 0) {
    pAVar2->field_0010 = local_14;
    pAVar2->field_0014 = local_10;
    pAVar2->field_0018 = local_c;
    pAVar2->field_001C = (int)local_8;
    if ((local_c != 0) && (local_8 != (byte *)0x0)) {
      local_28 = local_14 - iVar3;
      local_24 = local_10 - local_18;
      if ((pAVar2->field_0004 & 0x8000000) != 0) {
        iVar3 = Library::DKW::DDX::FUN_006b82e0
                          (*(int *)pAVar2,local_14,local_10,(byte *)param_1,local_28,local_24,
                           local_c,local_8);
        pAVar2->field_0004 = pAVar2->field_0004 | 0x4000;
        return iVar3;
      }
      if ((pAVar2->field_0004 & 0x20000000) != 0) {
        local_24 = local_24 +
                   ((*(int *)&pAVar2->field_0x2c - pAVar2->field_0028) + -1) *
                   (int)pAVar2->field_0034;
      }
      local_38 = local_14;
      local_20 = local_28 + local_c;
      local_30 = local_c + local_14;
      local_1c = local_8 + local_24;
      local_2c = local_8 + local_10;
      local_34 = local_10;
      param_2 = (int *)0x0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      while (iVar3 = (**(code **)(**(int **)(*(int *)pAVar2 + 0x40) + 0x14))
                               (*(int **)(*(int *)pAVar2 + 0x40),&local_38,param_1,&local_28,
                                0x1008000,0), iVar3 != 0) {
        if (iVar3 == -0x7789fe3e) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)param_1 + 0x6c))(param_1);
          FUN_006cec40(*(AnonShape_006CEC40_BB23E716 **)pAVar2);
        }
        else {
          if (((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) || (param_2 != (int *)0x0)) break;
          Sleep(2);
        }
        param_2 = (int *)((int)param_2 + 1);
        if (1 < (int)param_2) break;
      }
      if ((iVar3 == -0x7789ff60) || (iVar3 == -0x7789fe52)) {
        iVar3 = 0;
      }
      pAVar2->field_0004 = pAVar2->field_0004 | 0x4000;
      return iVar3;
    }
  }
  return iVar4;
}


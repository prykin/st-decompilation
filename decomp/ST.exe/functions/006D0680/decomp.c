
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4
FUN_006d0680(AnonShape_006B5B10_E0D06CF1 *param_1,int *param_2,uint *param_3,
            AnonShape_006B5B10_E0D06CF1 *param_4,int *param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  int local_8;

  if ((0 < param_2[2]) && (0 < param_2[3])) {
    local_14[1] = 0;
    local_14[0] = 0;
    local_14[2] = param_4->field_0004;
    uVar1 = (uint)param_4->field_000E * local_14[2] + 0x1f >> 3 & 0x1ffffffc;
    *param_6 = uVar1;
    local_8 = param_4->field_0008;
    if (local_8 < 0) {
      local_8 = -local_8;
      *param_6 = -uVar1;
    }
    iVar2 = FUN_006b0460(&local_24,param_5,local_14);
    if (iVar2 != 0) {
      local_14[1] = 0;
      *param_2 = *param_2 + (local_24 - *param_5);
      local_14[0] = 0;
      param_2[1] = param_2[1] + (local_20 - param_5[1]);
      *param_5 = local_24;
      param_5[1] = local_20;
      param_5[2] = local_1c;
      param_5[3] = local_18;
      param_2[3] = local_18;
      param_2[2] = local_1c;
      local_14[2] = param_1->field_0004;
      uVar1 = (uint)param_1->field_000E * local_14[2] + 0x1f >> 3 & 0x1ffffffc;
      *param_3 = uVar1;
      local_8 = param_1->field_0008;
      if (local_8 < 0) {
        local_8 = -local_8;
        *param_3 = -uVar1;
      }
      iVar2 = FUN_006b0460(&local_24,param_2,local_14);
      if (iVar2 != 0) {
        *param_5 = *param_5 + (local_24 - *param_2);
        param_5[1] = param_5[1] + (local_20 - param_2[1]);
        *param_2 = local_24;
        param_2[1] = local_20;
        param_2[2] = local_1c;
        param_2[3] = local_18;
        param_5[2] = local_1c;
        param_5[3] = local_18;
        return 1;
      }
    }
  }
  return 0;
}


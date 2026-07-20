
undefined4 FUN_00748e2b(AnonShape_00748E2B_93115374 *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 != 0) {
    if (param_3 == (uint *)0x0) {
      return 0x80004003;
    }
    local_34[0] = param_2;
    if (0x2f < param_2) {
      local_34[0] = 0x30;
    }
    local_34[2] = param_1->field_0004 & 0xffffffdf;
    local_34[1] = param_1->field_0008;
    local_c = param_1->field_000C;
    local_8 = param_1->field_0014;
    local_34[3] = param_1->field_0010;
    local_24 = param_1->field_0020;
    local_20 = param_1->field_0024;
    local_1c = param_1->field_0028;
    local_18 = param_1->field_002C;
    local_14 = param_1->field_0040;
    if ((param_1->field_0004 & 8) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = param_1->field_003C;
    }
    puVar2 = local_34;
    for (uVar1 = local_34[0] >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_3 = *puVar2;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
    }
    for (local_34[0] = local_34[0] & 3; local_34[0] != 0; local_34[0] = local_34[0] - 1) {
      *(char *)param_3 = (char)*puVar2;
      puVar2 = (uint *)((int)puVar2 + 1);
      param_3 = (uint *)((int)param_3 + 1);
    }
  }
  return 0;
}


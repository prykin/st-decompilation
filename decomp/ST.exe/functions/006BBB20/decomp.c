
int FUN_006bbb20(AnonShape_006BBB20_56723FCF *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_428 [95];
  undefined4 local_2ac;
  byte local_2a8;
  byte local_200;
  undefined4 local_130 [18];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_dc;
  undefined4 local_c8;
  undefined4 local_b4 [18];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_4c;
  uint local_38 [4];
  uint local_28 [4];
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = 0;
  local_14 = (int *)0x0;
  local_c = (int *)0x0;
  local_18 = 0;
  if (((param_1->field_000C & 0x800) != 0) ||
     (piVar1 = (int *)param_1->field_0040, piVar1 == (int *)0x0)) {
    return 0;
  }
  (**(code **)(*piVar1 + 0x38))(piVar1,local_28);
  piVar1 = (int *)param_1->field_0044;
  local_38[0] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(piVar1,local_38);
  }
  if (param_2 == 0) {
    if (((param_1->field_0044 == 0) || ((param_1->field_000B & 0x10) == 0)) &&
       ((local_28[0] & 0x4000) == 0)) {
      local_8 = 1;
    }
    if ((param_1->field_0044 != 0) && ((local_38[0] & 0x4000) == 0)) goto LAB_006bbbce;
LAB_006bbc85:
    if (local_8 != 0) {
      puVar4 = local_b4;
      for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_b4[3] = param_1->field_0018;
      local_b4[2] = param_1->field_001C;
      local_b4[0] = 0x7c;
      local_b4[1] = 7;
      local_4c = 0x40;
      if (param_2 != 0) {
        local_4c = 0x840;
      }
      if (param_1->field_0020 == 8) {
        local_b4[1] = 0x1007;
        local_6c = 0x20;
        local_68 = 0x60;
        local_60 = 8;
      }
      local_18 = (**(code **)(*param_1->field_0030 + 0x18))
                           (param_1->field_0030,local_b4,&local_14,0);
      if (local_18 != 0) goto LAB_006bbdfd;
      (**(code **)(*(int *)param_1->field_0040 + 0x38))((int *)param_1->field_0040,local_28);
    }
    if (local_10 != 0) {
      piVar1 = (int *)param_1->field_0044;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0044 = 0;
      }
      param_1->field_0044 = local_c;
      if (param_1->field_0020 == 8) {
        (**(code **)(*local_c + 0x7c))(local_c,param_1->field_003C);
      }
    }
    if (local_8 != 0) {
      piVar1 = (int *)param_1->field_0040;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0040 = 0;
      }
      param_1->field_0040 = local_14;
      if (param_1->field_0020 == 8) {
        (**(code **)(*local_14 + 0x7c))(local_14,param_1->field_003C);
      }
    }
    local_2ac = 0x17c;
    local_428[0] = 0x17c;
    (**(code **)(*param_1->field_0030 + 0x2c))(param_1->field_0030,&local_2ac,local_428);
    uVar2 = param_1->field_000C & 0xfffffffd;
    param_1->field_000C = uVar2;
    if ((((local_28[0] & 0x4000) != 0) && ((local_2a8 & 0x40) != 0)) ||
       (((local_28[0] & 0x800) != 0 && ((local_200 & 0x40) != 0)))) {
      param_1->field_000C = uVar2 | 2;
    }
    uVar2 = param_1->field_000C & 0xfffffdff;
    param_1->field_000C = uVar2;
    if (param_2 != 0) {
      param_1->field_000C = uVar2 | 0x200;
      return local_18;
    }
  }
  else {
    if ((local_28[0] & 0x4000) != 0) {
      local_8 = 1;
    }
    if ((param_1->field_0044 == 0) || ((local_38[0] & 0x4000) == 0)) goto LAB_006bbc85;
LAB_006bbbce:
    local_10 = 1;
    puVar4 = local_130;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_130[3] = param_1->field_0018;
    local_130[2] = param_1->field_001C;
    local_130[0] = 0x7c;
    local_130[1] = 7;
    local_c8 = 0x40;
    if (param_2 != 0) {
      local_c8 = 0x840;
    }
    if (param_1->field_0020 == 8) {
      local_130[1] = 0x1007;
      local_e8 = 0x20;
      local_e4 = 0x60;
      local_dc = 8;
    }
    local_18 = (**(code **)(*param_1->field_0030 + 0x18))(param_1->field_0030,local_130,&local_c,0);
    if (local_18 == 0) {
      (**(code **)(*(int *)param_1->field_0044 + 0x38))((int *)param_1->field_0044,local_38);
      goto LAB_006bbc85;
    }
LAB_006bbdfd:
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 8))(local_14);
    }
  }
  return local_18;
}



int FUN_006cecb0(AnonShape_006CECB0_97249119 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_38c [95];
  undefined4 local_210;
  byte local_20c;
  byte local_164;
  undefined4 local_94 [18];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_2c;
  uint local_18 [4];
  int *local_8;

  puVar4 = local_94;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_94[3] = param_1->field_0018;
  local_94[2] = param_1->field_001C;
  local_8 = (int *)0x0;
  local_94[0] = 0x7c;
  local_94[1] = 7;
  local_2c = 0x40;
  if (((param_1->field_000C & 0x200) != 0) ||
     ((param_2 != 0 && ((param_1->field_0008 & 0x10000000) != 0)))) {
    local_2c = 0x840;
  }
  if (param_1->field_0020 == 8) {
    local_94[1] = 0x1007;
    local_4c = 0x20;
    local_48 = 0x60;
    local_40 = 8;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)(*param_1->field_0030 + 0x18))(param_1->field_0030,local_94,&local_8,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
      piVar1 = (int *)param_1->field_0044;
      if (piVar1 != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0044 = 0;
      }
      param_1->field_0044 = local_8;
    }
    else {
      piVar1 = (int *)param_1->field_0040;
      if (piVar1 != (int *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0040 = 0;
      }
      param_1->field_0040 = local_8;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_8 + 0x38))(local_8,local_18);
      local_210 = 0x17c;
      local_38c[0] = 0x17c;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1->field_0030 + 0x2c))(param_1->field_0030,&local_210,local_38c);
      uVar2 = param_1->field_000C & 0xfffffffd;
      param_1->field_000C = uVar2;
      if ((((local_18[0] & 0x4000) != 0) && ((local_20c & 0x40) != 0)) ||
         (((local_18[0] & 0x800) != 0 && ((local_164 & 0x40) != 0)))) {
        param_1->field_000C = uVar2 | 2;
        return 0;
      }
    }
  }
  return iVar3;
}



int FUN_006bb780(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,undefined4 *param_7,int param_8)

{
  int iVar1;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  int local_c;
  int local_8;

  *param_2 = 0;
  local_88 = 0x7c;
  local_84 = 7;
  local_40 = 0x20;
  if (param_6 == 0) {
    if (param_5 != 0) {
      local_84 = 0x1007;
      local_3c = 0x40;
      local_34 = param_5;
      if (param_7 == (undefined4 *)0x0) {
        if (param_5 == 0x10) {
          local_30 = 0x7c00;
          local_2c = 0x3e0;
          local_28 = 0x1f;
        }
        else if (0x10 < param_5) {
          local_30 = 0xff0000;
          local_2c = 0xff00;
          local_28 = 0xff;
        }
      }
      else {
        local_30 = *param_7;
        local_2c = param_7[1];
        local_28 = param_7[2];
      }
    }
  }
  else {
    local_38 = param_6;
    local_34 = param_5;
    local_84 = 0x1007;
    local_3c = 0x200;
    local_30 = *param_7;
    local_2c = param_7[1];
    local_28 = param_7[2];
  }
  local_7c = param_3;
  local_20 = 0x4080;
  local_80 = param_4;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x18))
                    (*(int **)(param_1 + 0x30),&local_88,param_2,0);
  if ((iVar1 == 0) && (param_8 != -1)) {
    local_8 = param_8;
    local_c = param_8;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)*param_2 + 0x74))((int *)*param_2,0x10,&local_c);
    if (iVar1 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
    }
  }
  return iVar1;
}



void __cdecl FUN_00730810(undefined1 *param_1,uint param_2,uint param_3,undefined *param_4)

{
  int iVar1;
  undefined1 *local_110;
  int aiStack_10c [30];
  undefined1 *local_94;
  undefined4 auStack_90 [30];
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  if ((param_2 < 2) || (param_3 == 0)) {
    return;
  }
  local_14 = 0;
  local_10 = param_1;
  local_110 = param_1 + param_3 * (param_2 - 1);
LAB_0073084e:
  local_8 = (uint)((int)local_110 - (int)local_10) / param_3 + 1;
  if (8 < local_8) {
    local_c = local_10 + (local_8 >> 1) * param_3;
    swap(local_c,local_10,param_3);
    local_18 = local_10;
    local_94 = local_110 + param_3;
LAB_007308c2:
    local_18 = local_18 + param_3;
    if (local_18 <= local_110) goto code_r0x007308d6;
    goto LAB_007308e8;
  }
  shortsort(local_10,local_110,param_3,param_4);
  goto LAB_00730a0f;
code_r0x007308d6:
  iVar1 = (*(code *)param_4)(local_18,local_10);
  if (iVar1 < 1) goto LAB_007308c2;
LAB_007308e8:
  do {
    local_94 = local_94 + -param_3;
    if (local_94 <= local_10) break;
    iVar1 = (*(code *)param_4)(local_94,local_10);
  } while (-1 < iVar1);
  if (local_18 <= local_94) {
    swap(local_18,local_94,param_3);
    goto LAB_007308c2;
  }
  swap(local_10,local_94,param_3);
  if ((int)(local_94 + (-1 - (int)local_10)) < (int)local_110 - (int)local_18) {
    if (local_18 < local_110) {
      auStack_90[local_14] = local_18;
      aiStack_10c[local_14] = (int)local_110;
      local_14 = local_14 + 1;
    }
    if (local_10 + param_3 < local_94) {
      local_110 = local_94 + -param_3;
      goto LAB_0073084e;
    }
  }
  else {
    if (local_10 + param_3 < local_94) {
      auStack_90[local_14] = local_10;
      aiStack_10c[local_14] = (int)local_94 - param_3;
      local_14 = local_14 + 1;
    }
    if (local_18 < local_110) {
      local_10 = local_18;
      goto LAB_0073084e;
    }
  }
LAB_00730a0f:
  local_14 = local_14 + -1;
  if (local_14 < 0) {
    return;
  }
  local_10 = (undefined1 *)auStack_90[local_14];
  local_110 = (undefined1 *)aiStack_10c[local_14];
  goto LAB_0073084e;
}


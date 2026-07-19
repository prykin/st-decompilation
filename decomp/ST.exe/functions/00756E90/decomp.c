
void FUN_00756e90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x192);
  FUN_00756b20((int)param_1);
  FUN_00757070(param_1);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar2 = FUN_00756d40((int)param_1);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((param_1[0x13] == 0) || (param_1[0xe] == 0)) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (param_1[0x13] != 0) {
    if (param_1[0xf] != 0) {
      RaiseInternalException(0x2e,DAT_007ed77c,s_E__DKW_JPG_C_jdmaster_c_007f2d68,0x140);
    }
    if (param_1[0x1c] == 3) {
      if (param_1[0x20] == 0) {
        if (param_1[0x15] == 0) {
          param_1[0x17] = 1;
        }
        else {
          param_1[0x19] = 1;
        }
      }
      else {
        param_1[0x18] = 1;
      }
    }
    else {
      param_1[0x17] = 1;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x20] = 0;
    }
    if (param_1[0x17] != 0) {
      FUN_0075f740(param_1);
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((int)param_1 + 0x1ba);
    }
    if ((param_1[0x19] != 0) || (param_1[0x18] != 0)) {
      FUN_0075e460(param_1);
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((int)param_1 + 0x1ba);
    }
  }
  if (param_1[0xf] == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      FUN_0075d890(param_1);
      FUN_0075d150(param_1);
    }
    else {
      FUN_0075de90(param_1);
    }
    FUN_0075cdf0(param_1,param_1[0x19]);
  }
  FUN_0075cb40(param_1);
  if (param_1[0x36] == 0) {
    if (param_1[0x35] == 0) {
      FUN_0075b8e0(param_1);
    }
    else {
      FUN_0075bed0(param_1);
    }
  }
  else {
    RaiseInternalException(1,DAT_007ed77c,s_E__DKW_JPG_C_jdmaster_c_007f2d68,0x178);
  }
  if ((*(int *)(*(int *)((int)param_1 + 0x1a2) + 0x10) == 0) && (param_1[0xe] == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)0x1;
  }
  FUN_0075a670(param_1,puVar3);
  if (param_1[0xf] == 0) {
    FUN_00759f50(param_1,0);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*(int *)((int)param_1 + 0x1a2) + 8))(param_1);
  if (((param_1[1] != 0) && (param_1[0xe] == 0)) &&
     (*(int *)(*(int *)((int)param_1 + 0x1a2) + 0x10) != 0)) {
    iVar4 = param_1[7];
    if (param_1[0x35] != 0) {
      iVar4 = iVar4 * 3 + 2;
    }
    *(undefined4 *)(param_1[1] + 4) = 0;
    *(int *)(param_1[1] + 8) = *(int *)((int)param_1 + 0x12e) * iVar4;
    *(undefined4 *)(param_1[1] + 0xc) = 0;
    *(uint *)(param_1[1] + 0x10) = (param_1[0x19] != 0) + 2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}


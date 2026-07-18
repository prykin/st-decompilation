
void __fastcall FUN_00627790(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  int local_8;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_28;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_14 = *(undefined2 *)(param_1 + 0x24);
    local_12 = *(undefined2 *)(param_1 + 0x32);
    if (((*(int *)(param_1 + 0x241) == 0) ||
        (iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x241),&local_8), iVar1 == -4)) ||
       (local_8 == 0)) {
      local_10 = 0xff;
      local_e = 0xffff;
    }
    else {
      local_10 = *(undefined2 *)(local_8 + 0x24);
      local_e = *(undefined2 *)(local_8 + 0x32);
    }
    local_18 = 0x5de4;
    (**(code **)*DAT_008117bc)(local_28);
    return;
  }
  return;
}


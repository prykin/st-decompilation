
void __fastcall thunk_FUN_00627790(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_8;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = auStack_28;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uStack_14 = *(undefined2 *)(param_1 + 0x24);
    uStack_12 = *(undefined2 *)(param_1 + 0x32);
    if (((*(int *)(param_1 + 0x241) == 0) ||
        (iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x241),&iStack_8), iVar1 == -4)) ||
       (iStack_8 == 0)) {
      uStack_10 = 0xff;
      uStack_e = 0xffff;
    }
    else {
      uStack_10 = *(undefined2 *)(iStack_8 + 0x24);
      uStack_e = *(undefined2 *)(iStack_8 + 0x32);
    }
    uStack_18 = 0x5de4;
    (**(code **)*DAT_008117bc)(auStack_28);
    return;
  }
  return;
}


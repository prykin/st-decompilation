
undefined4 thunk_FUN_0054cbb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = 0xfffffffc;
  if (DAT_007c8238 != 0) {
    puVar3 = &DAT_007c8238;
    iVar2 = DAT_007c8238;
    while (iVar2 != param_1) {
      iVar2 = puVar3[2];
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + 1;
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(iVar4 * 8 + 0x7c823c);
    }
    uVar1 = 0;
  }
  return uVar1;
}


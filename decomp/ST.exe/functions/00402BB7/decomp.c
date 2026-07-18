
void __fastcall thunk_FUN_00627700(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = auStack_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uStack_10 = *(undefined2 *)(param_1 + 0x24);
    uStack_e = *(undefined2 *)(param_1 + 0x32);
    uStack_c = *(undefined2 *)(param_1 + 0x262);
    if (*(int *)(param_1 + 0x2a1) == 0) {
      uStack_a = 0xffff;
    }
    else {
      uStack_a = *(undefined2 *)(param_1 + 0x2a5);
    }
    uStack_14 = 0x5de3;
    (**(code **)*DAT_008117bc)(auStack_24);
  }
  return;
}


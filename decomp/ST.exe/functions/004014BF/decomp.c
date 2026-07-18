
void __fastcall thunk_FUN_0065f980(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  undefined2 uStack_8;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = auStack_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uStack_10 = *(undefined2 *)(param_1 + 0x24);
    uStack_e = *(undefined2 *)(param_1 + 0x7d);
    uStack_8 = *(undefined2 *)(param_1 + 0xb3);
    uStack_14 = 0x5de5;
    iStack_c = param_1;
    (**(code **)*DAT_008117bc)(auStack_24);
    *(undefined4 *)(param_1 + 0xb3) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb3) = 0;
  return;
}


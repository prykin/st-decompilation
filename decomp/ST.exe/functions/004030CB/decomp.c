
void __fastcall thunk_FUN_0062a860(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar2 = auStack_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uStack_10 = *(undefined4 *)(param_1 + 0xd2);
  uStack_14 = 10;
  thunk_FUN_00604870(*(void **)(param_1 + 0xce),auStack_24);
  return;
}


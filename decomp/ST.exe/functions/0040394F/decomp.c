
void __fastcall thunk_FUN_0067c110(void *param_1)

{
  int iVar1;
  uint *puVar2;
  uint auStack_38 [2];
  undefined1 uStack_30;
  
  puVar2 = auStack_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  auStack_38[1] = *(undefined4 *)((int)param_1 + 0x6fe);
  *(undefined4 *)((int)param_1 + 0x689) = 0;
  auStack_38[0] = 0x67;
  uStack_30 = 1;
  thunk_FUN_0067a020(param_1,auStack_38,-1);
  return;
}


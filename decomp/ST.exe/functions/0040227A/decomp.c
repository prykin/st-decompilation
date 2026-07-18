
void __fastcall thunk_FUN_0058efe0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [8];
  
  puVar2 = auStack_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  auStack_24[3] = 0;
  auStack_24[5] = *(undefined4 *)((int)param_1 + 8);
  auStack_24[4] = 10;
  FUN_006e60a0(param_1,auStack_24);
  return;
}



void __fastcall thunk_FUN_00582530(void *param_1)

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
  uStack_10 = *(undefined4 *)((int)param_1 + 8);
  uStack_14 = 0x124;
  FUN_006e6080(param_1,4,*(undefined4 *)((int)param_1 + 0x286),auStack_24);
  return;
}


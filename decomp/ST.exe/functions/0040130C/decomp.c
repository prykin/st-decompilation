
void __fastcall thunk_FUN_0065d630(void *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_24 [8];
  
  thunk_FUN_0065e6c0((int)param_1,param_2);
  thunk_FUN_0065d600((int)param_1);
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  puVar3 = auStack_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  auStack_24[2] = *(undefined4 *)(*(int *)((int)param_1 + 0xc) + 0x14);
  auStack_24[3] = 0;
  auStack_24[4] = 10;
  auStack_24[5] = uVar1;
  FUN_006e60a0(param_1,auStack_24);
  return;
}


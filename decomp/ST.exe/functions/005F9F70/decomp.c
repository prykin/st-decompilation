
void __fastcall FUN_005f9f70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int **)(param_1 + 0x2e6) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x2e6);
    if (iVar1 != 0) {
      thunk_FUN_004ad310(iVar1);
      FUN_0072e2b0((undefined4 *)**(undefined4 **)(param_1 + 0x2e6));
      **(undefined4 **)(param_1 + 0x2e6) = 0;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x2e6) + 4);
    if (-1 < (int)uVar2) {
      FUN_006e8ba0(*(void **)(param_1 + 0x211),uVar2);
      *(undefined4 *)(*(int *)(param_1 + 0x2e6) + 4) = 0xffffffff;
    }
  }
  return;
}


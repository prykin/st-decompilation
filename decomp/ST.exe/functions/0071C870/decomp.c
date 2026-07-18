
void __fastcall FUN_0071c870(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x24) + 4) = 0;
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x24);
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      iVar3 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (iVar3 == 0) {
        return;
      }
      if (*(int *)(iVar3 + 0x60) != 0) {
        *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + -1;
      }
    }
  }
  return;
}


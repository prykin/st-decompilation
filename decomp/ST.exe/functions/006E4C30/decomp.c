
void __thiscall FUN_006e4c30(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_006e45a0(this,*(int *)(param_1 + 0x14));
  if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
    *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
    while( true ) {
      iVar1 = *(int *)(iVar3 + 8);
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (piVar4 == (int *)0x0) {
        return;
      }
      FUN_006e4bb0(piVar4);
    }
  }
  return;
}


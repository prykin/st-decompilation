
void __thiscall thunk_FUN_00661790(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x20b);
  uVar4 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    while( true ) {
      if (bVar5) {
        iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x24) == param_2) break;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
      if ((int)uVar2 <= (int)uVar4) {
        return;
      }
    }
    *(undefined4 *)(iVar3 + 0x24) = 0;
  }
  return;
}


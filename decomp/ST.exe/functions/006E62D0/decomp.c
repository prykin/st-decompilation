
undefined4 __thiscall FUN_006e62d0(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)(*(int *)((int)this + 0x10) + 4) = 0;
  while( true ) {
    iVar1 = *(int *)((int)this + 0x10);
    uVar2 = *(uint *)(iVar1 + 4);
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      return 0xfffffffc;
    }
    iVar3 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
    *(uint *)(iVar1 + 4) = uVar2 + 1;
    if (iVar3 == 0) break;
    iVar1 = *(int *)(iVar3 + 4);
    if (*(int *)(iVar1 + 0x18) == param_1) {
      if (param_2 != (int *)0x0) {
        *param_2 = iVar1;
      }
      return 0;
    }
  }
  return 0xfffffffc;
}


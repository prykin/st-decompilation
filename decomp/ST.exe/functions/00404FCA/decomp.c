
undefined1 __thiscall thunk_FUN_005da940(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = 4;
  piVar4 = (int *)(*(int *)((int)this + 0x68a) + 0xc + param_1 * 0x14);
  piVar5 = &DAT_007cd700;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *piVar5;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar1 == iVar2);
  return 0;
}


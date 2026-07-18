
int __cdecl FUN_0067fca0(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(uint *)(DAT_00848a38 + 0xc) <= param_1) ||
      (piVar1 = (int *)(*(int *)(DAT_00848a38 + 8) * param_1 + *(int *)(DAT_00848a38 + 0x1c)),
      piVar1 == (int *)0x0)) || (iVar2 = *piVar1, iVar2 == 0)) {
    iVar2 = 0;
  }
  return iVar2;
}


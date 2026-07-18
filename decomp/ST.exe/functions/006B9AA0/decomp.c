
undefined4 FUN_006b9aa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_2;
  if (*piVar2 <= piVar2[1]) {
    iVar1 = *piVar2 + 10;
    piVar2 = (int *)FUN_006bfb50(piVar2,iVar1 * 0xc + 8);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    *piVar2 = iVar1;
  }
  piVar2[piVar2[1] * 3 + 2] = *(int *)(param_1 + 0xc);
  piVar2[(piVar2[1] + 1) * 3] = *(int *)(param_1 + 8);
  piVar2[piVar2[1] * 3 + 4] = *(int *)(param_1 + 0x54);
  piVar2[1] = piVar2[1] + 1;
  *param_2 = piVar2;
  return 1;
}


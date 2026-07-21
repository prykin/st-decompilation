
undefined4 FUN_006b9aa0(AnonShape_006B9AA0_FC1882B5 *param_1,undefined4 *param_2)

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
  piVar2[piVar2[1] * 3 + 2] = param_1->field_000C;
  piVar2[(piVar2[1] + 1) * 3] = param_1->field_0008;
  piVar2[piVar2[1] * 3 + 4] = param_1->field_0054;
  piVar2[1] = piVar2[1] + 1;
  *param_2 = piVar2;
  return 1;
}


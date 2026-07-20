
undefined4
FUN_006b6530(AnonShape_006B6530_C4BC1053 *param_1,undefined4 param_2,byte param_3,
            undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = (int *)*param_4;
  if ((param_3 & 1) != 0) {
    return 0;
  }
  if (param_1->field_002C != param_1->field_0028) {
    if (*piVar3 <= piVar3[1]) {
      iVar1 = *piVar3 + 10;
      piVar3 = (int *)FUN_006bfb50(piVar3,iVar1 * 0x14 + 8);
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      *param_4 = piVar3;
      *piVar3 = iVar1;
    }
    piVar2 = piVar3 + piVar3[1] * 5 + 3;
    *piVar2 = param_1->field_0008;
    piVar2[1] = param_1->field_000C;
    piVar2[2] = param_1->field_0010;
    piVar2[3] = param_1->field_0014;
    pcVar4 = FUN_006c8170(param_1->field_0030);
    piVar3[piVar3[1] * 5 + 2] = (int)pcVar4;
    if (piVar3[piVar3[1] * 5 + 2] == 0) {
      return 0;
    }
    piVar3[1] = piVar3[1] + 1;
  }
  return 1;
}


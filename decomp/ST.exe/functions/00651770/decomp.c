
undefined4 __cdecl FUN_00651770(AnonShape_00651770_8F77396F *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (((-1 < param_1->field_0010) && (-1 < param_1->field_0014)) && (param_1->field_0014 < 3)) {
    return 1;
  }
  return 0;
}



int FUN_006b5050(AnonShape_006B5050_99986F91 *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = param_1->field_0014;
  if (iVar2 == 0) {
    iVar2 = ((uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            param_1->field_0008;
  }
  iVar1 = FUN_006b5010((int)param_1);
  return iVar1 + 0x28 + iVar2;
}


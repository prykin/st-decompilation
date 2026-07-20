
void FUN_006d7770(AnonShape_006D7770_4ECBDE32 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0020;
  if ((short)piVar1[1] == -0x50ee) {
    param_1->field_0008 = (uint)*(ushort *)(piVar1 + 2);
    param_1->field_000C = (uint)*(ushort *)((int)piVar1 + 10);
    param_1->field_0010 = (uint)*(ushort *)(piVar1 + 4);
    param_1->field_0014 = (uint)*(ushort *)((int)piVar1 + 6);
    param_1->field_0018 = 0xffffffff;
    param_1->field_0028 = piVar1[0x14] + (int)piVar1;
    param_1->field_002C = piVar1[0x15] + (int)piVar1;
    param_1->field_0024 = *piVar1 + (int)piVar1;
    param_1->field_0020 = param_1->field_0028;
  }
  return;
}


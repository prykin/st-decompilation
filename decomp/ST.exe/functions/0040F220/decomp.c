
int __cdecl FUN_0040f220(AnonShape_0040F220_61B59860 *param_1,AnonShape_0040F220_06315B9F *param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = (int)param_2->field_0010 >> 0x1f;
  uVar2 = (int)param_1->field_0010 >> 0x1f;
  return ((int)((param_2->field_0010 ^ uVar1) - uVar1) / 2 +
         (param_2->field_000C - param_1->field_000C)) -
         (int)((param_1->field_0010 ^ uVar2) - uVar2) / 2;
}


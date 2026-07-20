
void FUN_007561d0(AnonShape_00753C80_4C8E695D *param_1,int param_2)

{
  if (param_2 < 1) {
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
         0xffffffff;
    return;
  }
  FUN_00753c80(param_1,param_2);
  return;
}


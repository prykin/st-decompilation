
undefined4 __fastcall FUN_004e8cc0(AnonShape_004E8DC0_1D60A929 *param_1)

{
  uint uVar1;

  *(undefined4 *)&param_1->field_0x4d0 = 0;
  uVar1 = PTR_00802a38->field_00E4;
  *(undefined4 *)&param_1->field_0x4e0 = 0;
  *(undefined4 *)&param_1->field_0x4f4 = 0;
  *(undefined4 *)&param_1->field_0x4f8 = 0;
  *(undefined4 *)&param_1->field_0x4fc = 0;
  *(uint *)&param_1->field_0x4d4 = uVar1;
  *(undefined4 *)&param_1->field_0x4d8 = 0xffff;
  if (((*(int *)&param_1->field_0x231 == 1) || (*(int *)&param_1->field_0x231 == 3)) &&
     (*(int *)&param_1->field_0x5ac == 0x6c)) {
    thunk_FUN_004e8dc0(param_1);
  }
  return 0;
}


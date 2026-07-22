
undefined4 __fastcall FUN_004e1310(AnonShape_004E1310_4FD56DAE *param_1)

{
  uint uVar1;

  thunk_FUN_004e4270(param_1->field_0024,param_1->field_0518);
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_051C = param_1->field_051C + param_1->field_0518;
  param_1->field_0524 = uVar1;
  param_1->field_0518 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_1->field_0024 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
    thunk_FUN_004d8b70((char)param_1->field_0024);
  }
  return 0;
}


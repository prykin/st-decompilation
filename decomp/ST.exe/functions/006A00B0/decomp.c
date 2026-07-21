
void __fastcall FUN_006a00b0(AnonShape_006A00B0_8C09D559 *param_1)

{
  void **value;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_01;
  cMf32 *this;

  this = (cMf32 *)0x0;
  if (param_1->field_0008 != 0) {
    FUN_006f07e0(&param_1->field_0008);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this = extraout_ECX;
  }
  if (param_1->field_000C != 0) {
    Library::Ourlib::MFSTMAP::mfTMapErase(&param_1->field_000C);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this = extraout_ECX_00;
  }
  value = (void **)((int)&param_1[0x31b].field_0008 + 3);
  if (*(int *)((int)&param_1[0x31b].field_0008 + 3) != 0) {
    FreeAndNull(value);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this = extraout_ECX_01;
  }
  if ((cMf32 *)param_1->field_0018 != (cMf32 *)0x0) {
    cMf32::delete(this,(cMf32 *)param_1->field_0018);
  }
  *value = (void *)0x0;
  param_1->field_0018 = 0;
  param_1->field_000C = 0;
  param_1->field_0008 = 0;
  return;
}


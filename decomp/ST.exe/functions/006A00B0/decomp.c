
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall FUN_006a00b0(AnonShape_006A00B0_8C09D559 *param_1)

{
  void **value;

  if (param_1->field_0008 != 0) {
    FUN_006f07e0(&param_1->field_0008);
  }
  if (param_1->field_000C != 0) {
    Library::Ourlib::MFSTMAP::mfTMapErase(&param_1->field_000C);
  }
  value = (void **)((int)&param_1[0x31b].field_0008 + 3);
  if (*(int *)((int)&param_1[0x31b].field_0008 + 3) != 0) {
    FreeAndNull(value);
  }
  if ((cMf32 *)param_1->field_0018 != nullptr) {
    cMf32::delete((cMf32 *)param_1->field_0018);
  }
  *value = nullptr;
  param_1->field_0018 = 0;
  param_1->field_000C = 0;
  param_1->field_0008 = 0;
  return;
}


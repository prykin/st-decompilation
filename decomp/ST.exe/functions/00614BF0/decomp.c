
void __fastcall FUN_00614bf0(AnonShape_00614BF0_51042166 *param_1)

{
  if (param_1->field_02DD != 0) {
    FUN_006ab060((LPVOID *)&param_1->field_02DD);
  }
  if (param_1->field_02E5 != 0) {
    FUN_006ab060((LPVOID *)&param_1->field_02E5);
  }
  param_1->field_02D5 = 0;
  if ((STT3DSprC *)param_1->field_0252 != (STT3DSprC *)0x0) {
    thunk_FUN_004ad310((STT3DSprC *)param_1->field_0252);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1->field_0252);
    param_1->field_0252 = 0;
  }
  return;
}


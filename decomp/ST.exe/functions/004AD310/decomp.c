
void __fastcall FUN_004ad310(STT3DSprC *param_1)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_1->field_0014) {
    do {
      STT3DSprC::UnLoadSequence(param_1,(byte)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1->field_0014);
  }
  Library::Ourlib::ST3DSMAP::SprClose(param_1->field_003C,param_1->field_0018);
  if (param_1->field_0020 != nullptr) {
    FreeAndNull(&param_1->field_0020);
  }
  return;
}


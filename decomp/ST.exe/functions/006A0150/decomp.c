
undefined4 __fastcall FUN_006a0150(AnonShape_006A0150_D0561BCC *param_1)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  
  psVar1 = (short *)Library::Ourlib::MFSTMAP::mfTMapCreate
                              (param_1->field_0228,param_1->field_022C,param_1->field_0234,
                               param_1->field_0239,0x20);
  param_1->field_000C = psVar1;
  piVar2 = Library::Ourlib::MFSTMAP::FUN_006f0620(psVar1);
  param_1->field_0008 = piVar2;
  thunk_FUN_006a2d80(1,piVar2);
  iVar3 = Library::Ourlib::MFSTMAP::AuxTMapRefreshAll(param_1->field_000C,param_1->field_0008);
  if (iVar3 != 0) {
    return 0;
  }
  return 1;
}


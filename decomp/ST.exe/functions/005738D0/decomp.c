
undefined4 __fastcall FUN_005738d0(AnonShape_005738D0_F693E267 *param_1)

{
  int iVar1;
  CHAR local_108 [260];

  thunk_FUN_005734c0(param_1,(LPDWORD)0x0,(PHKEY)0x1);
  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00573260::thunk_FUN_00573260
            ((AnonReceiver_00573260 *)param_1);
  wsprintfA(local_108,"%s%s%s",&param_1->field_0x28,PTR_s_SAVEGAME__0079b0cc,
            &param_1->field_0x785);
  CreateDirectoryA(local_108,(LPSECURITY_ATTRIBUTES)0x0);
  iVar1 = thunk_FUN_00572920(param_1,1);
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_00572ba0((int)param_1);
    if (iVar1 != 0) {
      param_1->field_0DEE = 1;
      return 1;
    }
  }
  param_1->field_0DEE = 0;
  return 0;
}


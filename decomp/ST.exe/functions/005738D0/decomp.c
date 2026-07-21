
undefined4 __fastcall FUN_005738d0(void *param_1)

{
  int iVar1;
  CHAR local_108 [260];
  
  thunk_FUN_005734c0(param_1,(LPDWORD)0x0,(PHKEY)0x1);
  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00573260::thunk_FUN_00573260(param_1);
  wsprintfA(local_108,s__s_s_s_007c6edc,(int)param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
            (int)param_1 + 0x785);
  CreateDirectoryA(local_108,(LPSECURITY_ATTRIBUTES)0x0);
  iVar1 = thunk_FUN_00572920(param_1,1);
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_00572ba0((int)param_1);
    if (iVar1 != 0) {
      *(undefined1 *)((int)param_1 + 0xdee) = 1;
      return 1;
    }
  }
  *(undefined1 *)((int)param_1 + 0xdee) = 0;
  return 0;
}


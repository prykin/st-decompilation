
undefined4 * __cdecl FUN_00680590(byte *param_1)

{
  byte *_Drive;
  undefined4 *puVar1;
  char *text;
  byte *pbVar2;
  CHAR local_404 [1024];
  
  puVar1 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,param_1,0,0,0);
  _Drive = (byte *)((int)puVar1 + 0x231);
  pbVar2 = _Drive;
  text = (char *)FUN_006b0140(7000,HINSTANCE_00807618);
  wsprintfA(local_404,text,pbVar2);
  thunk_FUN_00674c40(_Drive);
  thunk_FUN_00674d20(local_404);
  thunk_FUN_00674e10(_Drive);
  thunk_FUN_00674ef0(local_404);
  DAT_00848a10 = 0;
  DAT_00848a0c = 0;
  return puVar1;
}


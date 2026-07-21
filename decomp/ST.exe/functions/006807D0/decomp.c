
void __cdecl FUN_006807d0(undefined4 *param_1)

{
  char *extraout_EAX;
  char *text;
  cMf32 *this;
  undefined4 uVar1;
  undefined4 uVar2;
  CHAR local_404 [1024];
  
  thunk_FUN_00674ce0();
  LoadResourceString(0x1b59,HINSTANCE_00807618);
  thunk_FUN_00674ef0(extraout_EAX);
  uVar1 = DAT_00848a10;
  uVar2 = DAT_00848a0c;
  LoadResourceString(0x1b5b,HINSTANCE_00807618);
  wsprintfA(local_404,text,uVar1,uVar2);
  thunk_FUN_00674ef0(local_404);
  thunk_FUN_00674eb0();
  if ((cMf32 *)*param_1 != (cMf32 *)0x0) {
    cMf32::delete(this,(cMf32 *)*param_1);
  }
  *param_1 = 0;
  return;
}


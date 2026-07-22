
void __cdecl FUN_006807d0(undefined4 *param_1)

{
  char *pcVar1;
  cMf32 *this;
  undefined4 uVar2;
  undefined4 uVar3;
  CHAR local_404 [1024];

  thunk_FUN_00674ce0();
  pcVar1 = LoadResourceString(0x1b59,g_module_00807618);
  thunk_FUN_00674ef0(pcVar1);
  uVar2 = DAT_00848a10;
  uVar3 = DAT_00848a0c;
  pcVar1 = LoadResourceString(0x1b5b,g_module_00807618);
  wsprintfA(local_404,pcVar1,uVar2,uVar3);
  thunk_FUN_00674ef0(local_404);
  thunk_FUN_00674eb0();
  if ((cMf32 *)*param_1 != (cMf32 *)0x0) {
    cMf32::delete(this,(cMf32 *)*param_1);
  }
  *param_1 = 0;
  return;
}


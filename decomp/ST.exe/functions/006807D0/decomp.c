
void __cdecl FUN_006807d0(undefined4 *param_1)

{
  char *pcVar1;
  LPCSTR pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CHAR local_404 [1024];
  
  thunk_FUN_00674ce0();
  pcVar1 = (char *)FUN_006b0140(0x1b59,DAT_00807618);
  thunk_FUN_00674ef0(pcVar1);
  uVar3 = DAT_00848a10;
  uVar4 = DAT_00848a0c;
  pCVar2 = (LPCSTR)FUN_006b0140(0x1b5b,DAT_00807618);
  wsprintfA(local_404,pCVar2,uVar3,uVar4);
  thunk_FUN_00674ef0(local_404);
  thunk_FUN_00674eb0();
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_006f1170((undefined4 *)*param_1);
  }
  *param_1 = 0;
  return;
}


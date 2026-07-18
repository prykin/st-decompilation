
undefined4 * __cdecl thunk_FUN_00680650(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  LPCSTR pCVar3;
  byte *pbVar4;
  CHAR aCStack_404 [1024];
  
  puVar2 = FUN_006f0ec0(0x345,param_1,1,param_2,0);
  pbVar1 = (byte *)((int)puVar2 + 0x231);
  pbVar4 = pbVar1;
  pCVar3 = (LPCSTR)FUN_006b0140(7000,DAT_00807618);
  wsprintfA(aCStack_404,pCVar3,pbVar4);
  thunk_FUN_00674c40(pbVar1);
  thunk_FUN_00674d20(aCStack_404);
  thunk_FUN_00674e10(pbVar1);
  thunk_FUN_00674ef0(aCStack_404);
  DAT_00848a10 = 0;
  DAT_00848a0c = 0;
  return puVar2;
}


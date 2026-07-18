
undefined4 __cdecl FUN_00680890(byte param_1,byte *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  LPCSTR pCVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  CHAR local_408 [1024];
  uint local_8;
  uint uVar4;
  
  local_8 = 0;
  pcVar3 = (char *)thunk_FUN_006803b0(param_1);
  if (*pcVar3 == '\0') {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7d5604,0xff);
  }
  puVar7 = &local_8;
  cVar1 = thunk_FUN_00680570();
  FUN_006f13f0(param_1,pcVar3,param_2,param_3,param_4,cVar1,puVar7);
  DAT_00848a0c = DAT_00848a0c + local_8;
  DAT_00848a10 = DAT_00848a10 + 1;
  uVar8 = local_8;
  bVar2 = thunk_FUN_00680570();
  uVar4 = (uint)bVar2;
  pcVar6 = s_M_ANY_007ef0a4 + (uint)param_1 * 10;
  pCVar5 = (LPCSTR)FUN_006b0140(0x1b5a,DAT_00807618);
  wsprintfA(local_408,pCVar5,pcVar6,pcVar3,param_3,uVar4,uVar8);
  thunk_FUN_00674ef0(local_408);
  return 1;
}


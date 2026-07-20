
undefined4 * __fastcall FUN_0042a940(undefined4 *param_1)

{
  STPlayerRuntimeRecord *pSVar1;
  int iVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)param_1);
  *param_1 = &PTR_LAB_0079059c;
  pSVar1 = g_playerRuntime;
  for (iVar2 = 0x14d5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar1 = 0;
    pSVar1 = (STPlayerRuntimeRecord *)((int)&pSVar1->aiPlayer + 3);
  }
  pSVar1 = g_playerRuntime;
  do {
    pSVar1->raceId = 0;
    pSVar1 = pSVar1 + 1;
  } while ((int)pSVar1 < 0x7fa130);
  return param_1;
}


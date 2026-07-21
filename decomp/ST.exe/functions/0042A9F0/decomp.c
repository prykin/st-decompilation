
void FUN_0042a9f0(char param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  DArrayTy **ppDVar2;
  undefined4 *puVar3;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC::ResetActivityFromTmp(in_ECX,param_1,0,0,0);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC::ResetActivityFromTmp(in_ECX,param_1,1,0,0);
  iVar1 = (int)param_1;
  _param_1 = 5;
  ppDVar2 = &g_playerRuntime[iVar1].tempSlots[0][0].objectIds;
  do {
    if (*ppDVar2 != (DArrayTy *)0x0) {
      DArrayDestroy(*ppDVar2);
      *ppDVar2 = (DArrayTy *)0x0;
    }
    ((STPlayerTempSlot *)((int)ppDVar2 + -10))->objectType = 0;
    if (ppDVar2[0x14] != (DArrayTy *)0x0) {
      DArrayDestroy(ppDVar2[0x14]);
      ppDVar2[0x14] = (DArrayTy *)0x0;
    }
    *(undefined4 *)((int)ppDVar2 + 0x46) = 0;
    ppDVar2 = ppDVar2 + 4;
    _param_1 = _param_1 + -1;
  } while (_param_1 != 0);
  puVar3 = &g_playerRuntime[iVar1].field328_0x211;
  iVar1 = 10;
  do {
    if ((DArrayTy *)*puVar3 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)*puVar3);
      *puVar3 = 0;
    }
    *(undefined4 *)((int)puVar3 + -10) = 0;
    puVar3 = puVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


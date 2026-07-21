
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079059C (store 0042A955)
   Evidence: final_vptr=0079059C; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall STAllPlayersC::STAllPlayersC(STAllPlayersC *this)

{
  STPlayerRuntimeRecord *pSVar1;
  int iVar2;

  sub_006E60E0(this);
  this->vtable = &STAllPlayersCVTable;
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
  return &this->vtable;
}


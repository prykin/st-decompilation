
/* [STPrototypeApplier] Propagated return.
   Evidence: 00423E70 returns return of STAllPlayersC::GetObjPtr @ 00423E89
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: previous_type=/uint
   parameter=/ushort Evidence: entry-use width=/ushort; unmasked_dword_reads=0; evidence=00423E73
   MOV EAX,dword ptr [EBP + 0x8]; first-use mask or exact narrow callee formal */

STGameObjC * __thiscall FUN_00423e70(void *this,ushort param_1)

{
  STGameObjC *pSVar1;

  pSVar1 = STAllPlayersC::GetObjPtr
                     (g_allPlayers_007FA174,*(char *)((int)this + 0x24),param_1,CASE_1);
  return pSVar1;
}


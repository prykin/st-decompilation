
void FUN_004353b0(uint param_1,uint param_2,uint param_3)

{
  STGameObjC *pSVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint uVar2;
  char objPtr;
  int *piVar3;

  uVar2 = (uint)DAT_0080874d;
  if (((g_playerRuntime[uVar2].field324_0x203 == 1) &&
      (g_playerRuntime[uVar2].tempSlots[1][0].objectType == 0x19a)) &&
     (objPtr = (char)param_1, g_playerRuntime[uVar2].tempSlots[1][0].playerId == (int)objPtr)) {
    DArrayGetElement(g_playerRuntime[uVar2].tempSlots[1][0].objectIds,0,(void *)((int)&param_1 + 2))
    ;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if (param_1._2_2_ == (short)param_2) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar1 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_2,CASE_1);
      piVar3 = (int *)0x0;
      (*pSVar1->vtable[1].vfunc_14)();
      Library::DKW::TBL::FUN_006ae140
                (&(g_playerRuntime[DAT_0080874d].tempSlots[1][0].objectIds)->flags,0,&param_3);
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar1 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_3,CASE_1);
      STGameObjC::SetSelfCheckFlag(pSVar1,piVar3);
      (*pSVar1->vtable[1].vfunc_14)(1);
      thunk_FUN_0043fc50(CASE_4,0);
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  return;
}


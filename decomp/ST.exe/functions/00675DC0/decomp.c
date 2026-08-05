
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00675EA0 -> 00675DC0 @ 00675F34

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __cdecl FUN_00675dc0(uint param_1,DArrayTy *param_2)

{
  dword dVar1;
  ushort *puVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (((g_allPlayers_007FA174 != nullptr) && (param_2 != nullptr)) &&
     (dVar1 = param_2->count, dVar1 != 0)) {
    uVar6 = 0;
    if (dVar1 != 0) {
      uVar5 = 0;
      if (dVar1 == 0) {
        puVar2 = nullptr;
        goto LAB_00675dfe;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_2, uVar5) (runtime stride) */
        puVar2 = (ushort *)(param_2->elementSize * uVar5 + (int)param_2->data);
LAB_00675dfe:
        pSVar3 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)param_1,*puVar2,CASE_1);
        if (((pSVar3 != nullptr) && (iVar4 = (*pSVar3->vtable->vfunc_2C)(), iVar4 == 0x78)
            ) && (iVar4 = (*pSVar3->vtable->vfunc_2C)(), iVar4 == 0x78)) {
          pSVar3->field_0269 = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xffff;
      } while (uVar5 < param_2->count);
    }
    STAllPlayersC::AddObjsToGroup
              (g_allPlayers_007FA174,(char)param_1,0,&param_2->flags,nullptr);
  }
  return;
}



/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00675EA0 -> 00675DC0 @ 00675F34 */

void __cdecl FUN_00675dc0(uint param_1,DArrayTy *param_2)

{
  dword dVar1;
  undefined2 *puVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (((g_allPlayers_007FA174 != (STAllPlayersC *)0x0) && (param_2 != (DArrayTy *)0x0)) &&
     (dVar1 = param_2->count, dVar1 != 0)) {
    uVar6 = 0;
    if (dVar1 != 0) {
      uVar5 = 0;
      if (dVar1 == 0) {
        puVar2 = (undefined2 *)0x0;
        goto LAB_00675dfe;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_2, uVar5) (runtime stride) */
        puVar2 = (undefined2 *)(param_2->elementSize * uVar5 + (int)param_2->data);
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_00675dfe:
        pSVar3 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,(char)param_1,
                            CONCAT22((short)((uint)puVar2 >> 0x10),*puVar2),CASE_1);
        if (((pSVar3 != (STGameObjC *)0x0) && (iVar4 = (*pSVar3->vtable->vfunc_2C)(), iVar4 == 0x78)
            ) && (iVar4 = (*pSVar3->vtable->vfunc_2C)(), iVar4 == 0x78)) {
          pSVar3->field_0269 = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xffff;
      } while (uVar5 < param_2->count);
    }
    STAllPlayersC::AddObjsToGroup
              (g_allPlayers_007FA174,(char)param_1,0,&param_2->flags,(undefined2 *)0x0);
  }
  return;
}


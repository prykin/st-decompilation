
int __fastcall FUN_0065e3b0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  undefined2 *puVar1;
  STGameObjC *pSVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_8;

  uVar4 = 0;
  local_8 = 0;
  array = (DArrayTy *)thunk_FUN_0065da10(param_1,param_2);
  if (array != (DArrayTy *)0x0) {
    if (0 < (int)array->count) {
      bVar5 = array->count != 0;
      do {
        if (bVar5) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar4) (runtime stride) */
          puVar1 = (undefined2 *)(array->elementSize * uVar4 + (int)array->data);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar2 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,param_1->field_0024,
                            CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        if (pSVar2 != (STGameObjC *)0x0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar3 = (**(code **)&pSVar2->vtable[1].field_0x4)();
          local_8 = local_8 + iVar3;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < array->count;
      } while ((int)uVar4 < (int)array->count);
    }
    DArrayDestroy(array);
    return local_8;
  }
  return 0;
}



int __fastcall FUN_00661800(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  undefined2 *puVar1;
  STGameObjC *this;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_8;

  local_8 = 0;
  array = (DArrayTy *)thunk_FUN_0065da10(param_1,param_2);
  if (array != (DArrayTy *)0x0) {
    uVar3 = 0;
    iVar2 = 0;
    if (0 < (int)array->count) {
      bVar4 = array->count != 0;
      do {
        if (bVar4) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar3) (runtime stride) */
          puVar1 = (undefined2 *)(array->elementSize * uVar3 + (int)array->data);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        this = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,param_1->field_0024,
                          CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((((this != (STGameObjC *)0x0) &&
             (iVar2 = (**(code **)&this->vtable->field_0x2c)(), 0x31 < iVar2)) && (iVar2 < 0x74)) &&
           ((*(short *)&param_1->field_0x39 != 3 &&
            ((this->field_0361 == 5 || (iVar2 = thunk_FUN_004c93e0(this,5), 0 < iVar2)))))) {
          local_8 = local_8 + 1;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < array->count;
        iVar2 = local_8;
      } while ((int)uVar3 < (int)array->count);
    }
    DArrayDestroy(array);
    return iVar2;
  }
  return 0;
}



int __fastcall FUN_0065e3b0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  undefined2 *puVar1;
  STGameObjC *this;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  AnonShape_0041AF40_F59F8577 *unaff_EDI;
  uint uVar3;
  bool bVar4;
  int local_8;

  uVar3 = 0;
  local_8 = 0;
  array = (DArrayTy *)AiFltClassTy::sub_0065DA10((AiFltClassTy *)param_1,param_2);
  if (array != (DArrayTy *)0x0) {
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
                         (g_allPlayers_007FA174,param_1->field_0024,
                          CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        if (this != (STGameObjC *)0x0) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          iVar2 = (*this->vtable[1].GetMessage)(this,unaff_EDI);
          local_8 = local_8 + iVar2;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < array->count;
      } while ((int)uVar3 < (int)array->count);
    }
    DArrayDestroy(array);
    return local_8;
  }
  return 0;
}


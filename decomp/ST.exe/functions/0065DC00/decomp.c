
int __fastcall FUN_0065dc00(AiFltClassTy *param_1,undefined4 param_2,uint param_3,char param_4)

{
  char cVar1;
  DArrayTy *array;
  dword dVar2;
  undefined2 *puVar3;
  STGameObjC *this;
  int iVar4;
  IMAGE_DOS_HEADER *pIVar5;
  uint uVar6;
  int local_8;

  local_8 = 0;
  array = (DArrayTy *)AiFltClassTy::sub_0065DA10(param_1,param_2);
  if (array != (DArrayTy *)0x0) {
    cVar1 = param_1->field_0081;
    if ((cVar1 < '\0') || ('\a' < cVar1)) {
      cVar1 = (char)param_1->field_0024;
    }
    if ((param_4 != '\b') && ((param_4 < '\0' || (cVar1 = param_4, '\b' < param_4)))) {
      param_4 = -1;
      cVar1 = param_4;
    }
    param_4 = cVar1;
    dVar2 = array->count;
    uVar6 = 0;
    if (0 < (int)dVar2) {
      do {
        if (uVar6 < dVar2) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar6) (runtime stride) */
          puVar3 = (undefined2 *)(array->elementSize * uVar6 + (int)array->data);
        }
        else {
          puVar3 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        this = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&param_1->field_0024,
                          CONCAT22((short)((uint)puVar3 >> 0x10),*puVar3),CASE_1);
        if (((this != (STGameObjC *)0x0) && (iVar4 = (*this->vtable[1].vfunc_24)(this), iVar4 != 0))
           && ((param_4 < '\0' || (iVar4 = (*this->vtable->vfunc_6C)(this), param_4 == iVar4)))) {
          iVar4 = (*this->vtable->vfunc_2C)();
          pIVar5 = thunk_FUN_00674fb0(iVar4);
          if ((param_3 & (uint)pIVar5) != 0) {
            local_8 = local_8 + 1;
          }
        }
        dVar2 = array->count;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar2);
    }
    DArrayDestroy(array);
    return local_8;
  }
  return 0;
}


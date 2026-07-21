
int __fastcall FUN_0065dc00(int param_1,undefined4 param_2,uint param_3,char param_4)

{
  char cVar1;
  DArrayTy *array;
  dword dVar2;
  undefined2 *puVar3;
  STGameObjC *pSVar4;
  int iVar5;
  IMAGE_DOS_HEADER *pIVar6;
  uint uVar7;
  int local_8;

  local_8 = 0;
  array = (DArrayTy *)thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)param_1,param_2);
  if (array != (DArrayTy *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    cVar1 = *(char *)(param_1 + 0x81);
    if ((cVar1 < '\0') || ('\a' < cVar1)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      cVar1 = (char)*(undefined4 *)(param_1 + 0x24);
    }
    if ((param_4 != '\b') && ((param_4 < '\0' || (cVar1 = param_4, '\b' < param_4)))) {
      param_4 = -1;
      cVar1 = param_4;
    }
    param_4 = cVar1;
    dVar2 = array->count;
    uVar7 = 0;
    if (0 < (int)dVar2) {
      do {
        if (uVar7 < dVar2) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar7) (runtime stride) */
          puVar3 = (undefined2 *)(array->elementSize * uVar7 + (int)array->data);
        }
        else {
          puVar3 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar4 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,*(char *)(param_1 + 0x24),
                            CONCAT22((short)((uint)puVar3 >> 0x10),*puVar3),CASE_1);
        if (((pSVar4 != (STGameObjC *)0x0) && (iVar5 = (*pSVar4->vtable[1].vfunc_24)(), iVar5 != 0))
           && ((param_4 < '\0' || (iVar5 = (*pSVar4->vtable->vfunc_6C)(), param_4 == iVar5)))) {
          iVar5 = (*pSVar4->vtable->vfunc_2C)();
          pIVar6 = thunk_FUN_00674fb0(iVar5);
          if ((param_3 & (uint)pIVar6) != 0) {
            local_8 = local_8 + 1;
          }
        }
        dVar2 = array->count;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)dVar2);
    }
    DArrayDestroy(array);
    return local_8;
  }
  return 0;
}


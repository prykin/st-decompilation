
uint __thiscall FUN_0062d230(void *this,int *param_1)

{
  DArrayTy *groupContent;
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  bool bVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  groupContent = *(DArrayTy **)((int)this + *param_1 * 4 + 0x30);
  if (groupContent != (DArrayTy *)0x0) {
    uVar1 = groupContent->count;
    uVar3 = 0;
    if (0 < (int)uVar1) {
      bVar4 = uVar1 != 0;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(groupContent, uVar3) (runtime stride) */
      while ((((!bVar4 ||
               (pvVar2 = (void *)(groupContent->elementSize * uVar3 + (int)groupContent->data),
               pvVar2 == (void *)0x0)) || (*(int *)((int)pvVar2 + 4) != param_1[1])) ||
             (((*(int *)((int)pvVar2 + 8) != param_1[2] ||
               (*(int *)((int)pvVar2 + 0xc) != param_1[3])) ||
              (*(int *)((int)pvVar2 + 0x14) != param_1[5]))))) {
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < uVar1;
        if ((int)uVar1 <= (int)uVar3) {
          return 0xffffffff;
        }
      }
      FUN_006b0c70(groupContent,uVar3);
      return uVar3;
    }
  }
  return 0xffffffff;
}


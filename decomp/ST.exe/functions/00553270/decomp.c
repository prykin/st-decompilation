
void FUN_00553270(void)

{
  void *pvVar1;
  DArrayTy *array;
  uint uVar2;
  bool bVar3;

  if (PTR_00802a4c != (DArrayTy *)0x0) {
    uVar2 = 0;
    array = PTR_00802a4c;
    if (0 < (int)PTR_00802a4c->count) {
      bVar3 = PTR_00802a4c->count != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar2) (runtime stride) */
        if (((bVar3) &&
            (pvVar1 = (void *)(array->elementSize * uVar2 + (int)array->data), pvVar1 != (void *)0x0
            )) && (*(int *)((int)pvVar1 + 2) != 0)) {
          FreeAndNull((void **)((int)pvVar1 + 2));
          array = PTR_00802a4c;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < array->count;
      } while ((int)uVar2 < (int)array->count);
    }
    DArrayDestroy(array);
    PTR_00802a4c = (DArrayTy *)0x0;
  }
  return;
}


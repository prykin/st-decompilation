
void __thiscall FUN_00617aa0(void *this,int param_1)

{
  void *pvVar1;
  DArrayTy *groupContent;
  uint uVar2;
  bool bVar3;

  groupContent = *(DArrayTy **)((int)this + 0x5e);
  if (groupContent != (DArrayTy *)0x0) {
    uVar2 = 0;
    if (0 < (int)groupContent->count) {
      bVar3 = groupContent->count != 0;
      do {
        if (bVar3) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(groupContent, uVar2) (runtime stride) */
          pvVar1 = (void *)(groupContent->elementSize * uVar2 + (int)groupContent->data);
        }
        else {
          pvVar1 = (void *)0x0;
        }
        if (*(int *)((int)pvVar1 + 0x1c) == param_1) {
          FUN_006b0c70(groupContent,uVar2);
        }
        groupContent = *(DArrayTy **)((int)this + 0x5e);
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < groupContent->count;
      } while ((int)uVar2 < (int)groupContent->count);
    }
  }
  return;
}


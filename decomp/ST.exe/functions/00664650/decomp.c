
undefined4 __thiscall FUN_00664650(void *this,int param_1)

{
  dword dVar1;
  int *piVar2;
  DArrayTy *groupContent;
  uint uVar3;
  bool bVar4;

  groupContent = *(DArrayTy **)((int)this + 0x217);
  dVar1 = groupContent->count;
  if (dVar1 != 0) {
    uVar3 = 0;
    if (0 < (int)dVar1) {
      bVar4 = dVar1 != 0;
      do {
        if (bVar4) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(groupContent, uVar3) (runtime stride) */
          piVar2 = (int *)(groupContent->elementSize * uVar3 + (int)groupContent->data);
        }
        else {
          piVar2 = (int *)0x0;
        }
        if (*piVar2 == param_1) {
          FUN_006b0c70(groupContent,uVar3);
        }
        groupContent = *(DArrayTy **)((int)this + 0x217);
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < groupContent->count;
      } while ((int)uVar3 < (int)groupContent->count);
    }
    return *(undefined4 *)(*(int *)((int)this + 0x217) + 0xc);
  }
  return 0xffffffff;
}



undefined4 FUN_00496f00(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  bool bVar5;

  uVar2 = 0;
  uVar4 = 0;
  uVar1 = PTR_007fb270->count;
  if (0 < (int)uVar1) {
    bVar5 = uVar1 != 0;
    while( true ) {
      if (bVar5) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_007fb270, uVar4) (runtime stride) */
        pvVar3 = (void *)(PTR_007fb270->elementSize * uVar4 + (int)PTR_007fb270->data);
      }
      else {
        pvVar3 = (void *)0x0;
      }
      if (*(int *)((int)pvVar3 + 8) == param_1) break;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar1;
      if ((int)uVar1 <= (int)uVar4) {
        return uVar2;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


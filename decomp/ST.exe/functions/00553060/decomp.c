
undefined4 __cdecl FUN_00553060(int param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;

  if (PTR_00802a4c != (DArrayTy *)0x0) {
    uVar1 = PTR_00802a4c->count;
    uVar3 = 0;
    if (0 < (int)uVar1) {
      bVar4 = uVar1 != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00802a4c, uVar3) (runtime stride) */
        if ((((bVar4) &&
             (psVar2 = (short *)(PTR_00802a4c->elementSize * uVar3 + (int)PTR_00802a4c->data),
             psVar2 != (short *)0x0)) && (*(int *)(psVar2 + 1) != 0)) && (*psVar2 == param_1)) {
          return *(undefined4 *)(psVar2 + 1);
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < uVar1;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  return 0;
}


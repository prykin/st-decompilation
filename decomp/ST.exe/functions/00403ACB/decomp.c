
undefined4 __cdecl thunk_FUN_00553060(int param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  
  if (DAT_00802a4c != 0) {
    uVar1 = *(uint *)(DAT_00802a4c + 0xc);
    uVar3 = 0;
    if (0 < (int)uVar1) {
      bVar4 = uVar1 != 0;
      do {
        if ((((bVar4) &&
             (psVar2 = (short *)(*(int *)(DAT_00802a4c + 8) * uVar3 + *(int *)(DAT_00802a4c + 0x1c))
             , psVar2 != (short *)0x0)) && (*(int *)(psVar2 + 1) != 0)) && (*psVar2 == param_1)) {
          return *(undefined4 *)(psVar2 + 1);
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < uVar1;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  return 0;
}


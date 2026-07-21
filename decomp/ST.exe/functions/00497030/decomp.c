
uint FUN_00497030(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;

  uVar1 = PTR_007fb270->count;
  uVar5 = 0;
  if ((int)uVar1 < 1) {
    return 0xffffffff;
  }
  do {
    if (uVar5 < uVar1) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_007fb270, uVar5) (runtime stride) */
      piVar4 = (int *)(PTR_007fb270->elementSize * uVar5 + (int)PTR_007fb270->data);
    }
    else {
      piVar4 = (int *)0x0;
    }
    if ((param_4 == 0) || (piVar4[2] != param_3)) {
      iVar2 = (param_1 - *piVar4) + 7;
      iVar3 = (param_2 - piVar4[1]) + 7;
      if ((iVar2 < 0xf) && ((iVar3 < 0xf && ((&DAT_007abc64)[iVar3 + iVar2 * 0xf] != '\0')))) {
        if (param_5 < 1) {
          return uVar5;
        }
        thunk_FUN_0060ca40((void *)piVar4[5],param_5);
        return uVar5;
      }
    }
    uVar5 = uVar5 + 1;
    if ((int)uVar1 <= (int)uVar5) {
      return 0xffffffff;
    }
  } while( true );
}


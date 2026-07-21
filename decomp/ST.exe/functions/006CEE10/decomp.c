
int FUN_006cee10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_2 + 0x4c);
  if (iVar2 < 0) {
    if ((iVar2 != -2) && (iVar2 != -1)) {
      return 10;
    }
    iVar3 = 0;
    piVar4 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = iVar3;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*piVar4 == *(int *)(param_2 + 0x44)) break;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      iVar1 = iVar2;
    } while (iVar3 < 10);
    iVar2 = iVar1;
    if (iVar2 == -2) {
      iVar2 = 1;
    }
  }
  return iVar2;
}


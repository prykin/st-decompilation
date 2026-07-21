
void FUN_0075fca0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;

  iVar4 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)param_1 + 0x1ba);
  if (0 < (int)param_1[0x1c]) {
    piVar5 = (int *)(iVar1 + 0x34);
    do {
      iVar2 = 0;
      if (0 < iVar4) {
        piVar3 = (int *)(iVar1 + 0x20);
        do {
          if (piVar5[-5] == *piVar3) {
            piVar3 = *(int **)(iVar1 + 0x34 + iVar2 * 4);
            if (piVar3 != (int *)0x0) goto LAB_0075fcef;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar4);
      }
      piVar3 = FUN_0075fd10(param_1,piVar5[-5]);
LAB_0075fcef:
      *piVar5 = (int)piVar3;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < (int)param_1[0x1c]);
  }
  return;
}


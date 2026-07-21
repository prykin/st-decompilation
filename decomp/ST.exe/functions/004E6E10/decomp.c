
void FUN_004e6e10(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;

  *param_3 = 0;
  *param_4 = 0;
  iVar4 = 0;
  iVar6 = 0;
  puVar3 = &DAT_007c0e4c + (param_1 + -1) * 0xc6;
  do {
    iVar2 = 1;
    if (puVar3[1] != '\0') {
      piVar5 = param_3 + iVar4;
      do {
        if (2 < iVar2) break;
        if ((byte)puVar3[iVar2] == param_2) {
          iVar4 = iVar4 + 1;
          *piVar5 = iVar6 + 0x32;
          piVar5 = piVar5 + 1;
        }
        iVar1 = iVar2 + 1;
        iVar2 = iVar2 + 1;
      } while (puVar3[iVar1] != '\0');
    }
    iVar6 = iVar6 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar6 < 0x42);
  iVar6 = 0;
  iVar4 = 0;
  do {
    iVar2 = 1;
    if ((&DAT_007c0dd5)[iVar4 * 3] != '\0') {
      piVar5 = param_4 + iVar6;
      do {
        if (2 < iVar2) break;
        if ((byte)(&DAT_007c0dd4)[iVar2 + iVar4 * 3] == param_2) {
          iVar6 = iVar6 + 1;
          *piVar5 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        iVar1 = iVar2 + iVar4 * 3;
        iVar2 = iVar2 + 1;
      } while ((&DAT_007c0dd5)[iVar1] != '\0');
    }
    iVar4 = iVar4 + 1;
    if (0x27 < iVar4) {
      return;
    }
  } while( true );
}


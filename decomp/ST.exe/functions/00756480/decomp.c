
void FUN_00756480(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
    goto LAB_00756569;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if ((*(int *)(param_1 + 0x119) == 0) || (*(char *)(param_1 + 0x11d) == '\0')) {
        *(undefined4 *)(param_1 + 0x20) = 4;
        *(undefined4 *)(param_1 + 0x24) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 5;
        *(undefined4 *)(param_1 + 0x24) = 4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    goto LAB_00756569;
  }
  if (*(int *)(param_1 + 0x110) == 0) {
    if (*(int *)(param_1 + 0x119) == 0) {
      piVar2 = *(int **)(param_1 + 0xd0);
      if ((((*piVar2 != 1) && (*piVar2 == 0x52)) && (piVar2[0x15] == 0x47)) &&
         (piVar2[0x2a] == 0x42)) goto LAB_00756548;
    }
    else if (*(char *)(param_1 + 0x11d) == '\0') {
LAB_00756548:
      *(undefined4 *)(param_1 + 0x20) = 2;
      *(undefined4 *)(param_1 + 0x24) = 2;
      goto LAB_00756569;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 3;
  *(undefined4 *)(param_1 + 0x24) = 2;
LAB_00756569:
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x50) = 2;
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0x100;
  return;
}


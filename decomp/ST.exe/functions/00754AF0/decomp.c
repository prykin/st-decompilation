
void FUN_00754af0(int param_1,int param_2,uint param_3)

{
  if (*(short *)(param_2 + 0xe) == 8) {
    if (*(int *)(param_2 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0x100;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      if ((param_3 & 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x40) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if ((param_3 & 0x80) == 0) {
    if ((param_3 & 0x20) == 0) {
      if ((param_3 & 0x40) != 0) {
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 2;
  }
  if ((param_3 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  if ((param_3 & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


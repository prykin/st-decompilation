
int __fastcall FUN_004b8c00(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x249) < 0) {
    switch(*(undefined4 *)(param_1 + 0x245)) {
    case 0:
    case 3:
    case 5:
      return 0;
    case 1:
      return 1;
    case 2:
    case 4:
      return 4;
    case 6:
      iVar1 = 6;
    }
    return iVar1;
  }
  return *(int *)(param_1 + 0x249);
}


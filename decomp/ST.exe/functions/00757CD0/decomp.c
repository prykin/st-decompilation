
undefined4 FUN_00757cd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18e);
  do {
    if (iVar1 < 0xc0) {
LAB_00757ce8:
      iVar2 = 2;
    }
    else if ((((iVar1 < 0xd0) || (0xd7 < iVar1)) || (iVar1 == (param_2 + 1U & 7) + 0xd0)) ||
            (iVar1 == (param_2 + 2U & 7) + 0xd0)) {
      iVar2 = 3;
    }
    else {
      if ((iVar1 == (param_2 - 1U & 7) + 0xd0) || (iVar1 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_00757ce8;
      iVar2 = 1;
    }
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x18e) = 0;
      return 1;
    }
    if (iVar2 == 2) {
      iVar1 = FUN_00757d90(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x18e);
    }
    else if (iVar2 == 3) {
      return 1;
    }
  } while( true );
}



undefined4 FUN_00748186(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    if (*(int *)(param_1 + 100) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 100) + 0xc;
    }
    *param_2 = iVar2;
    iVar2 = *(int *)(param_1 + 100);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0xc) + 4))(iVar2 + 0xc);
    }
    if (*(short **)(param_1 + 8) == (short *)0x0) {
      *(undefined2 *)(param_2 + 2) = 0;
    }
    else {
      FUN_0074d580((short *)(param_2 + 2),*(short **)(param_1 + 8));
    }
    param_2[1] = *(int *)(param_1 + 0x58);
    uVar1 = 0;
  }
  return uVar1;
}


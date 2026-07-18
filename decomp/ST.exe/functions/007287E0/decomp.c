
undefined4 FUN_007287e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != DAT_00857104) {
    do {
      iVar2 = *param_1 + param_2;
      if (iVar2 < DAT_0085710c) {
        if (iVar2 < 0) {
          iVar2 = DAT_0085710c + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      iVar1 = (int)*(short *)(DAT_00857110 + 2 + iVar2 * 8) -
              (int)*(short *)(DAT_00857110 + 2 + param_2 * 8);
      param_1[1] = iVar1;
      if (0 < iVar1) {
        param_1[2] = iVar2;
        param_1[3] = (int)*(short *)(DAT_00857110 + param_2 * 8) << 0x10;
        param_1[4] = (((int)*(short *)(DAT_00857110 + iVar2 * 8) -
                      (int)*(short *)(DAT_00857110 + param_2 * 8)) * 0x10000) / param_1[1];
        param_1[5] = (int)*(short *)(DAT_00857110 + 4 + param_2 * 8) << 0x10;
        param_1[6] = (((int)*(short *)(DAT_00857110 + 4 + iVar2 * 8) -
                      (int)*(short *)(DAT_00857110 + 4 + param_2 * 8)) * 0x10000) / param_1[1];
        return 1;
      }
      param_2 = iVar2;
    } while (iVar2 != DAT_00857104);
  }
  return 0;
}


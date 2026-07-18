
undefined4 FUN_00727c80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != DAT_00857070) {
    do {
      iVar1 = *param_1 + param_2;
      if (iVar1 < 3) {
        if (iVar1 < 0) {
          iVar1 = 2;
        }
      }
      else {
        iVar1 = 0;
      }
      iVar2 = ((int)(&DAT_008570ac)[iVar1 * 4] >> 0x10) -
              ((int)(&DAT_008570ac)[param_2 * 4] >> 0x10);
      param_1[1] = iVar2;
      if (0 < iVar2) {
        param_1[2] = iVar1;
        param_1[9] = (&DAT_008570a8)[param_2 * 4];
        iVar2 = FUN_006db610((&DAT_008570a8)[iVar1 * 4] - (&DAT_008570a8)[param_2 * 4],
                             param_1[1] << 0x10);
        param_1[10] = iVar2;
        iVar2 = (&DAT_008570b0)[param_2 * 4];
        param_1[7] = iVar2;
        iVar1 = FUN_006db610((&DAT_008570b0)[iVar1 * 4] - iVar2,param_1[1] << 0x10);
        param_1[8] = iVar1;
        return 1;
      }
      param_2 = iVar1;
    } while (iVar1 != DAT_00857070);
  }
  return 0;
}


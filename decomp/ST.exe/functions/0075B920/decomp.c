
void FUN_0075b920(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_10;
  int local_c;
  
  piVar4 = param_1;
  local_c = 0;
  iVar1 = *(int *)((int)param_1 + 0x1aa);
  if (0 < *(int *)((int)param_1 + 0x136)) {
    local_10 = (undefined4 *)(iVar1 + 0x14);
    param_1 = (int *)((int)param_1 + 0x13a);
    do {
      iVar2 = *(int *)(*param_1 + 0x14);
      iVar3 = *(int *)(*param_1 + 0x18);
      if (((iVar2 < 0) || (3 < iVar2)) || (piVar4[iVar2 + 0x2b] == 0)) {
        RaiseInternalException(0x31,DAT_007ed77c,s_E__DKW_JPG_C_jdhuff_c_007f2df8,100);
      }
      if (((iVar3 < 0) || (3 < iVar3)) || (piVar4[iVar3 + 0x2f] == 0)) {
        RaiseInternalException(0x31,DAT_007ed77c,s_E__DKW_JPG_C_jdhuff_c_007f2df8,0x67);
      }
      FUN_0075b540(piVar4,piVar4[iVar2 + 0x2b],(int *)(iVar1 + 0x28 + iVar2 * 4));
      FUN_0075b540(piVar4,piVar4[iVar3 + 0x2f],(int *)(iVar1 + 0x38 + iVar3 * 4));
      local_c = local_c + 1;
      *local_10 = 0;
      local_10 = local_10 + 1;
      param_1 = param_1 + 1;
    } while (local_c < *(int *)((int)piVar4 + 0x136));
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(int *)(iVar1 + 0x24) = piVar4[0x43];
  return;
}


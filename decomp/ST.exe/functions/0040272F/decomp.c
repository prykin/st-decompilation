
void thunk_FUN_00692ba0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x23)) {
    puVar3 = (undefined4 *)(param_1 + 0x2d);
    do {
      pbVar2 = &DAT_007d5930;
      do {
        FUN_006c8e60((int *)*puVar3,*pbVar2,pbVar2[4]);
        pbVar2 = pbVar2 + 8;
      } while ((int)pbVar2 < 0x7d5958);
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < *(short *)(param_1 + 0x23));
  }
  return;
}


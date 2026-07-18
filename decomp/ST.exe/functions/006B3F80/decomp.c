
void FUN_006b3f80(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x210) != 0) {
    local_c = *(int *)(param_1 + 0x1ec);
    iVar2 = *(int *)(param_1 + 0x1e4);
    local_14 = *(int *)(param_1 + 0x11c + iVar2 * 8) + local_c * param_2;
    local_8 = *(int *)(param_1 + 0x1f0);
    local_10 = *(int *)(param_1 + 0x120 + iVar2 * 8) + local_8 * param_3;
    iVar2 = FUN_006cfeb0(&local_14,&local_14,(int *)(iVar2 * 0x10 + 0x14 + param_1));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 500) + 7;
      pbVar1 = (byte *)(((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * param_3 +
                        *(int *)(param_1 + 0x210) + ((int)(param_2 ^ 7) >> 3));
      *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
    }
  }
  return;
}


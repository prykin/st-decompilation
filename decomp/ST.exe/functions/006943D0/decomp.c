
undefined4 __thiscall FUN_006943d0(void *this,int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  
  iVar2 = thunk_FUN_00693e60(this,param_1);
  if (iVar2 != 0) {
    pbVar3 = (byte *)(iVar2 + 1);
    do {
      bVar1 = *pbVar3;
      bVar4 = bVar1 < *param_2;
      if (bVar1 != *param_2) {
LAB_0069440e:
        iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
        goto LAB_00694413;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar4 = bVar1 < param_2[1];
      if (bVar1 != param_2[1]) goto LAB_0069440e;
      pbVar3 = pbVar3 + 2;
      param_2 = param_2 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_00694413:
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}


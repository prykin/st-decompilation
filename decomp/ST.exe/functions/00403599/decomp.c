
int __cdecl thunk_FUN_006836c0(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if ((param_1 == 0) || (param_2 == (byte *)0x0)) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7d5604,0x38a);
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      pbVar5 = param_2;
      if (iVar6 < iVar2) {
        pbVar3 = *(byte **)(*(int *)(param_1 + 0x14) + iVar6 * 4);
      }
      else {
        pbVar3 = (byte *)0x0;
      }
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00683729:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0068372e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00683729;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0068372e:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  iVar2 = FUN_006b5aa0(param_1,(char *)param_2);
  return iVar2;
}


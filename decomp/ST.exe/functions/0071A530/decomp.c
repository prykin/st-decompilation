
undefined4 __cdecl FUN_0071a530(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  byte local_208 [512];
  undefined4 local_8;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 5) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 5) + 4) = 0;
    iVar2 = FUN_006b1190(*(int *)(param_1 + 5),(undefined4 *)local_208);
    while (-1 < iVar2) {
      pbVar3 = local_208;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_0071a592:
          iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_0071a597;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_0071a592;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_0071a597:
      if (iVar2 == 0) {
        return local_8;
      }
      iVar2 = FUN_006b1190(*(int *)(param_1 + 5),(undefined4 *)local_208);
    }
  }
  if (param_3 != 0) {
    FUN_006a5e40(-4,DAT_007ed77c,0x7f0800,0x131);
  }
  return 0;
}


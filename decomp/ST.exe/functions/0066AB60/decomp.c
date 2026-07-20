
int FUN_0066ab60(char param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  void *this;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  if (((param_2 != (byte *)0x0) && (param_3 != (byte *)0x0)) &&
     (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    this = (void *)thunk_FUN_004357f0(param_1);
    if ((this != (void *)0x0) && (iVar3 = thunk_FUN_00679d60(this,param_2,param_3), iVar3 != 0)) {
      return iVar3;
    }
    if ((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) &&
       (iVar3 = thunk_FUN_0042a9c0(param_1), iVar3 != 0)) {
      uVar2 = *(uint *)(iVar3 + 0xc);
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        if (uVar2 < *(uint *)(iVar3 + 0xc)) {
          piVar4 = (int *)(*(int *)(iVar3 + 8) * uVar2 + *(int *)(iVar3 + 0x1c));
        }
        else {
          piVar4 = (int *)0x0;
        }
        if ((*piVar4 != 0) && (iVar5 = thunk_FUN_00423300(*piVar4), iVar5 != 0)) {
          pbVar8 = (byte *)(iVar5 + 0x3b);
          pbVar6 = param_2;
          do {
            bVar1 = *pbVar6;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_0066ac18:
              iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_0066ac1d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_0066ac18;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_0066ac1d:
          if (iVar7 == 0) {
            return iVar5;
          }
        }
      }
    }
  }
  return 0;
}


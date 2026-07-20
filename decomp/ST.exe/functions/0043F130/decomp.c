
short FUN_0043f130(char param_1,byte *param_2)

{
  byte bVar1;
  DArrayTy *pDVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  byte local_18 [16];
  dword local_8;
  
  iVar9 = 0;
  sVar5 = 0;
  pDVar2 = g_playerRuntime[param_1].objects;
  local_8 = pDVar2->count;
  sVar4 = 0;
  if (0 < (int)local_8) {
    do {
      sVar5 = sVar4;
      piVar3 = *(int **)((int)pDVar2->data + iVar9 * 4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x74))(local_18);
        pbVar8 = local_18;
        pbVar6 = param_2;
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0043f1a0:
            iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0043f1a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0043f1a0;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_0043f1a5:
        if (iVar7 == 0) {
          sVar5 = sVar5 + 1;
        }
      }
      iVar9 = iVar9 + 1;
      sVar4 = sVar5;
    } while (iVar9 < (int)local_8);
  }
  return sVar5;
}


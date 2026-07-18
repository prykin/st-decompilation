
uint __thiscall FUN_00678e00(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  
  iVar2 = *(int *)((int)this + 0x695);
  uVar6 = *(uint *)(iVar2 + 0xc);
  uVar8 = 0;
  if (0 < (int)uVar6) {
    bVar9 = uVar6 != 0;
    do {
      if (bVar9) {
        piVar3 = (int *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
      }
      else {
        piVar3 = (int *)0x0;
      }
      if (*piVar3 != 0) {
        if (((iVar2 == 0) || ((int)uVar8 < 0)) || ((int)uVar6 <= (int)uVar8)) {
LAB_00678e60:
          iVar4 = 0;
        }
        else {
          if (uVar8 < uVar6) {
            piVar3 = (int *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
          }
          else {
            piVar3 = (int *)0x0;
          }
          iVar4 = *piVar3;
          if (piVar3[1] != 0) {
            if (iVar4 == 0) goto LAB_00678e60;
            iVar4 = iVar4 + 0x20;
          }
        }
        pbVar7 = (byte *)(iVar4 + 0x1b);
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00678e8c:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00678e91;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00678e8c;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00678e91:
        if (iVar4 == 0) {
          return uVar8;
        }
      }
      uVar6 = *(uint *)(iVar2 + 0xc);
      uVar8 = uVar8 + 1;
      bVar9 = uVar8 < uVar6;
    } while ((int)uVar8 < (int)uVar6);
  }
  return 0xffffffff;
}


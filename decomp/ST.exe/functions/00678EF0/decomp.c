
int __thiscall FUN_00678ef0(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  iVar2 = *(int *)((int)this + 0x695);
  uVar8 = 0;
  uVar3 = *(uint *)(iVar2 + 0xc);
  if (0 < (int)uVar3) {
    do {
      if (((iVar2 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar3)) {
        if (uVar8 < uVar3) {
          piVar5 = (int *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
        }
        else {
          piVar5 = (int *)0x0;
        }
        if ((piVar5[1] != 0) && (iVar4 = *piVar5, iVar4 != 0)) {
          pbVar9 = (byte *)(iVar4 + 0x3b);
          pbVar6 = param_1;
          do {
            bVar1 = *pbVar6;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_00678f62:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00678f67;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_00678f62;
            pbVar6 = pbVar6 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00678f67:
          if (iVar7 == 0) {
            return iVar4;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar3);
  }
  return 0;
}


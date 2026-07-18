
int * FUN_00752e40(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  short *psVar10;
  
  if (param_1 == (int *)0x0) {
    piVar2 = FUN_006aac10(0x3e);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  else {
    piVar2 = param_1;
    for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    *(undefined2 *)piVar2 = 0;
    piVar2 = param_1;
  }
  ((short *)((int)piVar2 + 0x1a))[0] = -1;
  ((short *)((int)piVar2 + 0x1a))[1] = -1;
  if (*param_2 == 0x46464952) {
    iVar8 = param_2[1];
    piVar4 = param_2 + 3;
    if (param_2[2] == 0x45564157) {
      for (; piVar4 < (int *)((int)param_2 + iVar8 + 8);
          piVar4 = (int *)((int)piVar4 + (uVar5 + 1 & 0xfffffffe) + 8)) {
        iVar1 = *piVar4;
        puVar3 = (uint *)(piVar4 + 1);
        if (iVar1 == 0x20746d66) {
          uVar5 = *puVar3;
          if ((uVar5 < 0x10) || (0x32 < uVar5)) goto LAB_00752fe6;
          *piVar2 = piVar4[2];
          piVar2[1] = piVar4[3];
          piVar2[2] = piVar4[4];
          piVar2[3] = piVar4[5];
          if (0x12 < uVar5) {
            *(short *)(piVar2 + 4) = (short)piVar4[6];
            puVar9 = (undefined4 *)((int)piVar4 + 0x1a);
            psVar10 = (short *)((int)piVar2 + 0x1e);
            for (uVar6 = uVar5 - 0x12 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)psVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              psVar10 = psVar10 + 2;
            }
            for (uVar6 = uVar5 - 0x12 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)psVar10 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              psVar10 = (short *)((int)psVar10 + 1);
            }
          }
          if (((short)*piVar2 != 1) &&
             (((short)*piVar2 != 2 || (*(short *)((int)piVar2 + 0xe) != 4)))) goto LAB_00752fe6;
        }
        else {
          if (iVar1 == 0x61746164) {
            *(uint *)((int)piVar2 + 0x12) = *puVar3;
            *(int **)((int)piVar2 + 0x16) = piVar4 + 2;
            break;
          }
          uVar5 = *puVar3;
          if (iVar1 == 0x74636166) {
            *(int *)((int)piVar2 + 0x1a) = piVar4[2];
          }
        }
      }
      if ((short)*piVar2 == 2) {
        uVar6 = (uint)*(ushort *)(piVar2 + 3);
        uVar5 = *(uint *)((int)piVar2 + 0x12) / uVar6;
        uVar7 = *(uint *)((int)piVar2 + 0x12) % uVar6;
        if (*(short *)((int)piVar2 + 2) == 1) {
          if (uVar7 < 8) {
            iVar8 = 0;
          }
          else {
            iVar8 = uVar7 - 6;
          }
          iVar8 = ((uVar6 - 6) * uVar5 + iVar8) * 2;
        }
        else {
          if (uVar7 < 0xf) {
            iVar8 = 0;
          }
          else {
            iVar8 = uVar7 - 0xc;
          }
          iVar8 = (uVar6 - 0xc) * uVar5 + iVar8;
        }
        if (iVar8 < 1) goto LAB_00752fe6;
        if ((*(int *)((int)piVar2 + 0x1a) < 1) || (iVar8 < *(int *)((int)piVar2 + 0x1a))) {
          *(int *)((int)piVar2 + 0x1a) = iVar8;
        }
      }
      if (*(int *)((int)piVar2 + 0x16) != 0) {
        return piVar2;
      }
    }
  }
LAB_00752fe6:
  if (param_1 == (int *)0x0) {
    FUN_006a5e90(piVar2);
  }
  FUN_006a5e40(-5,DAT_007ed77c,0x7f2bd8,0x5d);
  return (int *)0x0;
}


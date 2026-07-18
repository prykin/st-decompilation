
void thunk_FUN_004e7390(int param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iStack_20;
  int iStack_1c;
  int iStack_14;
  int *piStack_10;
  int iStack_c;
  char *pcStack_8;
  
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar3 = thunk_FUN_004406c0((char)param_1);
    puVar11 = &DAT_00801020;
    for (iVar5 = 0xc3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    puVar11 = &DAT_00800bd0;
    for (iVar5 = 0xc3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    DAT_00800bd4._0_1_ = (undefined1)param_3;
    iVar5 = 0;
    DAT_00800bd0 = param_2;
    iVar10 = 1;
    iStack_20 = 0;
    iStack_1c = 0;
    iVar9 = 0;
    do {
      iVar14 = iVar9;
      if (iVar10 != 0) {
        iVar14 = iVar9 + iVar10;
        if (0x9a < iVar14) {
          return;
        }
        puVar11 = &DAT_00800bd0;
        puVar13 = (undefined4 *)((int)&DAT_00801020 + iVar9 * 5);
        for (uVar6 = (uint)(iVar10 * 5) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar6 = iVar10 * 5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        iVar10 = 0;
        iVar5 = iVar9;
        iStack_20 = iVar14;
        iStack_1c = iVar9;
      }
      bVar2 = false;
      if (iVar14 <= iVar5) break;
      pcStack_8 = &DAT_00801024 + iVar5 * 5;
      piVar1 = (int *)(&PTR_DAT_007c0dc8)[(uVar3 & 0xff) - 1];
      iStack_14 = iVar5;
      do {
        if (*piVar1 != 0) {
          piStack_10 = (int *)((int)piVar1 + 5);
          iVar9 = *(int *)(pcStack_8 + -4);
          piVar8 = piVar1;
          do {
            if (((*piVar8 == iVar9) &&
                (piVar7 = (int *)((int)piVar8 + 5), (char)piVar8[1] == *pcStack_8)) &&
               (iStack_c = 0, *piStack_10 != 0)) {
              piVar4 = (int *)((int)&DAT_00800bd0 + iVar10 * 5);
              do {
                if (3 < iStack_c) break;
                iVar10 = iVar10 + 1;
                *piVar4 = *piVar7;
                *(char *)(piVar4 + 1) = (char)piVar7[1];
                bVar2 = true;
                if (0x800ed6 < (int)piVar4 + 5) {
                  return;
                }
                piVar7 = (int *)((int)piVar7 + 5);
                iStack_c = iStack_c + 1;
                piVar4 = (int *)((int)piVar4 + 5);
              } while (*piVar7 != 0);
            }
            piVar8 = (int *)((int)piVar8 + 0x19);
            piStack_10 = (int *)((int)piStack_10 + 0x19);
            iVar5 = iStack_1c;
            iVar14 = iStack_20;
          } while (*piVar8 != 0);
        }
        iStack_14 = iStack_14 + 1;
        pcStack_8 = pcStack_8 + 5;
      } while (iStack_14 < iVar14);
      iVar9 = iVar14;
    } while (bVar2);
    if (-1 < iVar14 + -1) {
      puVar12 = (uint *)((int)&DAT_00801020 + (iVar14 + -1) * 5);
      do {
        if (((param_4 != 0) || (*puVar12 != param_2)) || ((byte)puVar12[1] != param_3)) {
          thunk_FUN_004e6310(param_1,*puVar12,(uint)(byte)puVar12[1]);
        }
        puVar12 = (uint *)((int)puVar12 + -5);
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  return;
}


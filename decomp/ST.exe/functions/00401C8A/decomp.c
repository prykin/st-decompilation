
void __cdecl thunk_FUN_00575640(short *param_1,undefined4 *param_2,short *param_3)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined2 *puVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iStack_1c;
  int *piStack_18;
  int iStack_14;
  uint uStack_8;
  
  psVar2 = param_1;
  iVar4 = (int)*param_1 * (int)param_1[1];
  uVar10 = iVar4 * 10;
  iStack_1c = 0;
  puVar11 = param_2;
  for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  for (uVar8 = uVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  if (0 < *(int *)((int)param_1 + 0x455)) {
    piStack_18 = (int *)((int)param_1 + 0x459);
    do {
      iVar13 = *piStack_18;
      if (((iVar13 != 0) && (*(short *)(iVar13 + 8) != 0)) &&
         ((*(byte *)(iVar13 + 0x4f) & 0x40) == 0)) {
        uVar8 = 0x8000;
        uStack_8 = 8;
        param_1 = (short *)0x80;
        iStack_14 = 0;
        psVar9 = (short *)((int)param_2 +
                          ((int)*(short *)(iVar13 + 6) * (int)*psVar2 +
                           (*(short *)(iVar13 + 8) + -1) * iVar4 + (int)*(short *)(iVar13 + 4)) * 2)
        ;
        if (*(char *)(iVar13 + 0x48) != '\0') {
          do {
            uVar1 = *(uint *)(iVar13 + 0x2c);
            if ((uStack_8 & uVar1) != 0) {
              if (((uint)param_1 & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              *psVar9 = sVar3;
            }
            uVar1 = *(uint *)(iVar13 + 0x30);
            if ((uStack_8 & uVar1) != 0) {
              if (((uint)param_1 & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar9[1] = sVar3;
            }
            uVar1 = *(uint *)(iVar13 + 0x34);
            if ((uStack_8 & uVar1) != 0) {
              if (((uint)param_1 & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar9[*psVar2] = sVar3;
            }
            uVar1 = *(uint *)(iVar13 + 0x38);
            if ((uStack_8 & uVar1) != 0) {
              if (((uint)param_1 & uVar1) == 0) {
                sVar3 = (-(ushort)((uVar1 & uVar8) != 0) & 0x3fff) + 0xbfff;
              }
              else {
                sVar3 = -1;
              }
              psVar9[*psVar2 + 1] = sVar3;
            }
            iStack_14 = iStack_14 + 1;
            psVar9 = psVar9 + -iVar4;
            param_1 = (short *)((int)param_1 >> 1);
            uStack_8 = (int)uStack_8 >> 1;
            uVar8 = (int)uVar8 >> 1;
          } while (iStack_14 < (int)(uint)*(byte *)(iVar13 + 0x48));
        }
      }
      iStack_1c = iStack_1c + 1;
      piStack_18 = piStack_18 + 1;
    } while (iStack_1c < *(int *)((int)psVar2 + 0x455));
  }
  if (param_3 != (short *)0x0) {
    param_1 = (short *)FUN_006aac70(uVar10);
    puVar11 = param_2;
    psVar9 = param_1;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)psVar9 = *puVar11;
      puVar11 = puVar11 + 1;
      psVar9 = psVar9 + 2;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)psVar9 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      psVar9 = (short *)((int)psVar9 + 1);
    }
    iVar13 = 0;
    if (0 < psVar2[1]) {
      do {
        iVar5 = (int)*psVar2;
        iVar12 = 0;
        param_3 = param_1 + iVar5 * iVar13 + iVar4 * 4;
        if (0 < iVar5) {
          do {
            if (*param_3 == 0) {
              FUN_006ab090((int)param_1,iVar5,(int)psVar2[1],5,iVar12,iVar13,4,-1,-1,-1);
            }
            iVar5 = (int)*psVar2;
            iVar12 = iVar12 + 1;
            param_3 = param_3 + 1;
          } while (iVar12 < iVar5);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < psVar2[1]);
    }
    param_3 = (short *)0x0;
    iStack_1c = 5;
    do {
      iVar13 = 0;
      if (0 < psVar2[1]) {
        do {
          psVar6 = (short *)(*psVar2 * iVar13 + (int)param_3);
          psVar9 = param_1 + (int)psVar6;
          puVar7 = (undefined2 *)((int)psVar6 * 2 + (int)param_2);
          iVar5 = 0;
          if (0 < *psVar2) {
            do {
              if (*psVar9 == 0) {
                *puVar7 = 0xfffe;
              }
              iVar5 = iVar5 + 1;
              psVar9 = psVar9 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar5 < *psVar2);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < psVar2[1]);
      }
      param_3 = (short *)((int)param_3 + iVar4);
      iStack_1c = iStack_1c + -1;
    } while (iStack_1c != 0);
    FUN_006ab060(&param_1);
  }
  return;
}


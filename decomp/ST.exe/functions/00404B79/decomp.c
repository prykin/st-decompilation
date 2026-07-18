
void __cdecl thunk_FUN_00574920(short *param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte *pbStack_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_50;
  undefined4 *puStack_4c;
  int iStack_48;
  undefined1 *puStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_34;
  uint uStack_30;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0079b0f8;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff54;
  puStack_4c = (undefined4 *)0x0;
  iVar2 = (int)param_1[1] * (int)*param_1;
  iStack_24 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  iStack_40 = 1;
  piStack_2c = (int *)((int)param_1 +
                      (iStack_24 * 5 + param_2 + (*param_1 * param_3) / 2) * 4 + 0x459);
  iStack_34 = 5;
  ExceptionList = &pvStack_14;
  do {
    if (iStack_34 < 0) {
      ExceptionList = pvStack_14;
      return;
    }
    iVar2 = *piStack_2c;
    if (iVar2 != 0) {
      iStack_20 = 0;
      iStack_3c = 0;
      iStack_28 = 0;
      iStack_58 = iVar2;
      if ((*(int *)(iVar2 + 0x10) != 0) && (*(int *)(iVar2 + 0x14) != 0)) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x451) + 4) = 0;
        do {
          iVar7 = *(int *)((int)param_1 + 0x451);
          uVar9 = *(uint *)(iVar7 + 4);
          if (uVar9 < *(uint *)(iVar7 + 0xc)) {
            piVar10 = (int *)(*(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c));
            *(uint *)(iVar7 + 4) = uVar9 + 1;
          }
          else {
            piVar10 = (int *)0x0;
          }
        } while ((piVar10 != (int *)0x0) &&
                ((*(int *)(iVar2 + 0x10) != *piVar10 || (*(int *)(iVar2 + 0x14) != piVar10[1]))));
        iStack_3c = 1;
        if (piVar10 == (int *)0x0) {
          FUN_006a5e90(*(undefined4 **)(iVar2 + 0xc));
          puVar3 = (undefined4 *)
                   FUN_006aac70((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2) * 4);
          *(undefined4 **)(iVar2 + 0xc) = puVar3;
          iStack_28 = 1;
          iStack_20 = 1;
          if (*(undefined4 **)(iVar2 + 0x10) != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(iVar2 + 0x10);
            for (iVar7 = (uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2); iVar7 != 0;
                iVar7 = iVar7 + -1) {
              *puVar3 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar3 = puVar3 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar3 = (undefined4 *)((int)puVar3 + 1);
            }
          }
          uStack_8 = 0;
          FUN_006b03d0(*(char **)(iVar2 + 0xc),*(char **)(iVar2 + 0x14),
                       (uint)*(byte *)(param_1 + 2) << 1,(uint)*(byte *)(param_1 + 2) << 1,
                       *(char *)(iVar2 + 10));
          uStack_8 = 0xffffffff;
        }
        else {
          if (*(undefined4 **)(iVar2 + 0xc) != (undefined4 *)0x0) {
            *(undefined4 *)(*(int *)((int)param_1 + 0x451) + 4) = 0;
            do {
              iVar7 = *(int *)((int)param_1 + 0x451);
              uVar9 = *(uint *)(iVar7 + 4);
              if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                piVar10 = (int *)(*(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c));
                *(uint *)(iVar7 + 4) = uVar9 + 1;
              }
              else {
                piVar10 = (int *)0x0;
              }
              if (piVar10 == (int *)0x0) goto LAB_00574b14;
            } while (*(int *)(iVar2 + 0xc) != piVar10[2]);
            if (piVar10 == (int *)0x0) {
LAB_00574b14:
              FUN_006a5e90(*(undefined4 **)(iVar2 + 0xc));
            }
          }
          *(int *)(iVar2 + 0xc) = piVar10[2];
        }
      }
      if ((iStack_34 == 0) || ((*(byte *)(iVar2 + 0x4f) & 0x10) != 0)) {
        if (iStack_40 == 0) goto LAB_00574b4a;
      }
      else {
        puStack_4c = *(undefined4 **)(iVar2 + 0x18);
        if (puStack_4c != (undefined4 *)0x0) {
LAB_00574b4a:
          if (iStack_40 == 0) {
            if (iStack_3c == 0) {
              if (*(int *)(iVar2 + 0xc) != 0) {
                *(undefined4 *)(*(int *)((int)param_1 + 0x451) + 4) = 0;
                do {
                  iVar7 = *(int *)((int)param_1 + 0x451);
                  uVar9 = *(uint *)(iVar7 + 4);
                  if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                    iVar4 = *(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c);
                    *(uint *)(iVar7 + 4) = uVar9 + 1;
                  }
                  else {
                    iVar4 = 0;
                  }
                  if (iVar4 == 0) goto LAB_00574bcc;
                } while (*(int *)(iVar2 + 0xc) != *(int *)(iVar4 + 8));
                if (iVar4 == 0) {
LAB_00574bcc:
                  FUN_006a5e90(*(undefined4 **)(iVar2 + 0xc));
                }
              }
              puVar5 = (undefined4 *)
                       FUN_006aac70((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2) * 4)
              ;
              *(undefined4 **)(iVar2 + 0xc) = puVar5;
              puVar3 = *(undefined4 **)(iVar2 + 0x10);
              if ((puVar3 != (undefined4 *)0x0) ||
                 (puVar3 = *(undefined4 **)(iVar2 + 0x14), puVar3 != (undefined4 *)0x0)) {
                for (iVar7 = (uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2); iVar7 != 0
                    ; iVar7 = iVar7 + -1) {
                  *puVar5 = *puVar3;
                  puVar3 = puVar3 + 1;
                  puVar5 = puVar5 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
                  puVar3 = (undefined4 *)((int)puVar3 + 1);
                  puVar5 = (undefined4 *)((int)puVar5 + 1);
                }
              }
            }
            else if (iStack_20 == 0) {
              puVar6 = (undefined4 *)
                       FUN_006aac70((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2) * 4)
              ;
              puVar3 = *(undefined4 **)(iVar2 + 0xc);
              puVar5 = puVar6;
              for (iVar7 = (uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2); iVar7 != 0;
                  iVar7 = iVar7 + -1) {
                *puVar5 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar5 = puVar5 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
                puVar3 = (undefined4 *)((int)puVar3 + 1);
                puVar5 = (undefined4 *)((int)puVar5 + 1);
              }
              *(undefined4 **)(iVar2 + 0xc) = puVar6;
            }
            iStack_28 = 0;
            if ((iStack_34 == 0) || ((*(byte *)(iVar2 + 0x4f) & 0x10) != 0)) {
              for (iStack_50 = 0; iStack_50 < (int)((uint)*(byte *)(param_1 + 2) * 2);
                  iStack_50 = iStack_50 + 1) {
                iVar7 = (uint)*(byte *)(param_1 + 2) * iStack_50;
                iStack_48 = iVar7 / 2 + (int)param_4;
                pbStack_60 = (byte *)(*(int *)(iVar2 + 0xc) + iVar7 * 2);
                uStack_30 = 0;
                while ((int)uStack_30 < (int)((uint)*(byte *)(param_1 + 2) * 2)) {
                  uVar9 = uStack_30 & 0x80000003;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                  }
                  uStack_5c = (uint)(*(byte *)(((int)(uStack_30 + ((int)uStack_30 >> 0x1f & 3U)) >>
                                               2) + iStack_48) & (&DAT_007ca6a4)[uVar9]);
                  if (uStack_5c == 0) {
LAB_00574e10:
                    uStack_30 = uStack_30 + 1;
                    pbStack_60 = pbStack_60 + 1;
                  }
                  else {
                    if (uStack_5c != (byte)(&DAT_007ca6a4)[uVar9]) {
                      *pbStack_60 = *(byte *)((uint)*pbStack_60 + DAT_008073c8);
                      goto LAB_00574e10;
                    }
                    *pbStack_60 = *(byte *)((uint)*pbStack_60 + DAT_00807560);
                    uStack_30 = uStack_30 + 1;
                    pbStack_60 = pbStack_60 + 1;
                  }
                }
              }
            }
            else {
              for (iStack_50 = 0; iStack_50 < (int)((uint)*(byte *)(param_1 + 2) * 2);
                  iStack_50 = iStack_50 + 1) {
                iVar4 = (uint)*(byte *)(param_1 + 2) * iStack_50;
                iVar7 = iVar4 / 2;
                iStack_48 = iVar7 + (int)param_4;
                puStack_44 = (undefined1 *)(iVar7 + (int)puStack_4c);
                pbStack_60 = (byte *)(*(int *)(iVar2 + 0xc) + iVar4 * 2);
                for (uStack_30 = 0; (int)uStack_30 < (int)((uint)*(byte *)(param_1 + 2) * 2);
                    uStack_30 = uStack_30 + 1) {
                  iVar2 = (int)(uStack_30 + ((int)uStack_30 >> 0x1f & 3U)) >> 2;
                  uVar9 = uStack_30 & 0x80000003;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                  }
                  bVar1 = (&DAT_007ca6a4)[uVar9];
                  if ((bVar1 & puStack_44[iVar2]) == bVar1) {
                    uStack_5c = (uint)(*(byte *)(iVar2 + iStack_48) & bVar1);
                    if (uStack_5c != 0) {
                      if (uStack_5c == bVar1) {
                        *pbStack_60 = *(byte *)((uint)*pbStack_60 + DAT_00807560);
                      }
                      else {
                        *pbStack_60 = *(byte *)((uint)*pbStack_60 + DAT_008073c8);
                      }
                    }
                  }
                  *(byte *)(iVar2 + iStack_48) =
                       *(byte *)(iVar2 + iStack_48) | (&DAT_007ca6a4)[uVar9] & puStack_44[iVar2];
                  pbStack_60 = pbStack_60 + 1;
                  iVar2 = iStack_58;
                }
              }
            }
            uStack_8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2);
            puVar3 = puStack_4c;
            puVar5 = param_4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar5 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar5 = puVar5 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              puVar5 = (undefined4 *)((int)puVar5 + 1);
            }
            iStack_40 = 0;
          }
        }
      }
      if (iStack_28 != 0) {
        uStack_6c = *(undefined4 *)(iVar2 + 0x10);
        uStack_68 = *(undefined4 *)(iVar2 + 0x14);
        uStack_64 = *(undefined4 *)(iVar2 + 0xc);
        FUN_006ae1c0(*(uint **)((int)param_1 + 0x451),&uStack_6c);
      }
    }
    iStack_34 = iStack_34 + -1;
    piStack_2c = piStack_2c + -iStack_24;
  } while( true );
}


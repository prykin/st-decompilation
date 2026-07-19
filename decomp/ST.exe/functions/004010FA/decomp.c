
void __thiscall thunk_FUN_00697cf0(void *this,int param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  int iStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined1 *puStack_b4;
  uint uStack_ac;
  int iStack_a8;
  int *piStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 *puStack_64;
  int iStack_5c;
  uint uStack_58;
  int iStack_50;
  uint uStack_48;
  int iStack_44;
  uint uStack_3c;
  int iStack_38;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_0079d798;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff14;
  iVar12 = 0;
  iStack_6c = 0;
  uStack_48 = 0;
  iStack_5c = 0;
  uStack_ac = 0;
  iStack_b8 = 0;
  iStack_68 = 0;
  if (*(int *)((int)this + 0x5853) != 0) {
    iVar5 = *(int *)(*(int *)((int)this + 0x5853) + 0xc);
    uStack_8 = 0;
    ExceptionList = &pvStack_14;
    iStack_70 = iVar5;
    Library::MSVCRT::FUN_0072da40();
    uStack_8 = 0xffffffff;
    uStack_88 = 0;
    puStack_28 = &stack0xffffff14;
    puVar2 = &stack0xffffff14;
    puStack_1c = &stack0xffffff14;
    puVar3 = &stack0xffffff14;
    if (0 < iVar5) {
      do {
        puVar2 = puStack_28;
        puVar3 = puStack_1c;
        if (param_1 < 1) break;
        iVar5 = *(int *)((int)this + 0x5853);
        if (uStack_88 < *(uint *)(iVar5 + 0xc)) {
          piVar14 = (int *)(*(int *)(iVar5 + 8) * uStack_88 + *(int *)(iVar5 + 0x1c));
        }
        else {
          piVar14 = (int *)0x0;
        }
        piStack_a4 = piVar14;
        if ((*piVar14 == 0) && (*(int *)((int)piVar14 + 5) < 1)) {
          if (*(int *)((int)piVar14 + 0x15) != 0) {
            uVar4 = Library::MSVCRT::FUN_0072e6c0();
            uStack_a0 = (int)uVar4 % 6 + 1;
            iStack_74 = 0;
            iStack_90 = 0;
            uStack_94 = 0;
            iVar5 = *(int *)((int)piVar14 + 0x15);
            uVar4 = *(uint *)(iVar5 + 0xc);
            if (0 < (int)uVar4) {
              do {
                if (uStack_94 < uVar4) {
                  pbVar13 = (byte *)(*(int *)(iVar5 + 8) * uStack_94 + *(int *)(iVar5 + 0x1c));
                }
                else {
                  pbVar13 = (byte *)0x0;
                }
                if (pbVar13 != (byte *)0x0) {
                  iStack_90 = iStack_90 + 1;
                  iVar5 = *(int *)(pbVar13 + 2) / *(int *)((int)this + 0x5833);
                  uVar11 = *(int *)(pbVar13 + 2) % *(int *)((int)this + 0x5833);
                  uVar4 = uVar11;
                  iVar12 = iVar5;
                  uVar8 = uVar11;
                  if (uStack_94 == 0) {
LAB_00697e8c:
                    uStack_48 = uVar8;
                    iStack_5c = iVar12;
                    uStack_ac = uVar4;
                    iStack_b8 = iVar5;
                  }
                  else {
                    if ((int)uVar11 < (int)uStack_48) {
                      uStack_48 = uVar11;
                    }
                    if (iVar5 < iStack_5c) {
                      iStack_5c = iVar5;
                    }
                    if ((int)uStack_ac < (int)uVar11) {
                      uStack_ac = uVar11;
                    }
                    uVar4 = uStack_ac;
                    iVar12 = iStack_5c;
                    uVar8 = uStack_48;
                    if (iStack_b8 < iVar5) goto LAB_00697e8c;
                  }
                  if ((*pbVar13 & 1) != 0) {
                    iStack_74 = iStack_74 + 1;
                    thunk_FUN_006a0c90(uVar11,iVar5,0,1,0,1,uStack_a0);
                  }
                }
                uStack_94 = uStack_94 + 1;
                iVar5 = *(int *)((int)piStack_a4 + 0x15);
                uVar4 = *(uint *)(iVar5 + 0xc);
                iVar12 = iStack_6c;
              } while ((int)uStack_94 < (int)uVar4);
            }
            if (iStack_90 != 0) {
              puVar6 = (undefined2 *)(puStack_28 + iVar12 * 0x10);
              *puVar6 = (undefined2)uStack_88;
              puVar6[1] = (short)iStack_90;
              *(int *)(puVar6 + 2) = iStack_74;
              puVar6[4] = (undefined2)uStack_48;
              puVar6[5] = (undefined2)uStack_ac;
              puVar6[6] = (undefined2)iStack_5c;
              puVar6[7] = (undefined2)iStack_b8;
              iVar12 = iVar12 + 1;
              iStack_6c = iVar12;
            }
          }
        }
        else if (0 < *piVar14) break;
        uStack_88 = uStack_88 + 1;
        puVar2 = puStack_28;
        puVar3 = puStack_1c;
      } while ((int)uStack_88 < iStack_70);
    }
    puStack_1c = puVar3;
    puStack_28 = puVar2;
    if (iVar12 != 0) {
      uStack_8 = 1;
      Library::MSVCRT::FUN_0072da40();
      puStack_b4 = &stack0xffffff14;
      puStack_1c = &stack0xffffff14;
      Library::MSVCRT::FUN_0072da40();
      uStack_8 = 0xffffffff;
      iStack_a8 = iVar12 * 2;
      puStack_1c = &stack0xffffff14;
      puStack_64 = (undefined4 *)&stack0xffffff14;
      while ((0 < param_2 && (iVar12 = iStack_6c, 0 < iStack_a8))) {
        iStack_a8 = iStack_a8 + -1;
        iStack_80 = thunk_FUN_0069f7f0((int)puStack_28,iStack_6c,0x10,4,3);
        iVar12 = iStack_6c;
        if (-1 < iStack_80) {
          psVar7 = (short *)(puStack_28 + iStack_80 * 0x10);
          iVar12 = *(int *)((int)this + 0x5853);
          if ((uint)(int)*psVar7 < *(uint *)(iVar12 + 0xc)) {
            piStack_a4 = (int *)(*(int *)(iVar12 + 8) * (int)*psVar7 + *(int *)(iVar12 + 0x1c));
          }
          else {
            piStack_a4 = (int *)0x0;
          }
          iStack_38 = ((int)psVar7[5] - (int)psVar7[4]) + 1;
          iStack_44 = ((int)psVar7[7] - (int)psVar7[6]) + 1;
          puVar15 = puStack_64;
          for (uVar4 = (iStack_44 * iStack_38 & 0x7fffffffU) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar15 = 0xffffffff;
            puVar15 = puVar15 + 1;
          }
          for (uVar4 = iStack_44 * iStack_38 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar15 = 0xff;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          uStack_94 = 0;
          iVar12 = *(int *)((int)piStack_a4 + 0x15);
          if (0 < *(int *)(iVar12 + 0xc)) {
            bVar17 = *(int *)(iVar12 + 0xc) != 0;
            do {
              if (bVar17) {
                pbVar13 = (byte *)(*(int *)(iVar12 + 8) * uStack_94 + *(int *)(iVar12 + 0x1c));
              }
              else {
                pbVar13 = (byte *)0x0;
              }
              if ((*pbVar13 & 1) != 0) {
                *(undefined2 *)
                 ((int)puStack_64 +
                 (((*(int *)(pbVar13 + 2) / *(int *)((int)this + 0x5833) -
                   (int)*(short *)(puStack_28 + iStack_80 * 0x10 + 0xc)) * iStack_38 -
                  (int)*(short *)(puStack_28 + iStack_80 * 0x10 + 8)) +
                 *(int *)(pbVar13 + 2) % *(int *)((int)this + 0x5833)) * 2) = 0;
              }
              uStack_94 = uStack_94 + 1;
              iVar12 = *(int *)((int)piStack_a4 + 0x15);
              bVar17 = uStack_94 < *(uint *)(iVar12 + 0xc);
            } while ((int)uStack_94 < (int)*(uint *)(iVar12 + 0xc));
          }
          uStack_9c = Library::MSVCRT::FUN_0072e6c0();
          uStack_9c = uStack_9c & 0x80000007;
          if ((int)uStack_9c < 0) {
            uStack_9c = (uStack_9c - 1 | 0xfffffff8) + 1;
          }
          iStack_c4 = 10;
          uStack_3c = 0xffffff9c;
          iStack_98 = -100;
          uStack_58 = Library::MSVCRT::FUN_0072e6c0();
          uStack_58 = uStack_58 & 0x80000003;
          if ((int)uStack_58 < 0) {
            uStack_58 = (uStack_58 - 1 | 0xfffffffc) + 1;
          }
          do {
            iVar12 = *(int *)((int)piStack_a4 + 0x15);
            uVar4 = *(uint *)(iVar12 + 0xc);
            uVar8 = Library::MSVCRT::FUN_0072e6c0();
            uVar8 = (int)uVar8 % (int)uVar4;
            puVar1 = (&PTR_DAT_007d7f70)[uStack_9c];
            if (uVar8 < uVar4) {
              iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c);
            }
            else {
              iVar12 = 0;
            }
            iStack_84 = *(int *)(iVar12 + 2) / *(int *)((int)this + 0x5833);
            uStack_78 = *(int *)(iVar12 + 2) % *(int *)((int)this + 0x5833);
            iVar12 = (int)*(short *)(puStack_28 + iStack_80 * 0x10 + 0xc);
            if ((((iVar12 <= iStack_84) &&
                 (iStack_84 < *(short *)(puStack_28 + iStack_80 * 0x10 + 0xe))) &&
                (iVar5 = (int)*(short *)(puStack_28 + iStack_80 * 0x10 + 8), iVar5 <= (int)uStack_78
                )) && ((int)uStack_78 < (int)*(short *)(puStack_28 + iStack_80 * 0x10 + 10))) {
              iStack_68 = 1;
              iVar16 = uStack_58 * 0xe4;
              if (*(int *)(puVar1 + iVar16) < 1) {
                iStack_68 = 0;
              }
              else {
                uStack_94 = 0;
                do {
                  iVar9 = uStack_94 * 0x1c + iVar16;
                  iVar10 = (*(int *)(puVar1 + iVar9 + 4) - iVar5) + uStack_78;
                  iVar9 = (*(int *)(puVar1 + iVar9 + 8) - iVar12) + iStack_84;
                  if ((((-1 < iVar10) && (iVar10 < iStack_38)) &&
                      ((-1 < iVar9 && (iVar9 < iStack_44)))) &&
                     ((((int)uStack_78 < iVar5 ||
                       ((int)*(short *)(puStack_28 + iStack_80 * 0x10 + 10) < (int)uStack_78)) ||
                      ((iStack_84 < iVar12 ||
                       ((*(short *)(puStack_28 + iStack_80 * 0x10 + 0xe) < iStack_84 ||
                        (*(short *)((int)puStack_64 + (iVar9 * iStack_38 + iVar10) * 2) != 0))))))))
                  {
                    iStack_68 = 0;
                    break;
                  }
                  uStack_94 = uStack_94 + 1;
                } while ((int)uStack_94 < *(int *)(puVar1 + iVar16));
              }
              iVar12 = iStack_84;
              uVar4 = uStack_78;
              if (iStack_68 == 1) break;
            }
            iStack_c4 = iStack_c4 + -1;
            iVar12 = iStack_98;
            uVar4 = uStack_3c;
          } while (0 < iStack_c4);
          uStack_3c = uVar4;
          iStack_98 = iVar12;
          iVar12 = iStack_6c;
          if (iStack_68 != 0) {
            iVar5 = uStack_58 * 0xe4;
            thunk_FUN_006a0da0(this,uStack_3c,iStack_98,*(int *)(puVar1 + iVar5 + 4) + uStack_3c,
                               *(int *)(puVar1 + iVar5 + 8) + iStack_98,0,1);
            iVar12 = 0;
            if (*(int *)(puVar1 + iVar5) != 1 && -1 < *(int *)(puVar1 + iVar5) + -1) {
              do {
                iVar9 = *(int *)(puVar1 + (uStack_58 * 0x39 + iVar12) * 4 + 0xcc) * 0x1c + iVar5;
                iVar16 = *(int *)(puVar1 + (uStack_58 * 0x39 + iVar12) * 4 + 200) * 0x1c + iVar5;
                thunk_FUN_006a0da0(this,*(int *)(puVar1 + iVar16 + 4) + uStack_3c,
                                   *(int *)(puVar1 + iVar16 + 8) + iStack_98,
                                   *(int *)(puVar1 + iVar9 + 4) + uStack_3c,
                                   *(int *)(puVar1 + iVar9 + 8) + iStack_98,0,1);
                iVar12 = iVar12 + 1;
              } while (iVar12 < *(int *)(puVar1 + iVar5) + -1);
            }
            param_2 = param_2 + -1;
            *(undefined4 *)(puStack_28 + iStack_80 * 0x10 + 4) = 0;
            iVar12 = iStack_6c;
          }
        }
      }
    }
    iStack_a8 = iVar12 * 3;
    for (; (-1 < param_1 && (0 < iStack_a8)); iStack_a8 = iStack_a8 + -1) {
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      iVar5 = *(int *)((int)this + 0x5853);
      if ((uint)(int)*(short *)(puStack_28 + ((int)uVar4 % iVar12) * 0x10) < *(uint *)(iVar5 + 0xc))
      {
        piStack_a4 = (int *)(*(int *)(iVar5 + 8) *
                             (int)*(short *)(puStack_28 + ((int)uVar4 % iVar12) * 0x10) +
                            *(int *)(iVar5 + 0x1c));
      }
      else {
        piStack_a4 = (int *)0x0;
      }
      if ((((*piStack_a4 == 0) && (*(int *)((int)piStack_a4 + 5) < 2)) &&
          (3 < *(int *)((int)piStack_a4 + 0x11))) && (*(int *)((int)piStack_a4 + 0x15) != 0)) {
        iStack_50 = *(int *)((int)piStack_a4 + 0x11) / 10 + 1;
        iVar12 = *(int *)((int)piStack_a4 + 0x15);
        uVar4 = *(uint *)(iVar12 + 0xc);
        uVar8 = Library::MSVCRT::FUN_0072e6c0();
        iStack_2c = (int)uVar8 % (int)uVar4;
        uStack_94 = 0;
        if (0 < (int)uVar4) {
          do {
            uVar8 = uStack_94 + iStack_2c;
            if ((int)uVar4 < (int)uVar8) {
              uVar8 = uVar8 - uVar4;
            }
            if (uVar8 < uVar4) {
              iVar12 = *(int *)(iVar12 + 8) * uVar8 + *(int *)(iVar12 + 0x1c);
            }
            else {
              iVar12 = 0;
            }
            if (iVar12 != 0) {
              iVar5 = *(int *)(iVar12 + 2) / *(int *)((int)this + 0x5833);
              uVar8 = *(int *)(iVar12 + 2) % *(int *)((int)this + 0x5833);
              uVar4 = Library::MSVCRT::FUN_0072e6c0();
              uVar4 = uVar4 & 0x80000003;
              if ((int)uVar4 < 0) {
                uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
              }
              if (uVar4 == 1) {
                thunk_FUN_006a1370(*(int **)((int)this + 8),uVar8,iVar5,0,&uStack_c0);
                bVar17 = false;
                iVar12 = thunk_FUN_006a20e0(*(int **)((int)this + 8),uVar8,iVar5,0,0xff);
                if ((iVar12 == 0) ||
                   ((((uStack_bc & 0x2000) == 0x2000 && ((uStack_bc & 0xf) == 0)) &&
                    ((uStack_bc & 0x4000) == 0)))) {
                  bVar17 = true;
                }
                if (bVar17) {
                  uVar4 = Library::MSVCRT::FUN_0072e6c0();
                  if ((int)uVar4 % 6 == 1) {
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)uVar4 % 3 + 1;
                    iVar16 = 0;
                    iVar12 = 1;
                    uVar4 = 1;
                    iVar9 = 0;
                  }
                  else if ((int)uVar4 % 6 == 2) {
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)uVar4 % 6 + 1;
                    iVar16 = 0;
                    iVar12 = 0xff;
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar4 = uVar4 & 0x80000001;
                    if ((int)uVar4 < 0) {
                      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                    }
                    uVar4 = uVar4 + 1;
                    iVar9 = 1;
                  }
                  else {
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar11 = (int)uVar4 % 6 + 1;
                    iVar16 = 0;
                    iVar12 = 0xff;
                    uVar4 = Library::MSVCRT::FUN_0072e6c0();
                    uVar4 = uVar4 & 0x80000001;
                    if ((int)uVar4 < 0) {
                      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                    }
                    uVar4 = uVar4 + 2;
                    iVar9 = 0;
                  }
                  thunk_FUN_006a0c90(uVar8,iVar5,iVar9,uVar4,iVar12,iVar16,uVar11);
                  param_1 = param_1 + -1;
                  iStack_50 = iStack_50 + -1;
                  if ((iStack_50 < 1) || (param_1 < 1)) break;
                }
              }
            }
            uStack_94 = uStack_94 + 1;
            iVar12 = *(int *)((int)piStack_a4 + 0x15);
            uVar4 = *(uint *)(iVar12 + 0xc);
          } while ((int)uStack_94 < (int)uVar4);
        }
      }
      iVar12 = iStack_6c;
    }
  }
  ExceptionList = pvStack_14;
  return;
}



int FUN_004c3c00(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar14;
  int iVar15;
  bool bVar16;
  undefined4 local_b8;
  undefined4 local_b4 [16];
  undefined4 local_74 [2];
  int local_6c;
  short local_68;
  short sStack_66;
  short local_64;
  int *local_60;
  int local_5c;
  int local_58;
  byte local_54;
  undefined3 uStack_53;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int local_48;
  int local_44;
  short local_40 [2];
  int local_3c;
  short local_38 [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int *local_20;
  short local_1c [2];
  int local_18;
  short local_14;
  short local_12;
  int *local_10;
  short local_a;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_20 = (int *)0x0;
  local_b8 = DAT_00858df8;
  DAT_00858df8 = &local_b8;
  iVar7 = __setjmp3(local_b4,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_b8;
    iVar15 = FUN_006ad4d0(s_E____titans_Artem_TLO_bfire_cpp_007ac910,0x126,0,iVar7,&DAT_007a4ccc);
    if (iVar15 == 0) {
      FUN_006a5e40(iVar7,0,0x7ac910,0x127);
      return iVar7;
    }
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  piVar14 = local_60 + param_1 * 0x20;
  *(undefined4 *)((int)piVar14 + 0x28d) = 0;
  *(undefined4 *)((int)piVar14 + 0x291) = 0;
  if (&stack0x00000000 != (undefined1 *)0x2c) {
    local_2c = CONCAT22(local_2c._2_2_,*(undefined2 *)((int)local_60 + 0x41));
  }
  if (&stack0x00000000 != (undefined1 *)0x34) {
    local_34 = CONCAT22(local_34._2_2_,*(undefined2 *)((int)local_60 + 0x43));
  }
  if (&stack0x00000000 != (undefined1 *)0x30) {
    local_30 = CONCAT22(local_30._2_2_,*(undefined2 *)((int)local_60 + 0x45));
  }
  local_10 = piVar14;
  if (*(int *)(&DAT_00792a90 + (param_1 + *(int *)((int)local_60 + 0x235) * 2) * 4) == 1) {
    local_58 = thunk_FUN_004e81b0(local_60[9],*(int *)((int)local_60 + 0x235),param_1);
    iVar7 = local_60[0x16d] + -8;
    local_18 = iVar7;
    if (iVar7 <= local_60[0x16d] + 8) {
      do {
        if ((-1 < iVar7) && (iVar7 < DAT_007fb242)) {
          iVar8 = local_60[0x16c];
          iVar15 = iVar8 + -8;
          local_28 = iVar15;
          local_18 = iVar7;
          if (iVar15 <= iVar8 + 8) {
            do {
              if (((-1 < iVar15) && (iVar15 < DAT_007fb240)) &&
                 (local_28 = iVar15, iVar8 = FUN_006aced8(iVar15,iVar7,iVar8,local_60[0x16d]),
                 iVar8 <= local_58)) {
                local_24 = iVar8 / 3;
                if (3 < *(int *)((int)local_10 + 0x281)) {
                  local_24 = 5;
                }
                local_3c = (local_60[0x16e] - local_24) + -1;
                if (local_3c <= local_60[0x16e] + 1 + local_24) {
                  do {
                    if ((-1 < local_3c) && (local_3c < 5)) {
                      sVar6 = (short)iVar15;
                      if (((sVar6 < 0) ||
                          ((DAT_007fb240 <= sVar6 || (sVar13 = (short)iVar7, sVar13 < 0)))) ||
                         ((DAT_007fb242 <= sVar13 ||
                          ((sVar5 = (short)local_3c, sVar5 < 0 || (DAT_007fb244 <= sVar5)))))) {
                        local_8 = (int *)0x0;
                      }
                      else {
                        local_8 = *(int **)(DAT_007fb248 +
                                           ((int)sVar13 * (int)DAT_007fb240 +
                                            (int)sVar5 * (int)DAT_007fb246 + (int)sVar6) * 8);
                        iVar7 = local_18;
                      }
                      if ((((local_8 != (int *)0x0) && (local_8 != local_60)) &&
                          (iVar8 = (**(code **)(*local_8 + 0xf8))(), iVar7 = local_18,
                          iVar15 = local_28, iVar8 != 0)) &&
                         ((local_8[9] != 0xff &&
                          (iVar8 = (**(code **)(*local_8 + 0xf4))(local_60[9]), iVar7 = local_18,
                          iVar15 = local_28, iVar8 != 0)))) {
                        thunk_FUN_004162b0(local_8,&local_12,&local_14,&local_a);
                        thunk_FUN_00416270(local_8,local_40,local_38,local_1c);
                        iVar7 = (int)(short)local_30;
                        iVar8 = FUN_006acf0d((int)local_40[0],(int)local_38[0],(int)local_1c[0],
                                             (int)(short)local_2c,(int)(short)local_34,iVar7);
                        uVar9 = local_1c[0] - iVar7;
                        uVar12 = (int)uVar9 >> 0x1f;
                        iVar7 = local_18;
                        iVar15 = local_28;
                        if ((int)(((uVar9 ^ uVar12) - uVar12) * 10) / iVar8 <=
                            *(int *)((int)local_10 + 0x281)) {
                          *(undefined4 *)((int)local_10 + 0x295) =
                               *(undefined4 *)((int)DAT_00802a38 + 0xe4);
                          if ((param_2 == 0) || (*(int *)((int)local_60 + 0x255) == 0))
                          goto LAB_004c4080;
                          sVar6 = (**(code **)(*local_60 + 0x10))
                                            (*(undefined2 *)((int)local_8 + 0x41),
                                             *(undefined2 *)((int)local_8 + 0x43),
                                             *(undefined2 *)((int)local_8 + 0x45),local_2c,local_34,
                                             local_30);
                          iVar8 = ((sVar6 + 0xb4) % 0x168) / 0xf;
                          uVar9 = (int)*(uint *)(&DAT_007be8c8 +
                                                (*(int *)((int)local_60 + 0x259) / 0xf +
                                                iVar8 * 0x18) * 4) >> 0x1f;
                          iVar7 = local_18;
                          iVar15 = local_28;
                          if ((int)((*(uint *)(&DAT_007be8c8 +
                                              (*(int *)((int)local_60 + 0x259) / 0xf + iVar8 * 0x18)
                                              * 4) ^ uVar9) - uVar9) <=
                              *(int *)((int)local_10 + 0x279)) {
                            iVar11 = param_1 + *(int *)((int)local_60 + 0x235) * 2;
                            if ((&DAT_00792ca0)[iVar11 * 3] == 0xb0) {
                              if (iVar8 % 3 == 0) {
LAB_004c4080:
                                if (((*(uint *)((int)local_10 + 0x265) & 2) != 0) &&
                                   (local_8[6] == *(int *)((int)local_10 + 0x26d))) {
                                  *(int *)((int)local_10 + 0x2d5) = (int)local_12;
                                  *(int *)((int)local_10 + 0x2d9) = (int)local_14;
                                  local_20 = local_8;
                                  *(int *)((int)local_10 + 0x2dd) = (int)local_a;
                                  piVar14 = local_10;
                                  goto LAB_004c42b5;
                                }
                                iVar7 = local_18;
                                iVar15 = local_28;
                                if ((*(uint *)((int)local_10 + 0x265) & 1) != 0) {
                                  if (local_60[0x108] == 0) {
                                    if (((uint)local_8[9] < 8) &&
                                       ((DAT_00802a38 == (void *)0x0 ||
                                        ((byte)(&DAT_008087e9)[local_8[9] * 0x51] < 8)))) {
                                      bVar1 = *(byte *)(local_8 + 9);
                                      bVar2 = *(byte *)(local_60 + 9);
                                      _local_50 = CONCAT31(uStack_4f,bVar1);
                                      _local_54 = CONCAT31(uStack_53,bVar2);
                                      if (DAT_00808a8f == '\0') {
                                        if (bVar1 == bVar2) {
LAB_004c4192:
                                          iVar8 = 0;
                                        }
                                        else {
                                          uVar9 = (uint)bVar1;
                                          uVar12 = (uint)bVar2;
                                          cVar3 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar12)
                                          ;
                                          if ((cVar3 == '\0') &&
                                             (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar9) ==
                                              '\0')) {
                                            iVar8 = -2;
                                          }
                                          else if ((cVar3 == '\x01') &&
                                                  (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar9
                                                            ) == '\0')) {
                                            iVar8 = -1;
                                          }
                                          else if ((cVar3 == '\0') &&
                                                  (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar9
                                                            ) == '\x01')) {
                                            iVar8 = 1;
                                          }
                                          else {
                                            if ((cVar3 != '\x01') ||
                                               (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar9)
                                                != '\x01')) goto LAB_004c4192;
                                            iVar8 = 2;
                                          }
                                        }
                                        bVar16 = iVar8 < 0;
                                      }
                                      else {
                                        bVar16 = (&DAT_008087ea)[(uint)bVar2 * 0x51] !=
                                                 (&DAT_008087ea)[(uint)bVar1 * 0x51];
                                      }
                                      if (bVar16) goto LAB_004c41a5;
                                    }
                                  }
                                  else {
LAB_004c41a5:
                                    iVar8 = (**(code **)(*local_8 + 0xf0))();
                                    iVar7 = local_18;
                                    iVar15 = local_28;
                                    if (iVar8 != 0) {
                                      iVar8 = FUN_006aadd0(local_60[0x16c],local_60[0x16d],
                                                           local_60[0x16e],local_28,local_18,
                                                           local_3c);
                                      piVar14 = local_10;
                                      if (*(int *)((int)local_10 + 0x269) == 0) {
                                        iVar11 = *(int *)((int)local_8 + 0x215);
                                      }
                                      else {
                                        iVar11 = (**(code **)(*local_8 + 0x7c))();
                                      }
                                      iVar7 = local_18;
                                      iVar15 = local_28;
                                      if (((local_20 == (int *)0x0) || (local_6c < iVar11)) ||
                                         ((iVar11 == local_6c &&
                                          (piVar14 = local_10, iVar8 < local_5c)))) {
                                        local_20 = local_8;
                                        *(int *)((int)piVar14 + 0x2d5) = (int)local_12;
                                        *(int *)((int)piVar14 + 0x2d9) = (int)local_14;
                                        *(int *)((int)piVar14 + 0x2dd) = (int)local_a;
                                        local_6c = iVar11;
                                        local_5c = iVar8;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              local_48 = 0;
                              local_4c = 0;
                              iVar11 = iVar11 * 0x16;
                              if (0 < *(int *)(&DAT_007932d0 + iVar11)) {
                                iVar7 = 0;
                                do {
                                  puVar10 = (undefined4 *)
                                            thunk_FUN_0041dc40(local_74,*(undefined4 *)
                                                                         (&DAT_007932d4 +
                                                                         iVar7 + iVar11),
                                                               *(undefined2 *)
                                                                ((int)(&DAT_007932d4 +
                                                                      iVar7 + iVar11) + 4),
                                                               -*(short *)((int)local_60 + 0x259));
                                  local_68 = (short)*puVar10;
                                  sStack_66 = (short)((uint)*puVar10 >> 0x10);
                                  local_64 = *(short *)(puVar10 + 1);
                                  iVar15 = thunk_FUN_0041f9b0(local_68 + (short)local_2c,
                                                              sStack_66 + (short)local_34,
                                                              local_64 + (short)local_30,local_40[0]
                                                              ,local_38[0],local_1c[0],
                                                              (&DAT_00792ca0)
                                                              [(param_1 +
                                                               *(int *)((int)local_60 + 0x235) * 2)
                                                               * 3],&local_44,local_60[0x108]);
                                  if ((iVar15 != 0) ||
                                     ((((*(byte *)((int)local_10 + 0x265) & 2) != 0 &&
                                       (local_44 != 0)) &&
                                      (*(int *)(local_44 + 0x18) == *(int *)((int)local_10 + 0x26d))
                                      ))) {
                                    local_48 = 1;
                                  }
                                  local_4c = local_4c + 1;
                                  iVar7 = iVar7 + 6;
                                  iVar11 = (param_1 + *(int *)((int)local_60 + 0x235) * 2) * 0x16;
                                } while (local_4c < *(int *)(&DAT_007932d0 + iVar11));
                              }
                              iVar7 = local_18;
                              iVar15 = local_28;
                              if (local_48 != 0) goto LAB_004c4080;
                            }
                          }
                        }
                      }
                    }
                    local_3c = local_3c + 1;
                  } while (local_3c <= local_60[0x16e] + 1 + local_24);
                }
              }
              iVar8 = local_60[0x16c];
              iVar15 = iVar15 + 1;
              local_28 = iVar15;
            } while (iVar15 <= iVar8 + 8);
          }
        }
        iVar7 = iVar7 + 1;
        piVar14 = local_10;
        local_18 = iVar7;
      } while (iVar7 <= local_60[0x16d] + 8);
    }
  }
LAB_004c42b5:
  if (local_20 != (int *)0x0) {
    *(int *)((int)piVar14 + 0x28d) = local_20[6];
    *(int **)((int)piVar14 + 0x291) = local_20;
    if ((((*(byte *)((int)piVar14 + 0x265) & 2) != 0) &&
        (*(int *)((int)piVar14 + 0x28d) != *(int *)((int)piVar14 + 0x26d))) &&
       (iVar7 = FUN_006e62d0(DAT_00802a38,*(int *)((int)piVar14 + 0x26d),(int *)&local_8),
       iVar7 != 0)) {
      *(uint *)((int)piVar14 + 0x265) = *(uint *)((int)piVar14 + 0x265) & 0xfffffffd;
      *(undefined4 *)((int)piVar14 + 0x26d) = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_b8;
  return 0;
}


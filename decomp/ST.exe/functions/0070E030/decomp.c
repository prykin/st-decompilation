
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mfcfnt.cpp
   Diagnostic line evidence: 558 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint FUN_0070e030(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  undefined4 *puVar8;
  DWORD DVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined2 auStackY_104c0 [32740];
  int local_4c0 [128];
  int local_2c0 [128];
  InternalExceptionFrame local_c0;
  RECT local_7c;
  int local_6c;
  int local_68;
  int local_64;
  _ABC local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 *local_44;
  char local_40;
  char local_3f;
  undefined1 local_3e;
  tagSIZE local_3c;
  int local_34;
  int *local_30;
  char local_2c;
  undefined3 uStack_2b;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  char local_15;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  iVar15 = 0;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_30 = (int *)0x0;
  local_44 = (undefined4 *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_64 = 1;
  if (((param_1 != (int *)0x0) && (*(int *)((int)param_1 + 0xfd) != 0)) &&
     (iVar7 = *(int *)((int)param_1 + 0x9a), iVar7 != 0)) {
    if (param_3 != 0) {
      iVar10 = 0;
      if (*(ushort *)(iVar7 + 100) != 0) {
        psVar12 = (short *)(iVar7 + 0x6e);
        do {
          if (*psVar12 == (short)param_2) {
            return 0xffffffff;
          }
          iVar10 = iVar10 + 1;
          psVar12 = psVar12 + 5;
        } while (iVar10 < (int)(uint)*(ushort *)(iVar7 + 100));
      }
    }
    local_c0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_c0;
    uVar5 = Library::MSVCRT::__setjmp3(local_c0.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (uVar5 == 0) {
      local_60.abcA = 0;
      local_60.abcB = 0;
      local_60.abcC = 0;
      local_1c = 0;
      local_54 = 0;
      local_50 = 0;
      BVar6 = GetCharABCWidthsA(*(HDC *)((int)param_1 + 0xfd),param_2 & 0xffff,param_2 & 0xffff,
                                &local_60);
      if (BVar6 == 0) {
        GetCharWidth32A(*(HDC *)((int)param_1 + 0xfd),param_2 & 0xffff,param_2 & 0xffff,&local_50);
        GetTextExtentPoint32A(*(HDC *)((int)param_1 + 0xfd),(LPCSTR)&param_2,1,&local_3c);
        if (local_50 <= local_3c.cx) {
          local_50 = local_3c.cx;
        }
      }
      else {
        local_50 = ((local_60.abcC < 1) - 1 & local_60.abcC) +
                   (-(uint)(local_60.abcB != 0) & local_60.abcB) +
                   ((local_60.abcA < 1) - 1 & local_60.abcA);
      }
      if (local_50 < 1) {
        RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x22e);
      }
      else {
        local_1c = *(int *)((int)param_1 + 0x151) + local_50;
        if (local_60.abcA < 0) {
          local_54 = (local_60.abcA ^ local_60.abcA >> 0x1f) - (local_60.abcA >> 0x1f);
        }
        if (*(int *)((int)param_1 + 0x135) <= local_1c + *(int *)((int)param_1 + 0x17d)) {
          *(int *)((int)param_1 + 0x181) =
               *(int *)((int)param_1 + 0x181) + *(int *)((int)param_1 + 0x161);
          *(undefined4 *)((int)param_1 + 0x17d) = 0;
          *(int *)((int)param_1 + 0x139) =
               *(int *)((int)param_1 + 0x139) + *(int *)((int)param_1 + 0x161);
          piVar17 = param_1;
          if (0 < **(short **)((int)param_1 + 0x9a)) {
            do {
              piVar17 = piVar17 + 1;
              local_c = (int *)*piVar17;
              iVar7 = FUN_006b50c0(*(int *)((int)param_1 + 0x135),*(int *)((int)param_1 + 0x139),8,
                                   0x100,local_c + 10,1);
              *piVar17 = iVar7;
              FUN_006b4170(iVar7,0,0,0,*(int *)((int)param_1 + 0x135),*(int *)((int)param_1 + 0x139)
                           ,(char)*(undefined2 *)(*(int *)((int)param_1 + 0x9a) + 0x42));
              Library::DKW::WGR::FUN_006b55f0
                        ((undefined4 *)*piVar17,0,0,0,(int)local_c,0,0,0,local_c[1],local_c[2]);
              if (local_c != (int *)0x0) {
                FUN_006ab060(&local_c);
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < **(short **)((int)param_1 + 0x9a));
          }
        }
        local_48 = *(int *)((int)param_1 + 0x17d);
        local_4c = local_1c;
      }
      local_40 = (char)(param_2 >> 8);
      if (local_40 == '\0') {
        local_3f = '\0';
        iVar15 = 1;
        local_40 = (char)param_2;
      }
      else {
        local_3e = 0;
        iVar15 = 2;
        local_3f = (char)param_2;
      }
      local_7c.right = *(LONG *)((int)param_1 + 0x165);
      local_7c.bottom = *(LONG *)((int)param_1 + 0x169);
      local_7c.top = 0;
      local_7c.left = 0;
      local_6c = iVar15;
      FillRect(*(HDC *)((int)param_1 + 0xfd),&local_7c,*(HBRUSH *)((int)param_1 + 0x109));
      TextOutA(*(HDC *)((int)param_1 + 0xfd),*(int *)((int)param_1 + 0x141) + local_54,
               *(int *)((int)param_1 + 0x145),&local_40,iVar15);
      local_28 = Library::DKW::WGR::FUN_006b55f0
                           ((undefined4 *)0x0,0,0,0,*(int *)((int)param_1 + 0x125),
                            *(int *)((int)param_1 + 0x129),0,0,*(int *)((int)param_1 + 0x165),
                            *(int *)((int)param_1 + 0x169));
      local_34 = 0;
      if (0 < **(short **)((int)param_1 + 0x9a)) {
        do {
          iVar15 = local_1c;
          local_68 = local_34 + 1;
          cVar1 = *(char *)(local_34 * *(int *)((int)param_1 + 0x189) + 1 +
                           *(int *)((int)param_1 + 0x185));
          _local_2c = CONCAT31(uStack_2b,cVar1);
          local_24 = (int *)FUN_006b50c0(local_1c,*(int *)((int)param_1 + 0x161),8,0x100,
                                         (undefined4 *)(param_1[local_68] + 0x28),1);
          FUN_006b4170((int)local_24,0,0,0,iVar15,*(int *)((int)param_1 + 0x161),
                       **(undefined1 **)((int)param_1 + 0x185));
          if (((*(int *)((int)param_1 + 0x171) == 0x100000) &&
              ((*(int *)((int)param_1 + 0x159) != 0 || (*(int *)((int)param_1 + 0x15d) != 0)))) &&
             (cVar1 != **(char **)((int)param_1 + 0x185))) {
            local_7c.right = *(LONG *)((int)param_1 + 0x165);
            local_7c.bottom = *(LONG *)((int)param_1 + 0x169);
            local_7c.top = 0;
            local_7c.left = 0;
            FillRect(*(HDC *)((int)param_1 + 0xfd),&local_7c,*(HBRUSH *)((int)param_1 + 0x109));
            TextOutA(*(HDC *)((int)param_1 + 0xfd),*(int *)((int)param_1 + 0x149) + local_54,
                     *(int *)((int)param_1 + 0x14d),&local_40,local_6c);
            puVar8 = Library::DKW::WGR::FUN_006b55f0
                               ((undefined4 *)0x0,0,0,0,*(int *)((int)param_1 + 0x125),
                                *(int *)((int)param_1 + 0x129),0,0,*(int *)((int)param_1 + 0x165),
                                *(int *)((int)param_1 + 0x169));
            local_10 = 0;
            local_44 = puVar8;
            if (0 < *(int *)((int)param_1 + 0x161)) {
              do {
                iVar15 = 0;
                if (0 < local_1c) {
                  do {
                    iVar7 = FUN_006b4fa0((int)puVar8);
                    piVar17 = local_24;
                    if (*(char *)(((uint)*(ushort *)((int)puVar8 + 0xe) * puVar8[1] + 0x1f >> 3 &
                                  0x1ffffffc) * ((puVar8[2] - local_10) + -1) + iVar15 + iVar7) ==
                        -1) {
                      iVar7 = FUN_006b4fa0((int)local_24);
                      *(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                                0x1ffffffc) * ((piVar17[2] - local_10) + -1) + iVar15 + iVar7) =
                           local_2c;
                    }
                    iVar15 = iVar15 + 1;
                    puVar8 = local_44;
                  } while (iVar15 < local_1c);
                }
                local_10 = local_10 + 1;
              } while ((int)local_10 < *(int *)((int)param_1 + 0x161));
            }
            if (puVar8 != (undefined4 *)0x0) {
              FUN_006ab060(&local_44);
            }
          }
          uVar5 = *(uint *)((int)param_1 + 0x16d);
          if ((uVar5 == 0) || (*(int *)((int)param_1 + 0x189) < 3)) {
            local_20 = (int *)0x0;
            if (0 < *(int *)((int)param_1 + 0x161)) {
              do {
                local_8 = (int *)0x0;
                if (0 < local_1c) {
                  do {
                    piVar16 = local_8;
                    piVar17 = local_28;
                    iVar15 = FUN_006b4fa0((int)local_28);
                    piVar18 = local_24;
                    if (*(char *)((int)piVar16 +
                                 ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                                 0x1ffffffc) * ((piVar17[2] - (int)local_20) + -1) + iVar15) == -1)
                    {
                      uVar2 = *(undefined1 *)
                               (local_34 * *(int *)((int)param_1 + 0x189) + 2 +
                               *(int *)((int)param_1 + 0x185));
                      iVar15 = FUN_006b4fa0((int)local_24);
                      *(undefined1 *)
                       ((int)local_8 +
                       ((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] + 0x1f >> 3 & 0x1ffffffc)
                       * ((piVar18[2] - (int)local_20) + -1) + iVar15) = uVar2;
                      piVar16 = local_8;
                    }
                    local_8 = (int *)((int)piVar16 + 1);
                  } while ((int)local_8 < local_1c);
                }
                local_20 = (int *)((int)local_20 + 1);
              } while ((int)local_20 < *(int *)((int)param_1 + 0x161));
            }
          }
          else if (uVar5 < 0x801) {
            if (uVar5 == 0x800) {
              local_14 = 0;
              local_8 = (int *)0x0;
              if (0 < local_1c) {
                do {
                  local_10 = 0;
                  piVar17 = local_8;
                  if (0 < *(int *)((int)param_1 + 0x161)) {
                    do {
                      piVar18 = local_28;
                      iVar15 = FUN_006b4fa0((int)local_28);
                      sVar4 = (short)local_14;
                      if (*(char *)((int)piVar17 +
                                   ((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] + 0x1f >> 3 &
                                   0x1ffffffc) * ((piVar18[2] - local_10) + -1) + iVar15) == -1) {
                        uVar5 = local_14 + 1;
                        *(short *)((int)local_2c0 + sVar4 * 2) = (short)local_10;
                        local_14 = uVar5;
                        if (0xff < (short)uVar5) {
LAB_0070e9e5:
                          local_14 = 0;
                        }
                      }
                      else if (0 < sVar4) {
                        local_20 = (int *)(int)sVar4;
                        local_14 = 0;
                        if (0 < (int)local_20) {
                          local_c = local_2c0;
                          do {
                            piVar17 = local_24;
                            uVar2 = *(undefined1 *)
                                     ((int)((*(int *)((int)param_1 + 0x189) + -1) * local_14) /
                                      (int)local_20 + *(int *)((int)param_1 + 0x189) * local_34 + 2
                                     + *(int *)((int)param_1 + 0x185));
                            iVar15 = FUN_006b4fa0((int)local_24);
                            *(undefined1 *)
                             ((int)local_8 +
                             ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                             0x1ffffffc) * ((piVar17[2] - (int)(short)*local_c) + -1) + iVar15) =
                                 uVar2;
                            local_14 = local_14 + 1;
                            local_c = (int *)((int)local_c + 2);
                            piVar17 = local_8;
                          } while ((int)local_14 < (int)local_20);
                        }
                        goto LAB_0070e9e5;
                      }
                      local_10 = local_10 + 1;
                    } while ((int)local_10 < *(int *)((int)param_1 + 0x161));
                  }
                  if (0 < (short)local_14) {
                    local_20 = (int *)(int)(short)local_14;
                    local_10 = 0;
                    if (0 < (int)local_20) {
                      local_c = local_2c0;
                      do {
                        piVar17 = local_24;
                        uVar2 = *(undefined1 *)
                                 ((int)((*(int *)((int)param_1 + 0x189) + -1) * local_10) /
                                  (int)local_20 + *(int *)((int)param_1 + 0x189) * local_34 + 2 +
                                 *(int *)((int)param_1 + 0x185));
                        iVar15 = FUN_006b4fa0((int)local_24);
                        *(undefined1 *)
                         ((int)local_8 +
                         ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                         0x1ffffffc) * ((piVar17[2] - (int)(short)*local_c) + -1) + iVar15) = uVar2;
                        local_10 = local_10 + 1;
                        local_c = (int *)((int)local_c + 2);
                        piVar17 = local_8;
                      } while ((int)local_10 < (int)local_20);
                    }
                    local_14 = 0;
                  }
                  local_8 = (int *)((int)piVar17 + 1);
                } while ((int)local_8 < local_1c);
              }
            }
            else if (uVar5 == 0x100) {
              iVar15 = *(int *)((int)param_1 + 0x161);
              local_10 = 0;
              if (0 < iVar15) {
                do {
                  iVar7 = 0;
                  local_15 = *(char *)((int)((*(int *)((int)param_1 + 0x189) + -1) * local_10) /
                                       iVar15 + *(int *)((int)param_1 + 0x189) * local_34 + 2 +
                                      *(int *)((int)param_1 + 0x185));
                  if (0 < local_1c) {
                    do {
                      piVar17 = local_28;
                      iVar15 = FUN_006b4fa0((int)local_28);
                      piVar18 = local_24;
                      if (*(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3
                                    & 0x1ffffffc) * ((piVar17[2] - local_10) + -1) + iVar7 + iVar15)
                          == -1) {
                        iVar15 = FUN_006b4fa0((int)local_24);
                        *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] + 0x1f >> 3 &
                                  0x1ffffffc) * ((piVar18[2] - local_10) + -1) + iVar7 + iVar15) =
                             local_15;
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < local_1c);
                  }
                  iVar15 = *(int *)((int)param_1 + 0x161);
                  local_10 = local_10 + 1;
                } while ((int)local_10 < iVar15);
              }
            }
            else if (uVar5 == 0x200) {
              local_14 = 0xffffffff;
              local_c = (int *)0x0;
              local_10 = 0;
              if (0 < *(int *)((int)param_1 + 0x161)) {
                do {
                  iVar15 = 0;
                  if (0 < local_1c) {
                    do {
                      piVar17 = local_28;
                      iVar7 = FUN_006b4fa0((int)local_28);
                      if (*(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3
                                    & 0x1ffffffc) * ((piVar17[2] - local_10) + -1) + iVar15 + iVar7)
                          == -1) {
                        if ((int)local_14 < 0) {
                          local_14 = local_10;
                        }
                        local_c = (int *)((local_10 - local_14) + 1);
                        break;
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < local_1c);
                  }
                  local_10 = local_10 + 1;
                } while ((int)local_10 < *(int *)((int)param_1 + 0x161));
              }
              if (0 < (int)local_c) {
                local_8 = (int *)((int)local_c + local_14);
                local_10 = local_14;
                if ((int)local_14 < (int)local_8) {
                  do {
                    iVar15 = 0;
                    local_15 = *(char *)((int)((local_10 - local_14) *
                                              (*(int *)((int)param_1 + 0x189) + -1)) / (int)local_c
                                         + *(int *)((int)param_1 + 0x189) * local_34 + 2 +
                                        *(int *)((int)param_1 + 0x185));
                    if (0 < local_1c) {
                      do {
                        piVar17 = local_28;
                        iVar7 = FUN_006b4fa0((int)local_28);
                        piVar18 = local_24;
                        if (*(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >>
                                       3 & 0x1ffffffc) * ((piVar17[2] - local_10) + -1) +
                                     iVar15 + iVar7) == -1) {
                          iVar7 = FUN_006b4fa0((int)local_24);
                          *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] + 0x1f >> 3
                                    & 0x1ffffffc) * ((piVar18[2] - local_10) + -1) + iVar15 + iVar7)
                               = local_15;
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < local_1c);
                    }
                    local_10 = local_10 + 1;
                  } while ((int)local_10 < (int)local_8);
                }
              }
            }
            else if ((uVar5 == 0x400) && (iVar15 = 0, 0 < *(int *)((int)param_1 + 0x161))) {
              do {
                iVar7 = *(int *)((int)param_1 + 0x189);
                local_15 = *(char *)(*(int *)((int)param_1 + 0x185) + 2 + iVar7 * local_34);
                if (param_1[0x35] < iVar15) {
                  local_8 = (int *)param_1[0x32];
                  if (iVar15 < (int)local_8 - param_1[0x34]) {
                    local_8 = (int *)((int)local_8 + (-param_1[0x35] - param_1[0x34]));
                    if (0 < (int)local_8) {
                      local_15 = *(char *)(((iVar15 - param_1[0x35]) * (iVar7 + -1)) / (int)local_8
                                           + *(int *)((int)param_1 + 0x185) + 2 + iVar7 * local_34);
                    }
                  }
                  else {
                    local_15 = *(char *)(iVar7 * local_68 + *(int *)((int)param_1 + 0x185));
                  }
                }
                local_10 = 0;
                if (0 < local_1c) {
                  do {
                    piVar17 = local_28;
                    iVar7 = FUN_006b4fa0((int)local_28);
                    piVar18 = local_24;
                    if (*(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                                  0x1ffffffc) * ((piVar17[2] - iVar15) + -1) + local_10 + iVar7) ==
                        -1) {
                      iVar7 = FUN_006b4fa0((int)local_24);
                      *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] + 0x1f >> 3 &
                                0x1ffffffc) * ((piVar18[2] - iVar15) + -1) + local_10 + iVar7) =
                           local_15;
                    }
                    local_10 = local_10 + 1;
                  } while ((int)local_10 < local_1c);
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < *(int *)((int)param_1 + 0x161));
            }
          }
          else if (uVar5 == 0x1000) {
            local_10 = 0;
            if (0 < local_1c) {
              do {
                iVar15 = 0;
                local_15 = *(char *)((int)((*(int *)((int)param_1 + 0x189) + -1) * local_10) /
                                     local_1c + *(int *)((int)param_1 + 0x189) * local_34 + 2 +
                                    *(int *)((int)param_1 + 0x185));
                if (0 < *(int *)((int)param_1 + 0x161)) {
                  do {
                    piVar17 = local_28;
                    iVar7 = FUN_006b4fa0((int)local_28);
                    piVar18 = local_24;
                    if (*(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                                  0x1ffffffc) * ((piVar17[2] - iVar15) + -1) + local_10 + iVar7) ==
                        -1) {
                      iVar7 = FUN_006b4fa0((int)local_24);
                      *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] + 0x1f >> 3 &
                                0x1ffffffc) * ((piVar18[2] - iVar15) + -1) + local_10 + iVar7) =
                           local_15;
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < *(int *)((int)param_1 + 0x161));
                }
                local_10 = local_10 + 1;
              } while ((int)local_10 < local_1c);
            }
          }
          else if (uVar5 == 0x2000) {
            sVar4 = 0;
            local_14 = 0;
            if (0 < *(int *)((int)param_1 + 0x161)) {
              do {
                local_20 = (int *)0x0;
                if (0 < local_1c) {
                  do {
                    piVar17 = local_28;
                    iVar15 = FUN_006b4fa0((int)local_28);
                    if (*(char *)((int)local_20 +
                                 ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                                 0x1ffffffc) * ((piVar17[2] - local_14) + -1) + iVar15) == -1) {
                      iVar15 = (int)sVar4;
                      sVar4 = sVar4 + 1;
                      *(undefined2 *)((int)local_4c0 + iVar15 * 2) = local_20._0_2_;
                      if (0xff < sVar4) {
LAB_0070ecc7:
                        sVar4 = 0;
                      }
                    }
                    else if (0 < sVar4) {
                      local_10 = (uint)sVar4;
                      local_8 = (int *)0x0;
                      if (0 < (int)local_10) {
                        local_c = local_4c0;
                        do {
                          piVar17 = local_24;
                          uVar2 = *(undefined1 *)
                                   (((*(int *)((int)param_1 + 0x189) + -1) * (int)local_8) /
                                    (int)local_10 + *(int *)((int)param_1 + 0x189) * local_34 + 2 +
                                   *(int *)((int)param_1 + 0x185));
                          iVar7 = FUN_006b4fa0((int)local_24);
                          iVar15 = *local_c;
                          local_c = (int *)((int)local_c + 2);
                          *(undefined1 *)
                           (iVar7 + ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3
                                    & 0x1ffffffc) * ((piVar17[2] - local_14) + -1) +
                           (int)(short)iVar15) = uVar2;
                          local_8 = (int *)((int)local_8 + 1);
                        } while ((int)local_8 < (int)local_10);
                      }
                      goto LAB_0070ecc7;
                    }
                    local_20 = (int *)((int)local_20 + 1);
                  } while ((int)local_20 < local_1c);
                }
                if (0 < sVar4) {
                  local_10 = (uint)sVar4;
                  local_8 = (int *)0x0;
                  if (0 < (int)local_10) {
                    local_c = local_4c0;
                    do {
                      piVar17 = local_24;
                      uVar2 = *(undefined1 *)
                               (((*(int *)((int)param_1 + 0x189) + -1) * (int)local_8) /
                                (int)local_10 + *(int *)((int)param_1 + 0x189) * local_34 + 2 +
                               *(int *)((int)param_1 + 0x185));
                      iVar7 = FUN_006b4fa0((int)local_24);
                      iVar15 = *local_c;
                      local_c = (int *)((int)local_c + 2);
                      *(undefined1 *)
                       (iVar7 + ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                                0x1ffffffc) * ((piVar17[2] - local_14) + -1) + (int)(short)iVar15) =
                           uVar2;
                      local_8 = (int *)((int)local_8 + 1);
                    } while ((int)local_8 < (int)local_10);
                  }
                  sVar4 = 0;
                }
                local_14 = local_14 + 1;
              } while ((int)local_14 < *(int *)((int)param_1 + 0x161));
            }
          }
          else if (uVar5 == 0x4000) {
            DVar9 = timeGetTime();
            Library::MSVCRT::FUN_0072e6b0(DVar9);
            local_10 = 0;
            if (0 < *(int *)((int)param_1 + 0x161)) {
              do {
                local_8 = (int *)0x0;
                if (0 < local_1c) {
                  do {
                    piVar18 = local_8;
                    piVar17 = local_28;
                    iVar15 = FUN_006b4fa0((int)local_28);
                    if (*(char *)((int)piVar18 +
                                 ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                                 0x1ffffffc) * ((piVar17[2] - local_10) + -1) + iVar15) == -1) {
                      iVar15 = *(int *)((int)param_1 + 0x189);
                      uVar5 = Library::MSVCRT::FUN_0072e6c0();
                      piVar17 = local_24;
                      uVar2 = *(undefined1 *)
                               ((int)uVar5 % (iVar15 + -1) + iVar15 * local_34 + 2 +
                               *(int *)((int)param_1 + 0x185));
                      iVar15 = FUN_006b4fa0((int)local_24);
                      *(undefined1 *)
                       ((int)local_8 +
                       ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 & 0x1ffffffc)
                       * ((piVar17[2] - local_10) + -1) + iVar15) = uVar2;
                      piVar18 = local_8;
                    }
                    local_8 = (int *)((int)piVar18 + 1);
                  } while ((int)local_8 < local_1c);
                }
                local_10 = local_10 + 1;
              } while ((int)local_10 < *(int *)((int)param_1 + 0x161));
            }
          }
          iVar15 = *(int *)((int)param_1 + 0x159);
          if ((iVar15 != 0) || (*(int *)((int)param_1 + 0x15d) != 0)) {
            uVar5 = *(uint *)((int)param_1 + 0x171);
            if (uVar5 < 0x800001) {
              if (uVar5 == 0x800000) {
LAB_0070fd65:
                if ((0 < iVar15) || (0 < *(int *)((int)param_1 + 0x15d))) {
                  local_c = (int *)0x0;
                  while( true ) {
                    piVar17 = local_c;
                    iVar15 = *(int *)((int)param_1 + 0x159);
                    if (*(int *)((int)param_1 + 0x159) <= *(int *)((int)param_1 + 0x15d)) {
                      iVar15 = *(int *)((int)param_1 + 0x15d);
                    }
                    if (iVar15 <= (int)local_c) break;
                    piVar18 = Library::DKW::WGR::FUN_006b55f0
                                        ((undefined4 *)0x0,0,0,0,(int)local_24,0,0,0,local_1c,
                                         *(int *)((int)param_1 + 0x161));
                    local_30 = piVar18;
                    if (((0 < *(int *)((int)param_1 + 0x159)) &&
                        ((int)piVar17 < *(int *)((int)param_1 + 0x159))) &&
                       (iVar15 = 0, 0 < *(int *)((int)param_1 + 0x161))) {
                      do {
                        uVar5 = 0;
                        local_8 = (int *)0x1;
                        if (0 < local_1c) {
                          do {
                            local_3c.cy = (LONG)piVar18;
                            if (local_8 == (int *)0x0) {
                              iVar7 = FUN_006b4fa0((int)piVar18);
                              if (*(byte *)(((uint)*(ushort *)(local_3c.cy + 0xe) *
                                             *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc) *
                                            ((*(int *)(local_3c.cy + 8) - iVar15) + -1) +
                                           uVar5 + iVar7) == **(byte **)((int)param_1 + 0x185)) {
                                local_8 = (int *)0x1;
                                local_20 = (int *)FUN_0070cb20(uVar5,iVar15,local_30,local_1c,
                                                               *(int *)((int)param_1 + 0x161),
                                                               (byte)_local_2c,
                                                               **(byte **)((int)param_1 + 0x185),
                                                               *(int *)((int)param_1 + 0x12d),
                                                               *(HPALETTE *)((int)param_1 + 0x111),
                                                               *(uint *)((int)param_1 + 0x171),
                                                               *(int *)((int)param_1 + 0x199));
                                if (-1 < (int)local_20) {
                                  local_3c.cy = (LONG)local_24;
                                  iVar7 = FUN_006b4fa0((int)local_24);
                                  *(undefined1 *)
                                   (((uint)*(ushort *)(local_3c.cy + 0xe) *
                                     *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc) *
                                    ((*(int *)(local_3c.cy + 8) - iVar15) + -1) + uVar5 + iVar7) =
                                       local_20._0_1_;
                                }
                              }
                            }
                            else {
                              iVar7 = FUN_006b4fa0((int)piVar18);
                              if ((*(char *)(((uint)*(ushort *)(local_3c.cy + 0xe) *
                                              *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc) *
                                             ((*(int *)(local_3c.cy + 8) - iVar15) + -1) +
                                            uVar5 + iVar7) != **(char **)((int)param_1 + 0x185)) &&
                                 (local_8 = (int *)0x0, -1 < (int)(uVar5 - 1))) {
                                local_3c.cy = (LONG)local_30;
                                iVar7 = FUN_006b4fa0((int)local_30);
                                if ((*(byte *)(((uint)*(ushort *)(local_3c.cy + 0xe) *
                                                *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc)
                                               * ((*(int *)(local_3c.cy + 8) - iVar15) + -1) + -1 +
                                              uVar5 + iVar7) == **(byte **)((int)param_1 + 0x185))
                                   && (local_20 = (int *)FUN_0070cb20(uVar5 - 1,iVar15,local_30,
                                                                      local_1c,*(int *)((int)param_1
                                                                                       + 0x161),
                                                                      (byte)_local_2c,
                                                                      **(byte **)((int)param_1 +
                                                                                 0x185),
                                                                      *(int *)((int)param_1 + 0x12d)
                                                                      ,*(HPALETTE *)
                                                                        ((int)param_1 + 0x111),
                                                                      *(uint *)((int)param_1 + 0x171
                                                                               ),
                                                                      *(int *)((int)param_1 + 0x199)
                                                                     ), -1 < (int)local_20)) {
                                  local_3c.cy = (LONG)local_24;
                                  iVar7 = FUN_006b4fa0((int)local_24);
                                  *(undefined1 *)
                                   (((uint)*(ushort *)(local_3c.cy + 0xe) *
                                     *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc) *
                                    ((*(int *)(local_3c.cy + 8) - iVar15) + -1) + -1 + uVar5 + iVar7
                                   ) = local_20._0_1_;
                                }
                              }
                            }
                            uVar5 = uVar5 + 1;
                            piVar18 = local_30;
                          } while ((int)uVar5 < local_1c);
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < *(int *)((int)param_1 + 0x161));
                    }
                    if (((0 < *(int *)((int)param_1 + 0x15d)) &&
                        ((int)local_c < *(int *)((int)param_1 + 0x15d))) &&
                       (uVar5 = 0, 0 < local_1c)) {
                      do {
                        iVar15 = 0;
                        local_8 = (int *)0x1;
                        if (0 < *(int *)((int)param_1 + 0x161)) {
                          do {
                            local_3c.cy = (LONG)piVar18;
                            if (local_8 == (int *)0x0) {
                              iVar7 = FUN_006b4fa0((int)piVar18);
                              if (*(byte *)(((uint)*(ushort *)(local_3c.cy + 0xe) *
                                             *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc) *
                                            ((*(int *)(local_3c.cy + 8) - iVar15) + -1) +
                                           uVar5 + iVar7) == **(byte **)((int)param_1 + 0x185)) {
                                local_8 = (int *)0x1;
                                local_20 = (int *)FUN_0070cb20(uVar5,iVar15,local_30,local_1c,
                                                               *(int *)((int)param_1 + 0x161),
                                                               (byte)_local_2c,
                                                               **(byte **)((int)param_1 + 0x185),
                                                               *(int *)((int)param_1 + 0x12d),
                                                               *(HPALETTE *)((int)param_1 + 0x111),
                                                               *(uint *)((int)param_1 + 0x171),
                                                               *(int *)((int)param_1 + 0x199));
                                if (-1 < (int)local_20) {
                                  local_3c.cy = (LONG)local_24;
                                  iVar7 = FUN_006b4fa0((int)local_24);
                                  iVar10 = ((uint)*(ushort *)(local_3c.cy + 0xe) *
                                            *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc) *
                                           ((*(int *)(local_3c.cy + 8) - iVar15) + -1);
                                  goto LAB_0071021a;
                                }
                              }
                            }
                            else {
                              iVar7 = FUN_006b4fa0((int)piVar18);
                              if ((*(char *)(((uint)*(ushort *)(local_3c.cy + 0xe) *
                                              *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc) *
                                             ((*(int *)(local_3c.cy + 8) - iVar15) + -1) +
                                            uVar5 + iVar7) != **(char **)((int)param_1 + 0x185)) &&
                                 (local_8 = (int *)0x0, -1 < iVar15 + -1)) {
                                local_3c.cy = (LONG)local_30;
                                iVar7 = FUN_006b4fa0((int)local_30);
                                if ((*(byte *)(((uint)*(ushort *)(local_3c.cy + 0xe) *
                                                *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc)
                                               * (*(int *)(local_3c.cy + 8) - iVar15) +
                                              uVar5 + iVar7) == **(byte **)((int)param_1 + 0x185))
                                   && (local_20 = (int *)FUN_0070cb20(uVar5,iVar15 + -1,local_30,
                                                                      local_1c,*(int *)((int)param_1
                                                                                       + 0x161),
                                                                      (byte)_local_2c,
                                                                      **(byte **)((int)param_1 +
                                                                                 0x185),
                                                                      *(int *)((int)param_1 + 0x12d)
                                                                      ,*(HPALETTE *)
                                                                        ((int)param_1 + 0x111),
                                                                      *(uint *)((int)param_1 + 0x171
                                                                               ),
                                                                      *(int *)((int)param_1 + 0x199)
                                                                     ), -1 < (int)local_20)) {
                                  local_3c.cy = (LONG)local_24;
                                  iVar7 = FUN_006b4fa0((int)local_24);
                                  iVar10 = ((uint)*(ushort *)(local_3c.cy + 0xe) *
                                            *(int *)(local_3c.cy + 4) + 0x1f >> 3 & 0x1ffffffc) *
                                           (*(int *)(local_3c.cy + 8) - iVar15);
LAB_0071021a:
                                  *(undefined1 *)(iVar10 + uVar5 + iVar7) = local_20._0_1_;
                                }
                              }
                            }
                            iVar15 = iVar15 + 1;
                            piVar18 = local_30;
                          } while (iVar15 < *(int *)((int)param_1 + 0x161));
                        }
                        uVar5 = uVar5 + 1;
                      } while ((int)uVar5 < local_1c);
                    }
                    if (piVar18 != (int *)0x0) {
                      FUN_006ab060(&local_30);
                    }
                    local_c = (int *)((int)local_c + 1);
                  }
                }
              }
              else if (uVar5 == 0x200000) {
                if (local_2c != **(char **)((int)param_1 + 0x185)) {
                  if ((iVar15 < 1) || (*(int *)((int)param_1 + 0x15d) < 1)) {
                    if ((iVar15 != 0) && (iVar15 = 0, 0 < *(int *)((int)param_1 + 0x161))) {
                      do {
                        piVar17 = (int *)0x0;
                        local_14 = 1;
                        if (*(int *)((int)param_1 + 0x159) < 1) {
                          local_20 = (int *)0x0;
                          if (0 < local_1c) {
                            do {
                              if (local_14 == 0) {
                                local_8 = local_28;
                                iVar7 = FUN_006b4fa0((int)local_28);
                                local_15 = *(char *)((int)piVar17 +
                                                    ((uint)*(ushort *)((int)local_8 + 0xe) *
                                                     local_8[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                    ((local_8[2] - iVar15) + -1) + iVar7);
                                if ((local_15 == -1) && (piVar17 != (int *)(local_1c + -1))) {
                                  uVar5 = (int)*(uint *)((int)param_1 + 0x159) >> 0x1f;
                                  if ((int)local_20 <
                                      (int)((*(uint *)((int)param_1 + 0x159) ^ uVar5) - uVar5)) {
                                    local_8 = local_24;
                                    iVar7 = FUN_006b4fa0((int)local_24);
                                    *(char *)((int)piVar17 +
                                             ((uint)*(ushort *)((int)local_8 + 0xe) * local_8[1] +
                                              0x1f >> 3 & 0x1ffffffc) * ((local_8[2] - iVar15) + -1)
                                             + iVar7) = local_2c;
                                    local_20 = (int *)((int)local_20 + 1);
                                  }
                                }
                                else {
                                  local_10 = 1;
                                  local_3c.cy = local_1c + -1;
                                  local_14 = 1;
                                  if ((piVar17 == (int *)local_3c.cy) && (local_15 == -1)) {
                                    local_10 = 0;
                                  }
                                  local_8 = (int *)((int)piVar17 - local_10);
                                  while( true ) {
                                    if ((piVar17 == (int *)local_3c.cy) && (local_15 == -1)) {
                                      iVar7 = 1;
                                    }
                                    else {
                                      iVar7 = 0;
                                    }
                                    uVar5 = (int)*(uint *)((int)param_1 + 0x159) >> 0x1f;
                                    if ((int)(((*(uint *)((int)param_1 + 0x159) ^ uVar5) - uVar5) -
                                             iVar7) < (int)local_10) break;
                                    if (-1 < (int)local_8) {
                                      local_c = local_28;
                                      iVar7 = FUN_006b4fa0((int)local_28);
                                      if (*(char *)((int)piVar17 +
                                                   (((uint)*(ushort *)((int)local_c + 0xe) *
                                                     local_c[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                    ((local_c[2] - iVar15) + -1) - local_10) + iVar7
                                                   ) == -1) {
                                        local_c = local_24;
                                        iVar7 = FUN_006b4fa0((int)local_24);
                                        *(char *)((int)piVar17 +
                                                 (((uint)*(ushort *)((int)local_c + 0xe) *
                                                   local_c[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                  ((local_c[2] - iVar15) + -1) - local_10) + iVar7)
                                             = local_2c;
                                      }
                                    }
                                    local_10 = local_10 + 1;
                                    local_8 = (int *)((int)local_8 + -1);
                                  }
                                }
                              }
                              else {
                                local_8 = local_28;
                                iVar7 = FUN_006b4fa0((int)local_28);
                                if (*(char *)((int)piVar17 +
                                             ((uint)*(ushort *)((int)local_8 + 0xe) * local_8[1] +
                                              0x1f >> 3 & 0x1ffffffc) * ((local_8[2] - iVar15) + -1)
                                             + iVar7) == -1) {
                                  local_14 = 0;
                                  local_20 = (int *)0x1;
                                  local_8 = local_24;
                                  iVar7 = FUN_006b4fa0((int)local_24);
                                  *(char *)((int)piVar17 +
                                           ((uint)*(ushort *)((int)local_8 + 0xe) * local_8[1] +
                                            0x1f >> 3 & 0x1ffffffc) * ((local_8[2] - iVar15) + -1) +
                                           iVar7) = local_2c;
                                }
                              }
                              piVar17 = (int *)((int)piVar17 + 1);
                            } while ((int)piVar17 < local_1c);
                          }
                        }
                        else if (0 < local_1c) {
                          do {
                            if (local_14 == 0) {
                              local_8 = local_28;
                              iVar7 = FUN_006b4fa0((int)local_28);
                              if (*(char *)((int)piVar17 +
                                           ((uint)*(ushort *)((int)local_8 + 0xe) * local_8[1] +
                                            0x1f >> 3 & 0x1ffffffc) * ((local_8[2] - iVar15) + -1) +
                                           iVar7) != -1) {
                                uVar14 = (int)*(uint *)((int)param_1 + 0x159) >> 0x1f;
                                uVar5 = *(uint *)((int)param_1 + 0x159) ^ uVar14;
                                local_14 = 1;
                                local_20 = (int *)0x0;
                                if (uVar5 != uVar14 && -1 < (int)(uVar5 - uVar14)) {
                                  do {
                                    if ((int)local_20 + (int)piVar17 < local_1c) {
                                      local_8 = local_28;
                                      iVar7 = FUN_006b4fa0((int)local_28);
                                      if (*(char *)((int)local_20 +
                                                    ((uint)*(ushort *)((int)local_8 + 0xe) *
                                                     local_8[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                    ((local_8[2] - iVar15) + -1) + iVar7 +
                                                   (int)piVar17) == '\0') {
                                        local_8 = local_24;
                                        iVar7 = FUN_006b4fa0((int)local_24);
                                        *(char *)((int)local_20 +
                                                  ((uint)*(ushort *)((int)local_8 + 0xe) *
                                                   local_8[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                  ((local_8[2] - iVar15) + -1) + iVar7 +
                                                 (int)piVar17) = local_2c;
                                      }
                                    }
                                    uVar5 = (int)*(uint *)((int)param_1 + 0x159) >> 0x1f;
                                    local_20 = (int *)((int)local_20 + 1);
                                  } while ((int)local_20 <
                                           (int)((*(uint *)((int)param_1 + 0x159) ^ uVar5) - uVar5))
                                  ;
                                }
                              }
                            }
                            else {
                              local_8 = local_28;
                              iVar7 = FUN_006b4fa0((int)local_28);
                              if (*(char *)((int)piVar17 +
                                           ((uint)*(ushort *)((int)local_8 + 0xe) * local_8[1] +
                                            0x1f >> 3 & 0x1ffffffc) * ((local_8[2] - iVar15) + -1) +
                                           iVar7) == -1) {
                                local_14 = 0;
                                uVar5 = (int)*(uint *)((int)param_1 + 0x159) >> 0x1f;
                                local_20 = (int *)0x1;
                                if (0 < (int)((*(uint *)((int)param_1 + 0x159) ^ uVar5) - uVar5)) {
                                  local_8 = (int *)((int)piVar17 + -1);
                                  do {
                                    if (-1 < (int)local_8) {
                                      local_c = local_28;
                                      iVar7 = FUN_006b4fa0((int)local_28);
                                      if (*(char *)((int)piVar17 +
                                                   (((uint)*(ushort *)((int)local_c + 0xe) *
                                                     local_c[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                    ((local_c[2] - iVar15) + -1) - (int)local_20) +
                                                   iVar7) == '\0') {
                                        local_c = local_24;
                                        iVar7 = FUN_006b4fa0((int)local_24);
                                        *(char *)((int)piVar17 +
                                                 (((uint)*(ushort *)((int)local_c + 0xe) *
                                                   local_c[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                  ((local_c[2] - iVar15) + -1) - (int)local_20) +
                                                 iVar7) = local_2c;
                                      }
                                    }
                                    local_20 = (int *)((int)local_20 + 1);
                                    local_8 = (int *)((int)local_8 + -1);
                                    uVar5 = (int)*(uint *)((int)param_1 + 0x159) >> 0x1f;
                                  } while ((int)local_20 <=
                                           (int)((*(uint *)((int)param_1 + 0x159) ^ uVar5) - uVar5))
                                  ;
                                }
                              }
                            }
                            piVar17 = (int *)((int)piVar17 + 1);
                          } while ((int)piVar17 < local_1c);
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < *(int *)((int)param_1 + 0x161));
                    }
                    if ((*(int *)((int)param_1 + 0x15d) != 0) && (iVar15 = 0, 0 < local_1c)) {
                      do {
                        local_10 = 1;
                        if (*(int *)((int)param_1 + 0x15d) < 1) {
                          local_20 = (int *)0x0;
                          local_14 = 0;
                          if (0 < *(int *)((int)param_1 + 0x161)) {
                            do {
                              piVar17 = local_28;
                              if (local_10 == 0) {
                                iVar7 = FUN_006b4fa0((int)local_28);
                                piVar18 = local_24;
                                local_15 = *(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) *
                                                      piVar17[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                     ((piVar17[2] - local_14) + -1) + iVar15 + iVar7
                                                    );
                                if ((local_15 == -1) &&
                                   (local_14 != *(int *)((int)param_1 + 0x161) - 1U)) {
                                  uVar5 = (int)*(uint *)((int)param_1 + 0x15d) >> 0x1f;
                                  if ((int)local_20 <
                                      (int)((*(uint *)((int)param_1 + 0x15d) ^ uVar5) - uVar5)) {
                                    iVar7 = FUN_006b4fa0((int)local_24);
                                    *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] +
                                               0x1f >> 3 & 0x1ffffffc) *
                                              ((piVar18[2] - local_14) + -1) + iVar15 + iVar7) =
                                         local_2c;
                                    local_20 = (int *)((int)local_20 + 1);
                                  }
                                }
                                else {
                                  local_c = (int *)0x1;
                                  local_10 = 1;
                                  if ((local_14 == *(int *)((int)param_1 + 0x161) - 1U) &&
                                     (local_15 == -1)) {
                                    local_c = (int *)0x0;
                                  }
                                  local_8 = (int *)(local_14 - (int)local_c);
                                  while( true ) {
                                    piVar17 = local_28;
                                    if ((local_14 == *(int *)((int)param_1 + 0x161) - 1U) &&
                                       (local_15 == -1)) {
                                      iVar7 = 1;
                                    }
                                    else {
                                      iVar7 = 0;
                                    }
                                    uVar5 = (int)*(uint *)((int)param_1 + 0x15d) >> 0x1f;
                                    if ((int)(((*(uint *)((int)param_1 + 0x15d) ^ uVar5) - uVar5) -
                                             iVar7) < (int)local_c) break;
                                    if ((-1 < (int)local_8) &&
                                       (iVar7 = FUN_006b4fa0((int)local_28), piVar18 = local_24,
                                       *(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1]
                                                  + 0x1f >> 3 & 0x1ffffffc) *
                                                 ((piVar17[2] - local_14) + -1 + (int)local_c) +
                                                iVar15 + iVar7) == -1)) {
                                      iVar7 = FUN_006b4fa0((int)local_24);
                                      *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1]
                                                 + 0x1f >> 3 & 0x1ffffffc) *
                                                ((piVar18[2] - local_14) + -1 + (int)local_c) +
                                               iVar15 + iVar7) = local_2c;
                                    }
                                    local_c = (int *)((int)local_c + 1);
                                    local_8 = (int *)((int)local_8 + -1);
                                  }
                                }
                              }
                              else {
                                iVar7 = FUN_006b4fa0((int)local_28);
                                piVar18 = local_24;
                                if (*(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] +
                                               0x1f >> 3 & 0x1ffffffc) *
                                              ((piVar17[2] - local_14) + -1) + iVar15 + iVar7) == -1
                                   ) {
                                  local_10 = 0;
                                  local_20 = (int *)0x1;
                                  iVar7 = FUN_006b4fa0((int)local_24);
                                  *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) * piVar18[1] +
                                             0x1f >> 3 & 0x1ffffffc) *
                                            ((piVar18[2] - local_14) + -1) + iVar15 + iVar7) =
                                       local_2c;
                                }
                              }
                              local_14 = local_14 + 1;
                            } while ((int)local_14 < *(int *)((int)param_1 + 0x161));
                          }
                        }
                        else {
                          local_14 = 0;
                          if (0 < *(int *)((int)param_1 + 0x161)) {
                            do {
                              piVar17 = local_28;
                              if (local_10 == 0) {
                                iVar7 = FUN_006b4fa0((int)local_28);
                                if (*(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] +
                                               0x1f >> 3 & 0x1ffffffc) *
                                              ((piVar17[2] - local_14) + -1) + iVar15 + iVar7) != -1
                                   ) {
                                  uVar14 = (int)*(uint *)((int)param_1 + 0x15d) >> 0x1f;
                                  uVar5 = *(uint *)((int)param_1 + 0x15d) ^ uVar14;
                                  local_10 = 1;
                                  local_20 = (int *)0x0;
                                  if (uVar5 != uVar14 && -1 < (int)(uVar5 - uVar14)) {
                                    do {
                                      piVar17 = local_28;
                                      if (((int)((int)local_20 + local_14) <
                                           *(int *)((int)param_1 + 0x161)) &&
                                         (iVar7 = FUN_006b4fa0((int)local_28), piVar18 = local_24,
                                         *(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) *
                                                    piVar17[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                   (((piVar17[2] - (int)local_20) - local_14) + -1)
                                                  + iVar15 + iVar7) == '\0')) {
                                        iVar7 = FUN_006b4fa0((int)local_24);
                                        *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) *
                                                   piVar18[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                  (((piVar18[2] - (int)local_20) - local_14) + -1) +
                                                 iVar15 + iVar7) = local_2c;
                                      }
                                      uVar5 = (int)*(uint *)((int)param_1 + 0x15d) >> 0x1f;
                                      local_20 = (int *)((int)local_20 + 1);
                                    } while ((int)local_20 <
                                             (int)((*(uint *)((int)param_1 + 0x15d) ^ uVar5) - uVar5
                                                  ));
                                  }
                                }
                              }
                              else {
                                iVar7 = FUN_006b4fa0((int)local_28);
                                if (*(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] +
                                               0x1f >> 3 & 0x1ffffffc) *
                                              ((piVar17[2] - local_14) + -1) + iVar15 + iVar7) == -1
                                   ) {
                                  uVar5 = (int)*(uint *)((int)param_1 + 0x15d) >> 0x1f;
                                  local_10 = 0;
                                  local_8 = (int *)0x1;
                                  if (0 < (int)((*(uint *)((int)param_1 + 0x15d) ^ uVar5) - uVar5))
                                  {
                                    local_c = (int *)(local_14 - 1);
                                    do {
                                      piVar17 = local_28;
                                      if ((-1 < (int)local_c) &&
                                         (iVar7 = FUN_006b4fa0((int)local_28), piVar18 = local_24,
                                         *(char *)(((uint)*(ushort *)((int)piVar17 + 0xe) *
                                                    piVar17[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                   ((piVar17[2] - local_14) + -1 + (int)local_8) +
                                                  iVar15 + iVar7) == '\0')) {
                                        iVar7 = FUN_006b4fa0((int)local_24);
                                        *(char *)(((uint)*(ushort *)((int)piVar18 + 0xe) *
                                                   piVar18[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                  ((piVar18[2] - local_14) + -1 + (int)local_8) +
                                                 iVar15 + iVar7) = local_2c;
                                      }
                                      local_8 = (int *)((int)local_8 + 1);
                                      local_c = (int *)((int)local_c + -1);
                                      uVar5 = (int)*(uint *)((int)param_1 + 0x15d) >> 0x1f;
                                    } while ((int)local_8 <=
                                             (int)((*(uint *)((int)param_1 + 0x15d) ^ uVar5) - uVar5
                                                  ));
                                  }
                                }
                              }
                              local_14 = local_14 + 1;
                            } while ((int)local_14 < *(int *)((int)param_1 + 0x161));
                          }
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < local_1c);
                    }
                  }
                  else {
                    local_14 = 0;
                    while( true ) {
                      iVar15 = *(int *)((int)param_1 + 0x159);
                      iVar7 = *(int *)((int)param_1 + 0x15d);
                      if (*(int *)((int)param_1 + 0x15d) < iVar15) {
                        iVar7 = iVar15;
                      }
                      if (iVar7 <= (int)local_14) break;
                      if (((int)local_14 < iVar15) &&
                         (iVar15 = 0, 0 < *(int *)((int)param_1 + 0x161))) {
                        do {
                          iVar7 = 0;
                          local_8 = (int *)0x1;
                          if (0 < local_1c) {
                            do {
                              if (local_8 == (int *)0x0) {
                                if (local_14 == 0) {
                                  local_c = local_28;
                                  iVar10 = FUN_006b4fa0((int)local_28);
                                  if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1]
                                                 + 0x1f >> 3 & 0x1ffffffc) *
                                                ((local_c[2] - iVar15) + -1) + iVar7 + iVar10) !=
                                      '\0') goto LAB_0070f16a;
LAB_0070f1b0:
                                  local_8 = (int *)0x1;
                                  local_c = local_24;
                                  iVar10 = FUN_006b4fa0((int)local_24);
                                  *(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1] +
                                             0x1f >> 3 & 0x1ffffffc) * ((local_c[2] - iVar15) + -1)
                                           + iVar7 + iVar10) = local_2c;
                                }
                                else {
LAB_0070f16a:
                                  if (local_14 != 0) {
                                    local_c = local_24;
                                    iVar10 = FUN_006b4fa0((int)local_24);
                                    if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) *
                                                   local_c[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                  ((local_c[2] - iVar15) + -1) + iVar7 + iVar10) ==
                                        **(char **)((int)param_1 + 0x185)) goto LAB_0070f1b0;
                                  }
                                }
                              }
                              else if (local_14 == 0) {
                                local_c = local_28;
                                iVar10 = FUN_006b4fa0((int)local_28);
                                if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1] +
                                               0x1f >> 3 & 0x1ffffffc) *
                                              ((local_c[2] - iVar15) + -1) + iVar7 + iVar10) != -1)
                                goto LAB_0070f052;
LAB_0070f0a0:
                                local_8 = (int *)0x0;
                                if (-1 < iVar7 + -1) {
                                  local_c = local_28;
                                  iVar10 = FUN_006b4fa0((int)local_28);
                                  if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1]
                                                 + 0x1f >> 3 & 0x1ffffffc) *
                                                ((local_c[2] - iVar15) + -1) + -1 + iVar7 + iVar10)
                                      == '\0') {
                                    local_c = local_24;
                                    iVar10 = FUN_006b4fa0((int)local_24);
                                    *(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1] +
                                               0x1f >> 3 & 0x1ffffffc) *
                                              ((local_c[2] - iVar15) + -1) + -1 + iVar7 + iVar10) =
                                         local_2c;
                                  }
                                }
                              }
                              else {
LAB_0070f052:
                                if (local_14 != 0) {
                                  local_c = local_24;
                                  iVar10 = FUN_006b4fa0((int)local_24);
                                  if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1]
                                                 + 0x1f >> 3 & 0x1ffffffc) *
                                                ((local_c[2] - iVar15) + -1) + iVar7 + iVar10) !=
                                      **(char **)((int)param_1 + 0x185)) goto LAB_0070f0a0;
                                }
                              }
                              iVar7 = iVar7 + 1;
                            } while (iVar7 < local_1c);
                          }
                          iVar15 = iVar15 + 1;
                        } while (iVar15 < *(int *)((int)param_1 + 0x161));
                      }
                      uVar5 = local_14;
                      if (((int)local_14 < *(int *)((int)param_1 + 0x15d)) &&
                         (iVar15 = 0, 0 < local_1c)) {
                        do {
                          iVar7 = 0;
                          local_8 = (int *)0x1;
                          if (0 < *(int *)((int)param_1 + 0x161)) {
                            do {
                              if (local_8 == (int *)0x0) {
                                if (uVar5 != 0) {
LAB_0070f38c:
                                  if (local_14 != 0) {
                                    local_c = local_24;
                                    iVar10 = FUN_006b4fa0((int)local_24);
                                    if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) *
                                                   local_c[1] + 0x1f >> 3 & 0x1ffffffc) *
                                                  ((local_c[2] - iVar7) + -1) + iVar15 + iVar10) ==
                                        **(char **)((int)param_1 + 0x185)) goto LAB_0070f3d2;
                                  }
                                  goto LAB_0070f411;
                                }
                                local_c = local_28;
                                iVar10 = FUN_006b4fa0((int)local_28);
                                if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1] +
                                               0x1f >> 3 & 0x1ffffffc) * ((local_c[2] - iVar7) + -1)
                                             + iVar15 + iVar10) != '\0') goto LAB_0070f38c;
LAB_0070f3d2:
                                local_8 = (int *)0x1;
                                local_c = local_24;
                                iVar10 = FUN_006b4fa0((int)local_24);
                                iVar13 = (uint)*(ushort *)((int)local_c + 0xe) * local_c[1];
                                iVar11 = (local_c[2] - iVar7) + -1;
LAB_0070f404:
                                *(char *)((iVar13 + 0x1fU >> 3 & 0x1ffffffc) * iVar11 +
                                         iVar15 + iVar10) = local_2c;
                              }
                              else if (uVar5 == 0) {
                                local_c = local_28;
                                iVar10 = FUN_006b4fa0((int)local_28);
                                if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1] +
                                               0x1f >> 3 & 0x1ffffffc) * ((local_c[2] - iVar7) + -1)
                                             + iVar15 + iVar10) != -1) goto LAB_0070f286;
LAB_0070f2d4:
                                local_8 = (int *)0x0;
                                if (-1 < iVar7 + -1) {
                                  local_c = local_28;
                                  iVar10 = FUN_006b4fa0((int)local_28);
                                  if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1]
                                                 + 0x1f >> 3 & 0x1ffffffc) * (local_c[2] - iVar7) +
                                               iVar15 + iVar10) == '\0') {
                                    local_c = local_24;
                                    iVar10 = FUN_006b4fa0((int)local_24);
                                    iVar13 = (uint)*(ushort *)((int)local_c + 0xe) * local_c[1];
                                    iVar11 = local_c[2] - iVar7;
                                    goto LAB_0070f404;
                                  }
                                }
                              }
                              else {
LAB_0070f286:
                                if (local_14 != 0) {
                                  local_c = local_24;
                                  iVar10 = FUN_006b4fa0((int)local_24);
                                  if (*(char *)(((uint)*(ushort *)((int)local_c + 0xe) * local_c[1]
                                                 + 0x1f >> 3 & 0x1ffffffc) *
                                                ((local_c[2] - iVar7) + -1) + iVar15 + iVar10) !=
                                      **(char **)((int)param_1 + 0x185)) goto LAB_0070f2d4;
                                }
                              }
LAB_0070f411:
                              iVar7 = iVar7 + 1;
                              uVar5 = local_14;
                            } while (iVar7 < *(int *)((int)param_1 + 0x161));
                          }
                          iVar15 = iVar15 + 1;
                        } while (iVar15 < local_1c);
                      }
                      local_14 = uVar5 + 1;
                    }
                  }
                }
              }
              else if (uVar5 == 0x400000) goto LAB_0070fd65;
            }
            else if (uVar5 == 0x1000000) goto LAB_0070fd65;
          }
          iVar15 = local_4c;
          iVar7 = local_48;
          if ((local_64 != 0) &&
             ((iVar10 = *(int *)((int)param_1 + 0x175), iVar10 == 0x10 || (iVar10 == 0x20)))) {
            local_20 = (int *)0xffffffff;
            local_c = (int *)0xffffffff;
            if (iVar10 == 0x20) {
              local_10 = 0;
              piVar17 = local_28;
            }
            else {
              local_10 = (uint)**(byte **)((int)param_1 + 0x185);
              piVar17 = local_24;
            }
            piVar18 = (int *)0x0;
            if (0 < local_1c) {
              do {
                local_8 = (int *)0x0;
                if (0 < *(int *)((int)param_1 + 0x161)) {
                  do {
                    iVar15 = FUN_006b4fa0((int)piVar17);
                    if (*(byte *)((int)piVar18 +
                                 ((uint)*(ushort *)((int)piVar17 + 0xe) * piVar17[1] + 0x1f >> 3 &
                                 0x1ffffffc) * ((piVar17[2] - (int)local_8) + -1) + iVar15) !=
                        local_10) {
                      local_c = piVar18;
                      if ((int)local_20 < 0) {
                        local_20 = piVar18;
                      }
                      break;
                    }
                    local_8 = (int *)((int)local_8 + 1);
                  } while ((int)local_8 < *(int *)((int)param_1 + 0x161));
                }
                piVar18 = (int *)((int)piVar18 + 1);
              } while ((int)piVar18 < local_1c);
            }
            if ((int)local_20 < 0) {
              iVar10 = *(int *)((int)param_1 + 0x17d);
              iVar15 = local_1c;
              iVar11 = iVar10;
            }
            else {
              iVar10 = *(int *)((int)param_1 + 0x17d);
              iVar15 = (int)local_c + (1 - (int)local_20);
              iVar11 = iVar10 + (int)local_20;
            }
            iVar7 = iVar11;
            if ((local_34 != 0) &&
               ((local_4c != iVar15 || (iVar15 = local_4c, iVar7 = local_48, local_48 != iVar11))))
            {
              local_64 = 0;
              local_4c = local_1c;
              iVar15 = local_4c;
              iVar7 = iVar10;
            }
          }
          local_48 = iVar7;
          local_4c = iVar15;
          iVar15 = local_68;
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)param_1[local_68],0,*(int *)((int)param_1 + 0x17d),
                     *(int *)((int)param_1 + 0x181),(int)local_24,0,0,0,local_1c,
                     *(int *)((int)param_1 + 0x161));
          if (local_24 != (int *)0x0) {
            FUN_006ab060(&local_24);
          }
          local_34 = iVar15;
        } while (iVar15 < **(short **)((int)param_1 + 0x9a));
      }
      if (local_28 != (int *)0x0) {
        FUN_006ab060(&local_28);
      }
      if (*(int *)((int)param_1 + 0x179) <=
          (int)(uint)*(ushort *)(*(undefined4 **)((int)param_1 + 0x9a) + 0x19)) {
        iVar15 = *(int *)((int)param_1 + 0x179) + *(int *)((int)param_1 + 0x13d);
        *(int *)((int)param_1 + 0x179) = iVar15;
        iVar15 = Library::DKW::LIB::FUN_006acf50
                           (*(undefined4 **)((int)param_1 + 0x9a),iVar15 * 10 + 0x70);
        *(int *)((int)param_1 + 0x9a) = iVar15;
      }
      *(undefined2 *)
       (*(int *)((int)param_1 + 0x9a) +
       (*(ushort *)(*(int *)((int)param_1 + 0x9a) + 100) + 0xb) * 10) = (undefined2)param_2;
      *(undefined2 *)
       (*(int *)((int)param_1 + 0x9a) + 0x66 +
       (uint)*(ushort *)(*(int *)((int)param_1 + 0x9a) + 100) * 10) = (undefined2)local_48;
      *(undefined2 *)
       (*(int *)((int)param_1 + 0x9a) + 0x68 +
       (uint)*(ushort *)(*(int *)((int)param_1 + 0x9a) + 100) * 10) =
           *(undefined2 *)((int)param_1 + 0x181);
      *(undefined2 *)
       (*(int *)((int)param_1 + 0x9a) + 0x6a +
       (uint)*(ushort *)(*(int *)((int)param_1 + 0x9a) + 100) * 10) = (undefined2)local_4c;
      *(undefined2 *)
       (*(int *)((int)param_1 + 0x9a) + 0x6c +
       (uint)*(ushort *)(*(int *)((int)param_1 + 0x9a) + 100) * 10) =
           *(undefined2 *)((int)param_1 + 0x161);
      iVar15 = *(int *)((int)param_1 + 0x9a);
      iVar7 = (int)*(short *)(iVar15 + 0x6a + (uint)*(ushort *)(iVar15 + 100) * 10);
      if (*(int *)((int)param_1 + 0x86) < iVar7) {
        *(int *)((int)param_1 + 0x86) = iVar7;
      }
      iVar7 = (int)*(short *)(iVar15 + 0x6c + (uint)*(ushort *)(iVar15 + 100) * 10);
      if (*(int *)((int)param_1 + 0x8a) < iVar7) {
        *(int *)((int)param_1 + 0x8a) = iVar7;
      }
      iVar7 = (int)*(short *)(iVar15 + 0x6a + (uint)*(ushort *)(iVar15 + 100) * 10);
      if (iVar7 < *(int *)((int)param_1 + 0x8e)) {
        *(int *)((int)param_1 + 0x8e) = iVar7;
      }
      iVar7 = (int)*(short *)(iVar15 + 0x6c + (uint)*(ushort *)(iVar15 + 100) * 10);
      if (iVar7 < *(int *)((int)param_1 + 0x92)) {
        *(int *)((int)param_1 + 0x92) = iVar7;
      }
      uVar3 = *(ushort *)(iVar15 + 100);
      *(uint *)((int)param_1 + 0x195) = (uint)uVar3;
      *(short *)(iVar15 + 100) = *(short *)(iVar15 + 100) + 1;
      *(int *)((int)param_1 + 0x17d) = *(int *)((int)param_1 + 0x17d) + local_1c;
      param_1[0x2b] = param_1[0x2b] + 1;
      g_currentExceptionFrame = local_c0.previous;
      return (uint)uVar3;
    }
    g_currentExceptionFrame = local_c0.previous;
    if (local_28 != (int *)0x0) {
      FUN_006ab060(&local_28);
    }
    if (local_44 != (undefined4 *)0x0) {
      FUN_006ab060(&local_44);
    }
    if (local_24 != (int *)0x0) {
      FUN_006ab060(&local_24);
    }
    if (local_30 != (int *)0x0) {
      FUN_006ab060(&local_30);
    }
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  return 0xffffffff;
}


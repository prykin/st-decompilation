
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005d1400(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  void *pvVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *this_00;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined3 extraout_var;
  byte *pbVar12;
  byte bVar13;
  undefined4 unaff_ESI;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  void *unaff_EDI;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  undefined4 *puVar20;
  char *pcVar21;
  bool bVar22;
  bool bVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  char local_680 [64];
  char local_640 [1044];
  char local_22c [64];
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  char local_190 [64];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 *local_f4;
  undefined4 local_f0 [16];
  int local_b0 [8];
  int local_90 [4];
  undefined4 local_80;
  undefined1 uStack_7d;
  undefined4 local_7c;
  undefined1 local_70 [11];
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_62;
  int local_5a;
  undefined4 local_56;
  int *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  byte local_11;
  char *local_10;
  undefined1 *local_c;
  char local_5;
  
  local_48 = this;
  uVar8 = FUN_006e51b0(*(int *)((int)this + 0x10));
  uVar17 = 0;
  *(undefined4 *)((int)this + 0x61) = uVar8;
  local_f4 = DAT_00858df8;
  DAT_00858df8 = &local_f4;
  iVar9 = __setjmp3(local_f0,0,unaff_EDI,unaff_ESI);
  this_00 = local_48;
  if (iVar9 != 0) {
    DAT_00858df8 = local_f4;
    iVar25 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x986,0,iVar9,&DAT_007a4ccc);
    if (iVar25 != 0) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    FUN_006a5e40(iVar9,0,0x7cd258,0x986);
    return 0xffff;
  }
  thunk_FUN_005c8a40(local_48,param_1);
  thunk_FUN_005dd470(param_1);
  pvVar4 = DAT_00802a30;
  uVar18 = *(uint *)(param_1 + 0x10);
  if (uVar18 < 0x6505) {
    if (uVar18 == 0x6504) {
      uVar17 = *(uint *)(param_1 + 0x14);
      if ((uVar17 != 0xffffffff) && (this_00[0x7e1] != 0)) {
        iVar9 = *(int *)((int)this_00 + 0x1e2f);
        if (uVar17 < *(uint *)(iVar9 + 0xc)) {
          iVar9 = *(int *)(iVar9 + 8) * uVar17 + *(int *)(iVar9 + 0x1c);
        }
        else {
          iVar9 = 0;
        }
        bVar13 = *(byte *)(iVar9 + 0x104);
        local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar13);
        if (DAT_0080877e == '\0') {
          thunk_FUN_005cd9a0(*(undefined4 *)(param_1 + 0x18),2,(uint)bVar13,0);
        }
        else {
          thunk_FUN_005d06c0(this_00,*(uint *)(param_1 + 0x18),bVar13);
          thunk_FUN_005cdf60(0);
        }
      }
    }
    else if (uVar18 < 0x6341) {
      if (uVar18 == 0x6340) {
        thunk_FUN_005b6560(*(int *)((int)this_00 + 0x1a5b) + 0x55c,param_1,0);
      }
      else if (uVar18 < 0x6327) {
        if (uVar18 == 0x6326) {
          *(char *)(this_00 + 0x882) = '\x02' - **(char **)(param_1 + 0x14);
        }
        else if (uVar18 == 2) {
          *(undefined4 *)((int)this_00 + 0x2209) = *(undefined4 *)((int)this_00 + 0x61);
        }
        else if (uVar18 == 3) {
          if (*(int *)((int)this_00 + 0x2226) != 0) {
            FUN_006ab060((undefined4 *)((int)this_00 + 0x2226));
            *(undefined4 *)((int)this_00 + 0x222a) = 0;
          }
          if (*(byte **)((int)this_00 + 0x222f) != (byte *)0x0) {
            FUN_006ae110(*(byte **)((int)this_00 + 0x222f));
          }
          *(undefined4 *)((int)this_00 + 0x222f) = 0;
          if ((*(int *)((int)this_00 + 0x4d) != 0x60ff) && (DAT_00811764 != (undefined4 *)0x0)) {
            if (DAT_0080877e == '\0') {
              FUN_00715360(DAT_00811764,0,'\x11',(char *)0x0,0,0,0xffffffff);
              if (*(int *)((int)this_00 + 0x4d) != 0x6109) {
                thunk_FUN_005dac60();
              }
            }
            else if (*(int *)((int)this_00 + 0x4d) == 0x611f) {
              FUN_00715360(DAT_00811764,0,'\x12',(char *)0x0,0,0,0xffffffff);
            }
            else {
              FUN_00715360(DAT_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
              thunk_FUN_005dac60();
            }
          }
        }
      }
      else if (uVar18 == 0x6327) {
        piVar19 = *(int **)(param_1 + 0x14);
        thunk_FUN_005b5f00(this_00,this_00[0x881],piVar19);
        iVar9 = *piVar19;
        local_10 = (char *)piVar19[5];
        FUN_00710a90(this_00[0x881],0,(iVar9 + -1) * (int)local_10,0,(int)local_10,
                     *(int *)(this_00[0x881] + 8) - ((-(uint)(piVar19[1] != 1) & 0xfffffffd) + 3));
        uVar8 = 2;
        iVar26 = -1;
        iVar25 = -1;
        puVar10 = (uint *)FUN_006b0140((iVar9 != 1) + 0x2422,DAT_00807618);
        FUN_007119c0(puVar10,iVar25,iVar26,uVar8);
        FUN_006b35d0(DAT_008075a8,this_00[0x880]);
      }
    }
    else if (uVar18 < 0x6502) {
      if (uVar18 == 0x6501) {
        uVar17 = *(uint *)(param_1 + 0x14);
        if ((uVar17 != 0xffffffff) && (this_00[0x7e1] != 0)) {
          iVar9 = *(int *)((int)this_00 + 0x1e2f);
          if (uVar17 < *(uint *)(iVar9 + 0xc)) {
            iVar9 = *(int *)(iVar9 + 8) * uVar17 + *(int *)(iVar9 + 0x1c);
          }
          else {
            iVar9 = 0;
          }
          bVar13 = *(byte *)(iVar9 + 0x104);
          local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar13);
          if (DAT_0080877e == '\0') {
            thunk_FUN_005cd9a0(*(undefined4 *)(param_1 + 0x18),5,1,(uint)bVar13);
          }
          else {
            thunk_FUN_005d0bb0(this_00,*(uint *)(param_1 + 0x18),1,(uint)bVar13);
            thunk_FUN_005cdf60(0);
          }
        }
      }
      else if (uVar18 == 0x6341) {
        thunk_FUN_005b6560(*(int *)((int)this_00 + 0x1a5b) + 0x5ed,param_1,0);
      }
      else if ((uVar18 == 0x64ff) && (DAT_0080877e != '\0')) {
        FUN_00715360(DAT_00811764,0,' ',(char *)((int)this_00 + 0x1f53),0xd,1,0xffffffff);
      }
    }
    else if (((uVar18 == 0x6502) && (uVar17 = *(uint *)(param_1 + 0x14), uVar17 != 0xffffffff)) &&
            (this_00[0x7e1] != 0)) {
      iVar9 = *(int *)((int)this_00 + 0x1e2f);
      if (uVar17 < *(uint *)(iVar9 + 0xc)) {
        iVar9 = *(int *)(iVar9 + 8) * uVar17 + *(int *)(iVar9 + 0x1c);
      }
      else {
        iVar9 = 0;
      }
      bVar13 = *(byte *)(iVar9 + 0x104);
      local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar13);
      if (DAT_0080877e == '\0') {
        thunk_FUN_005cd9a0(*(undefined4 *)(param_1 + 0x18),1,(uint)bVar13,0);
      }
      else {
        thunk_FUN_005d0850(this_00,*(uint *)(param_1 + 0x18),bVar13);
        thunk_FUN_005cdf60(0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (0x654b < uVar18) {
    if (uVar18 < 0x694b) {
      if (uVar18 == 0x694a) {
        iVar9 = this_00[0x7e1];
        local_34 = 0x1010101;
        bVar23 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (iVar9 != 0) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (DAT_00802a30 != (void *)0x0) {
              uVar8 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
              uVar5 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
              *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
              *(undefined2 *)((int)pvVar4 + 0x494) = 0xffff;
              thunk_FUN_0054bf40(0,uVar5,uVar8);
              thunk_FUN_00543c90(pvVar4,*(int *)((int)pvVar4 + 0xc5),*(int *)((int)pvVar4 + 0xc9));
              *(undefined1 *)((int)pvVar4 + 0xd2) = 0;
              *(undefined4 *)((int)pvVar4 + 0x4df) = 0xffffffff;
            }
            DAT_008087c4._2_1_ = '\0';
            DAT_0080874f = 0;
            puVar20 = (undefined4 *)((int)&DAT_008087c4 + 3);
            for (iVar9 = 0xa2; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar20 = 0;
              puVar20 = puVar20 + 1;
            }
            puVar11 = &DAT_008087e9;
            do {
              puVar11[-1] = 0;
              *puVar11 = 0xff;
              puVar11 = puVar11 + 0x51;
            } while ((int)puVar11 < 0x808a71);
            iVar9 = this_00[0x7e1];
            uVar18 = 0;
            uVar17 = *(uint *)(iVar9 + 0xc);
            if (0 < (int)uVar17) {
              bVar23 = uVar17 != 0;
              do {
                if (bVar23) {
                  pcVar15 = (char *)(*(int *)(iVar9 + 8) * uVar18 + *(int *)(iVar9 + 0x1c));
                }
                else {
                  pcVar15 = (char *)0x0;
                }
                if (((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) && (pcVar15[2] != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)pcVar15[2]) = 0;
                }
                uVar18 = uVar18 + 1;
                bVar23 = uVar18 < uVar17;
              } while ((int)uVar18 < (int)uVar17);
            }
            local_18 = (char *)0x0;
            if (0 < (int)uVar17) {
              bVar23 = uVar17 != 0;
              do {
                if (bVar23) {
                  pcVar15 = (char *)(*(int *)(iVar9 + 8) * (int)local_18 + *(int *)(iVar9 + 0x1c));
                }
                else {
                  pcVar15 = (char *)0x0;
                }
                if (((pcVar15 != (char *)0x0) && (pcVar15[4] != '\0')) &&
                   ((pcVar15[4] != '\x01' ||
                    ((*(char *)((int)this_00 + 0x1e26) == '\x05' ||
                     (*(char *)((int)this_00 + 0x1e26) == '\x0f')))))) {
                  iVar9 = *(int *)(pcVar15 + 0x50);
                  if ((uint)(byte)pcVar15[5] < *(uint *)(iVar9 + 0xc)) {
                    local_c = (undefined1 *)
                              (*(int *)(iVar9 + 8) * (uint)(byte)pcVar15[5] + *(int *)(iVar9 + 0x1c)
                              );
                  }
                  else {
                    local_c = (undefined1 *)0x0;
                  }
                  DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
                  if (pcVar15[2] == -1) {
                    iVar9 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar9) != '\0') {
                        pcVar15[2] = (char)iVar9;
                        *(undefined1 *)((int)&local_34 + iVar9) = 0;
                        break;
                      }
                      iVar9 = iVar9 + 1;
                    } while (iVar9 < 8);
                  }
                  (&DAT_008087e9)[(uint)(byte)pcVar15[2] * 0x51] = pcVar15[2];
                  pcVar21 = local_18 + 1;
                  (&DAT_008087e8)[(uint)(byte)pcVar15[2] * 0x51] = pcVar15[3];
                  iVar9 = this_00[0x7e1];
                  bVar23 = pcVar21 < *(char **)(iVar9 + 0xc);
                  if ((int)pcVar21 < (int)*(char **)(iVar9 + 0xc)) {
                    do {
                      if (bVar23) {
                        pcVar14 = (char *)(*(int *)(iVar9 + 8) * (int)pcVar21 +
                                          *(int *)(iVar9 + 0x1c));
                      }
                      else {
                        pcVar14 = (char *)0x0;
                      }
                      if (pcVar14 != (char *)0x0) {
                        if (*pcVar14 != '\0') break;
                        pcVar14[2] = pcVar15[2];
                      }
                      iVar9 = this_00[0x7e1];
                      pcVar21 = pcVar21 + 1;
                      bVar23 = pcVar21 < *(char **)(iVar9 + 0xc);
                    } while ((int)pcVar21 < (int)*(char **)(iVar9 + 0xc));
                  }
                  uVar17 = 0xffffffff;
                  pcVar21 = &DAT_008016a0;
                  do {
                    pcVar14 = pcVar21;
                    if (uVar17 == 0) break;
                    uVar17 = uVar17 - 1;
                    pcVar14 = pcVar21 + 1;
                    cVar2 = *pcVar21;
                    pcVar21 = pcVar14;
                  } while (cVar2 != '\0');
                  uVar17 = ~uVar17;
                  local_10 = &DAT_008087c8 + (uint)(byte)pcVar15[2] * 0x51;
                  pcVar21 = pcVar14 + -uVar17;
                  pcVar14 = &DAT_008087c8 + (uint)(byte)pcVar15[2] * 0x51;
                  for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar21;
                    pcVar21 = pcVar21 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                    *pcVar14 = *pcVar21;
                    pcVar21 = pcVar21 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                  cVar2 = pcVar15[4];
                  if (cVar2 == '\x02') {
                    if (*pcVar15 != '\0') {
                      *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar15[2] * 0x51 + 3) = 0;
                    }
                    if (DAT_0080877f == *(int *)(pcVar15 + 6)) {
                      DAT_0080874d = pcVar15[2];
                      DAT_0080874e = pcVar15[3];
                    }
                  }
                  else if (cVar2 == '\x03') {
                    if (DAT_0080877f == *(int *)(pcVar15 + 6)) {
                      DAT_0080874d = pcVar15[2];
                      DAT_0080874e = pcVar15[3];
                      DAT_0080874f = 1;
                    }
                  }
                  else if (cVar2 == '\x04') {
                    *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar15[2] * 0x51 + 3) = 1;
                    if (local_c == (undefined1 *)0x0) {
                      uVar17 = 0xffffffff;
                      pcVar21 = &DAT_008016a0;
                      do {
                        pcVar14 = pcVar21;
                        if (uVar17 == 0) break;
                        uVar17 = uVar17 - 1;
                        pcVar14 = pcVar21 + 1;
                        cVar2 = *pcVar21;
                        pcVar21 = pcVar14;
                      } while (cVar2 != '\0');
                      uVar17 = ~uVar17;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar15[2] * 0x51;
                      pcVar21 = pcVar14 + -uVar17;
                      pcVar14 = &DAT_008087c8 + (uint)(byte)pcVar15[2] * 0x51;
                      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar21;
                        pcVar21 = pcVar21 + 4;
                        pcVar14 = pcVar14 + 4;
                      }
                      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                        *pcVar14 = *pcVar21;
                        pcVar21 = pcVar21 + 1;
                        pcVar14 = pcVar14 + 1;
                      }
                    }
                    else {
                      uVar17 = 0xffffffff;
                      pcVar21 = local_c + 0x4c;
                      do {
                        pcVar14 = pcVar21;
                        if (uVar17 == 0) break;
                        uVar17 = uVar17 - 1;
                        pcVar14 = pcVar21 + 1;
                        cVar2 = *pcVar21;
                        pcVar21 = pcVar14;
                      } while (cVar2 != '\0');
                      uVar17 = ~uVar17;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar15[2] * 0x51;
                      pcVar21 = pcVar14 + -uVar17;
                      pcVar14 = &DAT_008087c8 + (uint)(byte)pcVar15[2] * 0x51;
                      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar21;
                        pcVar21 = pcVar21 + 4;
                        pcVar14 = pcVar14 + 4;
                      }
                      for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                        *pcVar14 = *pcVar21;
                        pcVar21 = pcVar21 + 1;
                        pcVar14 = pcVar14 + 1;
                      }
                    }
                  }
                  (&DAT_008087ea)[(uint)(byte)pcVar15[2] * 0x51] = pcVar15[0x4a];
                  *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar15[2] * 0x51) =
                       *(undefined4 *)(pcVar15 + 0x54);
                  *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar15[2] * 0x51) =
                       *(undefined4 *)(pcVar15 + 0x58);
                  *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar15[2] * 0x51) =
                       *(undefined4 *)(pcVar15 + 0x5c);
                }
                iVar9 = this_00[0x7e1];
                local_18 = local_18 + 1;
                bVar23 = local_18 < *(char **)(iVar9 + 0xc);
              } while ((int)local_18 < (int)*(char **)(iVar9 + 0xc));
            }
            thunk_FUN_0056ee90(0x807620);
            pvVar4 = DAT_00802a30;
            if ((*(char *)((int)this_00 + 0x1e26) == '\a') ||
               (*(char *)((int)this_00 + 0x1e26) == '\x0e')) {
              if ((*(int *)((int)this_00 + 0x1f47) != 0) || (*(int *)(param_1 + 0x14) != 0)) {
                uVar17 = 0xffffffff;
                pcVar15 = &DAT_00853de4;
                do {
                  pcVar21 = pcVar15;
                  if (uVar17 == 0) break;
                  uVar17 = uVar17 - 1;
                  pcVar21 = pcVar15 + 1;
                  cVar2 = *pcVar15;
                  pcVar15 = pcVar21;
                } while (cVar2 != '\0');
                uVar17 = ~uVar17;
                pcVar15 = pcVar21 + -uVar17;
                pcVar21 = &DAT_0080ed16;
                for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *pcVar21 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar21 = pcVar21 + 1;
                }
                goto LAB_005d2018;
              }
              if ((DAT_0080877e != '\0') && (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) != 0)
                 ) {
                if (DAT_00802a30 != (void *)0x0) {
                  uVar8 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
                  uVar5 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
                  *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
                  *(undefined2 *)((int)pvVar4 + 0x494) = 0xffff;
                  thunk_FUN_0054bf40(0,uVar5,uVar8);
                  thunk_FUN_00543c90(pvVar4,*(int *)((int)pvVar4 + 0xc5),
                                     *(int *)((int)pvVar4 + 0xc9));
                  *(undefined1 *)((int)pvVar4 + 0xd2) = 0;
                  *(undefined4 *)((int)pvVar4 + 0x4df) = 0xffffffff;
                }
                iVar9 = *(int *)((int)this_00 + 0x1a5b);
                piVar19 = local_90;
                for (iVar25 = 8; iVar25 != 0; iVar25 = iVar25 + -1) {
                  *piVar19 = 0;
                  piVar19 = piVar19 + 1;
                }
                piVar19 = local_b0;
                for (iVar25 = 8; iVar25 != 0; iVar25 = iVar25 + -1) {
                  *piVar19 = 0;
                  piVar19 = piVar19 + 1;
                }
                local_b0[2] = this_00[2];
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                iVar9 = thunk_FUN_005b7ef0(*(void **)(iVar9 + 0x2e6),0x251f,'\x01',local_90,local_b0
                                           ,(undefined4 *)0x0,0,0);
                if (iVar9 != 0) {
                  (**(code **)(*this_00 + 0x24))();
                }
              }
            }
            else {
LAB_005d2018:
              uVar17 = 0xffffffff;
              local_5 = '\x01';
              pcVar15 = &DAT_0080ed16;
              do {
                pcVar21 = pcVar15;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                pcVar21 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar21;
              } while (cVar2 != '\0');
              uVar17 = ~uVar17;
              pcVar15 = pcVar21 + -uVar17;
              pcVar21 = (char *)&DAT_0080ee1a;
              for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                *pcVar21 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar21 = pcVar21 + 1;
              }
              uVar17 = 0xffffffff;
              pcVar15 = &DAT_00807680;
              do {
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar2 != '\0');
              uVar18 = 0xffffffff;
              pcVar15 = (char *)((int)&DAT_0080ed12 + ~uVar17 + 3);
              do {
                pcVar21 = pcVar15;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1;
                pcVar21 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar21;
              } while (cVar2 != '\0');
              uVar18 = ~uVar18;
              pcVar15 = pcVar21 + -uVar18;
              pcVar21 = &DAT_0080ef1e;
              for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *pcVar21 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar21 = pcVar21 + 1;
              }
            }
            if (local_5 != '\0') {
              DAT_008087a0 = *(undefined1 *)((int)this_00 + 0x1e26);
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                puVar20 = &DAT_00808ab0;
                for (iVar9 = 0x3a8; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar20 = 0;
                  puVar20 = puVar20 + 1;
                }
                DAT_00808aaf = 0;
                iVar9 = this_00[0x7e1];
                local_18 = (char *)0x0;
                if (0 < *(int *)(iVar9 + 0xc)) {
                  bVar23 = *(int *)(iVar9 + 0xc) != 0;
                  do {
                    if (bVar23) {
                      puVar11 = (undefined1 *)
                                (*(int *)(iVar9 + 8) * (int)local_18 + *(int *)(iVar9 + 0x1c));
                    }
                    else {
                      puVar11 = (undefined1 *)0x0;
                    }
                    if (puVar11 != (undefined1 *)0x0) {
                      cVar2 = puVar11[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        if (cVar2 == '\x04') {
                          iVar9 = *(int *)(puVar11 + 0x50);
                          if ((uint)(byte)puVar11[5] < *(uint *)(iVar9 + 0xc)) {
                            pcVar15 = (char *)(*(int *)(iVar9 + 8) * (uint)(byte)puVar11[5] +
                                              *(int *)(iVar9 + 0x1c));
                          }
                          else {
                            pcVar15 = (char *)0x0;
                          }
                          if (pcVar15 != (char *)0x0) {
                            uVar17 = 0xffffffff;
                            do {
                              pcVar21 = pcVar15;
                              if (uVar17 == 0) break;
                              uVar17 = uVar17 - 1;
                              pcVar21 = pcVar15 + 1;
                              cVar1 = *pcVar15;
                              pcVar15 = pcVar21;
                            } while (cVar1 != '\0');
                            uVar17 = ~uVar17;
                            pcVar21 = pcVar21 + -uVar17;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar17 = 0xffffffff;
                          pcVar15 = puVar11 + 10;
                          do {
                            pcVar21 = pcVar15;
                            if (uVar17 == 0) break;
                            uVar17 = uVar17 - 1;
                            pcVar21 = pcVar15 + 1;
                            cVar1 = *pcVar15;
                            pcVar15 = pcVar21;
                          } while (cVar1 != '\0');
                          uVar17 = ~uVar17;
                          pcVar21 = pcVar21 + -uVar17;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar15 = local_22c;
                          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar21;
                            pcVar21 = pcVar21 + 4;
                            pcVar15 = pcVar15 + 4;
                          }
                          for (uVar17 = uVar17 & 3; local_10 = local_22c, uVar17 != 0;
                              uVar17 = uVar17 - 1) {
                            *pcVar15 = *pcVar21;
                            pcVar21 = pcVar21 + 1;
                            pcVar15 = pcVar15 + 1;
                          }
                        }
                        local_1ec = *(undefined4 *)(puVar11 + 6);
                        local_1e8._0_2_ = CONCAT11(*puVar11,puVar11[2]);
                        local_1e4 = *(undefined4 *)((int)this_00 + 0x61);
                        if (cVar2 == '\x02') {
                          local_1e8 = CONCAT13(1,CONCAT12(1,(undefined2)local_1e8));
                        }
                        else {
                          local_1e8 = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_1e8)) & 0xff02ffff;
                        }
                        pcVar15 = local_22c;
                        puVar20 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar9 = 0x27; iVar9 != 0; iVar9 = iVar9 + -1) {
                          *puVar20 = *(undefined4 *)pcVar15;
                          pcVar15 = pcVar15 + 4;
                          puVar20 = puVar20 + 1;
                        }
                        if ((byte)local_1e8 < 8) {
                          iVar25 = 0;
                          iVar9 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar25 + iVar9] == '\0') {
                              (&DAT_00808800)[iVar25 + iVar9] = DAT_00808aaf;
                              break;
                            }
                            iVar25 = iVar25 + 1;
                          } while (iVar25 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    iVar9 = this_00[0x7e1];
                    local_18 = local_18 + 1;
                    bVar23 = local_18 < *(char **)(iVar9 + 0xc);
                  } while ((int)local_18 < (int)*(char **)(iVar9 + 0xc));
                }
                thunk_FUN_005d4850();
                FUN_006b6500((int)DAT_00811764,1);
                FUN_00715360(DAT_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
                FUN_006b6500((int)DAT_00811764,DAT_0080733c);
              }
              else {
                FUN_006b6500((int)DAT_00811764,1);
                puVar20 = (undefined4 *)local_70;
                for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar20 = 0;
                  puVar20 = puVar20 + 1;
                }
                *(undefined2 *)puVar20 = 0;
                local_64 = DAT_0080733b;
                local_70._3_4_ = DAT_008087be;
                local_70._0_2_ = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                local_63 = DAT_00807361;
                local_62 = DAT_00808754;
                local_56 = *(undefined4 *)((int)this_00 + 0x2121);
                local_70[2] = 2;
                local_5a = DAT_00808aab;
                switch(*(undefined1 *)((int)this_00 + 0x1e26)) {
                case 4:
                  local_65 = 2;
                  break;
                case 5:
                  local_65 = 3;
                  break;
                case 7:
                  local_65 = 1;
                  break;
                case 0xc:
                  local_65 = 5;
                  break;
                case 0x13:
                  if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
                    local_65 = 4;
                  }
                }
                FUN_00715360(DAT_00811764,0,'-',local_70,0x26,1,0xffffffff);
                FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                *(undefined4 *)((int)this_00 + 0x2233) = *(undefined4 *)((int)this_00 + 0x61);
                *(undefined1 *)((int)this_00 + 0x222e) = 1;
                puVar10 = FUN_006ae290((uint *)0x0,0x28,4,10);
                *(uint **)((int)this_00 + 0x222f) = puVar10;
                if (DAT_0080c4fe != (uint *)0x0) {
                  FUN_006ae110((byte *)DAT_0080c4fe);
                }
                DAT_0080c4fe = FUN_006ae290((uint *)0x0,0x28,4,10);
                puVar20 = &DAT_00808ab0;
                for (iVar9 = 0x3a8; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar20 = 0;
                  puVar20 = puVar20 + 1;
                }
                DAT_00808aaf = 0;
                iVar9 = this_00[0x7e1];
                local_18 = (char *)0x0;
                if (0 < *(int *)(iVar9 + 0xc)) {
                  bVar23 = *(int *)(iVar9 + 0xc) != 0;
                  do {
                    if (bVar23) {
                      puVar11 = (undefined1 *)
                                (*(int *)(iVar9 + 8) * (int)local_18 + *(int *)(iVar9 + 0x1c));
                    }
                    else {
                      puVar11 = (undefined1 *)0x0;
                    }
                    local_c = puVar11;
                    if (puVar11 != (undefined1 *)0x0) {
                      if (((puVar11[4] == '\x02') || (puVar11[4] == '\x03')) &&
                         (DAT_0080877f != *(int *)(puVar11 + 6))) {
                        FUN_006ae1c0(*(uint **)((int)this_00 + 0x222f),(undefined4 *)(puVar11 + 6));
                        FUN_006ae1c0(DAT_0080c4fe,(undefined4 *)(puVar11 + 6));
                      }
                      cVar2 = puVar11[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        uVar17 = 0xffffffff;
                        local_10 = local_190;
                        pcVar15 = local_c + 10;
                        do {
                          pcVar21 = pcVar15;
                          if (uVar17 == 0) break;
                          uVar17 = uVar17 - 1;
                          pcVar21 = pcVar15 + 1;
                          cVar1 = *pcVar15;
                          pcVar15 = pcVar21;
                        } while (cVar1 != '\0');
                        uVar17 = ~uVar17;
                        pcVar15 = pcVar21 + -uVar17;
                        pcVar21 = local_190;
                        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
                          pcVar15 = pcVar15 + 4;
                          pcVar21 = pcVar21 + 4;
                        }
                        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                          *pcVar21 = *pcVar15;
                          pcVar15 = pcVar15 + 1;
                          pcVar21 = pcVar21 + 1;
                        }
                        if (cVar2 == '\x04') {
                          iVar9 = *(int *)(local_c + 0x50);
                          if ((uint)(byte)local_c[5] < *(uint *)(iVar9 + 0xc)) {
                            pcVar15 = (char *)(*(int *)(iVar9 + 8) * (uint)(byte)local_c[5] +
                                              *(int *)(iVar9 + 0x1c));
                          }
                          else {
                            pcVar15 = (char *)0x0;
                          }
                          if (pcVar15 != (char *)0x0) {
                            uVar17 = 0xffffffff;
                            do {
                              pcVar21 = pcVar15;
                              if (uVar17 == 0) break;
                              uVar17 = uVar17 - 1;
                              pcVar21 = pcVar15 + 1;
                              cVar1 = *pcVar15;
                              pcVar15 = pcVar21;
                            } while (cVar1 != '\0');
                            uVar17 = ~uVar17;
                            pcVar21 = pcVar21 + -uVar17;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar17 = 0xffffffff;
                          pcVar15 = local_c + 10;
                          do {
                            pcVar21 = pcVar15;
                            if (uVar17 == 0) break;
                            uVar17 = uVar17 - 1;
                            pcVar21 = pcVar15 + 1;
                            cVar1 = *pcVar15;
                            pcVar15 = pcVar21;
                          } while (cVar1 != '\0');
                          uVar17 = ~uVar17;
                          pcVar21 = pcVar21 + -uVar17;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar15 = local_190;
                          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar21;
                            pcVar21 = pcVar21 + 4;
                            pcVar15 = pcVar15 + 4;
                          }
                          for (uVar17 = uVar17 & 3; local_10 = local_190, uVar17 != 0;
                              uVar17 = uVar17 - 1) {
                            *pcVar15 = *pcVar21;
                            pcVar21 = pcVar21 + 1;
                            pcVar15 = pcVar15 + 1;
                          }
                        }
                        local_150 = *(undefined4 *)(local_c + 6);
                        local_14c._0_2_ = CONCAT11(*local_c,local_c[2]);
                        local_148 = *(undefined4 *)((int)this_00 + 0x61);
                        if (cVar2 == '\x02') {
                          local_14c = CONCAT13(1,CONCAT12(1,(undefined2)local_14c));
                        }
                        else {
                          local_14c = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_14c)) & 0xff02ffff;
                        }
                        pcVar15 = local_190;
                        puVar20 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar9 = 0x27; iVar9 != 0; iVar9 = iVar9 + -1) {
                          *puVar20 = *(undefined4 *)pcVar15;
                          pcVar15 = pcVar15 + 4;
                          puVar20 = puVar20 + 1;
                        }
                        if ((byte)local_14c < 8) {
                          iVar25 = 0;
                          iVar9 = (local_14c & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar25 + iVar9] == '\0') {
                              (&DAT_00808800)[iVar25 + iVar9] = DAT_00808aaf;
                              break;
                            }
                            iVar25 = iVar25 + 1;
                          } while (iVar25 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    iVar9 = this_00[0x7e1];
                    local_18 = local_18 + 1;
                    bVar23 = local_18 < *(char **)(iVar9 + 0xc);
                  } while ((int)local_18 < (int)*(char **)(iVar9 + 0xc));
                }
                if (*(int *)(*(int *)((int)this_00 + 0x222f) + 0xc) == 0) {
                  *(undefined1 *)((int)this_00 + 0x222e) = 0;
                  thunk_FUN_005d4850();
                  if (DAT_008067a0 != '\0') {
                    CFsgsConnection::UpdateGame
                              ((CFsgsConnection *)&DAT_00802a90,6,(char *)((int)this_00 + 0x1a5f));
                    CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
                  }
                }
              }
              if ((*(char *)((int)this_00 + 0x1e26) == '\f') ||
                 (*(char *)((int)this_00 + 0x1e26) == '\x10')) {
                DAT_0080879c = 1;
                _DAT_0080f32e = 1;
              }
            }
          }
          else {
            if (0 < *(int *)(iVar9 + 0xc)) {
              bVar22 = *(int *)(iVar9 + 0xc) != 0;
              do {
                if (bVar22) {
                  iVar25 = *(int *)(iVar9 + 8) * uVar17 + *(int *)(iVar9 + 0x1c);
                }
                else {
                  iVar25 = 0;
                }
                if ((iVar25 != 0) &&
                   (((*(char *)(iVar25 + 4) == '\x02' || (*(char *)(iVar25 + 4) == '\x03')) &&
                    (*(char *)(iVar25 + 0x4f) == '\0')))) {
                  bVar23 = true;
                  break;
                }
                uVar17 = uVar17 + 1;
                bVar22 = uVar17 < *(uint *)(iVar9 + 0xc);
              } while ((int)uVar17 < (int)*(uint *)(iVar9 + 0xc));
            }
            if (bVar23) {
              pvVar4 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
              if (pvVar4 != (void *)0x0) {
                thunk_FUN_005b7ef0(pvVar4,0x2527,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
            else {
              uVar17 = 0;
              if (0 < *(int *)(iVar9 + 0xc)) {
                bVar23 = *(int *)(iVar9 + 0xc) != 0;
                do {
                  if (bVar23) {
                    pcVar15 = (char *)(*(int *)(iVar9 + 8) * uVar17 + *(int *)(iVar9 + 0x1c));
                  }
                  else {
                    pcVar15 = (char *)0x0;
                  }
                  if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
                    cVar2 = pcVar15[4];
                    if (*(char *)((int)this_00 + 0x1e26) == '\f') {
                      if ((cVar2 == '\0') || (cVar2 == '\x01')) {
                        local_11 = 0;
                        break;
                      }
                    }
                    else if ((cVar2 == '\0') || (cVar2 == '\x01')) goto LAB_005d1b17;
                    local_11 = local_11 + 1;
                  }
LAB_005d1b17:
                  uVar17 = uVar17 + 1;
                  bVar23 = uVar17 < *(uint *)(iVar9 + 0xc);
                } while ((int)uVar17 < (int)*(uint *)(iVar9 + 0xc));
              }
              if (1 < local_11) goto LAB_005d1b5a;
              pvVar4 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
              if (pvVar4 != (void *)0x0) {
                thunk_FUN_005b7ef0(pvVar4,0x2528,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
        }
      }
      else if (uVar18 == 0x654c) {
        if (DAT_0080877e != '\0') {
          thunk_FUN_005d0150(this_00);
          thunk_FUN_005d1380((int)this_00);
          (**(code **)(*this_00 + 0x2c))();
          thunk_FUN_005c87c0();
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (uVar18 == 0x654d) goto switchD_005d1877_caseD_6548;
    }
    else if (uVar18 == 0xc0a2) {
      iVar9 = thunk_FUN_005ddb40(*(int *)((int)this_00 + 0x1a5b));
      if (iVar9 == 0) {
        if (DAT_008067a0 != '\0') {
          iVar9 = *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x686);
          if (*(int *)(iVar9 + 8) < 1) {
            pcVar15 = (char *)0x0;
          }
          else {
            pcVar15 = (char *)**(undefined4 **)(iVar9 + 0x14);
          }
          bVar23 = thunk_FUN_005717e0(pcVar15);
          if (CONCAT31(extraout_var,bVar23) != 0) {
            iVar9 = *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x686);
            if (*(int *)(iVar9 + 8) < 1) {
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
            }
            else {
              CFsgsConnection::SendChatMessage
                        ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar9 + 0x14));
            }
            goto LAB_005d28da;
          }
        }
        pcVar15 = local_680;
        for (iVar9 = 0x114; iVar9 != 0; iVar9 = iVar9 + -1) {
          pcVar15[0] = '\0';
          pcVar15[1] = '\0';
          pcVar15[2] = '\0';
          pcVar15[3] = '\0';
          pcVar15 = pcVar15 + 4;
        }
        *pcVar15 = '\0';
        pcVar15 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar15 = (char *)&DAT_00807ddd;
        }
        uVar17 = 0xffffffff;
        do {
          pcVar21 = pcVar15;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        iVar9 = *(int *)((int)this_00 + 0x1a5b);
        pcVar15 = pcVar21 + -uVar17;
        pcVar21 = local_680;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar21 = pcVar21 + 1;
        }
        iVar9 = *(int *)(iVar9 + 0x686);
        if (*(int *)(iVar9 + 8) < 1) {
          pcVar15 = (char *)0x0;
        }
        else {
          pcVar15 = (char *)**(undefined4 **)(iVar9 + 0x14);
        }
        uVar17 = 0xffffffff;
        do {
          pcVar21 = pcVar15;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        pcVar15 = pcVar21 + -uVar17;
        pcVar21 = local_640;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar21 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar21 = pcVar21 + 1;
        }
        local_10 = local_640;
        thunk_FUN_005dd850((int)local_680);
        if ((char)this_00[0x882] == '\0') {
          iVar9 = this_00[0x7e1];
          if (iVar9 != 0) {
            uVar17 = *(uint *)(iVar9 + 0xc);
            uVar18 = 0;
            if (uVar17 != 0) {
              if (uVar17 == 0) {
                iVar25 = 0;
                goto LAB_005d277a;
              }
              do {
                iVar25 = *(int *)(iVar9 + 8) * uVar18 + *(int *)(iVar9 + 0x1c);
LAB_005d277a:
                if ((iVar25 != 0) &&
                   (((*(char *)(iVar25 + 4) == '\x02' || (*(char *)(iVar25 + 4) == '\x03')) &&
                    (*(int *)(iVar25 + 6) == DAT_0080877f)))) {
                  local_5 = *(char *)(iVar25 + 0x4a);
                  break;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar17);
            }
            local_c = (undefined1 *)0x0;
            if (uVar17 != 0) {
              if (uVar17 == 0) {
                iVar9 = 0;
                goto LAB_005d27c3;
              }
              do {
                iVar9 = *(int *)(iVar9 + 8) * (int)local_c + *(int *)(iVar9 + 0x1c);
LAB_005d27c3:
                if (((iVar9 != 0) &&
                    ((*(char *)(iVar9 + 4) == '\x02' || (*(char *)(iVar9 + 4) == '\x03')))) &&
                   (*(int *)(iVar9 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) && (bVar13 = *(byte *)(iVar9 + 2), bVar13 != 0xff))
                       && (DAT_0080874d != bVar13)) {
                      local_10 = (char *)CONCAT31(local_10._1_3_,bVar13);
                      uVar18 = (uint)DAT_0080874d;
                      uVar17 = (uint)bVar13;
                      cVar2 = *(char *)((int)&DAT_00808a4f + uVar18 * 8 + uVar17);
                      if ((cVar2 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar18) == '\0')) {
                        iVar25 = -2;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar18) == '\0')) {
                        iVar25 = -1;
                      }
                      else if ((cVar2 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar18) == '\x01')) {
                        iVar25 = 1;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar18) == '\x01')) {
                        iVar25 = 2;
                      }
                      else {
                        iVar25 = 0;
                      }
                      if (iVar25 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (*(char *)(iVar9 + 0x4a) == local_5) {
LAB_005d28a0:
                    FUN_00715360(DAT_00811764,*(int *)(iVar9 + 6),'\x1b',local_680,0x451,1,
                                 0xffffffff);
                  }
                }
                iVar9 = this_00[0x7e1];
                local_c = local_c + 1;
              } while (local_c < *(undefined1 **)(iVar9 + 0xc));
            }
          }
        }
        else {
          FUN_00715360(DAT_00811764,0,'\x1b',local_680,0x451,1,0xffffffff);
        }
      }
LAB_005d28da:
      FUN_006b6020(*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x686),0,&DAT_008016a0);
      *(undefined4 *)((int)this_00 + 0x2d) = 0x33;
      *(undefined4 *)((int)this_00 + 0x31) =
           *(undefined4 *)(*(int *)((int)this_00 + 0x1a5b) + 0x686);
      FUN_006e6080(this_00,2,*(undefined4 *)(*(int *)((int)this_00 + 0x1a5b) + 0x54c),
                   (undefined4 *)((int)this_00 + 0x1d));
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (uVar18 < 0x654a) {
    switch(uVar18) {
    case 0x6505:
      uVar17 = *(uint *)(param_1 + 0x14);
      if ((uVar17 != 0xffffffff) && (this_00[0x7e1] != 0)) {
        iVar9 = *(int *)((int)this_00 + 0x1e2f);
        if (uVar17 < *(uint *)(iVar9 + 0xc)) {
          iVar9 = *(int *)(iVar9 + 8) * uVar17 + *(int *)(iVar9 + 0x1c);
        }
        else {
          iVar9 = 0;
        }
        if (DAT_0080877e == '\0') {
          thunk_FUN_005cd9a0(*(undefined4 *)(param_1 + 0x18),3,*(undefined4 *)(iVar9 + 0x104),
                             *(undefined4 *)(iVar9 + 0x108));
          *(undefined1 *)(this_00 + 0x891) = 0;
        }
        else {
          pcVar15 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar15 = (char *)&DAT_00807ddd;
          }
          thunk_FUN_005d0ed0(this_00,DAT_0080877f,*(uint *)(param_1 + 0x18),*(int *)(iVar9 + 0x104),
                             (char)*(undefined4 *)(iVar9 + 0x108),pcVar15);
          thunk_FUN_005cdf60(0);
        }
      }
      break;
    case 0x6506:
      uVar17 = *(uint *)(param_1 + 0x18);
      if (uVar17 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          *(int *)((int)this_00 + 0x2121) = *(int *)((int)this_00 + 0x2121) + 1;
          thunk_FUN_005cfe50(0);
          thunk_FUN_005cdf60(0);
        }
      }
      else if (((2 < uVar17) && (uVar17 < 9)) && (DAT_0080877e != '\0')) {
        DAT_00808aab = DAT_00808aab + 1;
        thunk_FUN_005cfe50(0);
      }
      break;
    case 0x6548:
      goto switchD_005d1877_caseD_6548;
    case 0x6549:
switchD_005d1877_caseD_6549:
      if (DAT_0080877e != '\0') {
        *(int *)((int)this_00 + 0x2121) = *(int *)((int)this_00 + 0x2121) + 1;
        thunk_FUN_005cdf60(0);
        goto switchD_005d1877_caseD_6548;
      }
    }
  }
  else {
switchD_005d1877_caseD_6548:
    if (DAT_0080877e != '\0') {
      DAT_00808aab = DAT_00808aab + 1;
      thunk_FUN_005cfe50(0);
    }
  }
switchD_005d1877_caseD_6507:
  uVar17 = *(uint *)(param_1 + 0x10);
  if (((0x69fe < uVar17) && (uVar17 < 0x6a7f)) && (*(char *)((int)this_00 + 0x65) == '\x01')) {
    iVar9 = this_00[0x7e1];
    local_2c = uVar17 - 0x69ff >> 3;
    if ((iVar9 == 0) || (*(uint *)(iVar9 + 0xc) <= local_2c + this_00[0x7e2])) {
      pcVar15 = (char *)0x0;
    }
    else {
      pcVar15 = (char *)(*(int *)(iVar9 + 8) * (local_2c + this_00[0x7e2]) + *(int *)(iVar9 + 0x1c))
      ;
    }
    local_18 = pcVar15;
    if (pcVar15 != (char *)0x0) {
      switch(uVar17 + 1 & 7) {
      case 0:
        if ((pcVar15[4] == '\x02') && (*(int *)(pcVar15 + 6) == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar18 = 0;
            uVar17 = 0;
            iVar9 = this_00[0x7e2] + local_2c;
            uVar8 = 0;
            goto LAB_005d34ee;
          }
          thunk_FUN_005d0a20(this_00,this_00[0x7e2] + local_2c);
          thunk_FUN_005cdf60(0);
        }
        break;
      case 1:
        if (*pcVar15 != '\0') {
          uVar17 = *(uint *)(iVar9 + 0xc);
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar18 = 0;
          if (0 < (int)uVar17) {
            bVar23 = uVar17 != 0;
            do {
              if (bVar23) {
                pcVar21 = (char *)(*(int *)(this_00[0x7e1] + 8) * uVar18 +
                                  *(int *)(this_00[0x7e1] + 0x1c));
              }
              else {
                pcVar21 = (char *)0x0;
              }
              if ((*pcVar21 != '\0') && (pcVar21[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar21[2]) = 0;
              }
              uVar18 = uVar18 + 1;
              bVar23 = uVar18 < uVar17;
            } while ((int)uVar18 < (int)uVar17);
          }
          if (pcVar15[2] != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar15[2]) = 1;
          }
          uVar17 = 0;
          *(undefined4 *)((int)this_00 + 0x2171) = 0x6502;
          *(uint *)((int)this_00 + 0x2179) = this_00[0x7e2] + local_2c;
          *(undefined4 *)((int)this_00 + 0x2191) = 0x6503;
          *(undefined4 *)((int)this_00 + 0x21a1) = 0;
          *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc) = 0;
          *(undefined4 *)((int)this_00 + 0x1f37) = 0xff;
          FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
          local_c = (undefined1 *)CONCAT31(local_c._1_3_,1);
          do {
            if (*(char *)((int)&local_44 + uVar17) != '\0') {
              *(uint *)((int)this_00 + 0x1f37) = uVar17;
              FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
              if ((byte)pcVar15[2] == uVar17) {
                *(uint *)((int)this_00 + 0x21a1) = (uint)local_c & 0xff;
              }
              local_c = (undefined1 *)CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
            }
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < 8);
          uVar8 = *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc);
          *(undefined4 *)((int)this_00 + 0x21c5) = 0x124;
          *(undefined4 *)((int)this_00 + 0x21a9) = uVar8;
          *(undefined4 *)((int)this_00 + 0x21cd) = 0x1e;
          *(undefined4 *)((int)this_00 + 0x21a5) = 0x12;
          *(uint *)((int)this_00 + 0x21c9) = local_2c * 0x19 + 0x41;
LAB_005d3188:
          (**(code **)(*(int *)this_00[3] + 8))(0x100ef,0,0,(int)this_00 + 0x2161,0);
        }
        break;
      case 2:
        if (*pcVar15 != '\0') {
          *(undefined4 *)((int)this_00 + 0x2171) = 0x6504;
          *(uint *)((int)this_00 + 0x2179) = this_00[0x7e2] + local_2c;
          *(undefined4 *)((int)this_00 + 0x2191) = 0x6500;
          *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc) = 0;
          local_10 = (char *)0x1;
          pcVar15 = (char *)FUN_006b0140(0x23f1,DAT_00807618);
          uVar17 = 0xffffffff;
          do {
            pcVar21 = pcVar15;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar21 = pcVar15 + 1;
            cVar2 = *pcVar15;
            pcVar15 = pcVar21;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          puVar10 = (uint *)(pcVar21 + -uVar17);
          puVar24 = (uint *)((int)this_00 + 0x1e33);
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *puVar24 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar24 = puVar24 + 1;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(char *)puVar24 = (char)*puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
            puVar24 = (uint *)((int)puVar24 + 1);
          }
          for (puVar10 = FUN_0072e560((uint *)((int)this_00 + 0x1e33),'\n'); puVar10 != (uint *)0x0;
              puVar10 = FUN_0072e560(puVar10,'\n')) {
            *(undefined1 *)puVar10 = 0x20;
          }
          *(undefined4 *)((int)this_00 + 0x1f37) = 1;
          FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
          pcVar15 = (char *)FUN_006b0140(0x23f0,DAT_00807618);
          uVar17 = 0xffffffff;
          do {
            pcVar21 = pcVar15;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar21 = pcVar15 + 1;
            cVar2 = *pcVar15;
            pcVar15 = pcVar21;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          puVar10 = (uint *)(pcVar21 + -uVar17);
          puVar24 = (uint *)((int)this_00 + 0x1e33);
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *puVar24 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar24 = puVar24 + 1;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(char *)puVar24 = (char)*puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
            puVar24 = (uint *)((int)puVar24 + 1);
          }
          for (puVar10 = FUN_0072e560((uint *)((int)this_00 + 0x1e33),'\n'); puVar10 != (uint *)0x0;
              puVar10 = FUN_0072e560(puVar10,'\n')) {
            *(undefined1 *)puVar10 = 0x20;
          }
          *(undefined4 *)((int)this_00 + 0x1f37) = 2;
          FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
          pcVar15 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar15 = (char *)(uint)(local_18[4] != '\x02');
          }
          if (pcVar15 != (char *)0x0) {
            pcVar15 = (char *)FUN_006b0140(0x23f2,DAT_00807618);
            uVar17 = 0xffffffff;
            do {
              pcVar21 = pcVar15;
              if (uVar17 == 0) break;
              uVar17 = uVar17 - 1;
              pcVar21 = pcVar15 + 1;
              cVar2 = *pcVar15;
              pcVar15 = pcVar21;
            } while (cVar2 != '\0');
            uVar17 = ~uVar17;
            puVar10 = (uint *)(pcVar21 + -uVar17);
            puVar24 = (uint *)((int)this_00 + 0x1e33);
            for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *puVar24 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar24 = puVar24 + 1;
            }
            for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(char *)puVar24 = (char)*puVar10;
              puVar10 = (uint *)((int)puVar10 + 1);
              puVar24 = (uint *)((int)puVar24 + 1);
            }
            for (puVar10 = FUN_0072e560((uint *)((int)this_00 + 0x1e33),'\n');
                puVar10 != (uint *)0x0; puVar10 = FUN_0072e560(puVar10,'\n')) {
              *(undefined1 *)puVar10 = 0x20;
            }
            *(undefined4 *)((int)this_00 + 0x1f37) = 3;
            FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
          }
          *(undefined4 *)((int)this_00 + 0x21a9) =
               *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc);
          bVar13 = local_18[3];
          *(undefined4 *)((int)this_00 + 0x21c5) = 0x143;
          *(undefined4 *)((int)this_00 + 0x21cd) = 0x78;
          *(uint *)((int)this_00 + 0x21a1) = bVar13 - 1;
          *(uint *)((int)this_00 + 0x21c9) = local_2c * 0x19 + 0x41;
          iVar9 = *(int *)(DAT_0081176c + 0x34);
          if (*(int *)(iVar9 + 0xa0) != 0) {
            FUN_00710790(iVar9);
          }
          *(undefined4 *)((int)this_00 + 0x21a5) = *(undefined4 *)(iVar9 + 0x8a);
          goto LAB_005d3188;
        }
        break;
      case 3:
        *(undefined4 *)((int)this_00 + 0x2171) = 0x6505;
        *(uint *)((int)this_00 + 0x2179) = local_2c + this_00[0x7e2];
        *(undefined4 *)((int)this_00 + 0x2191) = 0x6500;
        *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc) = 0;
        puVar20 = (undefined4 *)((int)this_00 + 0x1e33);
        for (iVar9 = 0x43; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar20 = 0;
          puVar20 = puVar20 + 1;
        }
        if (*pcVar15 == '\0') {
          uVar17 = local_2c + this_00[0x7e2];
          local_5 = '\0';
          if (-1 < (int)uVar17) {
            iVar9 = this_00[0x7e1];
            do {
              if (uVar17 < *(uint *)(iVar9 + 0xc)) {
                pcVar15 = (char *)(*(int *)(iVar9 + 8) * uVar17 + *(int *)(iVar9 + 0x1c));
              }
              else {
                pcVar15 = (char *)0x0;
              }
              if (*pcVar15 != '\0') {
                if ((pcVar15[4] == '\x02') && (*(int *)(pcVar15 + 6) != DAT_0080877f)) {
                  local_5 = '\x01';
                }
                break;
              }
              uVar17 = uVar17 - 1;
            } while (-1 < (int)uVar17);
          }
          if (local_5 != '\0') {
            pcVar15 = (char *)FUN_006b0140(0x1f42,DAT_00807618);
            uVar17 = 0xffffffff;
            do {
              pcVar21 = pcVar15;
              if (uVar17 == 0) break;
              uVar17 = uVar17 - 1;
              pcVar21 = pcVar15 + 1;
              cVar2 = *pcVar15;
              pcVar15 = pcVar21;
            } while (cVar2 != '\0');
            uVar17 = ~uVar17;
            pcVar15 = pcVar21 + -uVar17;
            pcVar21 = (char *)((int)this_00 + 0x1e33);
            for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar21 = pcVar21 + 4;
            }
            for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *pcVar21 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar21 = pcVar21 + 1;
            }
            *(undefined4 *)((int)this_00 + 0x1f37) = 2;
            FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
            if (DAT_00808aaa != '\0') {
              pcVar15 = (char *)FUN_006b0140(0x1f46,DAT_00807618);
              uVar17 = 0xffffffff;
              do {
                pcVar21 = pcVar15;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                pcVar21 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar21;
              } while (cVar2 != '\0');
              uVar17 = ~uVar17;
              pcVar15 = pcVar21 + -uVar17;
              pcVar21 = (char *)((int)this_00 + 0x1e33);
              for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                *pcVar21 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar21 = pcVar21 + 1;
              }
              *(undefined4 *)((int)this_00 + 0x1f37) = 3;
              FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
            }
          }
          pcVar15 = (char *)FUN_006b0140(0x1f41,DAT_00807618);
          uVar17 = 0xffffffff;
          do {
            pcVar21 = pcVar15;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar21 = pcVar15 + 1;
            cVar2 = *pcVar15;
            pcVar15 = pcVar21;
          } while (cVar2 != '\0');
          uVar17 = ~uVar17;
          pcVar15 = pcVar21 + -uVar17;
          pcVar21 = (char *)((int)this_00 + 0x1e33);
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar21 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar21 = pcVar21 + 1;
          }
          *(undefined4 *)((int)this_00 + 0x1f37) = 1;
          FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
        }
        else {
          if ((*(char *)((int)this_00 + 0x1e26) != '\x05') || (pcVar15[4] != '\x04')) {
            if ((DAT_0080877e != '\0') && (*(char *)((int)this_00 + 0x1e26) != '\x05')) {
              pcVar15 = (char *)FUN_006b0140(8000,DAT_00807618);
              uVar17 = 0xffffffff;
              do {
                pcVar21 = pcVar15;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                pcVar21 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar21;
              } while (cVar2 != '\0');
              uVar17 = ~uVar17;
              pcVar15 = pcVar21 + -uVar17;
              pcVar21 = (char *)((int)this_00 + 0x1e33);
              for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                *pcVar21 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar21 = pcVar21 + 1;
              }
              *(undefined4 *)((int)this_00 + 0x1f37) = 0;
              FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
            }
            bVar23 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar23 = local_18[3] != '\x03';
            }
            if (bVar23) {
              pcVar15 = (char *)FUN_006b0140(0x1f42,DAT_00807618);
              uVar17 = 0xffffffff;
              do {
                pcVar21 = pcVar15;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                pcVar21 = pcVar15 + 1;
                cVar2 = *pcVar15;
                pcVar15 = pcVar21;
              } while (cVar2 != '\0');
              uVar17 = ~uVar17;
              pcVar15 = pcVar21 + -uVar17;
              pcVar21 = (char *)((int)this_00 + 0x1e33);
              for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                *pcVar21 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar21 = pcVar21 + 1;
              }
              *(undefined4 *)((int)this_00 + 0x1f37) = 2;
              FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
            }
            pcVar15 = (char *)FUN_006b0140(0x1f41,DAT_00807618);
            uVar17 = 0xffffffff;
            do {
              pcVar21 = pcVar15;
              if (uVar17 == 0) break;
              uVar17 = uVar17 - 1;
              pcVar21 = pcVar15 + 1;
              cVar2 = *pcVar15;
              pcVar15 = pcVar21;
            } while (cVar2 != '\0');
            uVar17 = ~uVar17;
            pcVar15 = pcVar21 + -uVar17;
            pcVar21 = (char *)((int)this_00 + 0x1e33);
            for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar21 = pcVar21 + 4;
            }
            for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *pcVar21 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar21 = pcVar21 + 1;
            }
            *(undefined4 *)((int)this_00 + 0x1f37) = 1;
            FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
          }
          if ((DAT_0080877e != '\0') && (*(char *)((int)this_00 + 0x1e26) != '\x05')) {
            local_c = (undefined1 *)0x0;
            iVar9 = *(int *)(local_18 + 0x50);
            puVar11 = *(undefined1 **)(iVar9 + 0xc);
            if (0 < (int)puVar11) {
              do {
                if (local_c < puVar11) {
                  iVar9 = *(int *)(iVar9 + 8) * (int)local_c + *(int *)(iVar9 + 0x1c);
                }
                else {
                  iVar9 = 0;
                }
                uVar17 = 0xffffffff;
                pcVar15 = (char *)(iVar9 + 0x40);
                do {
                  pcVar21 = pcVar15;
                  if (uVar17 == 0) break;
                  uVar17 = uVar17 - 1;
                  pcVar21 = pcVar15 + 1;
                  cVar2 = *pcVar15;
                  pcVar15 = pcVar21;
                } while (cVar2 != '\0');
                uVar17 = ~uVar17;
                pcVar15 = pcVar21 + -uVar17;
                pcVar21 = (char *)((int)this_00 + 0x1e33);
                for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *pcVar21 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar21 = pcVar21 + 1;
                }
                *(undefined4 *)((int)this_00 + 0x1f37) = 4;
                *(undefined1 **)((int)this_00 + 0x1f3b) = local_c;
                FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33)
                            );
                local_c = local_c + 1;
                iVar9 = *(int *)(local_18 + 0x50);
                puVar11 = *(undefined1 **)(iVar9 + 0xc);
              } while ((int)local_c < (int)puVar11);
            }
          }
        }
        iVar9 = *(int *)((int)this_00 + 0x1e2f);
        uVar17 = 0;
        *(undefined4 *)((int)this_00 + 0x21a1) = 0;
        if (0 < *(int *)(iVar9 + 0xc)) {
          bVar23 = *(int *)(iVar9 + 0xc) != 0;
          local_10 = (char *)(uint)(byte)local_18[4];
          do {
            if (bVar23) {
              iVar25 = *(int *)(iVar9 + 8) * uVar17 + *(int *)(iVar9 + 0x1c);
            }
            else {
              iVar25 = 0;
            }
            if ((*(char **)(iVar25 + 0x104) == local_10) &&
               (*(uint *)(iVar25 + 0x108) == (uint)(byte)local_18[5])) {
              *(uint *)((int)this_00 + 0x21a1) = uVar17;
              break;
            }
            uVar17 = uVar17 + 1;
            bVar23 = uVar17 < *(uint *)(iVar9 + 0xc);
          } while ((int)uVar17 < (int)*(uint *)(iVar9 + 0xc));
        }
        uVar8 = *(undefined4 *)(iVar9 + 0xc);
        *(undefined4 *)((int)this_00 + 0x21c5) = 0x15d;
        *(undefined4 *)((int)this_00 + 0x21a9) = uVar8;
        *(undefined4 *)((int)this_00 + 0x21cd) = 0x5f;
        *(uint *)((int)this_00 + 0x21c9) = local_2c * 0x19 + 0x41;
        iVar9 = *(int *)(DAT_0081176c + 0x34);
        if (*(int *)(iVar9 + 0xa0) != 0) {
          FUN_00710790(iVar9);
        }
        *(undefined4 *)((int)this_00 + 0x21a5) = *(undefined4 *)(iVar9 + 0x8a);
        if (0 < *(int *)((int)this_00 + 0x21a9)) goto LAB_005d3188;
        break;
      case 5:
        if (*pcVar15 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar18 = (uint)DAT_0080874d;
              uVar17 = 0;
              iVar9 = this_00[0x7e2] + local_2c;
              uVar8 = 5;
              goto LAB_005d34ee;
            }
            thunk_FUN_005d0bb0(this_00,this_00[0x7e2] + local_2c,0,(uint)DAT_0080874d);
            thunk_FUN_005cfe50(0);
          }
          else {
            uVar17 = *(uint *)(iVar9 + 0xc);
            uVar18 = 0;
            local_3c = 0;
            local_c = (undefined1 *)CONCAT31(local_c._1_3_,0xff);
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar17;
            if (0 < (int)uVar17) {
              bVar23 = uVar17 != 0;
              do {
                if (bVar23) {
                  iVar9 = *(int *)(this_00[0x7e1] + 8) * uVar18 + *(int *)(this_00[0x7e1] + 0x1c);
                }
                else {
                  iVar9 = 0;
                }
                if ((iVar9 != 0) && (*(byte *)(iVar9 + 0x4a) < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)*(byte *)(iVar9 + 0x4a)) = 1;
                }
                uVar18 = uVar18 + 1;
                bVar23 = uVar18 < uVar17;
              } while ((int)uVar18 < (int)uVar17);
            }
            uVar18 = local_2c;
            bVar13 = 0;
            iVar9 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar9) != '\0') {
                bVar13 = bVar13 + 1;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < 8);
            bVar3 = *(byte *)(this_00 + 0x847);
joined_r0x005d3229:
            if (bVar13 < bVar3) {
              iVar9 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar9) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar9) = 1;
                  bVar13 = bVar13 + 1;
                  break;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < 8);
              goto joined_r0x005d3229;
            }
            uVar16 = 0;
            if (0 < (int)uVar17) {
              do {
                puVar11 = local_30;
                if (uVar16 < local_30) {
                  pcVar15 = (char *)(*(int *)(this_00[0x7e1] + 8) * uVar16 +
                                    *(int *)(this_00[0x7e1] + 0x1c));
                }
                else {
                  pcVar15 = (char *)0x0;
                }
                if (pcVar15 != (char *)0x0) {
                  if (this_00[0x7e2] + uVar18 != uVar16) {
                    if (*pcVar15 == '\0') goto LAB_005d32d3;
                    if ((pcVar15[4] != '\0') && (pcVar15[4] != '\x01')) {
                      if (local_10 == (char *)0x0) {
                        if ((byte)local_c != pcVar15[0x4a]) {
                          local_c = (undefined1 *)CONCAT31(local_c._1_3_,0xff);
                        }
                      }
                      else {
                        local_10 = (char *)0x0;
                        local_c = (undefined1 *)CONCAT31(local_c._1_3_,pcVar15[0x4a]);
                      }
                    }
                  }
                  if ((*pcVar15 != '\0') &&
                     (((pcVar15[4] == '\0' || (pcVar15[4] == '\x01')) && ((byte)pcVar15[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar15[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar16 = uVar16 + 1;
              } while ((int)uVar16 < (int)puVar11);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar17 = 0;
            *(undefined4 *)((int)this_00 + 0x2171) = 0x6501;
            *(uint *)((int)this_00 + 0x2179) = this_00[0x7e2] + local_2c;
            *(undefined4 *)((int)this_00 + 0x2191) = 0x6500;
            *(undefined4 *)((int)this_00 + 0x21a1) = 0;
            *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc) = 0;
            local_c = (undefined1 *)((uint)local_c & 0xffffff00);
            puVar11 = &uStack_7d;
            local_30 = puVar11;
            do {
              iVar9 = uVar17 + 0x41;
              if (puVar11[uVar17 + 0x41] != '\0') {
                uVar8 = FUN_006b0140(0x1f4a,DAT_00807618);
                wsprintfA((LPSTR)((int)this_00 + 0x1e33),&DAT_007cd508,uVar8,iVar9);
                *(uint *)((int)this_00 + 0x1f37) = uVar17;
                FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33)
                            );
                if ((byte)local_18[0x4a] == uVar17) {
                  *(uint *)((int)this_00 + 0x21a1) = (uint)local_c & 0xff;
                }
                local_c = (undefined1 *)CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
                puVar11 = local_30;
              }
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < 8);
            cVar2 = *(char *)((int)this_00 + 0x1e26);
            *(undefined4 *)((int)this_00 + 0x21a9) =
                 *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc);
            if (((cVar2 == '\x06') || (cVar2 == '\x01')) || (uVar8 = 0x26b, cVar2 == '\x02')) {
              uVar8 = 0x2ab;
            }
            *(undefined4 *)((int)this_00 + 0x21c5) = uVar8;
            *(undefined4 *)((int)this_00 + 0x21cd) = 0x46;
            *(uint *)((int)this_00 + 0x21c9) = local_2c * 0x19 + 0x41;
            iVar9 = *(int *)(DAT_0081176c + 0x34);
            if (*(int *)(iVar9 + 0xa0) != 0) {
              FUN_00710790(iVar9);
            }
            *(undefined4 *)((int)this_00 + 0x21a5) = *(undefined4 *)(iVar9 + 0x8a);
            (**(code **)(*(int *)this_00[3] + 8))(0x100ef,0,0,(int)this_00 + 0x2161,0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar18 = 0;
          uVar17 = (uint)(pcVar15[0x4f] == '\0');
          iVar9 = this_00[0x7e2] + local_2c;
          uVar8 = 7;
LAB_005d34ee:
          thunk_FUN_005cd9a0(iVar9,uVar8,uVar17,uVar18);
        }
        else {
          pcVar15[0x4f] = pcVar15[0x4f] == '\0';
          *(undefined4 *)((int)this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,this_00[local_2c * 8 + 0x7ea],(undefined4 *)((int)this_00 + 0x1d));
          *(int *)((int)this_00 + 0x2121) = *(int *)((int)this_00 + 0x2121) + 1;
          thunk_FUN_005cdf60(0);
        }
      }
    }
  }
  uVar17 = *(uint *)(param_1 + 0x10);
  if (uVar17 < 0x6a7f) {
    DAT_00858df8 = local_f4;
    return 0;
  }
  if (0x6afe < uVar17) {
    DAT_00858df8 = local_f4;
    return 0;
  }
  pcVar21 = (char *)0x0;
  pcVar15 = (char *)(uVar17 - 0x6a7f >> 3);
  local_30 = (undefined1 *)(uVar17 + 1 & 7);
  piVar19 = *(int **)(param_1 + 0x18);
  local_20 = piVar19[2];
  local_1c = piVar19[3];
  iVar9 = this_00[0x7e1];
  local_28 = *piVar19 + -0x113;
  local_24 = 0;
  if ((iVar9 != 0) && ((uint)(this_00[0x7e2] + (int)pcVar15) < *(uint *)(iVar9 + 0xc))) {
    pcVar21 = (char *)(*(int *)(iVar9 + 8) * (this_00[0x7e2] + (int)pcVar15) +
                      *(int *)(iVar9 + 0x1c));
  }
  local_10 = pcVar15;
  FUN_006b4170(this_00[(int)pcVar15 + 0x83d],0,*piVar19 + -0x113,0,piVar19[2],piVar19[3],0xff);
  if (pcVar21 == (char *)0x0) goto switchD_005d35aa_default;
  switch(local_30) {
  case (undefined1 *)0x0:
    if (((*pcVar21 == '\0') || (pcVar21[4] != '\x02')) || (*(int *)(pcVar21 + 6) != DAT_0080877f))
    break;
    thunk_FUN_005b5a30(this_00[(int)pcVar15 + 0x83d],&local_28,2,
                       (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    iVar9 = 2 - (uint)(pcVar21[1] != '\0');
    goto LAB_005d3bf4;
  case (undefined1 *)0x1:
    if (*pcVar21 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      thunk_FUN_005b5a30(this_00[(int)pcVar15 + 0x83d],&local_28,0,
                         (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pcVar21[2] != -1) {
        switch(pcVar21[2]) {
        case '\0':
          uVar7 = 0xfc;
          break;
        case '\x01':
          uVar7 = 0xfa;
          break;
        case '\x02':
          uVar7 = 0xfb;
          break;
        case '\x03':
          uVar7 = 0xf9;
          break;
        case '\x04':
          uVar7 = 0xfd;
          break;
        case '\x05':
          uVar7 = 0xfe;
          break;
        case '\x06':
          uVar7 = 0xf3;
          break;
        case '\a':
          uVar7 = 7;
          break;
        default:
          uVar7 = 0xff;
        }
        FUN_006b4170(this_00[(int)pcVar15 + 0x83d],0,local_28 + 2,local_24 + 2,local_20 + -4,
                     local_1c + -4,uVar7);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*pcVar21 == '\0') break;
    thunk_FUN_005b5a30(this_00[(int)pcVar15 + 0x83d],&local_28,2,
                       (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    FUN_00710a90(this_00[(int)pcVar15 + 0x83d],0,local_28,local_24,local_20,local_1c);
    if (pcVar21[3] == '\x01') {
      pcVar15 = &DAT_007ca250;
LAB_005d3780:
      uVar17 = 0xffffffff;
      do {
        pcVar21 = pcVar15;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar21 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar21;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar15 = pcVar21 + -uVar17;
      pcVar21 = (char *)&DAT_0080f33a;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar21 = pcVar21 + 4;
      }
    }
    else {
      if (pcVar21[3] != '\x02') {
        pcVar15 = &DAT_007ca24c;
        goto LAB_005d3780;
      }
      uVar17 = 0xffffffff;
      pcVar15 = &DAT_007ca248;
      do {
        pcVar21 = pcVar15;
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        pcVar21 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar21;
      } while (cVar2 != '\0');
      uVar17 = ~uVar17;
      pcVar15 = pcVar21 + -uVar17;
      pcVar21 = (char *)&DAT_0080f33a;
      for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar21 = pcVar21 + 4;
      }
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar21 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar21 = pcVar21 + 1;
    }
    FUN_007119c0(&DAT_0080f33a,-1,-1,2);
    pcVar15 = local_10;
    break;
  case (undefined1 *)0x3:
    thunk_FUN_005b5a30(this_00[(int)pcVar15 + 0x83d],&local_28,2,
                       (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    FUN_00710a90(this_00[(int)pcVar15 + 0x83d],0,local_28,local_24,local_20,local_1c);
    uVar8 = 2;
    iVar26 = -1;
    iVar25 = -1;
    puVar24 = (uint *)&DAT_007c2310;
    iVar9 = local_20;
    puVar10 = (uint *)thunk_FUN_005cbbe0(this_00,pcVar21);
    goto LAB_005d38bd;
  case (undefined1 *)0x4:
    thunk_FUN_005b5a30(this_00[(int)pcVar15 + 0x83d],&local_28,2,0x67,0x67);
    bVar13 = pcVar21[4];
    if (bVar13 < 2) break;
    if (bVar13 < 4) {
      FUN_00710a90(this_00[(int)pcVar15 + 0x83d],0,local_28,local_24,local_20,local_1c);
      uVar8 = 2;
      iVar25 = -1;
      iVar9 = -1;
      puVar10 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),(uint *)(pcVar21 + 10),
                                   (uint *)&DAT_007c7274,local_20);
      FUN_007119c0(puVar10,iVar9,iVar25,uVar8);
      break;
    }
    if (bVar13 != 4) break;
    iVar9 = *(int *)(pcVar21 + 0x50);
    if ((uint)(byte)pcVar21[5] < *(uint *)(iVar9 + 0xc)) {
      puVar10 = (uint *)(*(int *)(iVar9 + 8) * (uint)(byte)pcVar21[5] + *(int *)(iVar9 + 0x1c));
    }
    else {
      puVar10 = (uint *)0x0;
    }
    if (puVar10 == (uint *)0x0) break;
    FUN_00710a90(this_00[(int)pcVar15 + 0x83d],0,local_28,local_24,local_20,local_1c);
    uVar8 = 2;
    iVar26 = -1;
    iVar25 = -1;
    puVar24 = (uint *)&DAT_007c7274;
    iVar9 = local_20;
LAB_005d38bd:
    puVar10 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar10,puVar24,iVar9);
    FUN_007119c0(puVar10,iVar25,iVar26,uVar8);
    break;
  case (undefined1 *)0x5:
    if ((*pcVar21 == '\0') ||
       (thunk_FUN_005b5a30(this_00[(int)pcVar15 + 0x83d],&local_28,2,
                           (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67),
       pcVar21[4] == '\0')) break;
    if (DAT_00808a8f != '\0') {
      iVar9 = (byte)pcVar21[0x4a] + 0x41;
      uVar8 = FUN_006b0140(0x1f4a,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,uVar8,iVar9);
      FUN_00710a90(this_00[(int)pcVar15 + 0x83d],0,local_28,local_24,local_20,local_1c);
      FUN_007119c0(&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar13 = pcVar21[2], bVar13 == 0xff)) ||
       (DAT_0080874d == bVar13)) break;
    local_10 = (char *)0xffffffff;
    local_30 = (undefined1 *)CONCAT31(local_30._1_3_,bVar13);
    uVar18 = (uint)DAT_0080874d;
    uVar17 = (uint)bVar13;
    cVar2 = *(char *)((int)&DAT_00808a4f + uVar18 * 8 + uVar17);
    if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar18) == '\0')) {
      uVar8 = 0xfffffffe;
    }
    else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar18) == '\0')) {
      uVar8 = 0xffffffff;
    }
    else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar18) == '\x01')) {
      uVar8 = 1;
    }
    else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar18) == '\x01')) {
      uVar8 = 2;
    }
    else {
      uVar8 = 0;
    }
    switch(uVar8) {
    default:
      iVar9 = -1;
      break;
    case 1:
      iVar9 = 1;
      break;
    case 2:
      iVar9 = 3;
      break;
    case 0xfffffffe:
      iVar9 = 0;
      break;
    case 0xffffffff:
      iVar9 = 2;
    }
    iVar9 = iVar9 + -1;
    if (iVar9 < 0) break;
    iVar25 = *(int *)((int)this_00 + 0x1f4b);
    goto LAB_005d3bfa;
  case (undefined1 *)0x6:
    thunk_FUN_005b5a30(this_00[(int)pcVar15 + 0x83d],&local_28,2,0x67,0x67);
    if (((pcVar21[4] == '\x02') || (pcVar21[4] == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)(pcVar21 + 6) != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)(pcVar21 + 6) == DAT_0080877f)))))) {
      FUN_00710a90(this_00[(int)pcVar15 + 0x83d],0,local_28,local_24,local_20,local_1c);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(pcVar21 + 0x4b));
      uVar17 = 0xffffffff;
      pcVar21 = (char *)&DAT_0080f33a;
      do {
        if (uVar17 == 0) break;
        uVar17 = uVar17 - 1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      } while (cVar2 != '\0');
      if (4 < ~uVar17 - 1) {
        uVar17 = 0xffffffff;
        pcVar15 = &DAT_007cd500;
        do {
          pcVar21 = pcVar15;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar21 = pcVar15 + 1;
          cVar2 = *pcVar15;
          pcVar15 = pcVar21;
        } while (cVar2 != '\0');
        uVar17 = ~uVar17;
        pcVar21 = pcVar21 + -uVar17;
        pcVar14 = (char *)&DAT_0080f33a;
        for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar17 = uVar17 & 3; pcVar15 = local_10, uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar14 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar14 = pcVar14 + 1;
        }
      }
      FUN_007119c0(&DAT_0080f33a,-1,-1,2);
    }
    break;
  case (undefined1 *)0x7:
    thunk_FUN_005b5a30(this_00[(int)pcVar15 + 0x83d],&local_28,2,
                       (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    if (((pcVar21[4] != '\x02') || (pcVar21[0x4f] == '\0')) && (pcVar21[4] != '\x04')) break;
    iVar9 = 0;
LAB_005d3bf4:
    iVar25 = *(int *)((int)this_00 + 0x1f4f);
LAB_005d3bfa:
    pbVar12 = (byte *)FUN_0070b3a0(iVar25,iVar9);
    thunk_FUN_00540760((undefined4 *)this_00[(int)pcVar15 + 0x83d],
                       (local_20 - *(int *)(pbVar12 + 4)) / 2 + local_28,
                       (local_1c - *(int *)(pbVar12 + 8)) / 2 + 1 + local_24,'\x06',pbVar12);
  }
switchD_005d35aa_default:
  FUN_006b35d0(DAT_008075a8,this_00[(int)pcVar15 + 0x833]);
  if (*(short *)(param_1 + 0x14) == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  DAT_00858df8 = local_f4;
  return 0;
}


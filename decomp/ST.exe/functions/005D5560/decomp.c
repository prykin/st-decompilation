
undefined4 __thiscall FUN_005d5560(void *this,int param_1)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  uint3 uVar4;
  int *this_00;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  undefined4 unaff_ESI;
  uint uVar19;
  void *unaff_EDI;
  char *pcVar20;
  char *pcVar21;
  undefined4 *puVar22;
  int *piVar23;
  bool bVar24;
  uint *puVar25;
  char local_164 [64];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 *local_c8;
  undefined4 local_c4 [16];
  int local_84 [2];
  int local_7c;
  undefined1 uStack_79;
  undefined4 local_78;
  undefined4 local_74;
  int local_64 [8];
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  byte local_d;
  uint local_c;
  char *local_8;
  
  local_44 = this;
  uVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x61) = uVar6;
  local_c8 = DAT_00858df8;
  DAT_00858df8 = &local_c8;
  iVar7 = __setjmp3(local_c4,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar7 != 0) {
    DAT_00858df8 = local_c8;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_settsobj_cpp_007cd544,0x27d,0,iVar7,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    FUN_006a5e40(iVar7,0,0x7cd544,0x27d);
    return 0xffff;
  }
  thunk_FUN_005c8a40(local_44,param_1);
  uVar19 = *(uint *)(param_1 + 0x10);
  if (uVar19 < 0x6505) {
    if (uVar19 == 0x6504) {
      uVar19 = *(uint *)(param_1 + 0x14);
      if ((uVar19 != 0xffffffff) && (iVar7 = this_00[0x7e1], iVar7 != 0)) {
        iVar8 = *(int *)((int)this_00 + 0x1e2f);
        if (uVar19 < *(uint *)(iVar8 + 0xc)) {
          iVar8 = *(int *)(iVar8 + 8) * uVar19 + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        cVar18 = *(char *)(iVar8 + 0x104);
        if (*(uint *)(param_1 + 0x18) < *(uint *)(iVar7 + 0xc)) {
          iVar7 = *(int *)(iVar7 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar7 + 0x1c);
        }
        else {
          iVar7 = 0;
        }
        if (iVar7 != 0) {
          *(char *)(iVar7 + 3) = cVar18;
        }
        iVar7 = this_00[0x7e1];
        uVar19 = *(int *)(param_1 + 0x18) + 1;
        bVar24 = uVar19 < *(uint *)(iVar7 + 0xc);
        if ((int)uVar19 < (int)*(uint *)(iVar7 + 0xc)) {
          do {
            if (bVar24) {
              pcVar9 = (char *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c));
            }
            else {
              pcVar9 = (char *)0x0;
            }
            if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\0')) break;
            pcVar9[3] = cVar18;
            iVar7 = this_00[0x7e1];
            uVar19 = uVar19 + 1;
            bVar24 = uVar19 < *(uint *)(iVar7 + 0xc);
          } while ((int)uVar19 < (int)*(uint *)(iVar7 + 0xc));
        }
        (**(code **)(*this_00 + 0x2c))();
      }
    }
    else if (uVar19 == 0x6501) {
      uVar19 = *(uint *)(param_1 + 0x14);
      if ((uVar19 != 0xffffffff) && (iVar7 = this_00[0x7e1], iVar7 != 0)) {
        iVar8 = *(int *)((int)this_00 + 0x1e2f);
        if (uVar19 < *(uint *)(iVar8 + 0xc)) {
          iVar8 = *(int *)(iVar8 + 8) * uVar19 + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        cVar18 = *(char *)(iVar8 + 0x104);
        if (*(uint *)(param_1 + 0x18) < *(uint *)(iVar7 + 0xc)) {
          iVar7 = *(int *)(iVar7 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar7 + 0x1c);
        }
        else {
          iVar7 = 0;
        }
        if (iVar7 != 0) {
          *(char *)(iVar7 + 0x4a) = cVar18;
        }
        iVar7 = this_00[0x7e1];
        uVar19 = *(int *)(param_1 + 0x18) + 1;
        bVar24 = uVar19 < *(uint *)(iVar7 + 0xc);
        if ((int)uVar19 < (int)*(uint *)(iVar7 + 0xc)) {
          do {
            if (bVar24) {
              pcVar9 = (char *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c));
            }
            else {
              pcVar9 = (char *)0x0;
            }
            if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\0')) break;
            pcVar9[0x4a] = cVar18;
            iVar7 = this_00[0x7e1];
            uVar19 = uVar19 + 1;
            bVar24 = uVar19 < *(uint *)(iVar7 + 0xc);
          } while ((int)uVar19 < (int)*(uint *)(iVar7 + 0xc));
        }
        (**(code **)(*this_00 + 0x2c))();
      }
    }
    else if (((uVar19 == 0x6502) && (uVar19 = *(uint *)(param_1 + 0x14), uVar19 != 0xffffffff)) &&
            (iVar7 = this_00[0x7e1], iVar7 != 0)) {
      iVar8 = *(int *)((int)this_00 + 0x1e2f);
      if (uVar19 < *(uint *)(iVar8 + 0xc)) {
        iVar8 = *(int *)(iVar8 + 8) * uVar19 + *(int *)(iVar8 + 0x1c);
      }
      else {
        iVar8 = 0;
      }
      local_d = *(byte *)(iVar8 + 0x104);
      if (*(uint *)(param_1 + 0x18) < *(uint *)(iVar7 + 0xc)) {
        iVar7 = *(int *)(iVar7 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar7 + 0x1c);
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        if (*(byte *)(iVar7 + 2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,*(byte *)(iVar7 + 2));
        }
        *(byte *)(iVar7 + 2) = local_d;
        if (*(char *)(iVar7 + 4) == '\x02') {
          DAT_0080874d = local_d;
        }
        iVar7 = this_00[0x7e1];
        uVar19 = *(int *)(param_1 + 0x18) + 1;
        bVar24 = uVar19 < *(uint *)(iVar7 + 0xc);
        if ((int)uVar19 < (int)*(uint *)(iVar7 + 0xc)) {
          do {
            if (bVar24) {
              pcVar9 = (char *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c));
            }
            else {
              pcVar9 = (char *)0x0;
            }
            if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\0')) break;
            pcVar9[2] = local_d;
            iVar7 = this_00[0x7e1];
            uVar19 = uVar19 + 1;
            bVar24 = uVar19 < *(uint *)(iVar7 + 0xc);
          } while ((int)uVar19 < (int)*(uint *)(iVar7 + 0xc));
        }
        (**(code **)(*this_00 + 0x2c))();
        goto LAB_005d5ff8;
      }
    }
  }
  else if (uVar19 == 0x6505) {
    uVar19 = *(uint *)(param_1 + 0x14);
    if ((uVar19 != 0xffffffff) && (iVar7 = this_00[0x7e1], iVar7 != 0)) {
      iVar8 = *(int *)((int)this_00 + 0x1e2f);
      if (uVar19 < *(uint *)(iVar8 + 0xc)) {
        iVar8 = *(int *)(iVar8 + 8) * uVar19 + *(int *)(iVar8 + 0x1c);
      }
      else {
        iVar8 = 0;
      }
      uVar19 = *(uint *)(iVar7 + 0xc);
      if (*(uint *)(param_1 + 0x18) < uVar19) {
        iVar11 = *(int *)(iVar7 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar7 + 0x1c);
      }
      else {
        iVar11 = 0;
      }
      if (iVar11 != 0) {
        if ((*(int *)(iVar8 + 0x104) == 2) && (uVar16 = 0, 0 < (int)uVar19)) {
          bVar24 = uVar19 != 0;
          do {
            if (bVar24) {
              iVar11 = *(int *)(iVar7 + 8) * uVar16 + *(int *)(iVar7 + 0x1c);
            }
            else {
              iVar11 = 0;
            }
            if ((iVar11 != 0) && (*(char *)(iVar11 + 4) == '\x02')) {
              cVar18 = *(char *)((int)this_00 + 0x1e26);
              if ((cVar18 == '\x06') || ((cVar18 == '\x01' || (cVar18 == '\x02')))) {
                *(undefined1 *)(iVar11 + 4) = 4;
                *(undefined1 *)(iVar11 + 5) = 0;
              }
              else {
                *(undefined1 *)(iVar11 + 4) = 1;
              }
              break;
            }
            uVar16 = uVar16 + 1;
            bVar24 = uVar16 < uVar19;
          } while ((int)uVar16 < (int)uVar19);
        }
        iVar7 = this_00[0x7e1];
        if (*(uint *)(param_1 + 0x18) < *(uint *)(iVar7 + 0xc)) {
          iVar7 = *(int *)(iVar7 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar7 + 0x1c);
        }
        else {
          iVar7 = 0;
        }
        cVar18 = *(char *)(iVar8 + 0x104);
        *(char *)(iVar7 + 4) = cVar18;
        *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(iVar8 + 0x108);
        if (cVar18 == '\0') {
          if (*(byte *)(iVar7 + 2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,*(byte *)(iVar7 + 2));
          }
          *(undefined1 *)(iVar7 + 2) = 0xff;
        }
        DAT_0080874d = 0xff;
        iVar7 = this_00[0x7e1];
        uVar16 = 0;
        uVar19 = *(uint *)(iVar7 + 0xc);
        if (0 < (int)uVar19) {
          bVar24 = uVar19 != 0;
          do {
            if (bVar24) {
              iVar8 = *(int *)(iVar7 + 8) * uVar16 + *(int *)(iVar7 + 0x1c);
            }
            else {
              iVar8 = 0;
            }
            if (((iVar8 != 0) && (*(char *)(iVar8 + 4) == '\x02')) &&
               (*(int *)(iVar8 + 6) == DAT_0080877f)) {
              DAT_0080874d = *(byte *)(iVar8 + 2);
              break;
            }
            uVar16 = uVar16 + 1;
            bVar24 = uVar16 < uVar19;
          } while ((int)uVar16 < (int)uVar19);
        }
        (**(code **)(*this_00 + 0x2c))();
LAB_005d5ff8:
        thunk_FUN_005c87c0();
      }
    }
  }
  else if (uVar19 == 0x694a) {
    local_30 = 0x1010101;
    local_2c = (undefined1 *)0x1010101;
    if (this_00[0x7e1] != 0) {
      DAT_00808aa9 = 1;
      DAT_008087c4._2_1_ = '\0';
      DAT_0080874f = 0;
      puVar22 = (undefined4 *)((int)&DAT_008087c4 + 3);
      for (iVar7 = 0xa2; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar22 = 0;
        puVar22 = puVar22 + 1;
      }
      puVar10 = &DAT_008087e9;
      do {
        puVar10[-1] = 0;
        *puVar10 = 0xff;
        puVar10 = puVar10 + 0x51;
      } while ((int)puVar10 < 0x808a71);
      iVar7 = this_00[0x7e1];
      uVar16 = 0;
      uVar19 = *(uint *)(iVar7 + 0xc);
      if (0 < (int)uVar19) {
        bVar24 = uVar19 != 0;
        do {
          if (bVar24) {
            pcVar9 = (char *)(*(int *)(iVar7 + 8) * uVar16 + *(int *)(iVar7 + 0x1c));
          }
          else {
            pcVar9 = (char *)0x0;
          }
          if (((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) && (pcVar9[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar9[2]) = 0;
          }
          uVar16 = uVar16 + 1;
          bVar24 = uVar16 < uVar19;
        } while ((int)uVar16 < (int)uVar19);
      }
      local_c = 0;
      if (0 < (int)uVar19) {
        bVar24 = uVar19 != 0;
        do {
          if (bVar24) {
            pcVar9 = (char *)(*(int *)(iVar7 + 8) * local_c + *(int *)(iVar7 + 0x1c));
          }
          else {
            pcVar9 = (char *)0x0;
          }
          if (((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) &&
             ((pcVar9[4] != '\0' &&
              ((pcVar9[4] != '\x01' || (*(char *)((int)this_00 + 0x1e26) == '\x02')))))) {
            iVar7 = *(int *)(pcVar9 + 0x50);
            if ((uint)(byte)pcVar9[5] < *(uint *)(iVar7 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar7 + 8) * (uint)(byte)pcVar9[5] +
                                *(int *)(iVar7 + 0x1c));
            }
            else {
              local_8 = (char *)0x0;
            }
            DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
            if (pcVar9[2] == -1) {
              iVar7 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar7) != '\0') {
                  pcVar9[2] = (char)iVar7;
                  *(undefined1 *)((int)&local_30 + iVar7) = 0;
                  break;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < 8);
            }
            (&DAT_008087e9)[(uint)(byte)pcVar9[2] * 0x51] = pcVar9[2];
            (&DAT_008087e8)[(uint)(byte)pcVar9[2] * 0x51] = pcVar9[3];
            uVar19 = 0xffffffff;
            pcVar21 = &DAT_008016a0;
            do {
              pcVar20 = pcVar21;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar20 = pcVar21 + 1;
              cVar18 = *pcVar21;
              pcVar21 = pcVar20;
            } while (cVar18 != '\0');
            uVar19 = ~uVar19;
            local_14 = &DAT_008087c8 + (uint)(byte)pcVar9[2] * 0x51;
            pcVar21 = pcVar20 + -uVar19;
            pcVar20 = &DAT_008087c8 + (uint)(byte)pcVar9[2] * 0x51;
            for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar20 = *(undefined4 *)pcVar21;
              pcVar21 = pcVar21 + 4;
              pcVar20 = pcVar20 + 4;
            }
            for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pcVar20 = *pcVar21;
              pcVar21 = pcVar21 + 1;
              pcVar20 = pcVar20 + 1;
            }
            if (pcVar9[4] == '\x02') {
              if (*pcVar9 != '\0') {
                *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar9[2] * 0x51 + 3) = 0;
                DAT_0080874d = pcVar9[2];
                DAT_0080874e = pcVar9[3];
              }
            }
            else if (pcVar9[4] == '\x04') {
              *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar9[2] * 0x51 + 3) = 1;
              if (local_8 == (char *)0x0) {
                uVar19 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar9[2] * 0x51;
                pcVar21 = &DAT_008016a0;
                do {
                  pcVar20 = pcVar21;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar20 = pcVar21 + 1;
                  cVar18 = *pcVar21;
                  pcVar21 = pcVar20;
                } while (cVar18 != '\0');
                uVar19 = ~uVar19;
                pcVar21 = pcVar20 + -uVar19;
                pcVar20 = local_8;
                for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar20 = *(undefined4 *)pcVar21;
                  pcVar21 = pcVar21 + 4;
                  pcVar20 = pcVar20 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar20 = *pcVar21;
                  pcVar21 = pcVar21 + 1;
                  pcVar20 = pcVar20 + 1;
                }
              }
              else {
                pcVar21 = local_8 + 0x4c;
                uVar19 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar9[2] * 0x51;
                do {
                  pcVar20 = pcVar21;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar20 = pcVar21 + 1;
                  cVar18 = *pcVar21;
                  pcVar21 = pcVar20;
                } while (cVar18 != '\0');
                uVar19 = ~uVar19;
                pcVar21 = pcVar20 + -uVar19;
                pcVar20 = local_8;
                for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar20 = *(undefined4 *)pcVar21;
                  pcVar21 = pcVar21 + 4;
                  pcVar20 = pcVar20 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar20 = *pcVar21;
                  pcVar21 = pcVar21 + 1;
                  pcVar20 = pcVar20 + 1;
                }
              }
            }
            (&DAT_008087ea)[(uint)(byte)pcVar9[2] * 0x51] = pcVar9[0x4a];
            *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar9[2] * 0x51) =
                 *(undefined4 *)(pcVar9 + 0x54);
            *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar9[2] * 0x51) =
                 *(undefined4 *)(pcVar9 + 0x58);
            *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar9[2] * 0x51) =
                 *(undefined4 *)(pcVar9 + 0x5c);
          }
          iVar7 = this_00[0x7e1];
          local_c = local_c + 1;
          bVar24 = local_c < *(uint *)(iVar7 + 0xc);
        } while ((int)local_c < (int)*(uint *)(iVar7 + 0xc));
      }
      thunk_FUN_0056ee90(0x807620);
      puVar22 = &DAT_00808ab0;
      for (iVar7 = 0x3a8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar22 = 0;
        puVar22 = puVar22 + 1;
      }
      DAT_00808aaf = 0;
      iVar7 = this_00[0x7e1];
      local_c = 0;
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar24 = *(int *)(iVar7 + 0xc) != 0;
        do {
          if (bVar24) {
            puVar10 = (undefined1 *)(*(int *)(iVar7 + 8) * local_c + *(int *)(iVar7 + 0x1c));
          }
          else {
            puVar10 = (undefined1 *)0x0;
          }
          if (puVar10 != (undefined1 *)0x0) {
            bVar15 = puVar10[4];
            local_d = bVar15;
            if ((bVar15 != 1) && (bVar15 != 0)) {
              if (bVar15 == 4) {
                iVar7 = *(int *)(puVar10 + 0x50);
                if ((uint)(byte)puVar10[5] < *(uint *)(iVar7 + 0xc)) {
                  pcVar9 = (char *)(*(int *)(iVar7 + 8) * (uint)(byte)puVar10[5] +
                                   *(int *)(iVar7 + 0x1c));
                }
                else {
                  pcVar9 = (char *)0x0;
                }
                if (pcVar9 != (char *)0x0) {
                  uVar19 = 0xffffffff;
                  do {
                    pcVar21 = pcVar9;
                    if (uVar19 == 0) break;
                    uVar19 = uVar19 - 1;
                    pcVar21 = pcVar9 + 1;
                    cVar18 = *pcVar9;
                    pcVar9 = pcVar21;
                  } while (cVar18 != '\0');
                  uVar19 = ~uVar19;
                  pcVar21 = pcVar21 + -uVar19;
                  local_8 = local_164;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar19 = 0xffffffff;
                pcVar9 = puVar10 + 10;
                do {
                  pcVar21 = pcVar9;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar21 = pcVar9 + 1;
                  cVar18 = *pcVar9;
                  pcVar9 = pcVar21;
                } while (cVar18 != '\0');
                uVar19 = ~uVar19;
                pcVar21 = pcVar21 + -uVar19;
                local_8 = local_164;
LAB_005d5b7e:
                pcVar9 = local_164;
                for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar21;
                  pcVar21 = pcVar21 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar19 = uVar19 & 3; local_8 = local_164, uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar9 = *pcVar21;
                  pcVar21 = pcVar21 + 1;
                  pcVar9 = pcVar9 + 1;
                }
              }
              local_124 = *(undefined4 *)(puVar10 + 6);
              local_120._0_2_ = CONCAT11(*puVar10,puVar10[2]);
              local_11c = *(undefined4 *)((int)this_00 + 0x61);
              if (bVar15 == 2) {
                local_120 = CONCAT13(1,CONCAT12(1,(undefined2)local_120));
              }
              else {
                local_120 = CONCAT13(1,CONCAT12((bVar15 != 3) + -1,(undefined2)local_120)) &
                            0xff02ffff;
              }
              pcVar9 = local_164;
              puVar22 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar7 = 0x27; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                puVar22 = puVar22 + 1;
              }
              if ((byte)local_120 < 8) {
                iVar7 = 0;
                do {
                  if ((&DAT_00808800)[iVar7 + (local_120 & 0xff) * 0x51] == '\0') {
                    (&DAT_00808800)[iVar7 + (local_120 & 0xff) * 0x51] = DAT_00808aaf;
                    break;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          iVar7 = this_00[0x7e1];
          local_c = local_c + 1;
          bVar24 = local_c < *(uint *)(iVar7 + 0xc);
        } while ((int)local_c < (int)*(uint *)(iVar7 + 0xc));
      }
      if (*(char *)((int)this_00 + 0x1e26) == '\x06') {
        if ((*(int *)((int)this_00 + 0x1f47) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
          iVar7 = *(int *)((int)this_00 + 0x1a5b);
          if (*(int *)(iVar7 + 0x2e6) != 0) {
            piVar23 = local_64;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar23 = 0;
              piVar23 = piVar23 + 1;
            }
            piVar23 = local_84;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar23 = 0;
              piVar23 = piVar23 + 1;
            }
            local_7c = this_00[2];
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            iVar7 = thunk_FUN_005b7ef0(*(void **)(iVar7 + 0x2e6),0x251f,'\x01',local_64,local_84,
                                       (undefined4 *)0x0,0,0);
            if (iVar7 != 0) {
              (**(code **)(*this_00 + 0x24))();
            }
          }
        }
        else {
          uVar19 = 0xffffffff;
          DAT_008087a0 = '\x06';
          pcVar9 = &DAT_00853de4;
          do {
            pcVar21 = pcVar9;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar21 = pcVar9 + 1;
            cVar18 = *pcVar9;
            pcVar9 = pcVar21;
          } while (cVar18 != '\0');
          uVar19 = ~uVar19;
          DAT_00808783 = 2;
          pcVar9 = pcVar21 + -uVar19;
          pcVar21 = &DAT_0080ed16;
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar21 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar21 = pcVar21 + 1;
          }
          uVar19 = 0xffffffff;
          pcVar9 = &DAT_0080ed16;
          do {
            pcVar21 = pcVar9;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar21 = pcVar9 + 1;
            cVar18 = *pcVar9;
            pcVar9 = pcVar21;
          } while (cVar18 != '\0');
          uVar19 = ~uVar19;
          pcVar9 = pcVar21 + -uVar19;
          pcVar21 = (char *)&DAT_0080ee1a;
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar21 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar21 = pcVar21 + 1;
          }
          uVar19 = 0xffffffff;
          pcVar9 = &DAT_00807680;
          do {
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            cVar18 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar18 != '\0');
          uVar16 = 0xffffffff;
          pcVar9 = (char *)((int)&DAT_0080ed12 + ~uVar19 + 3);
          do {
            pcVar21 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar21 = pcVar9 + 1;
            cVar18 = *pcVar9;
            pcVar9 = pcVar21;
          } while (cVar18 != '\0');
          uVar16 = ~uVar16;
          pcVar9 = pcVar21 + -uVar16;
          pcVar21 = &DAT_0080ef1e;
          for (uVar19 = uVar16 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar21 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar21 = pcVar21 + 1;
          }
          thunk_FUN_005b6350(this_00,0x6948,0,0);
          *(undefined1 *)((int)this_00 + 0x21e5) = 1;
          *(undefined1 *)(this_00 + 0x879) = 1;
          *(undefined1 *)((int)this_00 + 0x21e7) = 1;
          *(undefined1 *)((int)this_00 + 0x21e3) = 1;
          *(undefined1 *)((int)this_00 + 0x21e1) = 1;
          (**(code **)(*this_00 + 8))();
          pvVar2 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
          if (pvVar2 != (void *)0x0) {
            thunk_FUN_005b8c70(pvVar2,1,0,1);
          }
        }
      }
      else {
        uVar19 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar9 = &DAT_0080ed16;
        do {
          pcVar21 = pcVar9;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar21 = pcVar9 + 1;
          cVar18 = *pcVar9;
          pcVar9 = pcVar21;
        } while (cVar18 != '\0');
        uVar19 = ~uVar19;
        pcVar9 = pcVar21 + -uVar19;
        pcVar21 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = *(char *)((int)this_00 + 0x1e26);
        for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar21 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar19 = 0xffffffff;
        pcVar9 = &DAT_00807680;
        do {
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          cVar18 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar18 != '\0');
        uVar16 = 0xffffffff;
        pcVar9 = (char *)((int)&DAT_0080ed12 + ~uVar19 + 3);
        do {
          pcVar21 = pcVar9;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar21 = pcVar9 + 1;
          cVar18 = *pcVar9;
          pcVar9 = pcVar21;
        } while (cVar18 != '\0');
        uVar16 = ~uVar16;
        pcVar9 = pcVar21 + -uVar16;
        pcVar21 = &DAT_0080ef1e;
        for (uVar19 = uVar16 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar21 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar21 = pcVar21 + 1;
        }
        thunk_FUN_005b6350(this_00,0x6948,0,0);
        *(undefined1 *)((int)this_00 + 0x21e5) = 1;
        *(undefined1 *)(this_00 + 0x879) = 1;
        *(undefined1 *)((int)this_00 + 0x21e7) = 1;
        *(undefined1 *)((int)this_00 + 0x21e2) = 1;
        *(undefined1 *)((int)this_00 + 0x21e1) = 1;
        (**(code **)(*this_00 + 8))();
        pvVar2 = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
        if (pvVar2 != (void *)0x0) {
          thunk_FUN_005b8c70(pvVar2,1,0,1);
        }
      }
    }
  }
  uVar19 = *(uint *)(param_1 + 0x10);
  if (((0x69fe < uVar19) && (uVar19 < 0x6a7f)) && (*(char *)((int)this_00 + 0x65) == '\x01')) {
    iVar7 = this_00[0x7e1];
    local_c = uVar19 - 0x69ff >> 3;
    if ((iVar7 == 0) || (*(uint *)(iVar7 + 0xc) <= this_00[0x7e2] + local_c)) {
      local_14 = (char *)0x0;
    }
    else {
      local_14 = (char *)(*(int *)(iVar7 + 8) * (this_00[0x7e2] + local_c) + *(int *)(iVar7 + 0x1c))
      ;
    }
    uVar16 = 0;
    if (local_14 != (char *)0x0) {
      switch(uVar19 + 1 & 7) {
      case 1:
        uVar16 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar19 = *(uint *)(iVar7 + 0xc);
        if (0 < (int)uVar19) {
          bVar24 = uVar19 != 0;
          do {
            if (bVar24) {
              pcVar9 = (char *)(*(int *)(iVar7 + 8) * uVar16 + *(int *)(iVar7 + 0x1c));
            }
            else {
              pcVar9 = (char *)0x0;
            }
            if ((*pcVar9 != '\0') && (pcVar9[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar9[2]) = 0;
            }
            uVar16 = uVar16 + 1;
            bVar24 = uVar16 < uVar19;
          } while ((int)uVar16 < (int)uVar19);
        }
        bVar15 = local_14[2];
        iVar7 = this_00[0x7e2] + local_c;
        uVar19 = 0;
        *(undefined4 *)((int)this_00 + 0x2171) = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar15) = 1;
        *(int *)((int)this_00 + 0x2179) = iVar7;
        *(undefined4 *)((int)this_00 + 0x2191) = 0x6503;
        *(undefined4 *)((int)this_00 + 0x21a1) = 0;
        *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc) = 0;
        *(undefined4 *)((int)this_00 + 0x1f37) = 0xff;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
        local_8 = (char *)CONCAT31(local_8._1_3_,1);
        do {
          if (*(char *)((int)&local_40 + uVar19) != '\0') {
            *(uint *)((int)this_00 + 0x1f37) = uVar19;
            FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
            if ((byte)local_14[2] == uVar19) {
              *(uint *)((int)this_00 + 0x21a1) = (uint)local_8 & 0xff;
            }
            local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < 8);
        *(undefined4 *)((int)this_00 + 0x21a9) =
             *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc);
        *(undefined4 *)((int)this_00 + 0x21c5) = 0x124;
        *(undefined4 *)((int)this_00 + 0x21cd) = 0x1e;
        *(undefined4 *)((int)this_00 + 0x21a5) = 0x12;
        *(uint *)((int)this_00 + 0x21c9) = local_c * 0x19 + 0x41;
LAB_005d619b:
        (**(code **)(*(int *)this_00[3] + 8))(0x100ef,0,0,(int)this_00 + 0x2161,0);
        break;
      case 2:
        *(undefined4 *)((int)this_00 + 0x2171) = 0x6504;
        *(uint *)((int)this_00 + 0x2179) = this_00[0x7e2] + local_c;
        *(undefined4 *)((int)this_00 + 0x2191) = 0x6500;
        *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc) = 0;
        local_28 = 1;
        pcVar9 = (char *)FUN_006b0140(0x23f1,DAT_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar21 = pcVar9;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar21 = pcVar9 + 1;
          cVar18 = *pcVar9;
          pcVar9 = pcVar21;
        } while (cVar18 != '\0');
        uVar19 = ~uVar19;
        puVar12 = (uint *)(pcVar21 + -uVar19);
        puVar25 = (uint *)((int)this_00 + 0x1e33);
        for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar25 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar25 = puVar25 + 1;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(char *)puVar25 = (char)*puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
          puVar25 = (uint *)((int)puVar25 + 1);
        }
        for (puVar12 = FUN_0072e560((uint *)((int)this_00 + 0x1e33),'\n'); puVar12 != (uint *)0x0;
            puVar12 = FUN_0072e560(puVar12,'\n')) {
          *(undefined1 *)puVar12 = 0x20;
        }
        *(undefined4 *)((int)this_00 + 0x1f37) = 1;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
        pcVar9 = (char *)FUN_006b0140(0x23f0,DAT_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar21 = pcVar9;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar21 = pcVar9 + 1;
          cVar18 = *pcVar9;
          pcVar9 = pcVar21;
        } while (cVar18 != '\0');
        uVar19 = ~uVar19;
        puVar12 = (uint *)(pcVar21 + -uVar19);
        puVar25 = (uint *)((int)this_00 + 0x1e33);
        for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar25 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar25 = puVar25 + 1;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(char *)puVar25 = (char)*puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
          puVar25 = (uint *)((int)puVar25 + 1);
        }
        for (puVar12 = FUN_0072e560((uint *)((int)this_00 + 0x1e33),'\n'); puVar12 != (uint *)0x0;
            puVar12 = FUN_0072e560(puVar12,'\n')) {
          *(undefined1 *)puVar12 = 0x20;
        }
        *(undefined4 *)((int)this_00 + 0x1f37) = 2;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
        uVar19 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar19 = (uint)(local_14[4] != '\x02');
        }
        if (uVar19 != 0) {
          pcVar9 = (char *)FUN_006b0140(0x23f2,DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar21 = pcVar9;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar21 = pcVar9 + 1;
            cVar18 = *pcVar9;
            pcVar9 = pcVar21;
          } while (cVar18 != '\0');
          uVar19 = ~uVar19;
          puVar12 = (uint *)(pcVar21 + -uVar19);
          puVar25 = (uint *)((int)this_00 + 0x1e33);
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar25 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar25 = puVar25 + 1;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(char *)puVar25 = (char)*puVar12;
            puVar12 = (uint *)((int)puVar12 + 1);
            puVar25 = (uint *)((int)puVar25 + 1);
          }
          for (puVar12 = FUN_0072e560((uint *)((int)this_00 + 0x1e33),'\n'); puVar12 != (uint *)0x0;
              puVar12 = FUN_0072e560(puVar12,'\n')) {
            *(undefined1 *)puVar12 = 0x20;
          }
          *(undefined4 *)((int)this_00 + 0x1f37) = 3;
          FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
        }
        *(undefined4 *)((int)this_00 + 0x21a9) =
             *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc);
        bVar15 = local_14[3];
        *(undefined4 *)((int)this_00 + 0x21c5) = 0x143;
        *(undefined4 *)((int)this_00 + 0x21cd) = 0x78;
        *(uint *)((int)this_00 + 0x21a1) = bVar15 - 1;
        *(uint *)((int)this_00 + 0x21c9) = local_c * 0x19 + 0x41;
        iVar7 = *(int *)(DAT_0081176c + 0x34);
        if (*(int *)(iVar7 + 0xa0) != 0) {
          FUN_00710790(iVar7);
        }
        *(undefined4 *)((int)this_00 + 0x21a5) = *(undefined4 *)(iVar7 + 0x8a);
LAB_005d6676:
        (**(code **)(*(int *)this_00[3] + 8))(0x100ef,0,0,(int)this_00 + 0x2161,0);
        break;
      case 3:
        *(undefined4 *)((int)this_00 + 0x2171) = 0x6505;
        *(uint *)((int)this_00 + 0x2179) = this_00[0x7e2] + local_c;
        *(undefined4 *)((int)this_00 + 0x2191) = 0x6500;
        *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc) = 0;
        if (*local_14 != '\0') {
          uVar19 = 0;
          local_8 = (char *)0x0;
          if ((*(char *)((int)this_00 + 0x1e26) == '\x02') && (local_14[4] == '\x02')) break;
          iVar7 = this_00[0x7e1];
          uVar16 = *(uint *)(iVar7 + 0xc);
          bVar24 = uVar16 != 0;
          if (0 < (int)uVar16) {
            do {
              if (bVar24) {
                pcVar9 = (char *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c));
              }
              else {
                pcVar9 = (char *)0x0;
              }
              if ((*pcVar9 != '\0') && (pcVar9[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar19 = uVar19 + 1;
              bVar24 = uVar19 < uVar16;
            } while ((int)uVar19 < (int)uVar16);
          }
          if ((*(char *)((int)this_00 + 0x1e26) != '\x02') && (2 < (int)local_8)) {
            pcVar9 = (char *)FUN_006b0140(8000,DAT_00807618);
            uVar19 = 0xffffffff;
            do {
              pcVar21 = pcVar9;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            uVar19 = ~uVar19;
            pcVar9 = pcVar21 + -uVar19;
            pcVar21 = (char *)((int)this_00 + 0x1e33);
            for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar21 = pcVar21 + 4;
            }
            for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pcVar21 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar21 = pcVar21 + 1;
            }
            *(undefined4 *)((int)this_00 + 0x1f37) = 0;
            FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
          }
          if (*(char *)((int)this_00 + 0x1e26) != '\x02') {
            bVar24 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar24 = local_14[3] != '\x03';
            }
            if (bVar24) {
              pcVar9 = (char *)FUN_006b0140(0x1f42,DAT_00807618);
              uVar19 = 0xffffffff;
              do {
                pcVar21 = pcVar9;
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1;
                pcVar21 = pcVar9 + 1;
                cVar18 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar18 != '\0');
              uVar19 = ~uVar19;
              pcVar9 = pcVar21 + -uVar19;
              pcVar21 = (char *)((int)this_00 + 0x1e33);
              for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              *(undefined4 *)((int)this_00 + 0x1f37) = 2;
              FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
            }
          }
          local_8 = (char *)0x0;
          iVar7 = *(int *)(local_14 + 0x50);
          pcVar9 = *(char **)(iVar7 + 0xc);
          if (0 < (int)pcVar9) {
            do {
              if (local_8 < pcVar9) {
                iVar7 = *(int *)(iVar7 + 8) * (int)local_8 + *(int *)(iVar7 + 0x1c);
              }
              else {
                iVar7 = 0;
              }
              uVar19 = 0xffffffff;
              pcVar9 = (char *)(iVar7 + 0x40);
              do {
                pcVar21 = pcVar9;
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1;
                pcVar21 = pcVar9 + 1;
                cVar18 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar18 != '\0');
              uVar19 = ~uVar19;
              pcVar9 = pcVar21 + -uVar19;
              pcVar21 = (char *)((int)this_00 + 0x1e33);
              for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              *(undefined4 *)((int)this_00 + 0x1f37) = 4;
              *(char **)((int)this_00 + 0x1f3b) = local_8;
              FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
              local_8 = local_8 + 1;
              iVar7 = *(int *)(local_14 + 0x50);
              pcVar9 = *(char **)(iVar7 + 0xc);
            } while ((int)local_8 < (int)pcVar9);
          }
        }
        iVar7 = *(int *)((int)this_00 + 0x1e2f);
        uVar19 = 0;
        if (0 < *(int *)(iVar7 + 0xc)) {
          bVar24 = *(int *)(iVar7 + 0xc) != 0;
          local_28 = (uint)(byte)local_14[4];
          do {
            if (bVar24) {
              iVar8 = *(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c);
            }
            else {
              iVar8 = 0;
            }
            if ((*(uint *)(iVar8 + 0x104) == local_28) &&
               (*(uint *)(iVar8 + 0x108) == (uint)(byte)local_14[5])) {
              *(uint *)((int)this_00 + 0x21a1) = uVar19;
              break;
            }
            uVar19 = uVar19 + 1;
            bVar24 = uVar19 < *(uint *)(iVar7 + 0xc);
          } while ((int)uVar19 < (int)*(uint *)(iVar7 + 0xc));
        }
        uVar6 = *(undefined4 *)(iVar7 + 0xc);
        *(undefined4 *)((int)this_00 + 0x21c5) = 0x15d;
        *(undefined4 *)((int)this_00 + 0x21a9) = uVar6;
        *(undefined4 *)((int)this_00 + 0x21cd) = 0x5f;
        *(uint *)((int)this_00 + 0x21c9) = local_c * 0x19 + 0x41;
        iVar7 = *(int *)(DAT_0081176c + 0x34);
        if (*(int *)(iVar7 + 0xa0) != 0) {
          FUN_00710790(iVar7);
        }
        *(undefined4 *)((int)this_00 + 0x21a5) = *(undefined4 *)(iVar7 + 0x8a);
        if (1 < *(int *)((int)this_00 + 0x21a9)) goto LAB_005d6676;
        break;
      case 5:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar19 = *(uint *)(iVar7 + 0xc);
          if (0 < (int)uVar19) {
            bVar24 = uVar19 != 0;
            do {
              if (bVar24) {
                iVar8 = *(int *)(iVar7 + 8) * uVar16 + *(int *)(iVar7 + 0x1c);
              }
              else {
                iVar8 = 0;
              }
              if ((iVar8 != 0) && (*(byte *)(iVar8 + 0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)*(byte *)(iVar8 + 0x4a)) = 1;
              }
              uVar16 = uVar16 + 1;
              bVar24 = uVar16 < uVar19;
            } while ((int)uVar16 < (int)uVar19);
          }
          bVar15 = 0;
          iVar8 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar8) != '\0') {
              bVar15 = bVar15 + 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 8);
          bVar1 = *(byte *)(this_00 + 0x847);
joined_r0x005d6701:
          if (bVar15 < bVar1) {
            iVar8 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar8) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar8) = 1;
                bVar15 = bVar15 + 1;
                break;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < 8);
            goto joined_r0x005d6701;
          }
          uVar19 = 0;
          cVar18 = (char)local_28;
          if (0 < *(int *)(iVar7 + 0xc)) {
            local_2c = (undefined1 *)(this_00[0x7e2] + local_c);
            bVar24 = *(int *)(iVar7 + 0xc) != 0;
            do {
              if (bVar24) {
                pcVar9 = (char *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c));
              }
              else {
                pcVar9 = (char *)0x0;
              }
              if (local_2c == (undefined1 *)uVar19) {
LAB_005d6784:
                if ((*pcVar9 != '\0') && ((pcVar9[4] == '\0' || (pcVar9[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar9[0x4a]) = 0;
                }
              }
              else if (*pcVar9 != '\0') {
                if ((pcVar9[4] != '\0') && (pcVar9[4] != '\x01')) {
                  if (local_8 == (char *)0x0) {
                    if (cVar18 != pcVar9[0x4a]) {
                      cVar18 = -1;
                    }
                  }
                  else {
                    cVar18 = pcVar9[0x4a];
                    local_8 = (char *)0x0;
                  }
                }
                goto LAB_005d6784;
              }
              uVar19 = uVar19 + 1;
              bVar24 = uVar19 < *(uint *)(iVar7 + 0xc);
            } while ((int)uVar19 < (int)*(uint *)(iVar7 + 0xc));
            local_28 = CONCAT31(local_28._1_3_,cVar18);
          }
          if (cVar18 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          uVar19 = 0;
          *(undefined4 *)((int)this_00 + 0x2171) = 0x6501;
          *(uint *)((int)this_00 + 0x2179) = this_00[0x7e2] + local_c;
          *(undefined4 *)((int)this_00 + 0x2191) = 0x6500;
          *(undefined4 *)((int)this_00 + 0x21a1) = 0;
          *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc) = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar10 = &uStack_79;
          local_2c = puVar10;
          do {
            iVar7 = uVar19 + 0x41;
            if (puVar10[uVar19 + 0x41] != '\0') {
              uVar6 = FUN_006b0140(0x1f4a,DAT_00807618);
              wsprintfA((LPSTR)((int)this_00 + 0x1e33),&DAT_007cd508,uVar6,iVar7);
              *(uint *)((int)this_00 + 0x1f37) = uVar19;
              FUN_006ae1c0(*(uint **)((int)this_00 + 0x1e2f),(undefined4 *)((int)this_00 + 0x1e33));
              if ((byte)local_14[0x4a] == uVar19) {
                *(uint *)((int)this_00 + 0x21a1) = (uint)local_8 & 0xff;
              }
              local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
              puVar10 = local_2c;
            }
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < 8);
          cVar18 = *(char *)((int)this_00 + 0x1e26);
          *(undefined4 *)((int)this_00 + 0x21a9) =
               *(undefined4 *)(*(int *)((int)this_00 + 0x1e2f) + 0xc);
          if (((cVar18 == '\x06') || (cVar18 == '\x01')) || (uVar6 = 0x26b, cVar18 == '\x02')) {
            uVar6 = 0x2ab;
          }
          *(undefined4 *)((int)this_00 + 0x21c5) = uVar6;
          *(undefined4 *)((int)this_00 + 0x21cd) = 0x46;
          *(uint *)((int)this_00 + 0x21c9) = local_c * 0x19 + 0x41;
          iVar7 = *(int *)(DAT_0081176c + 0x34);
          if (*(int *)(iVar7 + 0xa0) != 0) {
            FUN_00710790(iVar7);
          }
          *(undefined4 *)((int)this_00 + 0x21a5) = *(undefined4 *)(iVar7 + 0x8a);
          goto LAB_005d619b;
        }
        uVar4 = (uint3)(uVar19 - 0x69ff >> 8);
        uVar19 = CONCAT31(uVar4 >> 3,DAT_0080874d);
        if (DAT_0080874d != 0xff) {
          bVar15 = local_14[2];
          local_c = CONCAT31(uVar4 >> 3,bVar15);
          if ((bVar15 != 0xff) && (DAT_0080874d != bVar15)) {
            if (local_14[4] == '\x04') {
              local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar15);
              if (DAT_0080874d == bVar15) {
                uVar6 = 0;
                uVar17 = (uint)bVar15;
              }
              else {
                uVar13 = (uint)DAT_0080874d;
                uVar16 = (uint)bVar15;
                cVar18 = *(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar16);
                uVar17 = local_c;
                if ((cVar18 == '\0') &&
                   (*(char *)((int)&DAT_00808a4f + uVar16 * 8 + uVar13) == '\0')) {
                  uVar6 = 0xfffffffe;
                }
                else if ((cVar18 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar16 * 8 + uVar13) == '\0')) {
                  uVar6 = 0xffffffff;
                }
                else if ((cVar18 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar16 * 8 + uVar13) == '\x01')) {
                  uVar6 = 1;
                }
                else if ((cVar18 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar16 * 8 + uVar13) == '\x01')) {
                  uVar6 = 2;
                }
                else {
                  uVar6 = 0;
                }
              }
              switch(uVar6) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar17,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar19,(byte)uVar17,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar19,(byte)uVar17,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar17,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,uVar19,bVar15);
            }
            (**(code **)(*this_00 + 0x2c))();
          }
        }
      }
    }
  }
  uVar19 = *(uint *)(param_1 + 0x10);
  if (uVar19 < 0x6a7f) {
    DAT_00858df8 = local_c8;
    return 0;
  }
  if (0x6afe < uVar19) {
    DAT_00858df8 = local_c8;
    return 0;
  }
  uVar16 = uVar19 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(uVar19 + 1 & 7);
  piVar23 = *(int **)(param_1 + 0x18);
  local_1c = piVar23[2];
  local_18 = piVar23[3];
  iVar7 = this_00[0x7e1];
  local_24 = *piVar23 + -0x113;
  local_20 = 0;
  if ((iVar7 == 0) || (*(uint *)(iVar7 + 0xc) <= this_00[0x7e2] + uVar16)) {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = (char *)(*(int *)(iVar7 + 8) * (this_00[0x7e2] + uVar16) + *(int *)(iVar7 + 0x1c));
  }
  local_28 = uVar16;
  FUN_006b4170(this_00[uVar16 + 0x83d],0,*piVar23 + -0x113,0,piVar23[2],piVar23[3],0xff);
  if (pcVar9 == (char *)0x0) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*pcVar9 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      thunk_FUN_005b5a30(this_00[uVar16 + 0x83d],&local_24,0,
                         (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pcVar9[2] != -1) {
        switch(pcVar9[2]) {
        case '\0':
          uVar5 = 0xfc;
          break;
        case '\x01':
          uVar5 = 0xfa;
          break;
        case '\x02':
          uVar5 = 0xfb;
          break;
        case '\x03':
          uVar5 = 0xf9;
          break;
        case '\x04':
          uVar5 = 0xfd;
          break;
        case '\x05':
          uVar5 = 0xfe;
          break;
        case '\x06':
          uVar5 = 0xf3;
          break;
        case '\a':
          uVar5 = 7;
          break;
        default:
          uVar5 = 0xff;
        }
        FUN_006b4170(this_00[uVar16 + 0x83d],0,local_24 + 2,local_20 + 2,local_1c + -4,local_18 + -4
                     ,uVar5);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*pcVar9 == '\0') break;
    thunk_FUN_005b5a30(this_00[uVar16 + 0x83d],&local_24,2,
                       (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    FUN_00710a90(this_00[uVar16 + 0x83d],0,local_24,local_20,local_1c,local_18);
    if (pcVar9[3] == '\x01') {
      pcVar9 = &DAT_007ca250;
LAB_005d6c37:
      uVar19 = 0xffffffff;
      do {
        pcVar21 = pcVar9;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar21 = pcVar9 + 1;
        cVar18 = *pcVar9;
        pcVar9 = pcVar21;
      } while (cVar18 != '\0');
      uVar19 = ~uVar19;
      pcVar9 = pcVar21 + -uVar19;
      pcVar21 = (char *)&DAT_0080f33a;
      for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar21 = pcVar21 + 4;
      }
    }
    else {
      if (pcVar9[3] != '\x02') {
        pcVar9 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar19 = 0xffffffff;
      pcVar9 = &DAT_007ca248;
      do {
        pcVar21 = pcVar9;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar21 = pcVar9 + 1;
        cVar18 = *pcVar9;
        pcVar9 = pcVar21;
      } while (cVar18 != '\0');
      uVar19 = ~uVar19;
      pcVar9 = pcVar21 + -uVar19;
      pcVar21 = (char *)&DAT_0080f33a;
      for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar21 = pcVar21 + 4;
      }
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar21 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar21 = pcVar21 + 1;
    }
    FUN_007119c0(&DAT_0080f33a,-1,-1,2);
    uVar16 = local_28;
    break;
  case (undefined1 *)0x3:
    thunk_FUN_005b5a30(this_00[uVar16 + 0x83d],&local_24,2,
                       (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    FUN_00710a90(this_00[uVar16 + 0x83d],0,local_24,local_20,local_1c,local_18);
    uVar6 = 2;
    iVar11 = -1;
    iVar8 = -1;
    puVar25 = (uint *)&DAT_007c2310;
    iVar7 = local_1c;
    puVar12 = (uint *)thunk_FUN_005cbbe0(this_00,pcVar9);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    thunk_FUN_005b5a30(this_00[uVar16 + 0x83d],&local_24,2,0x67,0x67);
    if (pcVar9[4] == '\x02') {
      FUN_00710a90(this_00[uVar16 + 0x83d],0,local_24,local_20,local_1c,local_18);
      uVar6 = 2;
      iVar8 = -1;
      iVar7 = -1;
      puVar12 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),(uint *)(pcVar9 + 10),
                                   (uint *)&DAT_007c7274,local_1c);
      FUN_007119c0(puVar12,iVar7,iVar8,uVar6);
      break;
    }
    if (pcVar9[4] != '\x04') break;
    iVar7 = *(int *)(pcVar9 + 0x50);
    if ((uint)(byte)pcVar9[5] < *(uint *)(iVar7 + 0xc)) {
      puVar12 = (uint *)(*(int *)(iVar7 + 8) * (uint)(byte)pcVar9[5] + *(int *)(iVar7 + 0x1c));
    }
    else {
      puVar12 = (uint *)0x0;
    }
    if (puVar12 == (uint *)0x0) break;
    FUN_00710a90(this_00[uVar16 + 0x83d],0,local_24,local_20,local_1c,local_18);
    uVar6 = 2;
    iVar11 = -1;
    iVar8 = -1;
    puVar25 = (uint *)&DAT_007c7274;
    iVar7 = local_1c;
LAB_005d6d70:
    puVar12 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar12,puVar25,iVar7);
    FUN_007119c0(puVar12,iVar8,iVar11,uVar6);
    break;
  case (undefined1 *)0x5:
    if ((*pcVar9 != '\0') &&
       (thunk_FUN_005b5a30(this_00[uVar16 + 0x83d],&local_24,2,
                           (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67),
       pcVar9[4] != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar15 = pcVar9[2], bVar15 != 0xff)) &&
           (DAT_0080874d != bVar15)) {
          local_28 = 0xffffffff;
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar15);
          uVar17 = (uint)DAT_0080874d;
          uVar19 = (uint)bVar15;
          cVar18 = *(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar19);
          if ((cVar18 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar17) == '\0')) {
            uVar6 = 0xfffffffe;
          }
          else if ((cVar18 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar17) == '\0')) {
            uVar6 = 0xffffffff;
          }
          else if ((cVar18 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar17) == '\x01')) {
            uVar6 = 1;
          }
          else if ((cVar18 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar17) == '\x01')) {
            uVar6 = 2;
          }
          else {
            uVar6 = 0;
          }
          switch(uVar6) {
          default:
            iVar7 = -1;
            break;
          case 1:
            iVar7 = 1;
            break;
          case 2:
            iVar7 = 3;
            break;
          case 0xfffffffe:
            iVar7 = 0;
            break;
          case 0xffffffff:
            iVar7 = 2;
          }
          if (-1 < iVar7 + -1) {
            pbVar14 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x1f4b),iVar7 + -1);
            thunk_FUN_00540760((undefined4 *)this_00[uVar16 + 0x83d],
                               (local_1c - *(int *)(pbVar14 + 4)) / 2 + local_24,
                               (local_18 - *(int *)(pbVar14 + 8)) / 2 + 1 + local_20,'\x06',pbVar14)
            ;
          }
        }
      }
      else {
        iVar7 = (byte)pcVar9[0x4a] + 0x41;
        uVar6 = FUN_006b0140(0x1f4a,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,uVar6,iVar7);
        FUN_00710a90(this_00[uVar16 + 0x83d],0,local_24,local_20,local_1c,local_18);
        FUN_007119c0(&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0(DAT_008075a8,this_00[uVar16 + 0x833]);
  if (*(short *)(param_1 + 0x14) == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  DAT_00858df8 = local_c8;
  return 0;
}


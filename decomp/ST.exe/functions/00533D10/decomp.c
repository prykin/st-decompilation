
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00533d10(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 **ppuVar4;
  undefined1 uVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  undefined4 *puVar9;
  LPSTR pCVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 unaff_ESI;
  byte *pbVar15;
  ushort *puVar16;
  void *unaff_EDI;
  int *piVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  byte *pbVar21;
  bool bVar22;
  uint uVar23;
  uint *puVar24;
  undefined4 uVar25;
  byte bVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  UINT UVar30;
  code *pcVar31;
  ulong uVar32;
  undefined4 **local_268;
  undefined4 local_264 [16];
  undefined4 **local_224;
  undefined4 local_220 [16];
  undefined4 **local_1e0;
  undefined4 local_1dc [16];
  undefined4 **local_19c;
  undefined4 local_198 [16];
  undefined4 **local_158;
  undefined4 local_154 [16];
  undefined4 **local_114;
  undefined4 local_110 [16];
  undefined4 **local_d0;
  undefined4 local_cc [16];
  undefined4 **local_8c;
  undefined4 local_88 [16];
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  ushort *local_20;
  uint *local_1c;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  iVar6 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  puVar11 = local_10;
  if (iVar6 != 0) {
    DAT_00858df8 = local_8c;
    iVar27 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x7f4,0,iVar6,&DAT_007a4ccc);
    if (iVar27 != 0) {
      pcVar31 = (code *)swi(3);
      uVar29 = (*pcVar31)();
      return uVar29;
    }
    FUN_006a5e40(iVar6,0,0x7c70a0,0x7f4);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    thunk_FUN_0052e500();
  }
  thunk_FUN_005384a0(puVar11,param_1);
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0xc001:
  case 0xc003:
  case 0xc09f:
  case 0xc0a0:
  case 0xc0a1:
  case 0xc0a2:
  case 0xc0a3:
  case 0xc0a4:
  case 0xc0a5:
  case 0xc0a6:
  case 0xc0a7:
  case 0xc0a8:
  case 0xc0a9:
  case 0xc0aa:
  case 0xc0ab:
  case 0xc0ac:
  case 0xc0ad:
  case 0xc0ae:
    if ((*(int *)(param_1 + 0x1c) != 0) &&
       ((uVar8 = *(uint *)(*(int *)(param_1 + 0x1c) + 4), uVar8 == 2 || ((3 < uVar8 && (uVar8 < 6)))
        ))) {
      thunk_FUN_005252c0(0xae);
    }
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < 0xc007) {
    if (uVar8 == 0xc006) {
      pcVar31 = thunk_FUN_00529fe0;
      pCVar10 = thunk_FUN_00571240(s_BUT_MINUS_007c718c,0);
      bVar26 = 1;
    }
    else {
      if (uVar8 < 0x8165) {
        if (uVar8 != 0x8164) {
          if (0x8160 < uVar8) {
            if (uVar8 == 0x8161) {
              iVar6 = *(int *)((int)puVar11 + 0x1e5);
              uVar8 = *(uint *)(iVar6 + 0x14);
              if (uVar8 == 0) {
                uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                        0x1ffffffc) * *(int *)(iVar6 + 8);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar9 = (undefined4 *)FUN_006b4fa0(iVar6);
              uVar5 = (undefined1)local_8;
              for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar9 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11(uVar5,uVar5));
                puVar9 = puVar9 + 1;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar9 = uVar5;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              FUN_00710a90(*(int *)((int)puVar11 + 0x1e5),0,0,0,0,0);
              if (*(char *)(puVar11 + 0x69) == '\x0e') {
                iVar6 = *(int *)((int)puVar11 + 0x2fd);
                if ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar6 + 0xc)) {
                  puVar24 = (uint *)(*(int *)(iVar6 + 8) * (uint)*(ushort *)(param_1 + 0x14) +
                                    *(int *)(iVar6 + 0x1c));
                }
                else {
                  puVar24 = (uint *)0x0;
                }
                uVar8 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              else if ((int)(uint)*(ushort *)(param_1 + 0x14) <
                       *(int *)(*(int *)((int)puVar11 + 0x1e9) + 8)) {
                puVar24 = *(uint **)(*(int *)(*(int *)((int)puVar11 + 0x1e9) + 0x14) +
                                    (uint)*(ushort *)(param_1 + 0x14) * 4);
                uVar8 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              else {
                puVar24 = (uint *)0x0;
                uVar8 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              FUN_007119c0(puVar24,2,-1,uVar8);
              FUN_006b55f0((undefined4 *)puVar11[0x1a],0,*(ushort *)(param_1 + 0x18) + 0x26,
                           *(ushort *)(param_1 + 0x1a) + 0x31,*(int *)((int)puVar11 + 0x1e5),0,0,0,
                           200,*(int *)(*(int *)((int)puVar11 + 0x1e5) + 8));
              FUN_006b3640(DAT_008075a8,puVar11[0x18],0xffffffff,puVar11[0xf],puVar11[0x11]);
              DAT_00858df8 = local_8c;
              return 0;
            }
            if (uVar8 != 0x8162) {
              if (uVar8 != 0x8163) {
                DAT_00858df8 = local_8c;
                return 0;
              }
              cVar1 = *(char *)(puVar11 + 0x69);
              if (cVar1 == '\x03') {
                if (*(int *)(param_1 + 0x14) < *(int *)(*(int *)((int)puVar11 + 0x1e9) + 8)) {
                  pcVar18 = *(char **)(*(int *)(*(int *)((int)puVar11 + 0x1e9) + 0x14) +
                                      *(int *)(param_1 + 0x14) * 4);
                }
                else {
                  pcVar18 = (char *)0x0;
                }
                FUN_006b6020(*(int *)((int)puVar11 + 0x1f1),0,pcVar18);
                puVar11[10] = 0x33;
                puVar11[0xb] = *(undefined4 *)((int)puVar11 + 0x1f1);
                FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1b9),puVar11 + 6);
                DAT_00858df8 = local_8c;
                return 0;
              }
              if (cVar1 == '\x04') {
                iVar6 = *(int *)((int)puVar11 + 0x1e5);
                uVar8 = *(uint *)(iVar6 + 0x14);
                if (uVar8 == 0) {
                  uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)(iVar6 + 8);
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
                puVar9 = (undefined4 *)FUN_006b4fa0(iVar6);
                uVar5 = (undefined1)local_8;
                for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar9 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11(uVar5,uVar5));
                  puVar9 = puVar9 + 1;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined1 *)puVar9 = uVar5;
                  puVar9 = (undefined4 *)((int)puVar9 + 1);
                }
                puVar11[10] = 0x26;
                FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1b5),puVar11 + 6);
                FUN_00710a90(*(int *)((int)puVar11 + 0x1e5),0,0,0,0,0);
                if ((int)puVar11[0xb] < *(int *)(*(int *)((int)puVar11 + 0x1e9) + 8)) {
                  puVar24 = *(uint **)(*(int *)(*(int *)((int)puVar11 + 0x1e9) + 0x14) +
                                      puVar11[0xb] * 4);
                }
                else {
                  puVar24 = (uint *)0x0;
                }
                FUN_007119c0(puVar24,0,-1,0);
                iVar6 = *(int *)((int)puVar11 + 0x1e5);
                FUN_006b55f0((undefined4 *)puVar11[0x1a],0,0x26,0x1c,iVar6,0,0,0,*(int *)(iVar6 + 4)
                             ,*(int *)(iVar6 + 8));
                DAT_00858df8 = local_8c;
                return 0;
              }
              if (cVar1 != '\x0e') {
                DAT_00858df8 = local_8c;
                return 0;
              }
              iVar6 = *(int *)((int)puVar11 + 0x1e5);
              uVar8 = *(uint *)(iVar6 + 0x14);
              if (uVar8 == 0) {
                uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                        0x1ffffffc) * *(int *)(iVar6 + 8);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar9 = (undefined4 *)FUN_006b4fa0(iVar6);
              uVar5 = (undefined1)local_8;
              for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar9 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11(uVar5,uVar5));
                puVar9 = puVar9 + 1;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar9 = uVar5;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              FUN_00710a90(*(int *)((int)puVar11 + 0x1e5),0,0,0,0,0);
              iVar6 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar29 = 0;
              iVar28 = -1;
              iVar27 = 0;
              if (iVar6 == 0) {
                puVar24 = (uint *)FUN_006b0140(0x2711,DAT_00807618);
              }
              else {
                puVar24 = &DAT_0080f33a;
              }
              FUN_007119c0(puVar24,iVar27,iVar28,uVar29);
              iVar6 = *(int *)((int)puVar11 + 0x1e5);
              FUN_006b55f0((undefined4 *)puVar11[0x1a],0,0x26,0x1c,iVar6,0,0,0,*(int *)(iVar6 + 4),
                           *(int *)(iVar6 + 8));
              DAT_00858df8 = local_8c;
              return 0;
            }
            bVar26 = *(byte *)(puVar11 + 0x69);
            if (bVar26 < 3) {
              DAT_00858df8 = local_8c;
              return 0;
            }
            if ((4 < bVar26) && (bVar26 != 0xe)) {
              DAT_00858df8 = local_8c;
              return 0;
            }
            goto switchD_00535190_caseD_3;
          }
          if (uVar8 == 0x8160) {
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)((int)puVar11 + 0x1e5) + 8);
            DAT_00858df8 = local_8c;
            return 0;
          }
          if (3 < uVar8) {
            if (uVar8 != 0x6332) {
              DAT_00858df8 = local_8c;
              return 0;
            }
            local_18 = *(uint *)(param_1 + 0x1c);
            iVar6 = puVar11[0x5f];
            if (*(int *)(iVar6 + 0xa0) != 0) {
              FUN_00710790(iVar6);
            }
            local_8 = *(int *)(iVar6 + 0x8a);
            FUN_006b4170(puVar11[0x1a],0,0x26,0x1a,0xca,0x6f,(DAT_0080874e != '\x03') - 1U & 0x73);
            uVar14 = (uint)*(ushort *)(param_1 + 0x16);
            uVar8 = uVar14;
            if ((int)uVar14 < (int)(*(int *)(local_18 + 0x1e0) + uVar14)) {
              do {
                if ((int)uVar8 < *(int *)(*(int *)((int)puVar11 + 0x2f9) + 8)) {
                  local_1c = *(uint **)(*(int *)(*(int *)((int)puVar11 + 0x2f9) + 0x14) + uVar8 * 4)
                  ;
                }
                else {
                  local_1c = (uint *)0x0;
                }
                if (local_1c != (uint *)0x0) {
                  FUN_00710a90(puVar11[0x1a],0,0x26,(uVar8 - uVar14) * local_8 + 0x1b,0xca,local_8);
                  FUN_007119c0(local_1c,0,-1,0);
                }
                uVar14 = (uint)*(ushort *)(param_1 + 0x16);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)(*(int *)(local_18 + 0x1e0) + uVar14));
            }
            FUN_006b3640(DAT_008075a8,puVar11[0x18],0xffffffff,puVar11[0xf],puVar11[0x11]);
            DAT_00858df8 = local_8c;
            return 0;
          }
          if (uVar8 == 3) {
            thunk_FUN_0052e8f0();
            DAT_00858df8 = local_8c;
            return 0;
          }
          if (uVar8 != 0) {
            if (uVar8 != 2) {
              DAT_00858df8 = local_8c;
              return 0;
            }
            thunk_FUN_0052e5e0();
            DAT_00858df8 = local_8c;
            return 0;
          }
          bVar26 = *(byte *)(puVar11 + 0x69);
          if ((2 < bVar26) &&
             ((((bVar26 < 5 || (bVar26 == 7)) && (*(HANDLE *)((int)puVar11 + 0x1dd) != (HANDLE)0x0))
              && (DVar7 = WaitForSingleObject(*(HANDLE *)((int)puVar11 + 0x1dd),0), DVar7 == 0)))) {
            FindNextChangeNotification(*(HANDLE *)((int)puVar11 + 0x1dd));
            if (*(char *)(puVar11 + 0x69) != '\a') {
              thunk_FUN_00532d50(*(uint *)((int)puVar11 + 0x1e1));
            }
            puVar11[10] = 5;
            piVar17 = (int *)((int)puVar11 + 0x1b5);
            iVar6 = 10;
            do {
              if (*piVar17 != 0) {
                FUN_006e6080(puVar11,2,*piVar17,puVar11 + 6);
              }
              piVar17 = piVar17 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (*(short *)((int)puVar11 + 0x172) == 3) {
            iVar6 = puVar11[0x14];
            if ((int)puVar11[0x11] < iVar6) {
              puVar11[0x11] = puVar11[0x11] + 0x1e;
            }
            if (iVar6 <= (int)puVar11[0x11]) {
              puVar11[0x11] = iVar6;
              *(undefined2 *)((int)puVar11 + 0x172) = 1;
              thunk_FUN_0052f900(puVar11,1);
            }
            uVar8 = puVar11[0x11];
            uVar14 = puVar11[0xf];
            uVar23 = puVar11[0x18];
          }
          else {
            if (*(short *)((int)puVar11 + 0x172) != 4) goto LAB_00534016;
            if ((int)(puVar11[0x14] - puVar11[0x12]) < (int)puVar11[0x11]) {
              puVar11[0x11] = puVar11[0x11] + -0x1e;
            }
            if ((int)puVar11[0x11] <= (int)(puVar11[0x14] - puVar11[0x12])) {
              DAT_0080878c = 0;
              local_38 = 0;
              local_34 = 0;
              local_3c = 1;
              if (puVar11[0x67] != 0x6102) {
                thunk_FUN_0054edf0((undefined4 *)0x5,&local_3c,1,0xffffffff);
              }
              puVar11[0x11] = puVar11[0x14] - puVar11[0x12];
              *(undefined2 *)((int)puVar11 + 0x172) = 2;
              if (puVar11[0x68] != 0) {
                *(undefined1 *)(puVar11 + 0x69) = 1;
                thunk_FUN_0052fb00();
                puVar11[0x68] = 0;
              }
              if (puVar11[0x67] != 0) {
                if ((*(char *)(puVar11 + 0x69) == '\x05') &&
                   (*(char *)((int)puVar11 + 0x1ab) == '\x02')) {
                  _DAT_0080f32e = 1;
                  if (DAT_00808783 == '\x01') {
                    _DAT_008087a0 = CONCAT31(_DAT_008087a1,9);
                  }
                  else if (DAT_00808783 == '\x02') {
                    _DAT_008087a0 = CONCAT31(_DAT_008087a1,10);
                  }
                }
                puVar9 = puVar11 + 6;
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar9 = 0;
                  puVar9 = puVar9 + 1;
                }
                puVar11[9] = 1;
                puVar11[10] = puVar11[0x67];
                if (puVar11[0x67] == 0x610a) {
                  puVar11[0xb] = 6;
                }
                FUN_006e3b50(puVar11 + 6);
                puVar11[0x67] = 0;
              }
            }
            uVar8 = puVar11[0x11];
            uVar14 = puVar11[0xf];
            uVar23 = puVar11[0x18];
          }
          FUN_006b3640(DAT_008075a8,uVar23,0xffffffff,uVar14,uVar8);
LAB_00534016:
          if ((uint)(puVar11[0xe] - *(int *)((int)puVar11 + 0x301)) < 0x7d1) {
            DAT_00858df8 = local_8c;
            return 0;
          }
          *(undefined4 *)((int)puVar11 + 0x301) = puVar11[0xe];
          uVar8 = thunk_FUN_00567060(0x807658);
          if (uVar8 != 0) {
            DAT_00858df8 = local_8c;
            return 0;
          }
          thunk_FUN_00571320(&DAT_00807620,DAT_00856d78);
          DAT_00858df8 = local_8c;
          return 0;
        }
        pcVar18 = s_BUT_SLUP_007c3e40;
      }
      else {
        if (0xc002 < uVar8) {
          if (uVar8 == 0xc003) {
            if ((*(char *)(puVar11 + 0x69) == '\x05') && (*(char *)((int)puVar11 + 0x1ab) == '\a'))
            {
              DAT_00808788 = 0;
            }
            if (*(char *)((int)puVar11 + 0x1a9) == '\0') {
              DAT_00858df8 = local_8c;
              return 0;
            }
            *(char *)(puVar11 + 0x69) = *(char *)((int)puVar11 + 0x1a9);
            *(undefined1 *)((int)puVar11 + 0x1a9) = *(undefined1 *)((int)puVar11 + 0x1aa);
            *(undefined1 *)((int)puVar11 + 0x1aa) = 0;
            thunk_FUN_0052fb00();
            DAT_00858df8 = local_8c;
            return 0;
          }
          if (uVar8 != 0xc004) {
            if (uVar8 != 0xc005) {
              DAT_00858df8 = local_8c;
              return 0;
            }
            pcVar31 = thunk_FUN_00529fe0;
            pCVar10 = thunk_FUN_00571240(s_BUT_PLUS_007c7360,0);
            bVar26 = 1;
            goto LAB_00534654;
          }
          UVar30 = 0x274f;
          goto LAB_00536db5;
        }
        if (uVar8 == 0xc002) {
          UVar30 = 0x274e;
          goto LAB_00536db5;
        }
        if (0xa106 < uVar8) {
          if (uVar8 != 0xc001) {
            DAT_00858df8 = local_8c;
            return 0;
          }
          if ((*(char *)(puVar11 + 0x69) == '\x05') && (*(char *)((int)puVar11 + 0x1ab) == '\a')) {
            DAT_00808788 = 0;
          }
          puVar11[0x68] = 1;
          *(undefined4 *)(param_1 + 0x10) = 0xa101;
          (**(code **)*DAT_00802a30)(param_1);
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (0xa104 < uVar8) {
          if (*(char *)(puVar11 + 0x69) != '\x05') {
            DAT_00858df8 = local_8c;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(uint *)(param_1 + 0x10) = (uVar8 != 0xa105) + 0xc09f;
          (**(code **)*puVar11)(param_1);
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (uVar8 != 0x8165) {
          DAT_00858df8 = local_8c;
          return 0;
        }
        pcVar18 = s_BUT_SLDN_007c3e34;
      }
      pcVar31 = thunk_FUN_00529fe0;
      pCVar10 = thunk_FUN_00571240(pcVar18,0);
      bVar26 = 6;
    }
LAB_00534654:
    thunk_FUN_0053d7a0(puVar11,param_1,bVar26,pCVar10,pcVar31);
    DAT_00858df8 = local_8c;
    return 0;
  }
  switch(uVar8) {
  case 0xc09f:
    uVar5 = *(undefined1 *)(puVar11 + 0x69);
    switch(uVar5) {
    case 1:
      *(undefined1 *)((int)puVar11 + 0x1a9) = uVar5;
      *(undefined1 *)(puVar11 + 0x69) = 3;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 2:
      uVar2 = *(undefined1 *)((int)puVar11 + 0x1a9);
      *(undefined1 *)((int)puVar11 + 0x1a9) = uVar5;
      *(undefined1 *)((int)puVar11 + 0x1aa) = uVar2;
      *(undefined1 *)(puVar11 + 0x69) = 7;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 5:
      switch(*(undefined1 *)((int)puVar11 + 0x1ab)) {
      case 1:
        goto switchD_00534835_caseD_1;
      case 2:
        uVar8 = 0xffffffff;
        pcVar18 = &DAT_00807680;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = (char *)&DAT_0080ee1a;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)&DAT_0080ee1a;
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = (char *)&DAT_00807ddd;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)&DAT_0080ee1a;
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar8 = 0xffffffff;
        pcVar18 = PTR_DAT_0079ad00;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)&DAT_0080ee1a;
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = (char *)((int)puVar11 + 0x1f5);
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)&DAT_0080ee1a;
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        thunk_FUN_0052f2b0(puVar11,-1);
        puVar11[0x67] = 0x6100;
        DAT_0080879c = 1;
        DAT_00858df8 = local_8c;
        return 0;
      case 3:
        wsprintfA((LPSTR)&DAT_0080ee1a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080ef1e);
        thunk_FUN_0052f2b0(puVar11,-1);
        uVar8 = 0xffffffff;
        puVar11[0x67] = 0x6100;
        pcVar18 = (char *)&DAT_0080ee1a;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = &DAT_0080ed16;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        thunk_FUN_0056e9e0(&DAT_00807620,0);
        puVar11 = &DAT_0080a14f;
        puVar9 = &DAT_008087b6;
        for (iVar6 = 0x666; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined1 *)puVar9 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)&DAT_0080baec;
        puVar9 = &DAT_0080e43b;
        for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar9 = puVar9 + 1;
        }
        if (DAT_0080ed12 != (undefined4 *)0x0) {
          FUN_006ab060(&DAT_0080ed12);
        }
        DAT_0080ed12 = (undefined4 *)FUN_006aac70(0x8db);
        puVar11 = &DAT_0080bae8;
        puVar9 = DAT_0080ed12;
        for (iVar6 = 0x236; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar9 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = *(undefined2 *)puVar11;
        *(undefined1 *)((int)puVar9 + 2) = *(undefined1 *)((int)puVar11 + 2);
        DAT_0080879c = 0;
        DAT_00858df8 = local_8c;
        return 0;
      case 4:
        thunk_FUN_0052f2b0(puVar11,-1);
        puVar11[0x67] = 0x6102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
        }
        if (DAT_008067a0 == '\0') {
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (DAT_00802a38 != (int *)0x0) {
          uVar32 = ((uint)(DAT_00802a38[0x39] - DAT_00802a38[0xd]) < 6000) + 2;
          goto LAB_00535271;
        }
        goto LAB_0053526f;
      case 5:
        thunk_FUN_0052f2b0(puVar11,-1);
        puVar11[0x67] = 0x7102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
          DAT_00858df8 = local_8c;
          return 0;
        }
        break;
      case 6:
        uVar8 = 0xffffffff;
        pcVar18 = &DAT_00807680;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = (char *)(puVar11 + 0x1b);
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = (char *)&DAT_00807ddd;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        FUN_006b8280((char *)(puVar11 + 0x1b),(char *)(puVar11 + 0x1b));
        uVar8 = 0xffffffff;
        pcVar18 = PTR_DAT_0079ad00;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = (char *)((int)puVar11 + 0x1f5);
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = PTR_DAT_0079acf4;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        DeleteFileA((LPCSTR)(puVar11 + 0x1b));
        uVar8 = 0xffffffff;
        pcVar18 = &DAT_00807680;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = (char *)(puVar11 + 0x1b);
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = (char *)&DAT_00807ddd;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        FUN_006b8280((char *)(puVar11 + 0x1b),(char *)(puVar11 + 0x1b));
        uVar8 = 0xffffffff;
        pcVar18 = PTR_DAT_0079ad00;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = (char *)((int)puVar11 + 0x1f5);
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar18 = PTR_DAT_0079acf8;
        do {
          pcVar20 = pcVar18;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar20 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar20;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar18 = (char *)(puVar11 + 0x1b);
        do {
          pcVar19 = pcVar18;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar19 = pcVar18 + 1;
          cVar1 = *pcVar18;
          pcVar18 = pcVar19;
        } while (cVar1 != '\0');
        pcVar18 = pcVar20 + -uVar8;
        pcVar20 = pcVar19 + -1;
        for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar20 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar20 = pcVar20 + 1;
        }
        DeleteFileA((LPCSTR)(puVar11 + 0x1b));
        uVar5 = *(undefined1 *)((int)puVar11 + 0x1a9);
        *(undefined1 *)((int)puVar11 + 0x1a9) = *(undefined1 *)((int)puVar11 + 0x1aa);
        *(undefined1 *)(puVar11 + 0x69) = uVar5;
        thunk_FUN_0052fb00();
        DAT_00858df8 = local_8c;
        return 0;
      case 7:
        puVar11[10] = 0x44ff;
        (**(code **)(*DAT_00802a38 + 0x20))(puVar11 + 6);
        puVar11[10] = 0xc001;
        puVar11[0xd] = 0;
        (**(code **)*puVar11)(puVar11 + 6);
        DAT_00858df8 = local_8c;
        return 0;
      }
      break;
    case 6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 1;
      thunk_FUN_00568010(&DAT_00807658,1);
      DAT_00858df8 = local_8c;
      return 0;
    case 7:
      thunk_FUN_005713b0(0x807620);
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        DAT_00807300._0_1_ = '\x01';
      }
      else if (iVar6 == 2) {
        DAT_00807300._0_1_ = '\b';
      }
      else if (iVar6 == 3) {
        DAT_00807300._0_1_ = '\x02';
      }
      switch((char)DAT_00807300) {
      case '\x01':
        local_c = (undefined4 *)0x0;
        break;
      case '\x02':
        local_d0 = DAT_00858df8;
        DAT_00858df8 = &local_d0;
        iVar6 = __setjmp3(local_cc,0,unaff_EDI,unaff_ESI);
        if (iVar6 == 0) {
          if (DAT_00807658 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x80) & 1;
          }
          if (uVar8 != 0) {
            FUN_006b7e00(DAT_0080765c,3,&local_30,&local_28);
          }
          uVar8 = (uint)(local_30 + local_28) >> 1;
        }
        else {
          uVar8 = 0;
        }
        if (DAT_00807658 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(uint *)(DAT_0080765c + 0x80) & 1;
        }
        DAT_00858df8 = local_d0;
        if (uVar14 == 0) {
LAB_005350ba:
          uVar14 = 0;
        }
        else {
          uVar14 = (*(int *)(DAT_0080765c + 0x94) - *(int *)(DAT_0080765c + 0x90)) + 1;
        }
        goto LAB_005350bc;
      default:
        break;
      case '\x04':
        local_224 = DAT_00858df8;
        DAT_00858df8 = &local_224;
        iVar6 = __setjmp3(local_220,0,unaff_EDI,unaff_ESI);
        if (iVar6 == 0) {
          if (DAT_00807658 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x68) & 1;
          }
          if (uVar8 != 0) {
            FUN_006b7e00(DAT_0080765c,2,&local_24,&local_2c);
          }
          uVar8 = local_24 + local_2c >> 1;
        }
        else {
          uVar8 = 0;
        }
        if (DAT_00807658 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(uint *)(DAT_0080765c + 0x68) & 1;
        }
        DAT_00858df8 = local_224;
        if (uVar14 == 0) goto LAB_005350ba;
        uVar14 = (*(int *)(DAT_0080765c + 0x7c) - *(int *)(DAT_0080765c + 0x78)) + 1;
LAB_005350bc:
        local_c = (undefined4 *)((uVar8 * 0x1f) / uVar14);
        puVar11 = local_10;
        break;
      case '\b':
        local_c = (undefined4 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      puVar9 = local_c;
      thunk_FUN_0052edf0(0,(byte)local_c);
      puVar11[10] = 0x22;
      puVar11[0xb] = puVar9;
      FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1c5),puVar11 + 6);
      puVar11[10] = 0x20;
      puVar11[0xb] = (uint)((char)DAT_00807300 != '\x01');
      FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1c5),puVar11 + 6);
      thunk_FUN_00571320(&DAT_00807620,DAT_00856d78);
      DAT_00858df8 = local_8c;
      return 0;
    case 8:
      DAT_0080733b = 4 - **(char **)(param_1 + 0x14);
      if (DAT_0080877e == '\0') {
        iVar6 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x14);
      }
      else {
        iVar6 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 8);
      }
      local_44 = (uint)DAT_0080733b;
      if (DAT_00808783 == '\x03') {
        local_48 = 4;
        thunk_FUN_0054edf0((undefined4 *)0x5,&local_48,1,0xffffffff);
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (DAT_00807598 != (void *)0x0) {
        FUN_006e8640(DAT_00807598,*(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x10),
                     *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 4));
        DAT_00858df8 = local_8c;
        return 0;
      }
      break;
    case 9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      DAT_00858df8 = local_8c;
      return 0;
    case 0xd:
      *(char *)((int)puVar11 + 0x305) = **(char **)(param_1 + 0x14) + -1;
      puVar11[10] = 0x20;
      puVar11[0xb] = 1;
      FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1b9),puVar11 + 6);
      DAT_00858df8 = local_8c;
      return 0;
    }
    break;
  case 0xc0a0:
    cVar1 = *(char *)(puVar11 + 0x69);
    switch(cVar1) {
    case '\x01':
      *(char *)((int)puVar11 + 0x1a9) = cVar1;
      *(undefined1 *)(puVar11 + 0x69) = 4;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case '\x02':
      *(undefined1 *)((int)puVar11 + 0x1aa) = *(undefined1 *)((int)puVar11 + 0x1a9);
      *(char *)((int)puVar11 + 0x1a9) = cVar1;
      *(undefined1 *)(puVar11 + 0x69) = 6;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case '\x03':
switchD_00535190_caseD_3:
      puVar11[10] = 0xc0a1;
      puVar11[0xd] = 0;
      (**(code **)*puVar11)(puVar11 + 6);
      DAT_00858df8 = local_8c;
      return 0;
    default:
      goto switchD_005347d0_caseD_c0a7;
    case '\x05':
    case '\v':
      if (*(char *)((int)puVar11 + 0x1a9) != '\0') {
        *(char *)(puVar11 + 0x69) = *(char *)((int)puVar11 + 0x1a9);
        *(undefined1 *)((int)puVar11 + 0x1a9) = *(undefined1 *)((int)puVar11 + 0x1aa);
        thunk_FUN_0052fb00();
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (cVar1 == '\x05') {
        *(undefined1 *)(puVar11 + 0x69) = 1;
        thunk_FUN_0052fb00();
        thunk_FUN_0052f2b0(puVar11,-1);
        if (*(char *)((int)puVar11 + 0x1ab) != '\a') {
          DAT_00858df8 = local_8c;
          return 0;
        }
        DAT_00808788 = 0;
        DAT_00858df8 = local_8c;
        return 0;
      }
      thunk_FUN_0052f2b0(puVar11,-1);
      if (*(byte *)((int)puVar11 + 0x1ab) < 10) {
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (0xb < *(byte *)((int)puVar11 + 0x1ab)) {
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (DAT_008067a0 == '\0') {
        puVar11[0x67] = 0x6102;
        DAT_00858df8 = local_8c;
        return 0;
      }
      break;
    case '\x06':
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 2;
      thunk_FUN_00568010(&DAT_00807658,2);
      DAT_00858df8 = local_8c;
      return 0;
    case '\b':
      DAT_0080733a = '\x03' - **(char **)(param_1 + 0x14);
      DAT_00858df8 = local_8c;
      return 0;
    case '\t':
      DAT_00807322 = (uint)(DAT_00807322 == 0);
      DAT_00858df8 = local_8c;
      return 0;
    case '\r':
      DAT_00807348 = *(undefined1 *)((int)puVar11 + 0x305);
      thunk_FUN_0052f2b0(puVar11,-1);
      puVar11[0x67] = 0x6107;
      DAT_00858df8 = local_8c;
      return 0;
    }
LAB_0053526f:
    uVar32 = 4;
LAB_00535271:
    CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,uVar32);
    puVar11[0x67] = 0x610a;
    DAT_00858df8 = local_8c;
    return 0;
  case 0xc0a1:
    uVar5 = *(undefined1 *)(puVar11 + 0x69);
    switch(uVar5) {
    case 1:
      *(undefined4 *)((int)puVar11 + 0x1a5) = 0x3e83;
      *(undefined1 *)((int)puVar11 + 0x1a9) = uVar5;
      *(undefined1 *)((int)puVar11 + 0x1ab) = 3;
      *(undefined1 *)(puVar11 + 0x69) = 5;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 2:
      uVar2 = *(undefined1 *)((int)puVar11 + 0x1a9);
      *(undefined1 *)((int)puVar11 + 0x1a9) = uVar5;
      *(undefined1 *)((int)puVar11 + 0x1aa) = uVar2;
      *(undefined1 *)(puVar11 + 0x69) = 8;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 3:
      puVar11[10] = 0x32;
      FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1b9),puVar11 + 6);
      if (*(int *)(*(int *)((int)puVar11 + 0x1f1) + 8) < 1) {
        pcVar18 = (char *)0x0;
      }
      else {
        pcVar18 = (char *)**(undefined4 **)(*(int *)((int)puVar11 + 0x1f1) + 0x14);
      }
      uVar8 = 0xffffffff;
      do {
        pcVar20 = pcVar18;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar20 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar20;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pbVar12 = (byte *)((int)puVar11 + 0x1f5);
      pbVar15 = (byte *)(pcVar20 + -uVar8);
      pbVar21 = pbVar12;
      for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pbVar21 = *(undefined4 *)pbVar15;
        pbVar15 = pbVar15 + 4;
        pbVar21 = pbVar21 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar21 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        pbVar21 = pbVar21 + 1;
      }
      pbVar21 = &DAT_008016a0;
      pbVar15 = pbVar12;
      do {
        bVar26 = *pbVar15;
        bVar22 = bVar26 < *pbVar21;
        if (bVar26 != *pbVar21) {
LAB_0053556a:
          iVar6 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
          goto LAB_0053556f;
        }
        if (bVar26 == 0) break;
        bVar26 = pbVar15[1];
        bVar22 = bVar26 < pbVar21[1];
        if (bVar26 != pbVar21[1]) goto LAB_0053556a;
        pbVar15 = pbVar15 + 2;
        pbVar21 = pbVar21 + 2;
      } while (bVar26 != 0);
      iVar6 = 0;
LAB_0053556f:
      if (iVar6 == 0) {
        *(undefined4 *)((int)puVar11 + 0x1a5) = 0x3f4b;
        *(undefined1 *)((int)puVar11 + 0x1aa) = *(undefined1 *)((int)puVar11 + 0x1a9);
        *(undefined1 *)((int)puVar11 + 0x1a9) = *(undefined1 *)(puVar11 + 0x69);
        *(undefined1 *)(puVar11 + 0x69) = 0xb;
        thunk_FUN_0052fb00();
        DAT_00858df8 = local_8c;
        return 0;
      }
      iVar6 = thunk_FUN_00533470(pbVar12);
      if (iVar6 != 0) {
        *(undefined1 *)((int)puVar11 + 0x1aa) = *(undefined1 *)((int)puVar11 + 0x1a9);
        *(undefined4 *)((int)puVar11 + 0x1a5) = 0x3f49;
        *(undefined1 *)((int)puVar11 + 0x1a9) = *(undefined1 *)(puVar11 + 0x69);
        *(undefined1 *)(puVar11 + 0x69) = 5;
        *(undefined1 *)((int)puVar11 + 0x1ab) = 1;
        thunk_FUN_0052fb00();
        DAT_00858df8 = local_8c;
        return 0;
      }
switchD_00534835_caseD_1:
      thunk_FUN_005335e0();
      DAT_00858df8 = local_8c;
      return 0;
    case 4:
      puVar11[10] = 0x26;
      FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1b5),puVar11 + 6);
      if ((int)puVar11[0xb] < *(int *)(*(int *)((int)puVar11 + 0x1e9) + 8)) {
        pcVar18 = *(char **)(*(int *)(*(int *)((int)puVar11 + 0x1e9) + 0x14) + puVar11[0xb] * 4);
      }
      else {
        pcVar18 = (char *)0x0;
      }
      uVar8 = 0xffffffff;
      do {
        pcVar20 = pcVar18;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar20 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar20;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar18 = pcVar20 + -uVar8;
      pcVar20 = (char *)((int)puVar11 + 0x1f5);
      for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar20 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar20 = pcVar20 + 1;
      }
      *(undefined4 *)((int)puVar11 + 0x1e1) = puVar11[0xb];
      *(undefined4 *)((int)puVar11 + 0x1a5) = 0x3f48;
      *(undefined1 *)((int)puVar11 + 0x1aa) = *(undefined1 *)((int)puVar11 + 0x1a9);
      *(undefined1 *)((int)puVar11 + 0x1a9) = *(undefined1 *)(puVar11 + 0x69);
      *(undefined1 *)((int)puVar11 + 0x1ab) = 2;
      *(undefined1 *)(puVar11 + 0x69) = 5;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 4;
      thunk_FUN_00568010(&DAT_00807658,4);
      thunk_FUN_00568dd0(&DAT_00807658,1,(char *)0x0,0x4b7,(int *)0x0,0);
      DAT_00858df8 = local_8c;
      return 0;
    case 9:
      DAT_0080731e = (uint)(DAT_0080731e == 0);
      DAT_00858df8 = local_8c;
      return 0;
    case 0xd:
      DAT_00807342 = (uint)(DAT_00807342 == 0);
      if (DAT_008016d8 != 0) {
        thunk_FUN_0052d980();
        DAT_00858df8 = local_8c;
        return 0;
      }
      break;
    case 0xe:
      local_c = (undefined4 *)0x0;
      local_14 = (undefined4 *)0x0;
      local_20 = (ushort *)0x0;
      local_8 = 1;
      local_1c = (uint *)0x0;
      puVar11[10] = 0x26;
      FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1b5),puVar11 + 6);
      iVar6 = *(int *)((int)puVar11 + 0x2fd);
      if ((uint)puVar11[0xb] < *(uint *)(iVar6 + 0xc)) {
        iVar6 = *(int *)(iVar6 + 8) * puVar11[0xb] + *(int *)(iVar6 + 0x1c);
      }
      else {
        iVar6 = 0;
      }
      if (*(int *)(iVar6 + 0x6c) == 0) {
        switch(_DAT_008087a0 & 0xff) {
        case 1:
        case 4:
        case 6:
        case 7:
        case 0xd:
        case 0xe:
        case 0x13:
          wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079acf0,
                    PTR_s_STRATEGS_0079acfc);
          break;
        case 2:
        case 3:
        case 5:
        case 8:
        case 0xf:
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080ef1e);
        }
        local_19c = DAT_00858df8;
        DAT_00858df8 = &local_19c;
        iVar6 = __setjmp3(local_198,0,unaff_EDI,unaff_ESI);
        puVar11 = local_c;
        if (iVar6 == 0) {
          puVar11 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
          iVar6 = *(int *)((int)local_10 + 0x2fd);
          if ((uint)local_10[0xb] < *(uint *)(iVar6 + 0xc)) {
            iVar6 = *(int *)(iVar6 + 8) * local_10[0xb] + *(int *)(iVar6 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          local_c = puVar11;
          local_20 = thunk_FUN_00648ab0((int)puVar11,(char *)(iVar6 + 0x4c),(int *)&local_18);
          uVar8 = local_8;
          if (local_20 != (ushort *)0x0) {
            local_14 = FUN_006aac10(local_18 + local_8 * 2);
            *(undefined1 *)local_14 = 1;
            pbVar12 = (byte *)((int)local_14 + uVar8);
            *pbVar12 = DAT_0080874d;
            puVar16 = local_20;
            pbVar12 = pbVar12 + uVar8;
            for (uVar14 = local_18 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined4 *)pbVar12 = *(undefined4 *)puVar16;
              puVar16 = puVar16 + 2;
              pbVar12 = pbVar12 + 4;
            }
            for (uVar8 = local_18 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar12 = (byte)*puVar16;
              puVar16 = (ushort *)((int)puVar16 + 1);
              pbVar12 = pbVar12 + 1;
            }
            thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (uint *)0x1;
            puVar11 = local_c;
          }
        }
        DAT_00858df8 = local_19c;
        if (puVar11 != (undefined4 *)0x0) {
          FUN_006f1170(puVar11);
        }
        if (local_20 != (ushort *)0x0) {
          FUN_006ab060(&local_20);
        }
        if (local_14 != (undefined4 *)0x0) {
          FUN_006ab060(&local_14);
        }
      }
      else {
        local_14 = FUN_006aac10(2);
        local_10 = puVar11;
        if (local_14 != (undefined4 *)0x0) {
          *(undefined1 *)local_14 = 0;
          *(byte *)((int)local_14 + 1) = DAT_0080874d;
          thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,2);
          FUN_006ab060(&local_14);
          local_1c = (uint *)0x1;
        }
      }
      if (local_1c != (uint *)0x0) {
        local_10[10] = 0xc001;
        local_10[0xd] = 0;
        (**(code **)*local_10)(local_10 + 6);
        DAT_00858df8 = local_8c;
        return 0;
      }
    }
    break;
  case 0xc0a2:
    uVar5 = *(undefined1 *)(puVar11 + 0x69);
    switch(uVar5) {
    case 1:
      if (DAT_008067a0 == '\0') {
        iVar6 = 0x3e84;
      }
      else {
        iVar6 = 0x3e96 - (uint)((uint)(DAT_00802a38[0x39] - DAT_00802a38[0xd]) < 6000);
      }
      *(undefined1 *)((int)puVar11 + 0x1a9) = uVar5;
      *(int *)((int)puVar11 + 0x1a5) = iVar6;
      *(undefined1 *)((int)puVar11 + 0x1ab) = 4;
      *(undefined1 *)(puVar11 + 0x69) = 5;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 2:
      uVar2 = *(undefined1 *)((int)puVar11 + 0x1a9);
      *(undefined1 *)((int)puVar11 + 0x1a9) = uVar5;
      *(undefined1 *)((int)puVar11 + 0x1aa) = uVar2;
      *(undefined1 *)(puVar11 + 0x69) = 9;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 3:
    case 4:
      puVar11[10] = 0x26;
      FUN_006e6080(puVar11,2,*(undefined4 *)((int)puVar11 + 0x1b5),puVar11 + 6);
      if ((int)puVar11[0xb] < *(int *)(*(int *)((int)puVar11 + 0x1e9) + 8)) {
        pcVar18 = *(char **)(*(int *)(*(int *)((int)puVar11 + 0x1e9) + 0x14) + puVar11[0xb] * 4);
      }
      else {
        pcVar18 = (char *)0x0;
      }
      uVar8 = 0xffffffff;
      do {
        pcVar20 = pcVar18;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar20 = pcVar18 + 1;
        cVar1 = *pcVar18;
        pcVar18 = pcVar20;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar18 = pcVar20 + -uVar8;
      pcVar20 = (char *)((int)puVar11 + 0x1f5);
      for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar20 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        pcVar20 = pcVar20 + 1;
      }
      *(undefined4 *)((int)puVar11 + 0x1e1) = puVar11[0xb];
      *(undefined4 *)((int)puVar11 + 0x1a5) = 0x3f4a;
      *(undefined1 *)((int)puVar11 + 0x1aa) = *(undefined1 *)((int)puVar11 + 0x1a9);
      *(undefined1 *)((int)puVar11 + 0x1a9) = *(undefined1 *)(puVar11 + 0x69);
      *(undefined1 *)((int)puVar11 + 0x1ab) = 6;
      *(undefined1 *)(puVar11 + 0x69) = 5;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 8;
      thunk_FUN_00568010(&DAT_00807658,8);
      DAT_00858df8 = local_8c;
      return 0;
    case 8:
      DAT_00858df8 = local_8c;
      DAT_00807349 = **(char **)(param_1 + 0x14) + -1;
      return 0;
    case 9:
      DAT_00807326 = DAT_00807326 == '\0';
      thunk_FUN_00440700((uint)(byte)DAT_00807326);
      DAT_00858df8 = local_8c;
      return 0;
    case 0xd:
      DAT_00807346 = (*(char *)(param_1 + 0x14) + '\x01') * '\x05';
      thunk_FUN_00540760((undefined4 *)puVar11[0x1a],0xaa,0x6f,'\x01',(byte *)puVar11[99]);
      wsprintfA((LPSTR)(puVar11 + 0x1b),&DAT_007c1890,(uint)(byte)DAT_00807346);
      FUN_00710a90(puVar11[0x1a],0,0xaa,0x6f,*(int *)(puVar11[99] + 4),*(int *)(puVar11[99] + 8));
      FUN_00711b70(puVar11 + 0x1b,-2,-1,0,-1,-1);
      if (DAT_008016d8 != 0) {
        thunk_FUN_0052d690();
        DAT_00858df8 = local_8c;
        return 0;
      }
    }
    break;
  case 0xc0a3:
    uVar5 = *(undefined1 *)(puVar11 + 0x69);
    switch(uVar5) {
    case 1:
      *(undefined4 *)((int)puVar11 + 0x1a5) = 0x3e85;
      *(undefined1 *)((int)puVar11 + 0x1a9) = uVar5;
      *(undefined1 *)((int)puVar11 + 0x1ab) = 5;
      *(undefined1 *)(puVar11 + 0x69) = 5;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 2:
      uVar2 = *(undefined1 *)((int)puVar11 + 0x1a9);
      *(undefined1 *)((int)puVar11 + 0x1a9) = uVar5;
      *(undefined1 *)((int)puVar11 + 0x1aa) = uVar2;
      *(undefined1 *)(puVar11 + 0x69) = 0xd;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    case 6:
      DAT_0080730e = (uint)(*(int *)(param_1 + 0x14) * 4000) / 0x1e - 4000;
      thunk_FUN_005682c0(&DAT_00807658,DAT_0080730e);
      thunk_FUN_0052edf0(0,*(byte *)(param_1 + 0x14));
      DAT_00858df8 = local_8c;
      return 0;
    case 7:
      if ((char)DAT_00807300 == '\x02') {
        if (DAT_00807658 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(DAT_0080765c + 0x80) & 1;
        }
        if (uVar8 != 0) {
          if (DAT_00807658 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x80) & 1;
          }
          if (uVar8 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (*(int *)(DAT_0080765c + 0x94) - *(int *)(DAT_0080765c + 0x90)) + 1;
          }
          local_8 = (uint)((iVar6 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
          DAT_00807300._2_2_ = (undefined2)local_8;
          uRam00807304 = (undefined2)(local_8 >> 0x10);
          local_158 = DAT_00858df8;
          DAT_00858df8 = &local_158;
          iVar6 = __setjmp3(local_154,0,unaff_EDI,unaff_ESI);
          ppuVar4 = local_158;
          if (iVar6 == 0) {
            if (DAT_00807658 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(uint *)(DAT_0080765c + 0x80) & 1;
            }
            if (uVar8 != 0) {
              FUN_006b7f00(DAT_0080765c,3,local_8,local_8);
            }
            DAT_00858df8 = local_158;
            ppuVar4 = DAT_00858df8;
          }
LAB_00535ef1:
          DAT_00858df8 = ppuVar4;
          thunk_FUN_0052edf0(0,*(byte *)(param_1 + 0x14));
          DAT_00858df8 = local_8c;
          return 0;
        }
      }
      else if ((char)DAT_00807300 == '\x04') {
        if (DAT_00807658 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(DAT_0080765c + 0x68) & 1;
        }
        if (uVar8 != 0) {
          if (DAT_00807658 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x68) & 1;
          }
          if (uVar8 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (*(int *)(DAT_0080765c + 0x7c) - *(int *)(DAT_0080765c + 0x78)) + 1;
          }
          _DAT_00807306 = (uint)((iVar6 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
          local_114 = DAT_00858df8;
          DAT_00858df8 = &local_114;
          local_8 = _DAT_00807306;
          iVar6 = __setjmp3(local_110,0,unaff_EDI,unaff_ESI);
          ppuVar4 = local_114;
          if (iVar6 == 0) {
            if (DAT_00807658 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(uint *)(DAT_0080765c + 0x68) & 1;
            }
            if (uVar8 != 0) {
              FUN_006b7f00(DAT_0080765c,2,local_8,local_8);
            }
            DAT_00858df8 = local_114;
            ppuVar4 = DAT_00858df8;
          }
          goto LAB_00535ef1;
        }
      }
      else if ((char)DAT_00807300 == '\b') {
        DAT_0080730a = (uint)(*(int *)(param_1 + 0x14) * 4000) / 0x1e - 4000;
        thunk_FUN_005686c0(&DAT_00807658,DAT_0080730a);
        thunk_FUN_0052edf0(0,*(byte *)(param_1 + 0x14));
        DAT_00858df8 = local_8c;
        return 0;
      }
      break;
    case 9:
      DAT_00807328 = (uint)(DAT_00807328 == 0);
      if (DAT_00807328 != 0) {
        FUN_006ddb70((int)DAT_00807598);
        DAT_00858df8 = local_8c;
        return 0;
      }
      FUN_006ddbb0((int)DAT_00807598);
      DAT_00858df8 = local_8c;
      return 0;
    case 0xd:
      DAT_00807347 = *(byte *)(param_1 + 0x14);
      thunk_FUN_00540760((undefined4 *)puVar11[0x1a],0xaa,0x81,'\x01',(byte *)puVar11[99]);
      wsprintfA((LPSTR)(puVar11 + 0x1b),&DAT_007c1890,DAT_00807347 + 1);
      FUN_00710a90(puVar11[0x1a],0,0xaa,0x81,*(int *)(puVar11[99] + 4),*(int *)(puVar11[99] + 8));
      FUN_00711b70(puVar11 + 0x1b,-2,-1,0,-1,-1);
      DAT_00858df8 = local_8c;
      return 0;
    }
    break;
  case 0xc0a4:
    if (*(char *)(puVar11 + 0x69) == '\x01') {
      *(undefined1 *)((int)puVar11 + 0x1a9) = 1;
      *(undefined1 *)(puVar11 + 0x69) = 0xc;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    }
    if (*(char *)(puVar11 + 0x69) == '\t') {
      DAT_0080732c = (uint)(DAT_0080732c == 0);
      puVar11[10] = 0x440f;
      FUN_006e6000(puVar11,0xf,0,puVar11 + 6);
      if (DAT_00807598 != (void *)0x0) {
        FUN_006e8630(DAT_00807598,DAT_0080732c);
        DAT_00858df8 = local_8c;
        return 0;
      }
    }
    break;
  case 0xc0a5:
    bVar26 = *(byte *)(puVar11 + 0x69);
    if (bVar26 == 1) {
      *(undefined1 *)((int)puVar11 + 0x1a9) = 1;
      *(undefined1 *)(puVar11 + 0x69) = 2;
      thunk_FUN_0052fb00();
      DAT_00858df8 = local_8c;
      return 0;
    }
    if ((5 < bVar26) && (bVar26 < 8)) {
      if (DAT_00807658 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(DAT_0080765c + 0x50) & 1;
      }
      if (uVar8 != 0) {
        if (DAT_00807658 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(DAT_0080765c + 0x50) & 1;
        }
        if (uVar8 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*(int *)(DAT_0080765c + 100) - *(int *)(DAT_0080765c + 0x60)) + 1;
        }
        _DAT_00807312 = (uint)((iVar6 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
        local_1e0 = DAT_00858df8;
        DAT_00858df8 = &local_1e0;
        local_8 = _DAT_00807312;
        iVar6 = __setjmp3(local_1dc,0,unaff_EDI,unaff_ESI);
        if (iVar6 == 0) {
          if (DAT_00807658 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x50) & 1;
          }
          if (uVar8 != 0) {
            FUN_006b7f00(DAT_0080765c,1,local_8,local_8);
          }
        }
        DAT_00858df8 = local_1e0;
        thunk_FUN_0052edf0(2,*(byte *)(param_1 + 0x14));
        DAT_00858df8 = local_8c;
        return 0;
      }
    }
    break;
  case 0xc0a6:
    if ((5 < *(byte *)(puVar11 + 0x69)) && (*(byte *)(puVar11 + 0x69) < 8)) {
      if (DAT_00807658 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(DAT_0080765c + 0x38) & 1;
      }
      if (uVar8 != 0) {
        if (DAT_00807658 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(DAT_0080765c + 0x38) & 1;
        }
        if (uVar8 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*(int *)(DAT_0080765c + 0x4c) - *(int *)(DAT_0080765c + 0x48)) + 1;
        }
        _DAT_00807316 = (uint)((iVar6 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
        local_268 = DAT_00858df8;
        DAT_00858df8 = &local_268;
        local_8 = _DAT_00807316;
        iVar6 = __setjmp3(local_264,0,unaff_EDI,unaff_ESI);
        if (iVar6 == 0) {
          if (DAT_00807658 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x38) & 1;
          }
          if (uVar8 != 0) {
            FUN_006b7f00(DAT_0080765c,0,local_8,local_8);
          }
        }
        DAT_00858df8 = local_268;
        thunk_FUN_0052edf0(3,*(byte *)(param_1 + 0x14));
        DAT_00858df8 = local_8c;
        return 0;
      }
    }
    break;
  case 0xc0af:
    switch(*(undefined1 *)(puVar11 + 0x69)) {
    case 1:
      if (DAT_0080874e == '\x03') {
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e81;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        UVar30 = 0x3e81;
      }
      goto LAB_00536f8b;
    case 2:
      if (DAT_0080874e == '\x03') {
        uVar29 = puVar11[0x60];
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e8b;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        uVar29 = puVar11[0x60];
        UVar30 = 0x3e8b;
      }
      goto LAB_00536f92;
    default:
      goto switchD_005347d0_caseD_c0a7;
    case 5:
      UVar30 = 0x273e;
      goto LAB_00536db5;
    case 6:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3efc;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3efc;
      }
      break;
    case 7:
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar6 = 1;
          puVar13 = &LAB_00405c7c;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar30 = 0x3ee7;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
          iVar6 = 1;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar30 = 0x3ee7;
        }
      }
      else if (iVar6 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar6 = 1;
          puVar13 = &LAB_00405c7c;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar30 = 0x3ee5;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
          iVar6 = 1;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar30 = 0x3ee5;
        }
      }
      else {
        if (iVar6 != 3) {
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar6 = 1;
          puVar13 = &LAB_00405c7c;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar30 = 0x3ee6;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
          iVar6 = 1;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar30 = 0x3ee6;
        }
      }
      break;
    case 8:
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar30 = 0x3ef1;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        thunk_FUN_0052efb0(puVar11,param_1,pCVar10,UVar30,pcVar31,puVar13,iVar6);
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (iVar6 != 2) {
        if (iVar6 != 3) {
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar30 = 0x3ef2;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        thunk_FUN_0052efb0(puVar11,param_1,pCVar10,UVar30,pcVar31,puVar13,iVar6);
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        puVar13 = &LAB_00405c7c;
      }
      else {
joined_r0x0053686a:
        puVar13 = &LAB_00402919;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_00405b87;
        }
      }
LAB_00536434:
      UVar30 = 0x3ef0;
LAB_00536441:
      iVar6 = 1;
      pcVar31 = thunk_FUN_0052a4d0;
      pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
      thunk_FUN_0052efb0(puVar11,param_1,pCVar10,UVar30,pcVar31,puVar13,iVar6);
      DAT_00858df8 = local_8c;
      return 0;
    case 9:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef4;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef4;
      }
      break;
    case 0xd:
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar30 = 0x3e90;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        thunk_FUN_0052efb0(puVar11,param_1,pCVar10,UVar30,pcVar31,puVar13,iVar6);
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (iVar6 == 2) {
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar30 = 0x3e91;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        thunk_FUN_0052efb0(puVar11,param_1,pCVar10,UVar30,pcVar31,puVar13,iVar6);
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (iVar6 == 3) {
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar30 = 0x3e92;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        thunk_FUN_0052efb0(puVar11,param_1,pCVar10,UVar30,pcVar31,puVar13,iVar6);
        DAT_00858df8 = local_8c;
        return 0;
      }
      goto switchD_005347d0_caseD_c0a7;
    }
LAB_00536ee8:
    uVar29 = 0;
    iVar27 = 1;
    pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    pCVar10 = FUN_006f2c00(pCVar10,iVar27,uVar29);
    thunk_FUN_0052efb0(puVar11,param_1,pCVar10,UVar30,pcVar31,puVar13,iVar6);
    DAT_00858df8 = local_8c;
    return 0;
  case 0xc0b0:
    switch(*(undefined1 *)(puVar11 + 0x69)) {
    case 1:
      if (DAT_0080874e == '\x03') {
        uVar29 = puVar11[0x60];
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e82;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        uVar29 = puVar11[0x60];
        UVar30 = 0x3e82;
      }
      break;
    case 2:
      if (DAT_0080874e == '\x03') {
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e8a;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        UVar30 = 0x3e8a;
      }
      goto LAB_00536f8b;
    case 3:
      iVar6 = *(int *)((int)puVar11 + 0x1e5);
      uVar8 = *(uint *)(iVar6 + 0x14);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar6 + 8);
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;
      puVar9 = (undefined4 *)FUN_006b4fa0(iVar6);
      uVar5 = (undefined1)local_24;
      for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar9 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11(uVar5,uVar5));
        puVar9 = puVar9 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar9 = uVar5;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00710a90(*(int *)((int)puVar11 + 0x1e5),0,0,0,0,0);
      FUN_007119c0((uint *)**(undefined4 **)(param_1 + 0x14),0,-1,0);
      uVar3 = *(ushort *)(param_1 + 0x18);
      if ((uVar3 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
        FUN_006b5b10(*(int *)((int)puVar11 + 0x1e5),0,(uint)uVar3,(uint)*(ushort *)(param_1 + 0x1a),
                     (uint)uVar3,*(ushort *)(param_1 + 0x1a) + 10,0x6c,0xd);
      }
      iVar6 = *(int *)((int)puVar11 + 0x1e5);
      FUN_006b55f0((undefined4 *)puVar11[0x1a],0,0x26,0x1c,iVar6,0,0,0,*(int *)(iVar6 + 4),
                   *(int *)(iVar6 + 8));
      FUN_006b3640(DAT_008075a8,puVar11[0x18],0xffffffff,puVar11[0xf],puVar11[0x11]);
      DAT_00858df8 = local_8c;
      return 0;
    default:
      goto switchD_005347d0_caseD_c0a7;
    case 5:
      UVar30 = 0x273f;
      goto LAB_00536db5;
    case 6:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3efd;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3efd;
      }
      goto LAB_00536ee8;
    case 8:
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
          UVar30 = 0x3ef1;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
          UVar30 = 0x3ef1;
        }
        goto LAB_00536441;
      }
      if (iVar6 != 2) {
        if (iVar6 != 3) {
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
          UVar30 = 0x3ef2;
          goto LAB_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      puVar13 = &LAB_00405c7c;
      goto LAB_00536434;
    case 9:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef5;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef5;
      }
      goto LAB_00536ee8;
    case 0xb:
switchD_00536a2b_caseD_3:
      UVar30 = 0x2751;
LAB_00536db5:
      pCVar10 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      thunk_FUN_0053daf0(puVar11,param_1,pCVar10,UVar30);
      DAT_00858df8 = local_8c;
      return 0;
    case 0xd:
      if (DAT_0080874e == '\x03') {
        uVar29 = puVar11[0x60];
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e93;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        uVar29 = puVar11[0x60];
        UVar30 = 0x3e93;
      }
    }
    goto LAB_00536f92;
  case 0xc0b1:
    switch(*(undefined1 *)(puVar11 + 0x69)) {
    case 1:
      if (DAT_0080874e == '\x03') {
        uVar29 = puVar11[0x60];
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e83;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        uVar29 = puVar11[0x60];
        UVar30 = 0x3e83;
      }
      goto LAB_00536f92;
    case 2:
      if (DAT_0080874e == '\x03') {
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e8c;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        UVar30 = 0x3e8c;
      }
      goto LAB_00536f8b;
    case 3:
    case 4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto switchD_005347d0_caseD_c0a7;
    case 6:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3efe;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3efe;
      }
      break;
    case 8:
      if (**(int **)(param_1 + 0x14) == 1) {
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
          UVar30 = 0x3f02;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
          UVar30 = 0x3f02;
        }
      }
      else {
        if (**(int **)(param_1 + 0x14) != 2) {
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
          UVar30 = 0x3f03;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
          UVar30 = 0x3f03;
        }
      }
      goto LAB_00536441;
    case 9:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef6;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef6;
      }
      break;
    case 0xd:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef8;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef8;
      }
      break;
    case 0xe:
      UVar30 = 0x2752;
      goto LAB_00536db5;
    }
    goto LAB_00536ee8;
  case 0xc0b2:
    switch(*(undefined1 *)(puVar11 + 0x69)) {
    case 1:
      if (DAT_0080874e == '\x03') {
        puVar13 = &LAB_00404692;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar30 = 0x3e84;
      }
      else {
        UVar30 = 0x3e96 - ((uint)(DAT_00802a38[0x39] - DAT_00802a38[0xd]) < 6000);
      }
      goto LAB_00536f8b;
    case 2:
      if (DAT_0080874e == '\x03') {
        uVar29 = puVar11[0x60];
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e8d;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        uVar29 = puVar11[0x60];
        UVar30 = 0x3e8d;
      }
      goto LAB_00536f92;
    case 3:
    case 4:
      UVar30 = 0x2750;
      goto LAB_00536db5;
    default:
      goto switchD_005347d0_caseD_c0a7;
    case 6:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3eff;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3eff;
      }
      break;
    case 8:
      if (**(int **)(param_1 + 0x14) != 1) {
        if (**(int **)(param_1 + 0x14) != 2) {
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar13 = &LAB_00405c7c;
          UVar30 = 0x3f06;
        }
        else {
          puVar13 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_00405b87;
          }
          UVar30 = 0x3f06;
        }
        goto LAB_00536441;
      }
      if (DAT_0080874e == '\x03') {
        puVar13 = &LAB_00405c7c;
        UVar30 = 0x3ef2;
        goto LAB_00536441;
      }
LAB_00536d52:
      puVar13 = &LAB_00402919;
      if (DAT_0080874e != '\x01') {
        puVar13 = &LAB_00405b87;
      }
      UVar30 = 0x3ef2;
      goto LAB_00536441;
    case 9:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar13 = &LAB_00403fe9;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef7;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar31 = (code *)&LAB_0040235b;
        UVar30 = 0x3ef7;
      }
    }
    goto LAB_00536ee8;
  case 0xc0b3:
    cVar1 = *(char *)(puVar11 + 0x69);
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        if (cVar1 != '\t') {
          DAT_00858df8 = local_8c;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar6 = 0;
          puVar13 = &LAB_00403fe9;
          pcVar31 = (code *)&LAB_0040235b;
          UVar30 = 0x3f04;
        }
        else {
          puVar13 = &LAB_0040146a;
          if (DAT_0080874e != '\x01') {
            puVar13 = &LAB_0040211c;
          }
          iVar6 = 0;
          pcVar31 = (code *)&LAB_0040235b;
          UVar30 = 0x3f04;
        }
        goto LAB_00536ee8;
      }
      if (DAT_0080874e == '\x03') {
        puVar13 = &LAB_00404692;
        UVar30 = 0x3e8f;
      }
      else {
        puVar13 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_004039d1;
        }
        UVar30 = 0x3e8f;
      }
      goto LAB_00536f8b;
    }
    if (DAT_0080874e == '\x03') {
      uVar29 = puVar11[0x60];
      puVar13 = &LAB_00404692;
      UVar30 = 0x3e85;
    }
    else {
      puVar13 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar13 = &LAB_004039d1;
      }
      uVar29 = puVar11[0x60];
      UVar30 = 0x3e85;
    }
    goto LAB_00536f92;
  case 0xc0b4:
    if (*(char *)(puVar11 + 0x69) != '\x01') {
      if (*(char *)(puVar11 + 0x69) != '\t') {
        DAT_00858df8 = local_8c;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        puVar13 = &LAB_00403fe9;
      }
      else {
        puVar13 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar13 = &LAB_0040211c;
        }
      }
      iVar6 = 0;
      pcVar31 = (code *)&LAB_0040235b;
      UVar30 = 0x3f05;
      goto LAB_00536ee8;
    }
    if (DAT_0080874e == '\x03') {
      uVar29 = puVar11[0x60];
      puVar13 = &LAB_00404692;
      UVar30 = 0x3e86;
    }
    else {
      puVar13 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar13 = &LAB_004039d1;
      }
      uVar29 = puVar11[0x60];
      UVar30 = 0x3e86;
    }
    goto LAB_00536f92;
  case 0xc0b5:
    if (*(char *)(puVar11 + 0x69) != '\x01') {
      DAT_00858df8 = local_8c;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      puVar13 = &LAB_00404692;
    }
    else {
      puVar13 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar13 = &LAB_004039d1;
      }
    }
    UVar30 = 0x3e87;
LAB_00536f8b:
    uVar29 = puVar11[0x60];
LAB_00536f92:
    uVar25 = 0;
    iVar6 = 1;
    pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    pCVar10 = FUN_006f2c00(pCVar10,iVar6,uVar25);
    thunk_FUN_0053d920(puVar11,param_1,1,pCVar10,uVar29,UVar30,puVar13);
  }
switchD_005347d0_caseD_c0a7:
  DAT_00858df8 = local_8c;
  return 0;
}


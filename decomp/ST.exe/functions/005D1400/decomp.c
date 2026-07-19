
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::GetMessage */

undefined4 __thiscall SettMapMTy::GetMessage(SettMapMTy *this,int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  SettMapTy SVar4;
  undefined4 uVar5;
  StartSystemTy *this_00;
  int *piVar6;
  code *pcVar7;
  CursorClassTy *pCVar8;
  SettMapMTy *this_01;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined3 extraout_var;
  byte *pbVar14;
  SettMapTy SVar15;
  undefined4 unaff_ESI;
  char *pcVar16;
  char *pcVar17;
  SettMapTy *pSVar18;
  uint uVar19;
  void *unaff_EDI;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  SettMapTy *pSVar23;
  char *pcVar24;
  bool bVar25;
  bool bVar26;
  uint *puVar27;
  int iVar28;
  int iVar29;
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
  InternalExceptionFrame local_f4;
  undefined4 local_b0 [8];
  undefined4 local_90 [4];
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
  SettMapMTy *local_48;
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
  uVar10 = FUN_006e51b0(*(int *)(this + 0x10));
  uVar20 = 0;
  *(undefined4 *)(this + 0x61) = uVar10;
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar11 = __setjmp3(local_f4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_48;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_f4.previous;
    iVar28 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x986,0,iVar11,
                                &DAT_007a4ccc,s_SettMapMTy__GetMessage_007cd4e4);
    if (iVar28 != 0) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return uVar10;
    }
    RaiseInternalException(iVar11,0,s_E____titans_Start_settmobj_cpp_007cd258,0x986);
    return 0xffff;
  }
  SettMapTy::GetMessage((SettMapTy *)local_48,param_1);
  StartSystemTy::ChatMessage(DAT_0081176c,param_1);
  pCVar8 = DAT_00802a30;
  uVar21 = *(uint *)(param_1 + 0x10);
  if (uVar21 < 0x6505) {
    if (uVar21 == 0x6504) {
      uVar20 = *(uint *)(param_1 + 0x14);
      if ((uVar20 != 0xffffffff) && (*(int *)(this_01 + 0x1f84) != 0)) {
        iVar11 = *(int *)(this_01 + 0x1e2f);
        if (uVar20 < *(uint *)(iVar11 + 0xc)) {
          iVar11 = *(int *)(iVar11 + 8) * uVar20 + *(int *)(iVar11 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        bVar2 = *(byte *)(iVar11 + 0x104);
        local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar2);
        if (DAT_0080877e == '\0') {
          ChgPlList(this_01,*(undefined4 *)(param_1 + 0x18),2,(uint)bVar2,0);
        }
        else {
          ChangePlayerCiv(this_01,*(uint *)(param_1 + 0x18),bVar2);
          SendPlList(this_01,0);
        }
      }
    }
    else if (uVar21 < 0x6341) {
      if (uVar21 == 0x6340) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_01,*(int *)(this_01 + 0x1a5b) + 0x55c,param_1,0);
      }
      else if (uVar21 < 0x6327) {
        if (uVar21 == 0x6326) {
          *(char *)(this_01 + 0x2208) = '\x02' - **(char **)(param_1 + 0x14);
        }
        else if (uVar21 == 2) {
          *(undefined4 *)(this_01 + 0x2209) = *(undefined4 *)(this_01 + 0x61);
        }
        else if (uVar21 == 3) {
          if (*(int *)(this_01 + 0x2226) != 0) {
            FUN_006ab060((undefined4 *)(this_01 + 0x2226));
            *(undefined4 *)(this_01 + 0x222a) = 0;
          }
          if (*(byte **)(this_01 + 0x222f) != (byte *)0x0) {
            FUN_006ae110(*(byte **)(this_01 + 0x222f));
          }
          *(undefined4 *)(this_01 + 0x222f) = 0;
          if ((*(int *)(this_01 + 0x4d) != 0x60ff) && (DAT_00811764 != (undefined4 *)0x0)) {
            if (DAT_0080877e == '\0') {
              FUN_00715360(DAT_00811764,0,'\x11',(char *)0x0,0,0,0xffffffff);
              if (*(int *)(this_01 + 0x4d) != 0x6109) {
                thunk_FUN_005dac60();
              }
            }
            else if (*(int *)(this_01 + 0x4d) == 0x611f) {
              FUN_00715360(DAT_00811764,0,'\x12',(char *)0x0,0,0,0xffffffff);
            }
            else {
              FUN_00715360(DAT_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
              thunk_FUN_005dac60();
            }
          }
        }
      }
      else if (uVar21 == 0x6327) {
        piVar6 = *(int **)(param_1 + 0x14);
        thunk_FUN_005b5f00(this_01,*(int *)(this_01 + 0x2204),piVar6);
        iVar11 = *piVar6;
        local_10 = (char *)piVar6[5];
        ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x2204),0,
                         (iVar11 + -1) * (int)local_10,0,(int)local_10,
                         *(int *)(*(int *)(this_01 + 0x2204) + 8) -
                         ((-(uint)(piVar6[1] != 1) & 0xfffffffd) + 3));
        uVar10 = 2;
        iVar29 = -1;
        iVar28 = -1;
        puVar12 = (uint *)FUN_006b0140((iVar11 != 1) + 0x2422,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar12,iVar28,iVar29,uVar10);
        FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + 0x2200));
      }
    }
    else if (uVar21 < 0x6502) {
      if (uVar21 == 0x6501) {
        uVar20 = *(uint *)(param_1 + 0x14);
        if ((uVar20 != 0xffffffff) && (*(int *)(this_01 + 0x1f84) != 0)) {
          iVar11 = *(int *)(this_01 + 0x1e2f);
          if (uVar20 < *(uint *)(iVar11 + 0xc)) {
            iVar11 = *(int *)(iVar11 + 8) * uVar20 + *(int *)(iVar11 + 0x1c);
          }
          else {
            iVar11 = 0;
          }
          bVar2 = *(byte *)(iVar11 + 0x104);
          local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar2);
          if (DAT_0080877e == '\0') {
            ChgPlList(this_01,*(undefined4 *)(param_1 + 0x18),5,1,(uint)bVar2);
          }
          else {
            ChangePlayerTeam(this_01,*(uint *)(param_1 + 0x18),1,(uint)bVar2);
            SendPlList(this_01,0);
          }
        }
      }
      else if (uVar21 == 0x6341) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_01,*(int *)(this_01 + 0x1a5b) + 0x5ed,param_1,0);
      }
      else if ((uVar21 == 0x64ff) && (DAT_0080877e != '\0')) {
        FUN_00715360(DAT_00811764,0,' ',(char *)(this_01 + 0x1f53),0xd,1,0xffffffff);
      }
    }
    else if (((uVar21 == 0x6502) && (uVar20 = *(uint *)(param_1 + 0x14), uVar20 != 0xffffffff)) &&
            (*(int *)(this_01 + 0x1f84) != 0)) {
      iVar11 = *(int *)(this_01 + 0x1e2f);
      if (uVar20 < *(uint *)(iVar11 + 0xc)) {
        iVar11 = *(int *)(iVar11 + 8) * uVar20 + *(int *)(iVar11 + 0x1c);
      }
      else {
        iVar11 = 0;
      }
      bVar2 = *(byte *)(iVar11 + 0x104);
      local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar2);
      if (DAT_0080877e == '\0') {
        ChgPlList(this_01,*(undefined4 *)(param_1 + 0x18),1,(uint)bVar2,0);
      }
      else {
        ChangePlayerColor(this_01,*(uint *)(param_1 + 0x18),bVar2);
        SendPlList(this_01,0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (0x654b < uVar21) {
    if (uVar21 < 0x694b) {
      if (uVar21 == 0x694a) {
        iVar11 = *(int *)(this_01 + 0x1f84);
        local_34 = 0x1010101;
        bVar26 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (iVar11 != 0) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar10 = *(undefined4 *)(DAT_00802a30 + 0xc9);
              uVar5 = *(undefined4 *)(DAT_00802a30 + 0xc5);
              DAT_00802a30[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar8 + 0x494) = 0xffff;
              CursorClassTy::SetGCType(pCVar8,0,uVar5,uVar10);
              CursorClassTy::DrawSprite(pCVar8,*(int *)(pCVar8 + 0xc5),*(int *)(pCVar8 + 0xc9));
              pCVar8[0xd2] = (CursorClassTy)0x0;
              *(undefined4 *)(pCVar8 + 0x4df) = 0xffffffff;
            }
            DAT_008087c4._2_1_ = '\0';
            DAT_0080874f = 0;
            puVar22 = (undefined4 *)((int)&DAT_008087c4 + 3);
            for (iVar11 = 0xa2; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar22 = 0;
              puVar22 = puVar22 + 1;
            }
            puVar13 = &DAT_008087e9;
            do {
              puVar13[-1] = 0;
              *puVar13 = 0xff;
              puVar13 = puVar13 + 0x51;
            } while ((int)puVar13 < 0x808a71);
            iVar11 = *(int *)(this_01 + 0x1f84);
            uVar21 = 0;
            uVar20 = *(uint *)(iVar11 + 0xc);
            if (0 < (int)uVar20) {
              bVar26 = uVar20 != 0;
              do {
                if (bVar26) {
                  pcVar17 = (char *)(*(int *)(iVar11 + 8) * uVar21 + *(int *)(iVar11 + 0x1c));
                }
                else {
                  pcVar17 = (char *)0x0;
                }
                if (((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) && (pcVar17[2] != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)pcVar17[2]) = 0;
                }
                uVar21 = uVar21 + 1;
                bVar26 = uVar21 < uVar20;
              } while ((int)uVar21 < (int)uVar20);
            }
            local_18 = (char *)0x0;
            if (0 < (int)uVar20) {
              bVar26 = uVar20 != 0;
              do {
                if (bVar26) {
                  pcVar17 = (char *)(*(int *)(iVar11 + 8) * (int)local_18 + *(int *)(iVar11 + 0x1c))
                  ;
                }
                else {
                  pcVar17 = (char *)0x0;
                }
                if (((pcVar17 != (char *)0x0) && (pcVar17[4] != '\0')) &&
                   ((pcVar17[4] != '\x01' ||
                    ((*(SettMapTy *)(this_01 + 0x1e26) == (SettMapTy)0x5 ||
                     (*(SettMapTy *)(this_01 + 0x1e26) == (SettMapTy)0xf)))))) {
                  iVar11 = *(int *)(pcVar17 + 0x50);
                  if ((uint)(byte)pcVar17[5] < *(uint *)(iVar11 + 0xc)) {
                    local_c = (undefined1 *)
                              (*(int *)(iVar11 + 8) * (uint)(byte)pcVar17[5] +
                              *(int *)(iVar11 + 0x1c));
                  }
                  else {
                    local_c = (undefined1 *)0x0;
                  }
                  DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
                  if (pcVar17[2] == -1) {
                    iVar11 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar11) != '\0') {
                        pcVar17[2] = (char)iVar11;
                        *(undefined1 *)((int)&local_34 + iVar11) = 0;
                        break;
                      }
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < 8);
                  }
                  (&DAT_008087e9)[(uint)(byte)pcVar17[2] * 0x51] = pcVar17[2];
                  pcVar24 = local_18 + 1;
                  (&DAT_008087e8)[(uint)(byte)pcVar17[2] * 0x51] = pcVar17[3];
                  iVar11 = *(int *)(this_01 + 0x1f84);
                  bVar26 = pcVar24 < *(char **)(iVar11 + 0xc);
                  if ((int)pcVar24 < (int)*(char **)(iVar11 + 0xc)) {
                    do {
                      if (bVar26) {
                        pcVar16 = (char *)(*(int *)(iVar11 + 8) * (int)pcVar24 +
                                          *(int *)(iVar11 + 0x1c));
                      }
                      else {
                        pcVar16 = (char *)0x0;
                      }
                      if (pcVar16 != (char *)0x0) {
                        if (*pcVar16 != '\0') break;
                        pcVar16[2] = pcVar17[2];
                      }
                      iVar11 = *(int *)(this_01 + 0x1f84);
                      pcVar24 = pcVar24 + 1;
                      bVar26 = pcVar24 < *(char **)(iVar11 + 0xc);
                    } while ((int)pcVar24 < (int)*(char **)(iVar11 + 0xc));
                  }
                  uVar20 = 0xffffffff;
                  pcVar24 = &DAT_008016a0;
                  do {
                    pcVar16 = pcVar24;
                    if (uVar20 == 0) break;
                    uVar20 = uVar20 - 1;
                    pcVar16 = pcVar24 + 1;
                    cVar3 = *pcVar24;
                    pcVar24 = pcVar16;
                  } while (cVar3 != '\0');
                  uVar20 = ~uVar20;
                  local_10 = &DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51;
                  pcVar24 = pcVar16 + -uVar20;
                  pcVar16 = &DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51;
                  for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar24;
                    pcVar24 = pcVar24 + 4;
                    pcVar16 = pcVar16 + 4;
                  }
                  for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                    *pcVar16 = *pcVar24;
                    pcVar24 = pcVar24 + 1;
                    pcVar16 = pcVar16 + 1;
                  }
                  cVar3 = pcVar17[4];
                  if (cVar3 == '\x02') {
                    if (*pcVar17 != '\0') {
                      *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar17[2] * 0x51 + 3) = 0;
                    }
                    if (DAT_0080877f == *(int *)(pcVar17 + 6)) {
                      DAT_0080874d = pcVar17[2];
                      DAT_0080874e = pcVar17[3];
                    }
                  }
                  else if (cVar3 == '\x03') {
                    if (DAT_0080877f == *(int *)(pcVar17 + 6)) {
                      DAT_0080874d = pcVar17[2];
                      DAT_0080874e = pcVar17[3];
                      DAT_0080874f = 1;
                    }
                  }
                  else if (cVar3 == '\x04') {
                    *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar17[2] * 0x51 + 3) = 1;
                    if (local_c == (undefined1 *)0x0) {
                      uVar20 = 0xffffffff;
                      pcVar24 = &DAT_008016a0;
                      do {
                        pcVar16 = pcVar24;
                        if (uVar20 == 0) break;
                        uVar20 = uVar20 - 1;
                        pcVar16 = pcVar24 + 1;
                        cVar3 = *pcVar24;
                        pcVar24 = pcVar16;
                      } while (cVar3 != '\0');
                      uVar20 = ~uVar20;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51;
                      pcVar24 = pcVar16 + -uVar20;
                      pcVar16 = &DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51;
                      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar24;
                        pcVar24 = pcVar24 + 4;
                        pcVar16 = pcVar16 + 4;
                      }
                      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                        *pcVar16 = *pcVar24;
                        pcVar24 = pcVar24 + 1;
                        pcVar16 = pcVar16 + 1;
                      }
                    }
                    else {
                      uVar20 = 0xffffffff;
                      pcVar24 = local_c + 0x4c;
                      do {
                        pcVar16 = pcVar24;
                        if (uVar20 == 0) break;
                        uVar20 = uVar20 - 1;
                        pcVar16 = pcVar24 + 1;
                        cVar3 = *pcVar24;
                        pcVar24 = pcVar16;
                      } while (cVar3 != '\0');
                      uVar20 = ~uVar20;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51;
                      pcVar24 = pcVar16 + -uVar20;
                      pcVar16 = &DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51;
                      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar24;
                        pcVar24 = pcVar24 + 4;
                        pcVar16 = pcVar16 + 4;
                      }
                      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                        *pcVar16 = *pcVar24;
                        pcVar24 = pcVar24 + 1;
                        pcVar16 = pcVar16 + 1;
                      }
                    }
                  }
                  (&DAT_008087ea)[(uint)(byte)pcVar17[2] * 0x51] = pcVar17[0x4a];
                  *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar17[2] * 0x51) =
                       *(undefined4 *)(pcVar17 + 0x54);
                  *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar17[2] * 0x51) =
                       *(undefined4 *)(pcVar17 + 0x58);
                  *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar17[2] * 0x51) =
                       *(undefined4 *)(pcVar17 + 0x5c);
                }
                iVar11 = *(int *)(this_01 + 0x1f84);
                local_18 = local_18 + 1;
                bVar26 = local_18 < *(char **)(iVar11 + 0xc);
              } while ((int)local_18 < (int)*(char **)(iVar11 + 0xc));
            }
            thunk_FUN_0056ee90(0x807620);
            pCVar8 = DAT_00802a30;
            if ((*(SettMapTy *)(this_01 + 0x1e26) == (SettMapTy)0x7) ||
               (*(SettMapTy *)(this_01 + 0x1e26) == (SettMapTy)0xe)) {
              if ((*(int *)(this_01 + 0x1f47) != 0) || (*(int *)(param_1 + 0x14) != 0)) {
                uVar20 = 0xffffffff;
                pcVar17 = &DAT_00853de4;
                do {
                  pcVar24 = pcVar17;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar24 = pcVar17 + 1;
                  cVar3 = *pcVar17;
                  pcVar17 = pcVar24;
                } while (cVar3 != '\0');
                uVar20 = ~uVar20;
                pcVar17 = pcVar24 + -uVar20;
                pcVar24 = &DAT_0080ed16;
                for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *(undefined4 *)pcVar24 = *(undefined4 *)pcVar17;
                  pcVar17 = pcVar17 + 4;
                  pcVar24 = pcVar24 + 4;
                }
                for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pcVar24 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                  pcVar24 = pcVar24 + 1;
                }
                goto LAB_005d2018;
              }
              if ((DAT_0080877e != '\0') && (*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != 0)) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar10 = *(undefined4 *)(DAT_00802a30 + 0xc9);
                  uVar5 = *(undefined4 *)(DAT_00802a30 + 0xc5);
                  DAT_00802a30[0x493] = (CursorClassTy)0x1;
                  *(undefined2 *)(pCVar8 + 0x494) = 0xffff;
                  CursorClassTy::SetGCType(pCVar8,0,uVar5,uVar10);
                  CursorClassTy::DrawSprite(pCVar8,*(int *)(pCVar8 + 0xc5),*(int *)(pCVar8 + 0xc9));
                  pCVar8[0xd2] = (CursorClassTy)0x0;
                  *(undefined4 *)(pCVar8 + 0x4df) = 0xffffffff;
                }
                iVar11 = *(int *)(this_01 + 0x1a5b);
                puVar22 = local_90;
                for (iVar28 = 8; iVar28 != 0; iVar28 = iVar28 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                puVar22 = local_b0;
                for (iVar28 = 8; iVar28 != 0; iVar28 = iVar28 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                local_b0[2] = *(undefined4 *)(this_01 + 8);
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                iVar11 = MMsgTy::SetMessage(*(MMsgTy **)(iVar11 + 0x2e6),0x251f,'\x01',local_90,
                                            local_b0,(undefined4 *)0x0,0,0);
                if (iVar11 != 0) {
                  (**(code **)(*(int *)this_01 + 0x24))();
                }
              }
            }
            else {
LAB_005d2018:
              uVar20 = 0xffffffff;
              local_5 = '\x01';
              pcVar17 = &DAT_0080ed16;
              do {
                pcVar24 = pcVar17;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar24 = pcVar17 + 1;
                cVar3 = *pcVar17;
                pcVar17 = pcVar24;
              } while (cVar3 != '\0');
              uVar20 = ~uVar20;
              pcVar17 = pcVar24 + -uVar20;
              pcVar24 = (char *)&DAT_0080ee1a;
              for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar24 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar24 = pcVar24 + 1;
              }
              uVar20 = 0xffffffff;
              pcVar17 = &DAT_00807680;
              do {
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                cVar3 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar3 != '\0');
              uVar21 = 0xffffffff;
              pcVar17 = (char *)((int)&DAT_0080ed12 + ~uVar20 + 3);
              do {
                pcVar24 = pcVar17;
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                pcVar24 = pcVar17 + 1;
                cVar3 = *pcVar17;
                pcVar17 = pcVar24;
              } while (cVar3 != '\0');
              uVar21 = ~uVar21;
              pcVar17 = pcVar24 + -uVar21;
              pcVar24 = &DAT_0080ef1e;
              for (uVar20 = uVar21 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                *pcVar24 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar24 = pcVar24 + 1;
              }
            }
            if (local_5 != '\0') {
              DAT_008087a0 = *(SettMapTy *)(this_01 + 0x1e26);
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                puVar22 = &DAT_00808ab0;
                for (iVar11 = 0x3a8; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                DAT_00808aaf = 0;
                iVar11 = *(int *)(this_01 + 0x1f84);
                local_18 = (char *)0x0;
                if (0 < *(int *)(iVar11 + 0xc)) {
                  bVar26 = *(int *)(iVar11 + 0xc) != 0;
                  do {
                    if (bVar26) {
                      puVar13 = (undefined1 *)
                                (*(int *)(iVar11 + 8) * (int)local_18 + *(int *)(iVar11 + 0x1c));
                    }
                    else {
                      puVar13 = (undefined1 *)0x0;
                    }
                    if (puVar13 != (undefined1 *)0x0) {
                      cVar3 = puVar13[4];
                      local_5 = cVar3;
                      if ((cVar3 != '\x01') && (cVar3 != '\0')) {
                        if (cVar3 == '\x04') {
                          iVar11 = *(int *)(puVar13 + 0x50);
                          if ((uint)(byte)puVar13[5] < *(uint *)(iVar11 + 0xc)) {
                            pcVar17 = (char *)(*(int *)(iVar11 + 8) * (uint)(byte)puVar13[5] +
                                              *(int *)(iVar11 + 0x1c));
                          }
                          else {
                            pcVar17 = (char *)0x0;
                          }
                          if (pcVar17 != (char *)0x0) {
                            uVar20 = 0xffffffff;
                            do {
                              pcVar24 = pcVar17;
                              if (uVar20 == 0) break;
                              uVar20 = uVar20 - 1;
                              pcVar24 = pcVar17 + 1;
                              cVar1 = *pcVar17;
                              pcVar17 = pcVar24;
                            } while (cVar1 != '\0');
                            uVar20 = ~uVar20;
                            pcVar24 = pcVar24 + -uVar20;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar20 = 0xffffffff;
                          pcVar17 = puVar13 + 10;
                          do {
                            pcVar24 = pcVar17;
                            if (uVar20 == 0) break;
                            uVar20 = uVar20 - 1;
                            pcVar24 = pcVar17 + 1;
                            cVar1 = *pcVar17;
                            pcVar17 = pcVar24;
                          } while (cVar1 != '\0');
                          uVar20 = ~uVar20;
                          pcVar24 = pcVar24 + -uVar20;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar17 = local_22c;
                          for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar24;
                            pcVar24 = pcVar24 + 4;
                            pcVar17 = pcVar17 + 4;
                          }
                          for (uVar20 = uVar20 & 3; local_10 = local_22c, uVar20 != 0;
                              uVar20 = uVar20 - 1) {
                            *pcVar17 = *pcVar24;
                            pcVar24 = pcVar24 + 1;
                            pcVar17 = pcVar17 + 1;
                          }
                        }
                        local_1ec = *(undefined4 *)(puVar13 + 6);
                        local_1e8._0_2_ = CONCAT11(*puVar13,puVar13[2]);
                        local_1e4 = *(undefined4 *)(this_01 + 0x61);
                        if (cVar3 == '\x02') {
                          local_1e8 = CONCAT13(1,CONCAT12(1,(undefined2)local_1e8));
                        }
                        else {
                          local_1e8 = CONCAT13(1,CONCAT12((cVar3 != '\x03') + -1,
                                                          (undefined2)local_1e8)) & 0xff02ffff;
                        }
                        pcVar17 = local_22c;
                        puVar22 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar11 = 0x27; iVar11 != 0; iVar11 = iVar11 + -1) {
                          *puVar22 = *(undefined4 *)pcVar17;
                          pcVar17 = pcVar17 + 4;
                          puVar22 = puVar22 + 1;
                        }
                        if ((byte)local_1e8 < 8) {
                          iVar28 = 0;
                          iVar11 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar28 + iVar11] == '\0') {
                              (&DAT_00808800)[iVar28 + iVar11] = DAT_00808aaf;
                              break;
                            }
                            iVar28 = iVar28 + 1;
                          } while (iVar28 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    iVar11 = *(int *)(this_01 + 0x1f84);
                    local_18 = local_18 + 1;
                    bVar26 = local_18 < *(char **)(iVar11 + 0xc);
                  } while ((int)local_18 < (int)*(char **)(iVar11 + 0xc));
                }
                RunGame(this_01);
                FUN_006b6500((int)DAT_00811764,1);
                FUN_00715360(DAT_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
                FUN_006b6500((int)DAT_00811764,DAT_0080733c);
              }
              else {
                FUN_006b6500((int)DAT_00811764,1);
                puVar22 = (undefined4 *)local_70;
                for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                *(undefined2 *)puVar22 = 0;
                local_64 = DAT_0080733b;
                local_70._3_4_ = DAT_008087be;
                local_70._0_2_ = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                local_63 = DAT_00807361;
                local_62 = DAT_00808754;
                local_56 = *(undefined4 *)(this_01 + 0x2121);
                local_70[2] = 2;
                local_5a = DAT_00808aab;
                switch(*(SettMapTy *)(this_01 + 0x1e26)) {
                case (SettMapTy)0x4:
                  local_65 = 2;
                  break;
                case (SettMapTy)0x5:
                  local_65 = 3;
                  break;
                case (SettMapTy)0x7:
                  local_65 = 1;
                  break;
                case (SettMapTy)0xc:
                  local_65 = 5;
                  break;
                case (SettMapTy)0x13:
                  if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
                    local_65 = 4;
                  }
                }
                FUN_00715360(DAT_00811764,0,'-',local_70,0x26,1,0xffffffff);
                FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                *(undefined4 *)(this_01 + 0x2233) = *(undefined4 *)(this_01 + 0x61);
                *(SettMapTy *)(this_01 + 0x222e) = (SettMapTy)0x1;
                puVar12 = FUN_006ae290((uint *)0x0,0x28,4,10);
                *(uint **)(this_01 + 0x222f) = puVar12;
                if (DAT_0080c4fe != (uint *)0x0) {
                  FUN_006ae110((byte *)DAT_0080c4fe);
                }
                DAT_0080c4fe = FUN_006ae290((uint *)0x0,0x28,4,10);
                puVar22 = &DAT_00808ab0;
                for (iVar11 = 0x3a8; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                DAT_00808aaf = 0;
                iVar11 = *(int *)(this_01 + 0x1f84);
                local_18 = (char *)0x0;
                if (0 < *(int *)(iVar11 + 0xc)) {
                  bVar26 = *(int *)(iVar11 + 0xc) != 0;
                  do {
                    if (bVar26) {
                      puVar13 = (undefined1 *)
                                (*(int *)(iVar11 + 8) * (int)local_18 + *(int *)(iVar11 + 0x1c));
                    }
                    else {
                      puVar13 = (undefined1 *)0x0;
                    }
                    local_c = puVar13;
                    if (puVar13 != (undefined1 *)0x0) {
                      if (((puVar13[4] == '\x02') || (puVar13[4] == '\x03')) &&
                         (DAT_0080877f != *(int *)(puVar13 + 6))) {
                        FUN_006ae1c0(*(uint **)(this_01 + 0x222f),(undefined4 *)(puVar13 + 6));
                        FUN_006ae1c0(DAT_0080c4fe,(undefined4 *)(puVar13 + 6));
                      }
                      cVar3 = puVar13[4];
                      local_5 = cVar3;
                      if ((cVar3 != '\x01') && (cVar3 != '\0')) {
                        uVar20 = 0xffffffff;
                        local_10 = local_190;
                        pcVar17 = local_c + 10;
                        do {
                          pcVar24 = pcVar17;
                          if (uVar20 == 0) break;
                          uVar20 = uVar20 - 1;
                          pcVar24 = pcVar17 + 1;
                          cVar1 = *pcVar17;
                          pcVar17 = pcVar24;
                        } while (cVar1 != '\0');
                        uVar20 = ~uVar20;
                        pcVar17 = pcVar24 + -uVar20;
                        pcVar24 = local_190;
                        for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar17;
                          pcVar17 = pcVar17 + 4;
                          pcVar24 = pcVar24 + 4;
                        }
                        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                          *pcVar24 = *pcVar17;
                          pcVar17 = pcVar17 + 1;
                          pcVar24 = pcVar24 + 1;
                        }
                        if (cVar3 == '\x04') {
                          iVar11 = *(int *)(local_c + 0x50);
                          if ((uint)(byte)local_c[5] < *(uint *)(iVar11 + 0xc)) {
                            pcVar17 = (char *)(*(int *)(iVar11 + 8) * (uint)(byte)local_c[5] +
                                              *(int *)(iVar11 + 0x1c));
                          }
                          else {
                            pcVar17 = (char *)0x0;
                          }
                          if (pcVar17 != (char *)0x0) {
                            uVar20 = 0xffffffff;
                            do {
                              pcVar24 = pcVar17;
                              if (uVar20 == 0) break;
                              uVar20 = uVar20 - 1;
                              pcVar24 = pcVar17 + 1;
                              cVar1 = *pcVar17;
                              pcVar17 = pcVar24;
                            } while (cVar1 != '\0');
                            uVar20 = ~uVar20;
                            pcVar24 = pcVar24 + -uVar20;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar20 = 0xffffffff;
                          pcVar17 = local_c + 10;
                          do {
                            pcVar24 = pcVar17;
                            if (uVar20 == 0) break;
                            uVar20 = uVar20 - 1;
                            pcVar24 = pcVar17 + 1;
                            cVar1 = *pcVar17;
                            pcVar17 = pcVar24;
                          } while (cVar1 != '\0');
                          uVar20 = ~uVar20;
                          pcVar24 = pcVar24 + -uVar20;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar17 = local_190;
                          for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar24;
                            pcVar24 = pcVar24 + 4;
                            pcVar17 = pcVar17 + 4;
                          }
                          for (uVar20 = uVar20 & 3; local_10 = local_190, uVar20 != 0;
                              uVar20 = uVar20 - 1) {
                            *pcVar17 = *pcVar24;
                            pcVar24 = pcVar24 + 1;
                            pcVar17 = pcVar17 + 1;
                          }
                        }
                        local_150 = *(undefined4 *)(local_c + 6);
                        local_14c._0_2_ = CONCAT11(*local_c,local_c[2]);
                        local_148 = *(undefined4 *)(this_01 + 0x61);
                        if (cVar3 == '\x02') {
                          local_14c = CONCAT13(1,CONCAT12(1,(undefined2)local_14c));
                        }
                        else {
                          local_14c = CONCAT13(1,CONCAT12((cVar3 != '\x03') + -1,
                                                          (undefined2)local_14c)) & 0xff02ffff;
                        }
                        pcVar17 = local_190;
                        puVar22 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar11 = 0x27; iVar11 != 0; iVar11 = iVar11 + -1) {
                          *puVar22 = *(undefined4 *)pcVar17;
                          pcVar17 = pcVar17 + 4;
                          puVar22 = puVar22 + 1;
                        }
                        if ((byte)local_14c < 8) {
                          iVar28 = 0;
                          iVar11 = (local_14c & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar28 + iVar11] == '\0') {
                              (&DAT_00808800)[iVar28 + iVar11] = DAT_00808aaf;
                              break;
                            }
                            iVar28 = iVar28 + 1;
                          } while (iVar28 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    iVar11 = *(int *)(this_01 + 0x1f84);
                    local_18 = local_18 + 1;
                    bVar26 = local_18 < *(char **)(iVar11 + 0xc);
                  } while ((int)local_18 < (int)*(char **)(iVar11 + 0xc));
                }
                if (*(int *)(*(int *)(this_01 + 0x222f) + 0xc) == 0) {
                  *(SettMapTy *)(this_01 + 0x222e) = (SettMapTy)0x0;
                  RunGame(this_01);
                  if (DAT_008067a0 != '\0') {
                    CFsgsConnection::UpdateGame
                              ((CFsgsConnection *)&DAT_00802a90,6,(char *)(this_01 + 0x1a5f));
                    CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
                  }
                }
              }
              if ((*(SettMapTy *)(this_01 + 0x1e26) == (SettMapTy)0xc) ||
                 (*(SettMapTy *)(this_01 + 0x1e26) == (SettMapTy)0x10)) {
                DAT_0080879c = 1;
                _DAT_0080f32e = 1;
              }
            }
          }
          else {
            if (0 < *(int *)(iVar11 + 0xc)) {
              bVar25 = *(int *)(iVar11 + 0xc) != 0;
              do {
                if (bVar25) {
                  iVar28 = *(int *)(iVar11 + 8) * uVar20 + *(int *)(iVar11 + 0x1c);
                }
                else {
                  iVar28 = 0;
                }
                if ((iVar28 != 0) &&
                   (((*(char *)(iVar28 + 4) == '\x02' || (*(char *)(iVar28 + 4) == '\x03')) &&
                    (*(char *)(iVar28 + 0x4f) == '\0')))) {
                  bVar26 = true;
                  break;
                }
                uVar20 = uVar20 + 1;
                bVar25 = uVar20 < *(uint *)(iVar11 + 0xc);
              } while ((int)uVar20 < (int)*(uint *)(iVar11 + 0xc));
            }
            if (bVar26) {
              if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0x2527,'\0',
                                   (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            else {
              uVar20 = 0;
              if (0 < *(int *)(iVar11 + 0xc)) {
                bVar26 = *(int *)(iVar11 + 0xc) != 0;
                do {
                  if (bVar26) {
                    pcVar17 = (char *)(*(int *)(iVar11 + 8) * uVar20 + *(int *)(iVar11 + 0x1c));
                  }
                  else {
                    pcVar17 = (char *)0x0;
                  }
                  if ((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) {
                    cVar3 = pcVar17[4];
                    if (*(SettMapTy *)(this_01 + 0x1e26) == (SettMapTy)0xc) {
                      if ((cVar3 == '\0') || (cVar3 == '\x01')) {
                        local_11 = 0;
                        break;
                      }
                    }
                    else if ((cVar3 == '\0') || (cVar3 == '\x01')) goto LAB_005d1b17;
                    local_11 = local_11 + 1;
                  }
LAB_005d1b17:
                  uVar20 = uVar20 + 1;
                  bVar26 = uVar20 < *(uint *)(iVar11 + 0xc);
                } while ((int)uVar20 < (int)*(uint *)(iVar11 + 0xc));
              }
              if (1 < local_11) goto LAB_005d1b5a;
              if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0x2528,'\0',
                                   (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
          }
        }
      }
      else if (uVar21 == 0x654c) {
        if (DAT_0080877e != '\0') {
          CheckPlList(this_01,unaff_EDI);
          thunk_FUN_005d1380((int)this_01);
          (**(code **)(*(int *)this_01 + 0x2c))();
          SettMapTy::PaintSC((SettMapTy *)this_01);
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (uVar21 == 0x654d) goto switchD_005d1877_caseD_6548;
    }
    else if (uVar21 == 0xc0a2) {
      iVar11 = thunk_FUN_005ddb40(*(int *)(this_01 + 0x1a5b));
      if (iVar11 == 0) {
        if (DAT_008067a0 != '\0') {
          if (*(int *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686) + 8) < 1) {
            pcVar17 = (char *)0x0;
          }
          else {
            pcVar17 = (char *)**(undefined4 **)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686) + 0x14)
            ;
          }
          bVar26 = thunk_FUN_005717e0(pcVar17);
          if (CONCAT31(extraout_var,bVar26) != 0) {
            if (*(int *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686) + 8) < 1) {
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
            }
            else {
              CFsgsConnection::SendChatMessage
                        ((CFsgsConnection *)&DAT_00802a90,
                         (char *)**(undefined4 **)
                                   (*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686) + 0x14));
            }
            goto LAB_005d28da;
          }
        }
        pcVar17 = local_680;
        for (iVar11 = 0x114; iVar11 != 0; iVar11 = iVar11 + -1) {
          pcVar17[0] = '\0';
          pcVar17[1] = '\0';
          pcVar17[2] = '\0';
          pcVar17[3] = '\0';
          pcVar17 = pcVar17 + 4;
        }
        *pcVar17 = '\0';
        pcVar17 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar17 = (char *)&DAT_00807ddd;
        }
        uVar20 = 0xffffffff;
        do {
          pcVar24 = pcVar17;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar24 = pcVar17 + 1;
          cVar3 = *pcVar17;
          pcVar17 = pcVar24;
        } while (cVar3 != '\0');
        uVar20 = ~uVar20;
        this_00 = *(StartSystemTy **)(this_01 + 0x1a5b);
        pcVar17 = pcVar24 + -uVar20;
        pcVar24 = local_680;
        for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar24 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar24 = pcVar24 + 1;
        }
        iVar11 = *(int *)(this_00 + 0x686);
        if (*(int *)(iVar11 + 8) < 1) {
          pcVar17 = (char *)0x0;
        }
        else {
          pcVar17 = (char *)**(undefined4 **)(iVar11 + 0x14);
        }
        uVar20 = 0xffffffff;
        do {
          pcVar24 = pcVar17;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar24 = pcVar17 + 1;
          cVar3 = *pcVar17;
          pcVar17 = pcVar24;
        } while (cVar3 != '\0');
        uVar20 = ~uVar20;
        pcVar17 = pcVar24 + -uVar20;
        pcVar24 = local_640;
        for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar24 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar24 = pcVar24 + 1;
        }
        local_10 = local_640;
        StartSystemTy::AddToChat(this_00,(int)local_680);
        if (*(SettMapTy *)(this_01 + 0x2208) == (SettMapTy)0x0) {
          iVar11 = *(int *)(this_01 + 0x1f84);
          if (iVar11 != 0) {
            uVar20 = *(uint *)(iVar11 + 0xc);
            uVar21 = 0;
            if (uVar20 != 0) {
              if (uVar20 == 0) {
                iVar28 = 0;
                goto LAB_005d277a;
              }
              do {
                iVar28 = *(int *)(iVar11 + 8) * uVar21 + *(int *)(iVar11 + 0x1c);
LAB_005d277a:
                if ((iVar28 != 0) &&
                   (((*(char *)(iVar28 + 4) == '\x02' || (*(char *)(iVar28 + 4) == '\x03')) &&
                    (*(int *)(iVar28 + 6) == DAT_0080877f)))) {
                  local_5 = *(char *)(iVar28 + 0x4a);
                  break;
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 < uVar20);
            }
            local_c = (undefined1 *)0x0;
            if (uVar20 != 0) {
              if (uVar20 == 0) {
                iVar11 = 0;
                goto LAB_005d27c3;
              }
              do {
                iVar11 = *(int *)(iVar11 + 8) * (int)local_c + *(int *)(iVar11 + 0x1c);
LAB_005d27c3:
                if (((iVar11 != 0) &&
                    ((*(char *)(iVar11 + 4) == '\x02' || (*(char *)(iVar11 + 4) == '\x03')))) &&
                   (*(int *)(iVar11 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) && (bVar2 = *(byte *)(iVar11 + 2), bVar2 != 0xff))
                       && (DAT_0080874d != bVar2)) {
                      local_10 = (char *)CONCAT31(local_10._1_3_,bVar2);
                      uVar21 = (uint)DAT_0080874d;
                      uVar20 = (uint)bVar2;
                      cVar3 = *(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar20);
                      if ((cVar3 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar21) == '\0')) {
                        iVar28 = -2;
                      }
                      else if ((cVar3 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar21) == '\0')) {
                        iVar28 = -1;
                      }
                      else if ((cVar3 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar21) == '\x01')) {
                        iVar28 = 1;
                      }
                      else if ((cVar3 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar21) == '\x01')) {
                        iVar28 = 2;
                      }
                      else {
                        iVar28 = 0;
                      }
                      if (iVar28 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (*(char *)(iVar11 + 0x4a) == local_5) {
LAB_005d28a0:
                    FUN_00715360(DAT_00811764,*(int *)(iVar11 + 6),'\x1b',local_680,0x451,1,
                                 0xffffffff);
                  }
                }
                iVar11 = *(int *)(this_01 + 0x1f84);
                local_c = local_c + 1;
              } while (local_c < *(undefined1 **)(iVar11 + 0xc));
            }
          }
        }
        else {
          FUN_00715360(DAT_00811764,0,'\x1b',local_680,0x451,1,0xffffffff);
        }
      }
LAB_005d28da:
      FUN_006b6020(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686),0,&DAT_008016a0);
      *(undefined4 *)(this_01 + 0x2d) = 0x33;
      *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x686);
      FUN_006e6080(this_01,2,*(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x54c),
                   (undefined4 *)(this_01 + 0x1d));
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (uVar21 < 0x654a) {
    switch(uVar21) {
    case 0x6505:
      uVar20 = *(uint *)(param_1 + 0x14);
      if ((uVar20 != 0xffffffff) && (*(int *)(this_01 + 0x1f84) != 0)) {
        iVar11 = *(int *)(this_01 + 0x1e2f);
        if (uVar20 < *(uint *)(iVar11 + 0xc)) {
          iVar11 = *(int *)(iVar11 + 8) * uVar20 + *(int *)(iVar11 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        if (DAT_0080877e == '\0') {
          ChgPlList(this_01,*(undefined4 *)(param_1 + 0x18),3,*(undefined4 *)(iVar11 + 0x104),
                    *(undefined4 *)(iVar11 + 0x108));
          *(SettMapTy *)(this_01 + 0x2244) = (SettMapTy)0x0;
        }
        else {
          pcVar17 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar17 = (char *)&DAT_00807ddd;
          }
          ChangePlayerList(this_01,DAT_0080877f,*(uint *)(param_1 + 0x18),*(int *)(iVar11 + 0x104),
                           (char)*(undefined4 *)(iVar11 + 0x108),pcVar17);
          SendPlList(this_01,0);
        }
      }
      break;
    case 0x6506:
      uVar20 = *(uint *)(param_1 + 0x18);
      if (uVar20 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          *(int *)(this_01 + 0x2121) = *(int *)(this_01 + 0x2121) + 1;
          SendDesc(this_01,0);
          SendPlList(this_01,0);
        }
      }
      else if (((2 < uVar20) && (uVar20 < 9)) && (DAT_0080877e != '\0')) {
        DAT_00808aab = DAT_00808aab + 1;
        SendDesc(this_01,0);
      }
      break;
    case 0x6548:
      goto switchD_005d1877_caseD_6548;
    case 0x6549:
switchD_005d1877_caseD_6549:
      if (DAT_0080877e != '\0') {
        *(int *)(this_01 + 0x2121) = *(int *)(this_01 + 0x2121) + 1;
        SendPlList(this_01,0);
        goto switchD_005d1877_caseD_6548;
      }
    }
  }
  else {
switchD_005d1877_caseD_6548:
    if (DAT_0080877e != '\0') {
      DAT_00808aab = DAT_00808aab + 1;
      SendDesc(this_01,0);
    }
  }
switchD_005d1877_caseD_6507:
  uVar20 = *(uint *)(param_1 + 0x10);
  if (((0x69fe < uVar20) && (uVar20 < 0x6a7f)) && (*(SettMapTy *)(this_01 + 0x65) == (SettMapTy)0x1)
     ) {
    iVar11 = *(int *)(this_01 + 0x1f84);
    local_2c = uVar20 - 0x69ff >> 3;
    if ((iVar11 == 0) || (*(uint *)(iVar11 + 0xc) <= local_2c + *(int *)(this_01 + 0x1f88))) {
      pcVar17 = (char *)0x0;
    }
    else {
      pcVar17 = (char *)(*(int *)(iVar11 + 8) * (local_2c + *(int *)(this_01 + 0x1f88)) +
                        *(int *)(iVar11 + 0x1c));
    }
    local_18 = pcVar17;
    if (pcVar17 != (char *)0x0) {
      switch(uVar20 + 1 & 7) {
      case 0:
        if ((pcVar17[4] == '\x02') && (*(int *)(pcVar17 + 6) == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar21 = 0;
            uVar20 = 0;
            iVar11 = *(int *)(this_01 + 0x1f88) + local_2c;
            uVar10 = 0;
            goto LAB_005d34ee;
          }
          ChangePlayerState(this_01,*(int *)(this_01 + 0x1f88) + local_2c);
          SendPlList(this_01,0);
        }
        break;
      case 1:
        if (*pcVar17 != '\0') {
          uVar20 = *(uint *)(iVar11 + 0xc);
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar21 = 0;
          if (0 < (int)uVar20) {
            bVar26 = uVar20 != 0;
            do {
              if (bVar26) {
                pcVar24 = (char *)(*(int *)(*(int *)(this_01 + 0x1f84) + 8) * uVar21 +
                                  *(int *)(*(int *)(this_01 + 0x1f84) + 0x1c));
              }
              else {
                pcVar24 = (char *)0x0;
              }
              if ((*pcVar24 != '\0') && (pcVar24[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar24[2]) = 0;
              }
              uVar21 = uVar21 + 1;
              bVar26 = uVar21 < uVar20;
            } while ((int)uVar21 < (int)uVar20);
          }
          if (pcVar17[2] != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar17[2]) = 1;
          }
          uVar20 = 0;
          *(undefined4 *)(this_01 + 0x2171) = 0x6502;
          *(uint *)(this_01 + 0x2179) = *(int *)(this_01 + 0x1f88) + local_2c;
          *(undefined4 *)(this_01 + 0x2191) = 0x6503;
          *(undefined4 *)(this_01 + 0x21a1) = 0;
          *(undefined4 *)(*(int *)(this_01 + 0x1e2f) + 0xc) = 0;
          *(undefined4 *)(this_01 + 0x1f37) = 0xff;
          FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
          local_c = (undefined1 *)CONCAT31(local_c._1_3_,1);
          do {
            if (*(char *)((int)&local_44 + uVar20) != '\0') {
              *(uint *)(this_01 + 0x1f37) = uVar20;
              FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
              if ((byte)pcVar17[2] == uVar20) {
                *(uint *)(this_01 + 0x21a1) = (uint)local_c & 0xff;
              }
              local_c = (undefined1 *)CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
            }
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < 8);
          uVar10 = *(undefined4 *)(*(int *)(this_01 + 0x1e2f) + 0xc);
          *(undefined4 *)(this_01 + 0x21c5) = 0x124;
          *(undefined4 *)(this_01 + 0x21a9) = uVar10;
          *(undefined4 *)(this_01 + 0x21cd) = 0x1e;
          *(undefined4 *)(this_01 + 0x21a5) = 0x12;
          *(uint *)(this_01 + 0x21c9) = local_2c * 0x19 + 0x41;
LAB_005d3188:
          (**(code **)(**(int **)(this_01 + 0xc) + 8))
                    (0x100ef,0,0,(SettMapTy *)(this_01 + 0x2161),0);
        }
        break;
      case 2:
        if (*pcVar17 != '\0') {
          *(undefined4 *)(this_01 + 0x2171) = 0x6504;
          *(uint *)(this_01 + 0x2179) = *(int *)(this_01 + 0x1f88) + local_2c;
          *(undefined4 *)(this_01 + 0x2191) = 0x6500;
          *(undefined4 *)(*(int *)(this_01 + 0x1e2f) + 0xc) = 0;
          local_10 = (char *)0x1;
          pcVar17 = (char *)FUN_006b0140(0x23f1,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar24 = pcVar17;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar24 = pcVar17 + 1;
            cVar3 = *pcVar17;
            pcVar17 = pcVar24;
          } while (cVar3 != '\0');
          uVar20 = ~uVar20;
          pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
          pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
          for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
            *(uint *)pSVar23 = *(uint *)pSVar18;
            pSVar18 = pSVar18 + 4;
            pSVar23 = pSVar23 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pSVar23 = *pSVar18;
            pSVar18 = pSVar18 + 1;
            pSVar23 = pSVar23 + 1;
          }
          for (puVar12 = FUN_0072e560((uint *)(this_01 + 0x1e33),'\n'); puVar12 != (uint *)0x0;
              puVar12 = FUN_0072e560(puVar12,'\n')) {
            *(undefined1 *)puVar12 = 0x20;
          }
          *(undefined4 *)(this_01 + 0x1f37) = 1;
          FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
          pcVar17 = (char *)FUN_006b0140(0x23f0,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar24 = pcVar17;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar24 = pcVar17 + 1;
            cVar3 = *pcVar17;
            pcVar17 = pcVar24;
          } while (cVar3 != '\0');
          uVar20 = ~uVar20;
          pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
          pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
          for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
            *(uint *)pSVar23 = *(uint *)pSVar18;
            pSVar18 = pSVar18 + 4;
            pSVar23 = pSVar23 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pSVar23 = *pSVar18;
            pSVar18 = pSVar18 + 1;
            pSVar23 = pSVar23 + 1;
          }
          for (puVar12 = FUN_0072e560((uint *)(this_01 + 0x1e33),'\n'); puVar12 != (uint *)0x0;
              puVar12 = FUN_0072e560(puVar12,'\n')) {
            *(undefined1 *)puVar12 = 0x20;
          }
          *(undefined4 *)(this_01 + 0x1f37) = 2;
          FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
          pcVar17 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar17 = (char *)(uint)(local_18[4] != '\x02');
          }
          if (pcVar17 != (char *)0x0) {
            pcVar17 = (char *)FUN_006b0140(0x23f2,DAT_00807618);
            uVar20 = 0xffffffff;
            do {
              pcVar24 = pcVar17;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar24 = pcVar17 + 1;
              cVar3 = *pcVar17;
              pcVar17 = pcVar24;
            } while (cVar3 != '\0');
            uVar20 = ~uVar20;
            pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
            pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
            for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
              *(uint *)pSVar23 = *(uint *)pSVar18;
              pSVar18 = pSVar18 + 4;
              pSVar23 = pSVar23 + 4;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *pSVar23 = *pSVar18;
              pSVar18 = pSVar18 + 1;
              pSVar23 = pSVar23 + 1;
            }
            for (puVar12 = FUN_0072e560((uint *)(this_01 + 0x1e33),'\n'); puVar12 != (uint *)0x0;
                puVar12 = FUN_0072e560(puVar12,'\n')) {
              *(undefined1 *)puVar12 = 0x20;
            }
            *(undefined4 *)(this_01 + 0x1f37) = 3;
            FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
          }
          *(undefined4 *)(this_01 + 0x21a9) = *(undefined4 *)(*(int *)(this_01 + 0x1e2f) + 0xc);
          bVar2 = local_18[3];
          *(undefined4 *)(this_01 + 0x21c5) = 0x143;
          *(undefined4 *)(this_01 + 0x21cd) = 0x78;
          *(uint *)(this_01 + 0x21a1) = bVar2 - 1;
          *(uint *)(this_01 + 0x21c9) = local_2c * 0x19 + 0x41;
          iVar11 = *(int *)(DAT_0081176c + 0x34);
          if (*(int *)(iVar11 + 0xa0) != 0) {
            FUN_00710790(iVar11);
          }
          *(undefined4 *)(this_01 + 0x21a5) = *(undefined4 *)(iVar11 + 0x8a);
          goto LAB_005d3188;
        }
        break;
      case 3:
        *(undefined4 *)(this_01 + 0x2171) = 0x6505;
        *(uint *)(this_01 + 0x2179) = local_2c + *(int *)(this_01 + 0x1f88);
        *(undefined4 *)(this_01 + 0x2191) = 0x6500;
        *(undefined4 *)(*(int *)(this_01 + 0x1e2f) + 0xc) = 0;
        pSVar18 = (SettMapTy *)(this_01 + 0x1e33);
        for (iVar11 = 0x43; iVar11 != 0; iVar11 = iVar11 + -1) {
          *(undefined4 *)pSVar18 = 0;
          pSVar18 = pSVar18 + 4;
        }
        if (*pcVar17 == '\0') {
          uVar20 = local_2c + *(int *)(this_01 + 0x1f88);
          local_5 = '\0';
          if (-1 < (int)uVar20) {
            iVar11 = *(int *)(this_01 + 0x1f84);
            do {
              if (uVar20 < *(uint *)(iVar11 + 0xc)) {
                pcVar17 = (char *)(*(int *)(iVar11 + 8) * uVar20 + *(int *)(iVar11 + 0x1c));
              }
              else {
                pcVar17 = (char *)0x0;
              }
              if (*pcVar17 != '\0') {
                if ((pcVar17[4] == '\x02') && (*(int *)(pcVar17 + 6) != DAT_0080877f)) {
                  local_5 = '\x01';
                }
                break;
              }
              uVar20 = uVar20 - 1;
            } while (-1 < (int)uVar20);
          }
          if (local_5 != '\0') {
            pcVar17 = (char *)FUN_006b0140(0x1f42,DAT_00807618);
            uVar20 = 0xffffffff;
            do {
              pcVar24 = pcVar17;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar24 = pcVar17 + 1;
              cVar3 = *pcVar17;
              pcVar17 = pcVar24;
            } while (cVar3 != '\0');
            uVar20 = ~uVar20;
            pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
            pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
            for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
              *(undefined4 *)pSVar23 = *(undefined4 *)pSVar18;
              pSVar18 = pSVar18 + 4;
              pSVar23 = pSVar23 + 4;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *pSVar23 = *pSVar18;
              pSVar18 = pSVar18 + 1;
              pSVar23 = pSVar23 + 1;
            }
            *(undefined4 *)(this_01 + 0x1f37) = 2;
            FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
            if (DAT_00808aaa != '\0') {
              pcVar17 = (char *)FUN_006b0140(0x1f46,DAT_00807618);
              uVar20 = 0xffffffff;
              do {
                pcVar24 = pcVar17;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar24 = pcVar17 + 1;
                cVar3 = *pcVar17;
                pcVar17 = pcVar24;
              } while (cVar3 != '\0');
              uVar20 = ~uVar20;
              pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
              pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
              for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pSVar23 = *(undefined4 *)pSVar18;
                pSVar18 = pSVar18 + 4;
                pSVar23 = pSVar23 + 4;
              }
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pSVar23 = *pSVar18;
                pSVar18 = pSVar18 + 1;
                pSVar23 = pSVar23 + 1;
              }
              *(undefined4 *)(this_01 + 0x1f37) = 3;
              FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
            }
          }
          pcVar17 = (char *)FUN_006b0140(0x1f41,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar24 = pcVar17;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar24 = pcVar17 + 1;
            cVar3 = *pcVar17;
            pcVar17 = pcVar24;
          } while (cVar3 != '\0');
          uVar20 = ~uVar20;
          pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
          pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
          for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
            *(undefined4 *)pSVar23 = *(undefined4 *)pSVar18;
            pSVar18 = pSVar18 + 4;
            pSVar23 = pSVar23 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pSVar23 = *pSVar18;
            pSVar18 = pSVar18 + 1;
            pSVar23 = pSVar23 + 1;
          }
          *(undefined4 *)(this_01 + 0x1f37) = 1;
          FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
        }
        else {
          if ((*(SettMapTy *)(this_01 + 0x1e26) != (SettMapTy)0x5) || (pcVar17[4] != '\x04')) {
            if ((DAT_0080877e != '\0') && (*(SettMapTy *)(this_01 + 0x1e26) != (SettMapTy)0x5)) {
              pcVar17 = (char *)FUN_006b0140(8000,DAT_00807618);
              uVar20 = 0xffffffff;
              do {
                pcVar24 = pcVar17;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar24 = pcVar17 + 1;
                cVar3 = *pcVar17;
                pcVar17 = pcVar24;
              } while (cVar3 != '\0');
              uVar20 = ~uVar20;
              pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
              pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
              for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pSVar23 = *(undefined4 *)pSVar18;
                pSVar18 = pSVar18 + 4;
                pSVar23 = pSVar23 + 4;
              }
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pSVar23 = *pSVar18;
                pSVar18 = pSVar18 + 1;
                pSVar23 = pSVar23 + 1;
              }
              *(undefined4 *)(this_01 + 0x1f37) = 0;
              FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
            }
            bVar26 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar26 = local_18[3] != '\x03';
            }
            if (bVar26) {
              pcVar17 = (char *)FUN_006b0140(0x1f42,DAT_00807618);
              uVar20 = 0xffffffff;
              do {
                pcVar24 = pcVar17;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar24 = pcVar17 + 1;
                cVar3 = *pcVar17;
                pcVar17 = pcVar24;
              } while (cVar3 != '\0');
              uVar20 = ~uVar20;
              pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
              pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
              for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pSVar23 = *(undefined4 *)pSVar18;
                pSVar18 = pSVar18 + 4;
                pSVar23 = pSVar23 + 4;
              }
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pSVar23 = *pSVar18;
                pSVar18 = pSVar18 + 1;
                pSVar23 = pSVar23 + 1;
              }
              *(undefined4 *)(this_01 + 0x1f37) = 2;
              FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
            }
            pcVar17 = (char *)FUN_006b0140(0x1f41,DAT_00807618);
            uVar20 = 0xffffffff;
            do {
              pcVar24 = pcVar17;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar24 = pcVar17 + 1;
              cVar3 = *pcVar17;
              pcVar17 = pcVar24;
            } while (cVar3 != '\0');
            uVar20 = ~uVar20;
            pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
            pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
            for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
              *(undefined4 *)pSVar23 = *(undefined4 *)pSVar18;
              pSVar18 = pSVar18 + 4;
              pSVar23 = pSVar23 + 4;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *pSVar23 = *pSVar18;
              pSVar18 = pSVar18 + 1;
              pSVar23 = pSVar23 + 1;
            }
            *(undefined4 *)(this_01 + 0x1f37) = 1;
            FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
          }
          if ((DAT_0080877e != '\0') && (*(SettMapTy *)(this_01 + 0x1e26) != (SettMapTy)0x5)) {
            local_c = (undefined1 *)0x0;
            iVar11 = *(int *)(local_18 + 0x50);
            puVar13 = *(undefined1 **)(iVar11 + 0xc);
            if (0 < (int)puVar13) {
              do {
                if (local_c < puVar13) {
                  iVar11 = *(int *)(iVar11 + 8) * (int)local_c + *(int *)(iVar11 + 0x1c);
                }
                else {
                  iVar11 = 0;
                }
                uVar20 = 0xffffffff;
                pcVar17 = (char *)(iVar11 + 0x40);
                do {
                  pcVar24 = pcVar17;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar24 = pcVar17 + 1;
                  cVar3 = *pcVar17;
                  pcVar17 = pcVar24;
                } while (cVar3 != '\0');
                uVar20 = ~uVar20;
                pSVar18 = (SettMapTy *)(pcVar24 + -uVar20);
                pSVar23 = (SettMapTy *)(this_01 + 0x1e33);
                for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *(undefined4 *)pSVar23 = *(undefined4 *)pSVar18;
                  pSVar18 = pSVar18 + 4;
                  pSVar23 = pSVar23 + 4;
                }
                for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pSVar23 = *pSVar18;
                  pSVar18 = pSVar18 + 1;
                  pSVar23 = pSVar23 + 1;
                }
                *(undefined4 *)(this_01 + 0x1f37) = 4;
                *(undefined1 **)(this_01 + 0x1f3b) = local_c;
                FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
                local_c = local_c + 1;
                iVar11 = *(int *)(local_18 + 0x50);
                puVar13 = *(undefined1 **)(iVar11 + 0xc);
              } while ((int)local_c < (int)puVar13);
            }
          }
        }
        iVar11 = *(int *)(this_01 + 0x1e2f);
        uVar20 = 0;
        *(undefined4 *)(this_01 + 0x21a1) = 0;
        if (0 < *(int *)(iVar11 + 0xc)) {
          bVar26 = *(int *)(iVar11 + 0xc) != 0;
          local_10 = (char *)(uint)(byte)local_18[4];
          do {
            if (bVar26) {
              iVar28 = *(int *)(iVar11 + 8) * uVar20 + *(int *)(iVar11 + 0x1c);
            }
            else {
              iVar28 = 0;
            }
            if ((*(char **)(iVar28 + 0x104) == local_10) &&
               (*(uint *)(iVar28 + 0x108) == (uint)(byte)local_18[5])) {
              *(uint *)(this_01 + 0x21a1) = uVar20;
              break;
            }
            uVar20 = uVar20 + 1;
            bVar26 = uVar20 < *(uint *)(iVar11 + 0xc);
          } while ((int)uVar20 < (int)*(uint *)(iVar11 + 0xc));
        }
        uVar10 = *(undefined4 *)(iVar11 + 0xc);
        *(undefined4 *)(this_01 + 0x21c5) = 0x15d;
        *(undefined4 *)(this_01 + 0x21a9) = uVar10;
        *(undefined4 *)(this_01 + 0x21cd) = 0x5f;
        *(uint *)(this_01 + 0x21c9) = local_2c * 0x19 + 0x41;
        iVar11 = *(int *)(DAT_0081176c + 0x34);
        if (*(int *)(iVar11 + 0xa0) != 0) {
          FUN_00710790(iVar11);
        }
        *(undefined4 *)(this_01 + 0x21a5) = *(undefined4 *)(iVar11 + 0x8a);
        if (0 < *(int *)(this_01 + 0x21a9)) goto LAB_005d3188;
        break;
      case 5:
        if (*pcVar17 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar21 = (uint)DAT_0080874d;
              uVar20 = 0;
              iVar11 = *(int *)(this_01 + 0x1f88) + local_2c;
              uVar10 = 5;
              goto LAB_005d34ee;
            }
            ChangePlayerTeam(this_01,*(int *)(this_01 + 0x1f88) + local_2c,0,(uint)DAT_0080874d);
            SendDesc(this_01,0);
          }
          else {
            uVar20 = *(uint *)(iVar11 + 0xc);
            uVar21 = 0;
            local_3c = 0;
            local_c = (undefined1 *)CONCAT31(local_c._1_3_,0xff);
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar20;
            if (0 < (int)uVar20) {
              bVar26 = uVar20 != 0;
              do {
                if (bVar26) {
                  iVar11 = *(int *)(*(int *)(this_01 + 0x1f84) + 8) * uVar21 +
                           *(int *)(*(int *)(this_01 + 0x1f84) + 0x1c);
                }
                else {
                  iVar11 = 0;
                }
                if ((iVar11 != 0) && (*(byte *)(iVar11 + 0x4a) < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)*(byte *)(iVar11 + 0x4a)) = 1;
                }
                uVar21 = uVar21 + 1;
                bVar26 = uVar21 < uVar20;
              } while ((int)uVar21 < (int)uVar20);
            }
            uVar21 = local_2c;
            SVar15 = (SettMapTy)0x0;
            iVar11 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar11) != '\0') {
                SVar15 = (SettMapTy)((char)SVar15 + 1);
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < 8);
            SVar4 = *(SettMapTy *)(this_01 + 0x211c);
joined_r0x005d3229:
            if ((byte)SVar15 < (byte)SVar4) {
              iVar11 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar11) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar11) = 1;
                  SVar15 = (SettMapTy)((char)SVar15 + 1);
                  break;
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < 8);
              goto joined_r0x005d3229;
            }
            uVar19 = 0;
            if (0 < (int)uVar20) {
              do {
                puVar13 = local_30;
                if (uVar19 < local_30) {
                  pcVar17 = (char *)(*(int *)(*(int *)(this_01 + 0x1f84) + 8) * uVar19 +
                                    *(int *)(*(int *)(this_01 + 0x1f84) + 0x1c));
                }
                else {
                  pcVar17 = (char *)0x0;
                }
                if (pcVar17 != (char *)0x0) {
                  if (*(int *)(this_01 + 0x1f88) + uVar21 != uVar19) {
                    if (*pcVar17 == '\0') goto LAB_005d32d3;
                    if ((pcVar17[4] != '\0') && (pcVar17[4] != '\x01')) {
                      if (local_10 == (char *)0x0) {
                        if ((byte)local_c != pcVar17[0x4a]) {
                          local_c = (undefined1 *)CONCAT31(local_c._1_3_,0xff);
                        }
                      }
                      else {
                        local_10 = (char *)0x0;
                        local_c = (undefined1 *)CONCAT31(local_c._1_3_,pcVar17[0x4a]);
                      }
                    }
                  }
                  if ((*pcVar17 != '\0') &&
                     (((pcVar17[4] == '\0' || (pcVar17[4] == '\x01')) && ((byte)pcVar17[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar17[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < (int)puVar13);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar20 = 0;
            *(undefined4 *)(this_01 + 0x2171) = 0x6501;
            *(uint *)(this_01 + 0x2179) = *(int *)(this_01 + 0x1f88) + local_2c;
            *(undefined4 *)(this_01 + 0x2191) = 0x6500;
            *(undefined4 *)(this_01 + 0x21a1) = 0;
            *(undefined4 *)(*(int *)(this_01 + 0x1e2f) + 0xc) = 0;
            local_c = (undefined1 *)((uint)local_c & 0xffffff00);
            puVar13 = &uStack_7d;
            local_30 = puVar13;
            do {
              iVar11 = uVar20 + 0x41;
              if (puVar13[uVar20 + 0x41] != '\0') {
                uVar10 = FUN_006b0140(0x1f4a,DAT_00807618);
                wsprintfA((LPSTR)(this_01 + 0x1e33),&DAT_007cd508,uVar10,iVar11);
                *(uint *)(this_01 + 0x1f37) = uVar20;
                FUN_006ae1c0(*(uint **)(this_01 + 0x1e2f),(undefined4 *)(this_01 + 0x1e33));
                if ((byte)local_18[0x4a] == uVar20) {
                  *(uint *)(this_01 + 0x21a1) = (uint)local_c & 0xff;
                }
                local_c = (undefined1 *)CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
                puVar13 = local_30;
              }
              uVar20 = uVar20 + 1;
            } while ((int)uVar20 < 8);
            SVar15 = *(SettMapTy *)(this_01 + 0x1e26);
            *(undefined4 *)(this_01 + 0x21a9) = *(undefined4 *)(*(int *)(this_01 + 0x1e2f) + 0xc);
            if (((SVar15 == (SettMapTy)0x6) || (SVar15 == (SettMapTy)0x1)) ||
               (uVar10 = 0x26b, SVar15 == (SettMapTy)0x2)) {
              uVar10 = 0x2ab;
            }
            *(undefined4 *)(this_01 + 0x21c5) = uVar10;
            *(undefined4 *)(this_01 + 0x21cd) = 0x46;
            *(uint *)(this_01 + 0x21c9) = local_2c * 0x19 + 0x41;
            iVar11 = *(int *)(DAT_0081176c + 0x34);
            if (*(int *)(iVar11 + 0xa0) != 0) {
              FUN_00710790(iVar11);
            }
            *(undefined4 *)(this_01 + 0x21a5) = *(undefined4 *)(iVar11 + 0x8a);
            (**(code **)(**(int **)(this_01 + 0xc) + 8))
                      (0x100ef,0,0,(SettMapTy *)(this_01 + 0x2161),0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar21 = 0;
          uVar20 = (uint)(pcVar17[0x4f] == '\0');
          iVar11 = *(int *)(this_01 + 0x1f88) + local_2c;
          uVar10 = 7;
LAB_005d34ee:
          ChgPlList(this_01,iVar11,uVar10,uVar20,uVar21);
        }
        else {
          pcVar17[0x4f] = pcVar17[0x4f] == '\0';
          *(undefined4 *)(this_01 + 0x2d) = 5;
          FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + local_2c * 0x20 + 0x1fa8),
                       (undefined4 *)(this_01 + 0x1d));
          *(int *)(this_01 + 0x2121) = *(int *)(this_01 + 0x2121) + 1;
          SendPlList(this_01,0);
        }
      }
    }
  }
  uVar20 = *(uint *)(param_1 + 0x10);
  if (uVar20 < 0x6a7f) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  if (0x6afe < uVar20) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  pcVar24 = (char *)0x0;
  pcVar17 = (char *)(uVar20 - 0x6a7f >> 3);
  local_30 = (undefined1 *)(uVar20 + 1 & 7);
  piVar6 = *(int **)(param_1 + 0x18);
  local_20 = piVar6[2];
  local_1c = piVar6[3];
  iVar11 = *(int *)(this_01 + 0x1f84);
  local_28 = *piVar6 + -0x113;
  local_24 = 0;
  if ((iVar11 != 0) && ((uint)(*(int *)(this_01 + 0x1f88) + (int)pcVar17) < *(uint *)(iVar11 + 0xc))
     ) {
    pcVar24 = (char *)(*(int *)(iVar11 + 8) * (*(int *)(this_01 + 0x1f88) + (int)pcVar17) +
                      *(int *)(iVar11 + 0x1c));
  }
  local_10 = pcVar17;
  FUN_006b4170(*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),0,*piVar6 + -0x113,0,piVar6[2],
               piVar6[3],0xff);
  if (pcVar24 == (char *)0x0) goto switchD_005d35aa_default;
  switch(local_30) {
  case (undefined1 *)0x0:
    if (((*pcVar24 == '\0') || (pcVar24[4] != '\x02')) || (*(int *)(pcVar24 + 6) != DAT_0080877f))
    break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),&local_28,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    iVar11 = 2 - (uint)(pcVar24[1] != '\0');
    goto LAB_005d3bf4;
  case (undefined1 *)0x1:
    if (*pcVar24 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_01,*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),&local_28,0,
                 (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pcVar24[2] != -1) {
        switch(pcVar24[2]) {
        case '\0':
          uVar9 = 0xfc;
          break;
        case '\x01':
          uVar9 = 0xfa;
          break;
        case '\x02':
          uVar9 = 0xfb;
          break;
        case '\x03':
          uVar9 = 0xf9;
          break;
        case '\x04':
          uVar9 = 0xfd;
          break;
        case '\x05':
          uVar9 = 0xfe;
          break;
        case '\x06':
          uVar9 = 0xf3;
          break;
        case '\a':
          uVar9 = 7;
          break;
        default:
          uVar9 = 0xff;
        }
        FUN_006b4170(*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),0,local_28 + 2,local_24 + 2,
                     local_20 + -4,local_1c + -4,uVar9);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*pcVar24 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),&local_28,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                     *(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),0,local_28,local_24,local_20,
                     local_1c);
    if (pcVar24[3] == '\x01') {
      pcVar17 = &DAT_007ca250;
LAB_005d3780:
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar17;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar17 + 1;
        cVar3 = *pcVar17;
        pcVar17 = pcVar24;
      } while (cVar3 != '\0');
      uVar20 = ~uVar20;
      pcVar17 = pcVar24 + -uVar20;
      pcVar24 = (char *)&DAT_0080f33a;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar24 = pcVar24 + 4;
      }
    }
    else {
      if (pcVar24[3] != '\x02') {
        pcVar17 = &DAT_007ca24c;
        goto LAB_005d3780;
      }
      uVar20 = 0xffffffff;
      pcVar17 = &DAT_007ca248;
      do {
        pcVar24 = pcVar17;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar17 + 1;
        cVar3 = *pcVar17;
        pcVar17 = pcVar24;
      } while (cVar3 != '\0');
      uVar20 = ~uVar20;
      pcVar17 = pcVar24 + -uVar20;
      pcVar24 = (char *)&DAT_0080f33a;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar24 = pcVar24 + 4;
      }
    }
    for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
      *pcVar24 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar24 = pcVar24 + 1;
    }
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),&DAT_0080f33a,-1,-1,2);
    pcVar17 = local_10;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),&local_28,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                     *(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),0,local_28,local_24,local_20,
                     local_1c);
    uVar10 = 2;
    iVar29 = -1;
    iVar28 = -1;
    puVar27 = (uint *)&DAT_007c2310;
    iVar11 = local_20;
    puVar12 = (uint *)thunk_FUN_005cbbe0(this_01,pcVar24);
    goto LAB_005d38bd;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),&local_28,2,0x67,
               0x67);
    bVar2 = pcVar24[4];
    if (bVar2 < 2) break;
    if (bVar2 < 4) {
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                       *(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),0,local_28,local_24,local_20,
                       local_1c);
      uVar10 = 2;
      iVar28 = -1;
      iVar11 = -1;
      puVar12 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),(uint *)(pcVar24 + 10),
                                   (uint *)&DAT_007c7274,local_20);
      ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar12,iVar11,iVar28,uVar10);
      break;
    }
    if (bVar2 != 4) break;
    iVar11 = *(int *)(pcVar24 + 0x50);
    if ((uint)(byte)pcVar24[5] < *(uint *)(iVar11 + 0xc)) {
      puVar12 = (uint *)(*(int *)(iVar11 + 8) * (uint)(byte)pcVar24[5] + *(int *)(iVar11 + 0x1c));
    }
    else {
      puVar12 = (uint *)0x0;
    }
    if (puVar12 == (uint *)0x0) break;
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                     *(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),0,local_28,local_24,local_20,
                     local_1c);
    uVar10 = 2;
    iVar29 = -1;
    iVar28 = -1;
    puVar27 = (uint *)&DAT_007c7274;
    iVar11 = local_20;
LAB_005d38bd:
    puVar12 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar12,puVar27,iVar11);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar12,iVar28,iVar29,uVar10);
    break;
  case (undefined1 *)0x5:
    if ((*pcVar24 == '\0') ||
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_01,*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),&local_28,2,
                   (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67), pcVar24[4] == '\0'))
    break;
    if (DAT_00808a8f != '\0') {
      iVar11 = (byte)pcVar24[0x4a] + 0x41;
      uVar10 = FUN_006b0140(0x1f4a,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,uVar10,iVar11);
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                       *(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),0,local_28,local_24,local_20,
                       local_1c);
      ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar2 = pcVar24[2], bVar2 == 0xff)) || (DAT_0080874d == bVar2))
    break;
    local_10 = (char *)0xffffffff;
    local_30 = (undefined1 *)CONCAT31(local_30._1_3_,bVar2);
    uVar21 = (uint)DAT_0080874d;
    uVar20 = (uint)bVar2;
    cVar3 = *(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar20);
    if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar21) == '\0')) {
      uVar10 = 0xfffffffe;
    }
    else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar21) == '\0')) {
      uVar10 = 0xffffffff;
    }
    else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar21) == '\x01')) {
      uVar10 = 1;
    }
    else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar21) == '\x01')) {
      uVar10 = 2;
    }
    else {
      uVar10 = 0;
    }
    switch(uVar10) {
    default:
      iVar11 = -1;
      break;
    case 1:
      iVar11 = 1;
      break;
    case 2:
      iVar11 = 3;
      break;
    case 0xfffffffe:
      iVar11 = 0;
      break;
    case 0xffffffff:
      iVar11 = 2;
    }
    iVar11 = iVar11 + -1;
    if (iVar11 < 0) break;
    iVar28 = *(int *)(this_01 + 0x1f4b);
    goto LAB_005d3bfa;
  case (undefined1 *)0x6:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),&local_28,2,0x67,
               0x67);
    if (((pcVar24[4] == '\x02') || (pcVar24[4] == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)(pcVar24 + 6) != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)(pcVar24 + 6) == DAT_0080877f)))))) {
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                       *(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),0,local_28,local_24,local_20,
                       local_1c);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(pcVar24 + 0x4b));
      uVar20 = 0xffffffff;
      pcVar24 = (char *)&DAT_0080f33a;
      do {
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        cVar3 = *pcVar24;
        pcVar24 = pcVar24 + 1;
      } while (cVar3 != '\0');
      if (4 < ~uVar20 - 1) {
        uVar20 = 0xffffffff;
        pcVar17 = &DAT_007cd500;
        do {
          pcVar24 = pcVar17;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar24 = pcVar17 + 1;
          cVar3 = *pcVar17;
          pcVar17 = pcVar24;
        } while (cVar3 != '\0');
        uVar20 = ~uVar20;
        pcVar24 = pcVar24 + -uVar20;
        pcVar16 = (char *)&DAT_0080f33a;
        for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar24;
          pcVar24 = pcVar24 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar20 = uVar20 & 3; pcVar17 = local_10, uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar16 = *pcVar24;
          pcVar24 = pcVar24 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),&DAT_0080f33a,-1,-1,2);
    }
    break;
  case (undefined1 *)0x7:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,*(int *)(this_01 + (int)pcVar17 * 4 + 0x20f4),&local_28,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    if (((pcVar24[4] != '\x02') || (pcVar24[0x4f] == '\0')) && (pcVar24[4] != '\x04')) break;
    iVar11 = 0;
LAB_005d3bf4:
    iVar28 = *(int *)(this_01 + 0x1f4f);
LAB_005d3bfa:
    pbVar14 = (byte *)FUN_0070b3a0(iVar28,iVar11);
    thunk_FUN_00540760(*(undefined4 **)(this_01 + (int)pcVar17 * 4 + 0x20f4),
                       (local_20 - *(int *)(pbVar14 + 4)) / 2 + local_28,
                       (local_1c - *(int *)(pbVar14 + 8)) / 2 + 1 + local_24,'\x06',pbVar14);
  }
switchD_005d35aa_default:
  FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + (int)pcVar17 * 4 + 0x20cc));
  if (*(short *)(param_1 + 0x14) == 3) {
    thunk_FUN_005b6730(this_01,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_f4.previous;
  return 0;
}


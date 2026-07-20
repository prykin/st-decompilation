
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::GetMessage */

undefined4 __thiscall SettMapMTy::GetMessage(SettMapMTy *this,int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  MMsgTy *pMVar4;
  undefined4 uVar5;
  StartSystemTy *pSVar6;
  ccFntTy *pcVar7;
  int *piVar8;
  code *pcVar9;
  CursorClassTy *pCVar10;
  SettMapMTy *this_00;
  undefined1 uVar11;
  DWORD DVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined3 extraout_var;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;
  undefined4 unaff_ESI;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  void *unaff_EDI;
  uint uVar22;
  undefined4 *puVar23;
  char *pcVar24;
  bool bVar25;
  bool bVar26;
  uint *puVar27;
  int iVar28;
  int iVar29;
  undefined4 uVar30;
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
  uint local_24;
  int local_20;
  int local_1c;
  char *local_18;
  byte local_11;
  char *local_10;
  undefined1 *local_c;
  char local_5;
  
  local_48 = this;
  DVar12 = FUN_006e51b0(this->field_0010);
  uVar22 = 0;
  this->field_0061 = DVar12;
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar13 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_48;
  if (iVar13 != 0) {
    g_currentExceptionFrame = local_f4.previous;
    iVar28 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x986,0,iVar13,
                                &DAT_007a4ccc,s_SettMapMTy__GetMessage_007cd4e4);
    if (iVar28 != 0) {
      pcVar9 = (code *)swi(3);
      uVar30 = (*pcVar9)();
      return uVar30;
    }
    RaiseInternalException(iVar13,0,s_E____titans_Start_settmobj_cpp_007cd258,0x986);
    return 0xffff;
  }
  SettMapTy::GetMessage((SettMapTy *)local_48,param_1);
  StartSystemTy::ChatMessage(DAT_0081176c,param_1);
  pCVar10 = DAT_00802a30;
  uVar18 = *(uint *)(param_1 + 0x10);
  if (uVar18 < 0x6505) {
    if (uVar18 == 0x6504) {
      uVar22 = *(uint *)(param_1 + 0x14);
      if ((uVar22 != 0xffffffff) && (this_00->field_1F84 != 0)) {
        iVar13 = this_00->field_1E2F;
        if (uVar22 < *(uint *)(iVar13 + 0xc)) {
          iVar13 = *(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c);
        }
        else {
          iVar13 = 0;
        }
        bVar17 = *(byte *)(iVar13 + 0x104);
        local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar17);
        if (DAT_0080877e == '\0') {
          ChgPlList(this_00,*(undefined4 *)(param_1 + 0x18),2,(uint)bVar17,0);
        }
        else {
          ChangePlayerCiv(this_00,*(uint *)(param_1 + 0x18),bVar17);
          SendPlList(this_00,0);
        }
      }
    }
    else if (uVar18 < 0x6341) {
      if (uVar18 == 0x6340) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00->field_1A5B->field_055C,param_1,0);
      }
      else if (uVar18 < 0x6327) {
        if (uVar18 == 0x6326) {
          this_00->field_2208 = '\x02' - **(char **)(param_1 + 0x14);
        }
        else if (uVar18 == 2) {
          this_00->field_2209 = this_00->field_0061;
        }
        else if (uVar18 == 3) {
          if (this_00->field_2226 != 0) {
            FUN_006ab060((LPVOID *)&this_00->field_2226);
            this_00->field_222A = 0;
          }
          if ((byte *)this_00->field_222F != (byte *)0x0) {
            FUN_006ae110((byte *)this_00->field_222F);
          }
          this_00->field_222F = 0;
          if ((this_00->field_004D != 0x60ff) && (g_int_00811764 != (int *)0x0)) {
            if (DAT_0080877e == '\0') {
              FUN_00715360(g_int_00811764,0,'\x11',(char *)0x0,0,0,0xffffffff);
              if (this_00->field_004D != 0x6109) {
                thunk_FUN_005dac60();
              }
            }
            else if (this_00->field_004D == 0x611f) {
              FUN_00715360(g_int_00811764,0,'\x12',(char *)0x0,0,0,0xffffffff);
            }
            else {
              FUN_00715360(g_int_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
              thunk_FUN_005dac60();
            }
          }
        }
      }
      else if (uVar18 == 0x6327) {
        piVar8 = *(int **)(param_1 + 0x14);
        thunk_FUN_005b5f00(this_00,this_00->field_2204,piVar8);
        iVar13 = *piVar8;
        local_10 = (char *)piVar8[5];
        ccFntTy::SetSurf(DAT_0081176c->field_0034,this_00->field_2204,0,
                         (iVar13 + -1) * (int)local_10,0,(int)local_10,
                         *(int *)(this_00->field_2204 + 8) -
                         ((-(uint)(piVar8[1] != 1) & 0xfffffffd) + 3));
        uVar30 = 2;
        iVar29 = -1;
        iVar28 = -1;
        puVar14 = (uint *)FUN_006b0140((iVar13 != 1) + 0x2422,HINSTANCE_00807618);
        ccFntTy::WrStr(DAT_0081176c->field_0034,puVar14,iVar28,iVar29,uVar30);
        FUN_006b35d0(DAT_008075a8,this_00->field_2200);
      }
    }
    else if (uVar18 < 0x6502) {
      if (uVar18 == 0x6501) {
        uVar22 = *(uint *)(param_1 + 0x14);
        if ((uVar22 != 0xffffffff) && (this_00->field_1F84 != 0)) {
          iVar13 = this_00->field_1E2F;
          if (uVar22 < *(uint *)(iVar13 + 0xc)) {
            iVar13 = *(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c);
          }
          else {
            iVar13 = 0;
          }
          bVar17 = *(byte *)(iVar13 + 0x104);
          local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar17);
          if (DAT_0080877e == '\0') {
            ChgPlList(this_00,*(undefined4 *)(param_1 + 0x18),5,1,(uint)bVar17);
          }
          else {
            ChangePlayerTeam(this_00,*(uint *)(param_1 + 0x18),1,(uint)bVar17);
            SendPlList(this_00,0);
          }
        }
      }
      else if (uVar18 == 0x6341) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00->field_1A5B->field_05ED,param_1,0);
      }
      else if ((uVar18 == 0x64ff) && (DAT_0080877e != '\0')) {
        FUN_00715360(g_int_00811764,0,' ',(char *)&this_00->field_1F53,0xd,1,0xffffffff);
      }
    }
    else if (((uVar18 == 0x6502) && (uVar22 = *(uint *)(param_1 + 0x14), uVar22 != 0xffffffff)) &&
            (this_00->field_1F84 != 0)) {
      iVar13 = this_00->field_1E2F;
      if (uVar22 < *(uint *)(iVar13 + 0xc)) {
        iVar13 = *(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c);
      }
      else {
        iVar13 = 0;
      }
      bVar17 = *(byte *)(iVar13 + 0x104);
      local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar17);
      if (DAT_0080877e == '\0') {
        ChgPlList(this_00,*(undefined4 *)(param_1 + 0x18),1,(uint)bVar17,0);
      }
      else {
        ChangePlayerColor(this_00,*(uint *)(param_1 + 0x18),bVar17);
        SendPlList(this_00,0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (0x654b < uVar18) {
    if (uVar18 < 0x694b) {
      if (uVar18 == 0x694a) {
        iVar13 = this_00->field_1F84;
        local_34 = 0x1010101;
        bVar26 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (iVar13 != 0) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar30 = DAT_00802a30->field_00C9;
              uVar5 = DAT_00802a30->field_00C5;
              DAT_00802a30->field_0493 = 5;
              pCVar10->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar10,CASE_0,uVar5,uVar30);
              CursorClassTy::DrawSprite(pCVar10,pCVar10->field_00C5,pCVar10->field_00C9);
              pCVar10->field_0xd2 = 0;
              *(undefined4 *)&pCVar10->field_0x4df = 0xffffffff;
            }
            DAT_008087c4._2_1_ = '\0';
            DAT_0080874f = 0;
            puVar23 = (undefined4 *)((int)&DAT_008087c4 + 3);
            for (iVar13 = 0xa2; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar23 = 0;
              puVar23 = puVar23 + 1;
            }
            puVar15 = &DAT_008087e9;
            do {
              puVar15[-1] = 0;
              *puVar15 = 0xff;
              puVar15 = puVar15 + 0x51;
            } while ((int)puVar15 < 0x808a71);
            iVar13 = this_00->field_1F84;
            uVar18 = 0;
            uVar22 = *(uint *)(iVar13 + 0xc);
            if (0 < (int)uVar22) {
              bVar26 = uVar22 != 0;
              do {
                if (bVar26) {
                  pcVar20 = (char *)(*(int *)(iVar13 + 8) * uVar18 + *(int *)(iVar13 + 0x1c));
                }
                else {
                  pcVar20 = (char *)0x0;
                }
                if (((pcVar20 != (char *)0x0) && (*pcVar20 != '\0')) && (pcVar20[2] != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)pcVar20[2]) = 0;
                }
                uVar18 = uVar18 + 1;
                bVar26 = uVar18 < uVar22;
              } while ((int)uVar18 < (int)uVar22);
            }
            local_18 = (char *)0x0;
            if (0 < (int)uVar22) {
              bVar26 = uVar22 != 0;
              do {
                if (bVar26) {
                  pcVar20 = (char *)(*(int *)(iVar13 + 8) * (int)local_18 + *(int *)(iVar13 + 0x1c))
                  ;
                }
                else {
                  pcVar20 = (char *)0x0;
                }
                if (((pcVar20 != (char *)0x0) && (pcVar20[4] != '\0')) &&
                   ((pcVar20[4] != '\x01' ||
                    ((this_00->field_1E26 == '\x05' || (this_00->field_1E26 == '\x0f')))))) {
                  iVar13 = *(int *)(pcVar20 + 0x50);
                  if ((uint)(byte)pcVar20[5] < *(uint *)(iVar13 + 0xc)) {
                    local_c = (undefined1 *)
                              (*(int *)(iVar13 + 8) * (uint)(byte)pcVar20[5] +
                              *(int *)(iVar13 + 0x1c));
                  }
                  else {
                    local_c = (undefined1 *)0x0;
                  }
                  DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
                  if (pcVar20[2] == -1) {
                    iVar13 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar13) != '\0') {
                        pcVar20[2] = (char)iVar13;
                        *(undefined1 *)((int)&local_34 + iVar13) = 0;
                        break;
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < 8);
                  }
                  (&DAT_008087e9)[(uint)(byte)pcVar20[2] * 0x51] = pcVar20[2];
                  pcVar24 = local_18 + 1;
                  (&DAT_008087e8)[(uint)(byte)pcVar20[2] * 0x51] = pcVar20[3];
                  iVar13 = this_00->field_1F84;
                  bVar26 = pcVar24 < *(char **)(iVar13 + 0xc);
                  if ((int)pcVar24 < (int)*(char **)(iVar13 + 0xc)) {
                    do {
                      if (bVar26) {
                        pcVar19 = (char *)(*(int *)(iVar13 + 8) * (int)pcVar24 +
                                          *(int *)(iVar13 + 0x1c));
                      }
                      else {
                        pcVar19 = (char *)0x0;
                      }
                      if (pcVar19 != (char *)0x0) {
                        if (*pcVar19 != '\0') break;
                        pcVar19[2] = pcVar20[2];
                      }
                      iVar13 = this_00->field_1F84;
                      pcVar24 = pcVar24 + 1;
                      bVar26 = pcVar24 < *(char **)(iVar13 + 0xc);
                    } while ((int)pcVar24 < (int)*(char **)(iVar13 + 0xc));
                  }
                  uVar22 = 0xffffffff;
                  pcVar24 = &DAT_008016a0;
                  do {
                    pcVar19 = pcVar24;
                    if (uVar22 == 0) break;
                    uVar22 = uVar22 - 1;
                    pcVar19 = pcVar24 + 1;
                    cVar2 = *pcVar24;
                    pcVar24 = pcVar19;
                  } while (cVar2 != '\0');
                  uVar22 = ~uVar22;
                  local_10 = &DAT_008087c8 + (uint)(byte)pcVar20[2] * 0x51;
                  pcVar24 = pcVar19 + -uVar22;
                  pcVar19 = &DAT_008087c8 + (uint)(byte)pcVar20[2] * 0x51;
                  for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *(undefined4 *)pcVar19 = *(undefined4 *)pcVar24;
                    pcVar24 = pcVar24 + 4;
                    pcVar19 = pcVar19 + 4;
                  }
                  for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                    *pcVar19 = *pcVar24;
                    pcVar24 = pcVar24 + 1;
                    pcVar19 = pcVar19 + 1;
                  }
                  cVar2 = pcVar20[4];
                  if (cVar2 == '\x02') {
                    if (*pcVar20 != '\0') {
                      *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar20[2] * 0x51 + 3) = 0;
                    }
                    if (DAT_0080877f == *(int *)(pcVar20 + 6)) {
                      DAT_0080874d = pcVar20[2];
                      DAT_0080874e = pcVar20[3];
                    }
                  }
                  else if (cVar2 == '\x03') {
                    if (DAT_0080877f == *(int *)(pcVar20 + 6)) {
                      DAT_0080874d = pcVar20[2];
                      DAT_0080874e = pcVar20[3];
                      DAT_0080874f = 1;
                    }
                  }
                  else if (cVar2 == '\x04') {
                    *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar20[2] * 0x51 + 3) = 1;
                    if (local_c == (undefined1 *)0x0) {
                      uVar22 = 0xffffffff;
                      pcVar24 = &DAT_008016a0;
                      do {
                        pcVar19 = pcVar24;
                        if (uVar22 == 0) break;
                        uVar22 = uVar22 - 1;
                        pcVar19 = pcVar24 + 1;
                        cVar2 = *pcVar24;
                        pcVar24 = pcVar19;
                      } while (cVar2 != '\0');
                      uVar22 = ~uVar22;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar20[2] * 0x51;
                      pcVar24 = pcVar19 + -uVar22;
                      pcVar19 = &DAT_008087c8 + (uint)(byte)pcVar20[2] * 0x51;
                      for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar24;
                        pcVar24 = pcVar24 + 4;
                        pcVar19 = pcVar19 + 4;
                      }
                      for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                        *pcVar19 = *pcVar24;
                        pcVar24 = pcVar24 + 1;
                        pcVar19 = pcVar19 + 1;
                      }
                    }
                    else {
                      uVar22 = 0xffffffff;
                      pcVar24 = local_c + 0x4c;
                      do {
                        pcVar19 = pcVar24;
                        if (uVar22 == 0) break;
                        uVar22 = uVar22 - 1;
                        pcVar19 = pcVar24 + 1;
                        cVar2 = *pcVar24;
                        pcVar24 = pcVar19;
                      } while (cVar2 != '\0');
                      uVar22 = ~uVar22;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar20[2] * 0x51;
                      pcVar24 = pcVar19 + -uVar22;
                      pcVar19 = &DAT_008087c8 + (uint)(byte)pcVar20[2] * 0x51;
                      for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar24;
                        pcVar24 = pcVar24 + 4;
                        pcVar19 = pcVar19 + 4;
                      }
                      for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                        *pcVar19 = *pcVar24;
                        pcVar24 = pcVar24 + 1;
                        pcVar19 = pcVar19 + 1;
                      }
                    }
                  }
                  (&DAT_008087ea)[(uint)(byte)pcVar20[2] * 0x51] = pcVar20[0x4a];
                  *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar20[2] * 0x51) =
                       *(undefined4 *)(pcVar20 + 0x54);
                  *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar20[2] * 0x51) =
                       *(undefined4 *)(pcVar20 + 0x58);
                  *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar20[2] * 0x51) =
                       *(undefined4 *)(pcVar20 + 0x5c);
                }
                iVar13 = this_00->field_1F84;
                local_18 = local_18 + 1;
                bVar26 = local_18 < *(char **)(iVar13 + 0xc);
              } while ((int)local_18 < (int)*(char **)(iVar13 + 0xc));
            }
            thunk_FUN_0056ee90(0x807620);
            pCVar10 = DAT_00802a30;
            if ((this_00->field_1E26 == '\a') || (this_00->field_1E26 == '\x0e')) {
              if ((this_00->field_1F47 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
                uVar22 = 0xffffffff;
                pcVar20 = &DAT_00853de4;
                do {
                  pcVar24 = pcVar20;
                  if (uVar22 == 0) break;
                  uVar22 = uVar22 - 1;
                  pcVar24 = pcVar20 + 1;
                  cVar2 = *pcVar20;
                  pcVar20 = pcVar24;
                } while (cVar2 != '\0');
                uVar22 = ~uVar22;
                pcVar20 = pcVar24 + -uVar22;
                pcVar24 = &DAT_0080ed16;
                for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
                  pcVar20 = pcVar20 + 4;
                  pcVar24 = pcVar24 + 4;
                }
                for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *pcVar24 = *pcVar20;
                  pcVar20 = pcVar20 + 1;
                  pcVar24 = pcVar24 + 1;
                }
                goto LAB_005d2018;
              }
              if ((DAT_0080877e != '\0') && (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0)) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar30 = DAT_00802a30->field_00C9;
                  uVar5 = DAT_00802a30->field_00C5;
                  DAT_00802a30->field_0493 = 1;
                  pCVar10->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar10,CASE_0,uVar5,uVar30);
                  CursorClassTy::DrawSprite(pCVar10,pCVar10->field_00C5,pCVar10->field_00C9);
                  pCVar10->field_0xd2 = 0;
                  *(undefined4 *)&pCVar10->field_0x4df = 0xffffffff;
                }
                pSVar6 = this_00->field_1A5B;
                puVar23 = local_90;
                for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar23 = 0;
                  puVar23 = puVar23 + 1;
                }
                puVar23 = local_b0;
                for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar23 = 0;
                  puVar23 = puVar23 + 1;
                }
                local_b0[2] = this_00->field_0008;
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                iVar13 = MMsgTy::SetMessage(pSVar6->field_02E6,0x251f,'\x01',local_90,local_b0,
                                            (undefined4 *)0x0,0,0);
                if (iVar13 != 0) {
                  (**(code **)(this_00->field_0000 + 0x24))();
                }
              }
            }
            else {
LAB_005d2018:
              uVar22 = 0xffffffff;
              local_5 = '\x01';
              pcVar20 = &DAT_0080ed16;
              do {
                pcVar24 = pcVar20;
                if (uVar22 == 0) break;
                uVar22 = uVar22 - 1;
                pcVar24 = pcVar20 + 1;
                cVar2 = *pcVar20;
                pcVar20 = pcVar24;
              } while (cVar2 != '\0');
              uVar22 = ~uVar22;
              pcVar20 = pcVar24 + -uVar22;
              pcVar24 = (char *)&DAT_0080ee1a;
              for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
                pcVar20 = pcVar20 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *pcVar24 = *pcVar20;
                pcVar20 = pcVar20 + 1;
                pcVar24 = pcVar24 + 1;
              }
              uVar22 = 0xffffffff;
              pcVar20 = &DAT_00807680;
              do {
                if (uVar22 == 0) break;
                uVar22 = uVar22 - 1;
                cVar2 = *pcVar20;
                pcVar20 = pcVar20 + 1;
              } while (cVar2 != '\0');
              uVar18 = 0xffffffff;
              pcVar20 = (char *)((int)&DAT_0080ed12 + ~uVar22 + 3);
              do {
                pcVar24 = pcVar20;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1;
                pcVar24 = pcVar20 + 1;
                cVar2 = *pcVar20;
                pcVar20 = pcVar24;
              } while (cVar2 != '\0');
              uVar18 = ~uVar18;
              pcVar20 = pcVar24 + -uVar18;
              pcVar24 = &DAT_0080ef1e;
              for (uVar22 = uVar18 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
                pcVar20 = pcVar20 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *pcVar24 = *pcVar20;
                pcVar20 = pcVar20 + 1;
                pcVar24 = pcVar24 + 1;
              }
            }
            if (local_5 != '\0') {
              DAT_008087a0 = this_00->field_1E26;
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                puVar23 = &DAT_00808ab0;
                for (iVar13 = 0x3a8; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar23 = 0;
                  puVar23 = puVar23 + 1;
                }
                DAT_00808aaf = 0;
                iVar13 = this_00->field_1F84;
                local_18 = (char *)0x0;
                if (0 < *(int *)(iVar13 + 0xc)) {
                  bVar26 = *(int *)(iVar13 + 0xc) != 0;
                  do {
                    if (bVar26) {
                      puVar15 = (undefined1 *)
                                (*(int *)(iVar13 + 8) * (int)local_18 + *(int *)(iVar13 + 0x1c));
                    }
                    else {
                      puVar15 = (undefined1 *)0x0;
                    }
                    if (puVar15 != (undefined1 *)0x0) {
                      cVar2 = puVar15[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        if (cVar2 == '\x04') {
                          iVar13 = *(int *)(puVar15 + 0x50);
                          if ((uint)(byte)puVar15[5] < *(uint *)(iVar13 + 0xc)) {
                            pcVar20 = (char *)(*(int *)(iVar13 + 8) * (uint)(byte)puVar15[5] +
                                              *(int *)(iVar13 + 0x1c));
                          }
                          else {
                            pcVar20 = (char *)0x0;
                          }
                          if (pcVar20 != (char *)0x0) {
                            uVar22 = 0xffffffff;
                            do {
                              pcVar24 = pcVar20;
                              if (uVar22 == 0) break;
                              uVar22 = uVar22 - 1;
                              pcVar24 = pcVar20 + 1;
                              cVar1 = *pcVar20;
                              pcVar20 = pcVar24;
                            } while (cVar1 != '\0');
                            uVar22 = ~uVar22;
                            pcVar24 = pcVar24 + -uVar22;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar22 = 0xffffffff;
                          pcVar20 = puVar15 + 10;
                          do {
                            pcVar24 = pcVar20;
                            if (uVar22 == 0) break;
                            uVar22 = uVar22 - 1;
                            pcVar24 = pcVar20 + 1;
                            cVar1 = *pcVar20;
                            pcVar20 = pcVar24;
                          } while (cVar1 != '\0');
                          uVar22 = ~uVar22;
                          pcVar24 = pcVar24 + -uVar22;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar20 = local_22c;
                          for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar24;
                            pcVar24 = pcVar24 + 4;
                            pcVar20 = pcVar20 + 4;
                          }
                          for (uVar22 = uVar22 & 3; local_10 = local_22c, uVar22 != 0;
                              uVar22 = uVar22 - 1) {
                            *pcVar20 = *pcVar24;
                            pcVar24 = pcVar24 + 1;
                            pcVar20 = pcVar20 + 1;
                          }
                        }
                        local_1ec = *(undefined4 *)(puVar15 + 6);
                        local_1e8._0_2_ = CONCAT11(*puVar15,puVar15[2]);
                        local_1e4 = this_00->field_0061;
                        if (cVar2 == '\x02') {
                          local_1e8 = CONCAT13(1,CONCAT12(1,(undefined2)local_1e8));
                        }
                        else {
                          local_1e8 = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_1e8)) & 0xff02ffff;
                        }
                        pcVar20 = local_22c;
                        puVar23 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar13 = 0x27; iVar13 != 0; iVar13 = iVar13 + -1) {
                          *puVar23 = *(undefined4 *)pcVar20;
                          pcVar20 = pcVar20 + 4;
                          puVar23 = puVar23 + 1;
                        }
                        if ((byte)local_1e8 < 8) {
                          iVar28 = 0;
                          iVar13 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar28 + iVar13] == '\0') {
                              (&DAT_00808800)[iVar28 + iVar13] = DAT_00808aaf;
                              break;
                            }
                            iVar28 = iVar28 + 1;
                          } while (iVar28 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    iVar13 = this_00->field_1F84;
                    local_18 = local_18 + 1;
                    bVar26 = local_18 < *(char **)(iVar13 + 0xc);
                  } while ((int)local_18 < (int)*(char **)(iVar13 + 0xc));
                }
                RunGame(this_00);
                FUN_006b6500(g_int_00811764,1);
                FUN_00715360(g_int_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
                FUN_006b6500(g_int_00811764,DAT_0080733c);
              }
              else {
                FUN_006b6500(g_int_00811764,1);
                puVar23 = (undefined4 *)local_70;
                for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar23 = 0;
                  puVar23 = puVar23 + 1;
                }
                *(undefined2 *)puVar23 = 0;
                local_64 = DAT_0080733b;
                local_70._3_4_ = DAT_008087be;
                local_70._0_2_ = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                local_63 = DAT_00807361;
                local_62 = DAT_00808754;
                local_56 = this_00->field_2121;
                local_70[2] = 2;
                local_5a = DAT_00808aab;
                switch(this_00->field_1E26) {
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
                FUN_00715360(g_int_00811764,0,'-',local_70,0x26,1,0xffffffff);
                FUN_006b6500(g_int_00811764,DAT_0080733c);
                this_00->field_2233 = this_00->field_0061;
                this_00->field_222E = 1;
                puVar14 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x28,4,10);
                this_00->field_222F = puVar14;
                if (DAT_0080c4fe != (uint *)0x0) {
                  FUN_006ae110((byte *)DAT_0080c4fe);
                }
                DAT_0080c4fe = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x28,4,10);
                puVar23 = &DAT_00808ab0;
                for (iVar13 = 0x3a8; iVar13 != 0; iVar13 = iVar13 + -1) {
                  *puVar23 = 0;
                  puVar23 = puVar23 + 1;
                }
                DAT_00808aaf = 0;
                iVar13 = this_00->field_1F84;
                local_18 = (char *)0x0;
                if (0 < *(int *)(iVar13 + 0xc)) {
                  bVar26 = *(int *)(iVar13 + 0xc) != 0;
                  do {
                    if (bVar26) {
                      puVar15 = (undefined1 *)
                                (*(int *)(iVar13 + 8) * (int)local_18 + *(int *)(iVar13 + 0x1c));
                    }
                    else {
                      puVar15 = (undefined1 *)0x0;
                    }
                    local_c = puVar15;
                    if (puVar15 != (undefined1 *)0x0) {
                      if (((puVar15[4] == '\x02') || (puVar15[4] == '\x03')) &&
                         (DAT_0080877f != *(int *)(puVar15 + 6))) {
                        Library::DKW::TBL::FUN_006ae1c0
                                  ((uint *)this_00->field_222F,(undefined4 *)(puVar15 + 6));
                        Library::DKW::TBL::FUN_006ae1c0(DAT_0080c4fe,(undefined4 *)(puVar15 + 6));
                      }
                      cVar2 = puVar15[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        uVar22 = 0xffffffff;
                        local_10 = local_190;
                        pcVar20 = local_c + 10;
                        do {
                          pcVar24 = pcVar20;
                          if (uVar22 == 0) break;
                          uVar22 = uVar22 - 1;
                          pcVar24 = pcVar20 + 1;
                          cVar1 = *pcVar20;
                          pcVar20 = pcVar24;
                        } while (cVar1 != '\0');
                        uVar22 = ~uVar22;
                        pcVar20 = pcVar24 + -uVar22;
                        pcVar24 = local_190;
                        for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
                          pcVar20 = pcVar20 + 4;
                          pcVar24 = pcVar24 + 4;
                        }
                        for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                          *pcVar24 = *pcVar20;
                          pcVar20 = pcVar20 + 1;
                          pcVar24 = pcVar24 + 1;
                        }
                        if (cVar2 == '\x04') {
                          iVar13 = *(int *)(local_c + 0x50);
                          if ((uint)(byte)local_c[5] < *(uint *)(iVar13 + 0xc)) {
                            pcVar20 = (char *)(*(int *)(iVar13 + 8) * (uint)(byte)local_c[5] +
                                              *(int *)(iVar13 + 0x1c));
                          }
                          else {
                            pcVar20 = (char *)0x0;
                          }
                          if (pcVar20 != (char *)0x0) {
                            uVar22 = 0xffffffff;
                            do {
                              pcVar24 = pcVar20;
                              if (uVar22 == 0) break;
                              uVar22 = uVar22 - 1;
                              pcVar24 = pcVar20 + 1;
                              cVar1 = *pcVar20;
                              pcVar20 = pcVar24;
                            } while (cVar1 != '\0');
                            uVar22 = ~uVar22;
                            pcVar24 = pcVar24 + -uVar22;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar22 = 0xffffffff;
                          pcVar20 = local_c + 10;
                          do {
                            pcVar24 = pcVar20;
                            if (uVar22 == 0) break;
                            uVar22 = uVar22 - 1;
                            pcVar24 = pcVar20 + 1;
                            cVar1 = *pcVar20;
                            pcVar20 = pcVar24;
                          } while (cVar1 != '\0');
                          uVar22 = ~uVar22;
                          pcVar24 = pcVar24 + -uVar22;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar20 = local_190;
                          for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar24;
                            pcVar24 = pcVar24 + 4;
                            pcVar20 = pcVar20 + 4;
                          }
                          for (uVar22 = uVar22 & 3; local_10 = local_190, uVar22 != 0;
                              uVar22 = uVar22 - 1) {
                            *pcVar20 = *pcVar24;
                            pcVar24 = pcVar24 + 1;
                            pcVar20 = pcVar20 + 1;
                          }
                        }
                        local_150 = *(undefined4 *)(local_c + 6);
                        local_14c._0_2_ = CONCAT11(*local_c,local_c[2]);
                        local_148 = this_00->field_0061;
                        if (cVar2 == '\x02') {
                          local_14c = CONCAT13(1,CONCAT12(1,(undefined2)local_14c));
                        }
                        else {
                          local_14c = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_14c)) & 0xff02ffff;
                        }
                        pcVar20 = local_190;
                        puVar23 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar13 = 0x27; iVar13 != 0; iVar13 = iVar13 + -1) {
                          *puVar23 = *(undefined4 *)pcVar20;
                          pcVar20 = pcVar20 + 4;
                          puVar23 = puVar23 + 1;
                        }
                        if ((byte)local_14c < 8) {
                          iVar28 = 0;
                          iVar13 = (local_14c & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar28 + iVar13] == '\0') {
                              (&DAT_00808800)[iVar28 + iVar13] = DAT_00808aaf;
                              break;
                            }
                            iVar28 = iVar28 + 1;
                          } while (iVar28 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    iVar13 = this_00->field_1F84;
                    local_18 = local_18 + 1;
                    bVar26 = local_18 < *(char **)(iVar13 + 0xc);
                  } while ((int)local_18 < (int)*(char **)(iVar13 + 0xc));
                }
                if (*(int *)(this_00->field_222F + 0xc) == 0) {
                  this_00->field_222E = 0;
                  RunGame(this_00);
                  if (DAT_008067a0 != '\0') {
                    CFsgsConnection::UpdateGame
                              ((CFsgsConnection *)&DAT_00802a90,6,&this_00->field_0x1a5f);
                    CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
                  }
                }
              }
              if ((this_00->field_1E26 == '\f') || (this_00->field_1E26 == '\x10')) {
                DAT_0080879c = 1;
                _DAT_0080f32e = 1;
              }
            }
          }
          else {
            if (0 < *(int *)(iVar13 + 0xc)) {
              bVar25 = *(int *)(iVar13 + 0xc) != 0;
              do {
                if (bVar25) {
                  iVar28 = *(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c);
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
                uVar22 = uVar22 + 1;
                bVar25 = uVar22 < *(uint *)(iVar13 + 0xc);
              } while ((int)uVar22 < (int)*(uint *)(iVar13 + 0xc));
            }
            if (bVar26) {
              pMVar4 = this_00->field_1A5B->field_02E6;
              if (pMVar4 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar4,0x2527,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
            else {
              uVar22 = 0;
              if (0 < *(int *)(iVar13 + 0xc)) {
                bVar26 = *(int *)(iVar13 + 0xc) != 0;
                do {
                  if (bVar26) {
                    pcVar20 = (char *)(*(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c));
                  }
                  else {
                    pcVar20 = (char *)0x0;
                  }
                  if ((pcVar20 != (char *)0x0) && (*pcVar20 != '\0')) {
                    cVar2 = pcVar20[4];
                    if (this_00->field_1E26 == '\f') {
                      if ((cVar2 == '\0') || (cVar2 == '\x01')) {
                        local_11 = 0;
                        break;
                      }
                    }
                    else if ((cVar2 == '\0') || (cVar2 == '\x01')) goto LAB_005d1b17;
                    local_11 = local_11 + 1;
                  }
LAB_005d1b17:
                  uVar22 = uVar22 + 1;
                  bVar26 = uVar22 < *(uint *)(iVar13 + 0xc);
                } while ((int)uVar22 < (int)*(uint *)(iVar13 + 0xc));
              }
              if (1 < local_11) goto LAB_005d1b5a;
              pMVar4 = this_00->field_1A5B->field_02E6;
              if (pMVar4 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar4,0x2528,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
        }
      }
      else if (uVar18 == 0x654c) {
        if (DAT_0080877e != '\0') {
          CheckPlList(this_00,unaff_EDI);
          thunk_FUN_005d1380((int)this_00);
          (**(code **)(this_00->field_0000 + 0x2c))();
          SettMapTy::PaintSC((SettMapTy *)this_00);
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (uVar18 == 0x654d) goto switchD_005d1877_caseD_6548;
    }
    else if (uVar18 == 0xc0a2) {
      iVar13 = thunk_FUN_005ddb40((int)this_00->field_1A5B);
      if (iVar13 == 0) {
        if (DAT_008067a0 != '\0') {
          iVar13 = this_00->field_1A5B->field_0686;
          if (*(int *)(iVar13 + 8) < 1) {
            pcVar20 = (char *)0x0;
          }
          else {
            pcVar20 = (char *)**(undefined4 **)(iVar13 + 0x14);
          }
          bVar26 = thunk_FUN_005717e0(pcVar20);
          if (CONCAT31(extraout_var,bVar26) != 0) {
            iVar13 = this_00->field_1A5B->field_0686;
            if (*(int *)(iVar13 + 8) < 1) {
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
            }
            else {
              CFsgsConnection::SendChatMessage
                        ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar13 + 0x14));
            }
            goto LAB_005d28da;
          }
        }
        pcVar20 = local_680;
        for (iVar13 = 0x114; iVar13 != 0; iVar13 = iVar13 + -1) {
          pcVar20[0] = '\0';
          pcVar20[1] = '\0';
          pcVar20[2] = '\0';
          pcVar20[3] = '\0';
          pcVar20 = pcVar20 + 4;
        }
        *pcVar20 = '\0';
        pcVar20 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar20 = (char *)&DAT_00807ddd;
        }
        uVar22 = 0xffffffff;
        do {
          pcVar24 = pcVar20;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar24 = pcVar20 + 1;
          cVar2 = *pcVar20;
          pcVar20 = pcVar24;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        pSVar6 = this_00->field_1A5B;
        pcVar20 = pcVar24 + -uVar22;
        pcVar24 = local_680;
        for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
          pcVar20 = pcVar20 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
          *pcVar24 = *pcVar20;
          pcVar20 = pcVar20 + 1;
          pcVar24 = pcVar24 + 1;
        }
        iVar13 = pSVar6->field_0686;
        if (*(int *)(iVar13 + 8) < 1) {
          pcVar20 = (char *)0x0;
        }
        else {
          pcVar20 = (char *)**(undefined4 **)(iVar13 + 0x14);
        }
        uVar22 = 0xffffffff;
        do {
          pcVar24 = pcVar20;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar24 = pcVar20 + 1;
          cVar2 = *pcVar20;
          pcVar20 = pcVar24;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        pcVar20 = pcVar24 + -uVar22;
        pcVar24 = local_640;
        for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
          pcVar20 = pcVar20 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
          *pcVar24 = *pcVar20;
          pcVar20 = pcVar20 + 1;
          pcVar24 = pcVar24 + 1;
        }
        local_10 = local_640;
        StartSystemTy::AddToChat(pSVar6,(int)local_680);
        if (this_00->field_2208 == '\0') {
          iVar13 = this_00->field_1F84;
          if (iVar13 != 0) {
            uVar22 = *(uint *)(iVar13 + 0xc);
            uVar18 = 0;
            if (uVar22 != 0) {
              if (uVar22 == 0) {
                iVar28 = 0;
                goto LAB_005d277a;
              }
              do {
                iVar28 = *(int *)(iVar13 + 8) * uVar18 + *(int *)(iVar13 + 0x1c);
LAB_005d277a:
                if ((iVar28 != 0) &&
                   (((*(char *)(iVar28 + 4) == '\x02' || (*(char *)(iVar28 + 4) == '\x03')) &&
                    (*(int *)(iVar28 + 6) == DAT_0080877f)))) {
                  local_5 = *(char *)(iVar28 + 0x4a);
                  break;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar22);
            }
            local_c = (undefined1 *)0x0;
            if (uVar22 != 0) {
              if (uVar22 == 0) {
                iVar13 = 0;
                goto LAB_005d27c3;
              }
              do {
                iVar13 = *(int *)(iVar13 + 8) * (int)local_c + *(int *)(iVar13 + 0x1c);
LAB_005d27c3:
                if (((iVar13 != 0) &&
                    ((*(char *)(iVar13 + 4) == '\x02' || (*(char *)(iVar13 + 4) == '\x03')))) &&
                   (*(int *)(iVar13 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) && (bVar17 = *(byte *)(iVar13 + 2), bVar17 != 0xff))
                       && (DAT_0080874d != bVar17)) {
                      local_10 = (char *)CONCAT31(local_10._1_3_,bVar17);
                      uVar18 = (uint)DAT_0080874d;
                      uVar22 = (uint)bVar17;
                      cVar2 = *(char *)((int)&DAT_00808a4f + uVar18 * 8 + uVar22);
                      if ((cVar2 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar18) == '\0')) {
                        iVar28 = -2;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar18) == '\0')) {
                        iVar28 = -1;
                      }
                      else if ((cVar2 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar18) == '\x01')) {
                        iVar28 = 1;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar18) == '\x01')) {
                        iVar28 = 2;
                      }
                      else {
                        iVar28 = 0;
                      }
                      if (iVar28 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (*(char *)(iVar13 + 0x4a) == local_5) {
LAB_005d28a0:
                    FUN_00715360(g_int_00811764,*(int *)(iVar13 + 6),'\x1b',local_680,0x451,1,
                                 0xffffffff);
                  }
                }
                iVar13 = this_00->field_1F84;
                local_c = local_c + 1;
              } while (local_c < *(undefined1 **)(iVar13 + 0xc));
            }
          }
        }
        else {
          FUN_00715360(g_int_00811764,0,'\x1b',local_680,0x451,1,0xffffffff);
        }
      }
LAB_005d28da:
      Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1A5B->field_0686,0,&DAT_008016a0);
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1A5B->field_0686;
      FUN_006e6080(this_00,2,this_00->field_1A5B->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (uVar18 < 0x654a) {
    switch(uVar18) {
    case 0x6505:
      uVar22 = *(uint *)(param_1 + 0x14);
      if ((uVar22 != 0xffffffff) && (this_00->field_1F84 != 0)) {
        iVar13 = this_00->field_1E2F;
        if (uVar22 < *(uint *)(iVar13 + 0xc)) {
          iVar13 = *(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c);
        }
        else {
          iVar13 = 0;
        }
        if (DAT_0080877e == '\0') {
          ChgPlList(this_00,*(undefined4 *)(param_1 + 0x18),3,*(undefined4 *)(iVar13 + 0x104),
                    *(undefined4 *)(iVar13 + 0x108));
          this_00->field_2244 = 0;
        }
        else {
          pcVar20 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar20 = (char *)&DAT_00807ddd;
          }
          ChangePlayerList(this_00,DAT_0080877f,*(uint *)(param_1 + 0x18),*(int *)(iVar13 + 0x104),
                           (char)*(undefined4 *)(iVar13 + 0x108),pcVar20);
          SendPlList(this_00,0);
        }
      }
      break;
    case 0x6506:
      uVar22 = *(uint *)(param_1 + 0x18);
      if (uVar22 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          this_00->field_2121 = this_00->field_2121 + 1;
          SendDesc(this_00,0);
          SendPlList(this_00,0);
        }
      }
      else if (((2 < uVar22) && (uVar22 < 9)) && (DAT_0080877e != '\0')) {
        DAT_00808aab = DAT_00808aab + 1;
        SendDesc(this_00,0);
      }
      break;
    case 0x6548:
      goto switchD_005d1877_caseD_6548;
    case 0x6549:
switchD_005d1877_caseD_6549:
      if (DAT_0080877e != '\0') {
        this_00->field_2121 = this_00->field_2121 + 1;
        SendPlList(this_00,0);
        goto switchD_005d1877_caseD_6548;
      }
    }
  }
  else {
switchD_005d1877_caseD_6548:
    if (DAT_0080877e != '\0') {
      DAT_00808aab = DAT_00808aab + 1;
      SendDesc(this_00,0);
    }
  }
switchD_005d1877_caseD_6507:
  uVar22 = *(uint *)(param_1 + 0x10);
  if (((0x69fe < uVar22) && (uVar22 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    iVar13 = this_00->field_1F84;
    local_2c = uVar22 - 0x69ff >> 3;
    if ((iVar13 == 0) ||
       (uVar18 = local_2c + this_00->field_1F88, *(uint *)(iVar13 + 0xc) <= uVar18)) {
      pcVar20 = (char *)0x0;
    }
    else {
      pcVar20 = (char *)(*(int *)(iVar13 + 8) * uVar18 + *(int *)(iVar13 + 0x1c));
    }
    local_18 = pcVar20;
    if (pcVar20 != (char *)0x0) {
      switch(uVar22 + 1 & 7) {
      case 0:
        if ((pcVar20[4] == '\x02') && (*(int *)(pcVar20 + 6) == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar18 = 0;
            uVar22 = 0;
            iVar13 = this_00->field_1F88 + local_2c;
            uVar30 = 0;
            goto LAB_005d34ee;
          }
          ChangePlayerState(this_00,this_00->field_1F88 + local_2c);
          SendPlList(this_00,0);
        }
        break;
      case 1:
        if (*pcVar20 != '\0') {
          uVar22 = *(uint *)(iVar13 + 0xc);
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar18 = 0;
          if (0 < (int)uVar22) {
            bVar26 = uVar22 != 0;
            do {
              if (bVar26) {
                pcVar24 = (char *)(*(int *)(this_00->field_1F84 + 8) * uVar18 +
                                  *(int *)(this_00->field_1F84 + 0x1c));
              }
              else {
                pcVar24 = (char *)0x0;
              }
              if ((*pcVar24 != '\0') && (pcVar24[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar24[2]) = 0;
              }
              uVar18 = uVar18 + 1;
              bVar26 = uVar18 < uVar22;
            } while ((int)uVar18 < (int)uVar22);
          }
          if (pcVar20[2] != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar20[2]) = 1;
          }
          uVar22 = 0;
          this_00->field_2171 = 0x6502;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6503;
          this_00->field_21A1 = 0;
          *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
          this_00->field_1F37 = 0xff;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          local_c = (undefined1 *)CONCAT31(local_c._1_3_,1);
          do {
            if (*(char *)((int)&local_44 + uVar22) != '\0') {
              this_00->field_1F37 = uVar22;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
              if ((byte)pcVar20[2] == uVar22) {
                this_00->field_21A1 = (uint)local_c & 0xff;
              }
              local_c = (undefined1 *)CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
            }
            uVar22 = uVar22 + 1;
          } while ((int)uVar22 < 8);
          uVar30 = *(undefined4 *)(this_00->field_1E2F + 0xc);
          this_00->field_21C5 = 0x124;
          this_00->field_21A9 = uVar30;
          this_00->field_21CD = 0x1e;
          this_00->field_21A5 = 0x12;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
LAB_005d3188:
          (**(code **)(*(int *)this_00->field_000C + 8))(0x100ef,0,0,&this_00->field_0x2161,0);
        }
        break;
      case 2:
        if (*pcVar20 != '\0') {
          this_00->field_2171 = 0x6504;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6500;
          *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
          local_10 = (char *)0x1;
          pcVar20 = (char *)FUN_006b0140(0x23f1,HINSTANCE_00807618);
          uVar22 = 0xffffffff;
          do {
            pcVar24 = pcVar20;
            if (uVar22 == 0) break;
            uVar22 = uVar22 - 1;
            pcVar24 = pcVar20 + 1;
            cVar2 = *pcVar20;
            pcVar20 = pcVar24;
          } while (cVar2 != '\0');
          uVar22 = ~uVar22;
          pcVar20 = pcVar24 + -uVar22;
          pcVar24 = &this_00->field_0x1e33;
          for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
            pcVar20 = pcVar20 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *pcVar24 = *pcVar20;
            pcVar20 = pcVar20 + 1;
            pcVar24 = pcVar24 + 1;
          }
          for (puVar14 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar14 != (uint *)0x0; puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
            *(undefined1 *)puVar14 = 0x20;
          }
          this_00->field_1F37 = 1;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          pcVar20 = (char *)FUN_006b0140(0x23f0,HINSTANCE_00807618);
          uVar22 = 0xffffffff;
          do {
            pcVar24 = pcVar20;
            if (uVar22 == 0) break;
            uVar22 = uVar22 - 1;
            pcVar24 = pcVar20 + 1;
            cVar2 = *pcVar20;
            pcVar20 = pcVar24;
          } while (cVar2 != '\0');
          uVar22 = ~uVar22;
          pcVar20 = pcVar24 + -uVar22;
          pcVar24 = &this_00->field_0x1e33;
          for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
            pcVar20 = pcVar20 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *pcVar24 = *pcVar20;
            pcVar20 = pcVar20 + 1;
            pcVar24 = pcVar24 + 1;
          }
          for (puVar14 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar14 != (uint *)0x0; puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
            *(undefined1 *)puVar14 = 0x20;
          }
          this_00->field_1F37 = 2;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          pcVar20 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar20 = (char *)(uint)(local_18[4] != '\x02');
          }
          if (pcVar20 != (char *)0x0) {
            pcVar20 = (char *)FUN_006b0140(0x23f2,HINSTANCE_00807618);
            uVar22 = 0xffffffff;
            do {
              pcVar24 = pcVar20;
              if (uVar22 == 0) break;
              uVar22 = uVar22 - 1;
              pcVar24 = pcVar20 + 1;
              cVar2 = *pcVar20;
              pcVar20 = pcVar24;
            } while (cVar2 != '\0');
            uVar22 = ~uVar22;
            pcVar20 = pcVar24 + -uVar22;
            pcVar24 = &this_00->field_0x1e33;
            for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
              pcVar20 = pcVar20 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
              *pcVar24 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              pcVar24 = pcVar24 + 1;
            }
            for (puVar14 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
                puVar14 != (uint *)0x0; puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
              *(undefined1 *)puVar14 = 0x20;
            }
            this_00->field_1F37 = 3;
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          }
          this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
          bVar17 = local_18[3];
          this_00->field_21C5 = 0x143;
          this_00->field_21CD = 0x78;
          this_00->field_21A1 = bVar17 - 1;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
          pcVar7 = DAT_0081176c->field_0034;
          if (pcVar7->field_00A0 != 0) {
            FUN_00710790((uint *)pcVar7);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar7->field_0x8a;
          goto LAB_005d3188;
        }
        break;
      case 3:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = local_2c + this_00->field_1F88;
        this_00->field_2191 = 0x6500;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        puVar23 = (undefined4 *)&this_00->field_0x1e33;
        for (iVar13 = 0x43; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar23 = 0;
          puVar23 = puVar23 + 1;
        }
        if (*pcVar20 == '\0') {
          uVar22 = local_2c + this_00->field_1F88;
          local_5 = '\0';
          if (-1 < (int)uVar22) {
            iVar13 = this_00->field_1F84;
            do {
              if (uVar22 < *(uint *)(iVar13 + 0xc)) {
                pcVar20 = (char *)(*(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c));
              }
              else {
                pcVar20 = (char *)0x0;
              }
              if (*pcVar20 != '\0') {
                if ((pcVar20[4] == '\x02') && (*(int *)(pcVar20 + 6) != DAT_0080877f)) {
                  local_5 = '\x01';
                }
                break;
              }
              uVar22 = uVar22 - 1;
            } while (-1 < (int)uVar22);
          }
          if (local_5 != '\0') {
            pcVar20 = (char *)FUN_006b0140(0x1f42,HINSTANCE_00807618);
            uVar22 = 0xffffffff;
            do {
              pcVar24 = pcVar20;
              if (uVar22 == 0) break;
              uVar22 = uVar22 - 1;
              pcVar24 = pcVar20 + 1;
              cVar2 = *pcVar20;
              pcVar20 = pcVar24;
            } while (cVar2 != '\0');
            uVar22 = ~uVar22;
            pcVar20 = pcVar24 + -uVar22;
            pcVar24 = &this_00->field_0x1e33;
            for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
              pcVar20 = pcVar20 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
              *pcVar24 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              pcVar24 = pcVar24 + 1;
            }
            this_00->field_1F37 = 2;
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
            if (DAT_00808aaa != '\0') {
              pcVar20 = (char *)FUN_006b0140(0x1f46,HINSTANCE_00807618);
              uVar22 = 0xffffffff;
              do {
                pcVar24 = pcVar20;
                if (uVar22 == 0) break;
                uVar22 = uVar22 - 1;
                pcVar24 = pcVar20 + 1;
                cVar2 = *pcVar20;
                pcVar20 = pcVar24;
              } while (cVar2 != '\0');
              uVar22 = ~uVar22;
              pcVar20 = pcVar24 + -uVar22;
              pcVar24 = &this_00->field_0x1e33;
              for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
                pcVar20 = pcVar20 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *pcVar24 = *pcVar20;
                pcVar20 = pcVar20 + 1;
                pcVar24 = pcVar24 + 1;
              }
              this_00->field_1F37 = 3;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
            }
          }
          pcVar20 = (char *)FUN_006b0140(0x1f41,HINSTANCE_00807618);
          uVar22 = 0xffffffff;
          do {
            pcVar24 = pcVar20;
            if (uVar22 == 0) break;
            uVar22 = uVar22 - 1;
            pcVar24 = pcVar20 + 1;
            cVar2 = *pcVar20;
            pcVar20 = pcVar24;
          } while (cVar2 != '\0');
          uVar22 = ~uVar22;
          pcVar20 = pcVar24 + -uVar22;
          pcVar24 = &this_00->field_0x1e33;
          for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
            pcVar20 = pcVar20 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *pcVar24 = *pcVar20;
            pcVar20 = pcVar20 + 1;
            pcVar24 = pcVar24 + 1;
          }
          this_00->field_1F37 = 1;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        }
        else {
          if ((this_00->field_1E26 != '\x05') || (pcVar20[4] != '\x04')) {
            if ((DAT_0080877e != '\0') && (this_00->field_1E26 != '\x05')) {
              pcVar20 = (char *)FUN_006b0140(8000,HINSTANCE_00807618);
              uVar22 = 0xffffffff;
              do {
                pcVar24 = pcVar20;
                if (uVar22 == 0) break;
                uVar22 = uVar22 - 1;
                pcVar24 = pcVar20 + 1;
                cVar2 = *pcVar20;
                pcVar20 = pcVar24;
              } while (cVar2 != '\0');
              uVar22 = ~uVar22;
              pcVar20 = pcVar24 + -uVar22;
              pcVar24 = &this_00->field_0x1e33;
              for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
                pcVar20 = pcVar20 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *pcVar24 = *pcVar20;
                pcVar20 = pcVar20 + 1;
                pcVar24 = pcVar24 + 1;
              }
              this_00->field_1F37 = 0;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
            }
            bVar26 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar26 = local_18[3] != '\x03';
            }
            if (bVar26) {
              pcVar20 = (char *)FUN_006b0140(0x1f42,HINSTANCE_00807618);
              uVar22 = 0xffffffff;
              do {
                pcVar24 = pcVar20;
                if (uVar22 == 0) break;
                uVar22 = uVar22 - 1;
                pcVar24 = pcVar20 + 1;
                cVar2 = *pcVar20;
                pcVar20 = pcVar24;
              } while (cVar2 != '\0');
              uVar22 = ~uVar22;
              pcVar20 = pcVar24 + -uVar22;
              pcVar24 = &this_00->field_0x1e33;
              for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
                pcVar20 = pcVar20 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *pcVar24 = *pcVar20;
                pcVar20 = pcVar20 + 1;
                pcVar24 = pcVar24 + 1;
              }
              this_00->field_1F37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
            }
            pcVar20 = (char *)FUN_006b0140(0x1f41,HINSTANCE_00807618);
            uVar22 = 0xffffffff;
            do {
              pcVar24 = pcVar20;
              if (uVar22 == 0) break;
              uVar22 = uVar22 - 1;
              pcVar24 = pcVar20 + 1;
              cVar2 = *pcVar20;
              pcVar20 = pcVar24;
            } while (cVar2 != '\0');
            uVar22 = ~uVar22;
            pcVar20 = pcVar24 + -uVar22;
            pcVar24 = &this_00->field_0x1e33;
            for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
              pcVar20 = pcVar20 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
              *pcVar24 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              pcVar24 = pcVar24 + 1;
            }
            this_00->field_1F37 = 1;
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          }
          if ((DAT_0080877e != '\0') && (this_00->field_1E26 != '\x05')) {
            local_c = (undefined1 *)0x0;
            iVar13 = *(int *)(local_18 + 0x50);
            puVar15 = *(undefined1 **)(iVar13 + 0xc);
            if (0 < (int)puVar15) {
              do {
                if (local_c < puVar15) {
                  iVar13 = *(int *)(iVar13 + 8) * (int)local_c + *(int *)(iVar13 + 0x1c);
                }
                else {
                  iVar13 = 0;
                }
                uVar22 = 0xffffffff;
                pcVar20 = (char *)(iVar13 + 0x40);
                do {
                  pcVar24 = pcVar20;
                  if (uVar22 == 0) break;
                  uVar22 = uVar22 - 1;
                  pcVar24 = pcVar20 + 1;
                  cVar2 = *pcVar20;
                  pcVar20 = pcVar24;
                } while (cVar2 != '\0');
                uVar22 = ~uVar22;
                pcVar20 = pcVar24 + -uVar22;
                pcVar24 = &this_00->field_0x1e33;
                for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
                  pcVar20 = pcVar20 + 4;
                  pcVar24 = pcVar24 + 4;
                }
                for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *pcVar24 = *pcVar20;
                  pcVar20 = pcVar20 + 1;
                  pcVar24 = pcVar24 + 1;
                }
                this_00->field_1F37 = 4;
                this_00->field_1F3B = local_c;
                Library::DKW::TBL::FUN_006ae1c0
                          ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
                local_c = local_c + 1;
                iVar13 = *(int *)(local_18 + 0x50);
                puVar15 = *(undefined1 **)(iVar13 + 0xc);
              } while ((int)local_c < (int)puVar15);
            }
          }
        }
        iVar13 = this_00->field_1E2F;
        uVar22 = 0;
        this_00->field_21A1 = 0;
        if (0 < *(int *)(iVar13 + 0xc)) {
          bVar26 = *(int *)(iVar13 + 0xc) != 0;
          local_10 = (char *)(uint)(byte)local_18[4];
          do {
            if (bVar26) {
              iVar28 = *(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c);
            }
            else {
              iVar28 = 0;
            }
            if ((*(char **)(iVar28 + 0x104) == local_10) &&
               (*(uint *)(iVar28 + 0x108) == (uint)(byte)local_18[5])) {
              this_00->field_21A1 = uVar22;
              break;
            }
            uVar22 = uVar22 + 1;
            bVar26 = uVar22 < *(uint *)(iVar13 + 0xc);
          } while ((int)uVar22 < (int)*(uint *)(iVar13 + 0xc));
        }
        uVar30 = *(undefined4 *)(iVar13 + 0xc);
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = uVar30;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_2c * 0x19 + 0x41;
        pcVar7 = DAT_0081176c->field_0034;
        if (pcVar7->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar7);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar7->field_0x8a;
        if (0 < (int)this_00->field_21A9) goto LAB_005d3188;
        break;
      case 5:
        if (*pcVar20 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar18 = (uint)DAT_0080874d;
              uVar22 = 0;
              iVar13 = this_00->field_1F88 + local_2c;
              uVar30 = 5;
              goto LAB_005d34ee;
            }
            ChangePlayerTeam(this_00,this_00->field_1F88 + local_2c,0,(uint)DAT_0080874d);
            SendDesc(this_00,0);
          }
          else {
            uVar22 = *(uint *)(iVar13 + 0xc);
            uVar18 = 0;
            local_3c = 0;
            local_c = (undefined1 *)CONCAT31(local_c._1_3_,0xff);
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar22;
            if (0 < (int)uVar22) {
              bVar26 = uVar22 != 0;
              do {
                if (bVar26) {
                  iVar13 = *(int *)(this_00->field_1F84 + 8) * uVar18 +
                           *(int *)(this_00->field_1F84 + 0x1c);
                }
                else {
                  iVar13 = 0;
                }
                if ((iVar13 != 0) && (*(byte *)(iVar13 + 0x4a) < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)*(byte *)(iVar13 + 0x4a)) = 1;
                }
                uVar18 = uVar18 + 1;
                bVar26 = uVar18 < uVar22;
              } while ((int)uVar18 < (int)uVar22);
            }
            uVar18 = local_2c;
            bVar17 = 0;
            iVar13 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar13) != '\0') {
                bVar17 = bVar17 + 1;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < 8);
            bVar3 = this_00->field_211C;
joined_r0x005d3229:
            if (bVar17 < bVar3) {
              iVar13 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar13) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar13) = 1;
                  bVar17 = bVar17 + 1;
                  break;
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < 8);
              goto joined_r0x005d3229;
            }
            uVar21 = 0;
            if (0 < (int)uVar22) {
              do {
                puVar15 = local_30;
                if (uVar21 < local_30) {
                  pcVar20 = (char *)(*(int *)(this_00->field_1F84 + 8) * uVar21 +
                                    *(int *)(this_00->field_1F84 + 0x1c));
                }
                else {
                  pcVar20 = (char *)0x0;
                }
                if (pcVar20 != (char *)0x0) {
                  if (this_00->field_1F88 + uVar18 != uVar21) {
                    if (*pcVar20 == '\0') goto LAB_005d32d3;
                    if ((pcVar20[4] != '\0') && (pcVar20[4] != '\x01')) {
                      if (local_10 == (char *)0x0) {
                        if ((byte)local_c != pcVar20[0x4a]) {
                          local_c = (undefined1 *)CONCAT31(local_c._1_3_,0xff);
                        }
                      }
                      else {
                        local_10 = (char *)0x0;
                        local_c = (undefined1 *)CONCAT31(local_c._1_3_,pcVar20[0x4a]);
                      }
                    }
                  }
                  if ((*pcVar20 != '\0') &&
                     (((pcVar20[4] == '\0' || (pcVar20[4] == '\x01')) && ((byte)pcVar20[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar20[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < (int)puVar15);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar22 = 0;
            this_00->field_2171 = 0x6501;
            this_00->field_2179 = this_00->field_1F88 + local_2c;
            this_00->field_2191 = 0x6500;
            this_00->field_21A1 = 0;
            *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
            local_c = (undefined1 *)((uint)local_c & 0xffffff00);
            puVar15 = &uStack_7d;
            local_30 = puVar15;
            do {
              iVar13 = uVar22 + 0x41;
              if (puVar15[uVar22 + 0x41] != '\0') {
                uVar30 = FUN_006b0140(0x1f4a,HINSTANCE_00807618);
                wsprintfA(&this_00->field_0x1e33,&DAT_007cd508,uVar30,iVar13);
                this_00->field_1F37 = uVar22;
                Library::DKW::TBL::FUN_006ae1c0
                          ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
                if ((byte)local_18[0x4a] == uVar22) {
                  this_00->field_21A1 = (uint)local_c & 0xff;
                }
                local_c = (undefined1 *)CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
                puVar15 = local_30;
              }
              uVar22 = uVar22 + 1;
            } while ((int)uVar22 < 8);
            cVar2 = this_00->field_1E26;
            this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
            if (((cVar2 == '\x06') || (cVar2 == '\x01')) || (uVar30 = 0x26b, cVar2 == '\x02')) {
              uVar30 = 0x2ab;
            }
            this_00->field_21C5 = uVar30;
            this_00->field_21CD = 0x46;
            this_00->field_21C9 = local_2c * 0x19 + 0x41;
            pcVar7 = DAT_0081176c->field_0034;
            if (pcVar7->field_00A0 != 0) {
              FUN_00710790((uint *)pcVar7);
            }
            this_00->field_21A5 = *(undefined4 *)&pcVar7->field_0x8a;
            (**(code **)(*(int *)this_00->field_000C + 8))(0x100ef,0,0,&this_00->field_0x2161,0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar18 = 0;
          uVar22 = (uint)(pcVar20[0x4f] == '\0');
          iVar13 = this_00->field_1F88 + local_2c;
          uVar30 = 7;
LAB_005d34ee:
          ChgPlList(this_00,iVar13,uVar30,uVar22,uVar18);
        }
        else {
          pcVar20[0x4f] = pcVar20[0x4f] == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(&this_00->field_0x1fa8 + local_2c * 0x20),
                       (undefined4 *)&this_00->field_0x1d);
          this_00->field_2121 = this_00->field_2121 + 1;
          SendPlList(this_00,0);
        }
      }
    }
  }
  uVar22 = *(uint *)(param_1 + 0x10);
  if (uVar22 < 0x6a7f) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  if (0x6afe < uVar22) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  pcVar24 = (char *)0x0;
  pcVar20 = (char *)(uVar22 - 0x6a7f >> 3);
  local_30 = (undefined1 *)(uVar22 + 1 & 7);
  piVar8 = *(int **)(param_1 + 0x18);
  local_20 = piVar8[2];
  local_1c = piVar8[3];
  iVar13 = this_00->field_1F84;
  local_28 = *piVar8 + -0x113;
  local_24 = 0;
  if ((iVar13 != 0) &&
     (uVar22 = this_00->field_1F88 + (int)pcVar20, uVar22 < *(uint *)(iVar13 + 0xc))) {
    pcVar24 = (char *)(*(int *)(iVar13 + 8) * uVar22 + *(int *)(iVar13 + 0x1c));
  }
  local_10 = pcVar20;
  FUN_006b4170(*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),0,*piVar8 + -0x113,0,piVar8[2],
               piVar8[3],0xff);
  if (pcVar24 == (char *)0x0) goto switchD_005d35aa_default;
  switch(local_30) {
  case (undefined1 *)0x0:
    if (((*pcVar24 == '\0') || (pcVar24[4] != '\x02')) || (*(int *)(pcVar24 + 6) != DAT_0080877f))
    break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),&local_28,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    iVar13 = 2 - (uint)(pcVar24[1] != '\0');
    goto LAB_005d3bf4;
  case (undefined1 *)0x1:
    if (*pcVar24 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),&local_28,0,
                 (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pcVar24[2] != -1) {
        switch(pcVar24[2]) {
        case '\0':
          uVar11 = 0xfc;
          break;
        case '\x01':
          uVar11 = 0xfa;
          break;
        case '\x02':
          uVar11 = 0xfb;
          break;
        case '\x03':
          uVar11 = 0xf9;
          break;
        case '\x04':
          uVar11 = 0xfd;
          break;
        case '\x05':
          uVar11 = 0xfe;
          break;
        case '\x06':
          uVar11 = 0xf3;
          break;
        case '\a':
          uVar11 = 7;
          break;
        default:
          uVar11 = 0xff;
        }
        FUN_006b4170(*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),0,local_28 + 2,local_24 + 2
                     ,local_20 + -4,local_1c + -4,uVar11);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*pcVar24 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),&local_28,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(DAT_0081176c->field_0034,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),0,
                     local_28,local_24,local_20,local_1c);
    if (pcVar24[3] == '\x01') {
      pcVar20 = &DAT_007ca250;
LAB_005d3780:
      uVar22 = 0xffffffff;
      do {
        pcVar24 = pcVar20;
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        pcVar24 = pcVar20 + 1;
        cVar2 = *pcVar20;
        pcVar20 = pcVar24;
      } while (cVar2 != '\0');
      uVar22 = ~uVar22;
      pcVar20 = pcVar24 + -uVar22;
      pcVar24 = (char *)&DAT_0080f33a;
      for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
        pcVar20 = pcVar20 + 4;
        pcVar24 = pcVar24 + 4;
      }
    }
    else {
      if (pcVar24[3] != '\x02') {
        pcVar20 = &DAT_007ca24c;
        goto LAB_005d3780;
      }
      uVar22 = 0xffffffff;
      pcVar20 = &DAT_007ca248;
      do {
        pcVar24 = pcVar20;
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        pcVar24 = pcVar20 + 1;
        cVar2 = *pcVar20;
        pcVar20 = pcVar24;
      } while (cVar2 != '\0');
      uVar22 = ~uVar22;
      pcVar20 = pcVar24 + -uVar22;
      pcVar24 = (char *)&DAT_0080f33a;
      for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
        pcVar20 = pcVar20 + 4;
        pcVar24 = pcVar24 + 4;
      }
    }
    for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
      *pcVar24 = *pcVar20;
      pcVar20 = pcVar20 + 1;
      pcVar24 = pcVar24 + 1;
    }
    ccFntTy::WrStr(DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
    pcVar20 = local_10;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),&local_28,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(DAT_0081176c->field_0034,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),0,
                     local_28,local_24,local_20,local_1c);
    uVar30 = 2;
    iVar29 = -1;
    iVar28 = -1;
    puVar27 = (uint *)&DAT_007c2310;
    iVar13 = local_20;
    puVar14 = (uint *)thunk_FUN_005cbbe0(this_00,pcVar24);
    goto LAB_005d38bd;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),&local_28,2,
               0x67,0x67);
    bVar17 = pcVar24[4];
    if (bVar17 < 2) break;
    if (bVar17 < 4) {
      ccFntTy::SetSurf(DAT_0081176c->field_0034,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),
                       0,local_28,local_24,local_20,local_1c);
      uVar30 = 2;
      iVar28 = -1;
      iVar13 = -1;
      puVar14 = thunk_FUN_00540c40(DAT_0081176c->field_0034,(uint *)(pcVar24 + 10),
                                   (uint *)&DAT_007c7274,local_20);
      ccFntTy::WrStr(DAT_0081176c->field_0034,puVar14,iVar13,iVar28,uVar30);
      break;
    }
    if (bVar17 != 4) break;
    iVar13 = *(int *)(pcVar24 + 0x50);
    if ((uint)(byte)pcVar24[5] < *(uint *)(iVar13 + 0xc)) {
      puVar14 = (uint *)(*(int *)(iVar13 + 8) * (uint)(byte)pcVar24[5] + *(int *)(iVar13 + 0x1c));
    }
    else {
      puVar14 = (uint *)0x0;
    }
    if (puVar14 == (uint *)0x0) break;
    ccFntTy::SetSurf(DAT_0081176c->field_0034,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),0,
                     local_28,local_24,local_20,local_1c);
    uVar30 = 2;
    iVar29 = -1;
    iVar28 = -1;
    puVar27 = (uint *)&DAT_007c7274;
    iVar13 = local_20;
LAB_005d38bd:
    puVar14 = thunk_FUN_00540c40(DAT_0081176c->field_0034,puVar14,puVar27,iVar13);
    ccFntTy::WrStr(DAT_0081176c->field_0034,puVar14,iVar28,iVar29,uVar30);
    break;
  case (undefined1 *)0x5:
    if ((*pcVar24 == '\0') ||
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),&local_28,
                   2,(-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67), pcVar24[4] == '\0'))
    break;
    if (DAT_00808a8f != '\0') {
      iVar13 = (byte)pcVar24[0x4a] + 0x41;
      uVar30 = FUN_006b0140(0x1f4a,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,uVar30,iVar13);
      ccFntTy::SetSurf(DAT_0081176c->field_0034,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),
                       0,local_28,local_24,local_20,local_1c);
      ccFntTy::WrStr(DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar17 = pcVar24[2], bVar17 == 0xff)) ||
       (DAT_0080874d == bVar17)) break;
    local_10 = (char *)0xffffffff;
    local_30 = (undefined1 *)CONCAT31(local_30._1_3_,bVar17);
    uVar18 = (uint)DAT_0080874d;
    uVar22 = (uint)bVar17;
    cVar2 = *(char *)((int)&DAT_00808a4f + uVar18 * 8 + uVar22);
    if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar18) == '\0')) {
      uVar30 = 0xfffffffe;
    }
    else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar18) == '\0')) {
      uVar30 = 0xffffffff;
    }
    else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar18) == '\x01')) {
      uVar30 = 1;
    }
    else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar18) == '\x01')) {
      uVar30 = 2;
    }
    else {
      uVar30 = 0;
    }
    switch(uVar30) {
    default:
      iVar13 = -1;
      break;
    case 1:
      iVar13 = 1;
      break;
    case 2:
      iVar13 = 3;
      break;
    case 0xfffffffe:
      iVar13 = 0;
      break;
    case 0xffffffff:
      iVar13 = 2;
    }
    iVar13 = iVar13 + -1;
    if (iVar13 < 0) break;
    iVar28 = this_00->field_1F4B;
    goto LAB_005d3bfa;
  case (undefined1 *)0x6:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),&local_28,2,
               0x67,0x67);
    if (((pcVar24[4] == '\x02') || (pcVar24[4] == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)(pcVar24 + 6) != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)(pcVar24 + 6) == DAT_0080877f)))))) {
      ccFntTy::SetSurf(DAT_0081176c->field_0034,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),
                       0,local_28,local_24,local_20,local_1c);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(pcVar24 + 0x4b));
      uVar22 = 0xffffffff;
      pcVar24 = (char *)&DAT_0080f33a;
      do {
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        cVar2 = *pcVar24;
        pcVar24 = pcVar24 + 1;
      } while (cVar2 != '\0');
      if (4 < ~uVar22 - 1) {
        uVar22 = 0xffffffff;
        pcVar20 = &DAT_007cd500;
        do {
          pcVar24 = pcVar20;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar24 = pcVar20 + 1;
          cVar2 = *pcVar20;
          pcVar20 = pcVar24;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        pcVar24 = pcVar24 + -uVar22;
        pcVar19 = (char *)&DAT_0080f33a;
        for (uVar18 = uVar22 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar24;
          pcVar24 = pcVar24 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar22 = uVar22 & 3; pcVar20 = local_10, uVar22 != 0; uVar22 = uVar22 - 1) {
          *pcVar19 = *pcVar24;
          pcVar24 = pcVar24 + 1;
          pcVar19 = pcVar19 + 1;
        }
      }
      ccFntTy::WrStr(DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
    }
    break;
  case (undefined1 *)0x7:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + (int)pcVar20 * 4),&local_28,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    if (((pcVar24[4] != '\x02') || (pcVar24[0x4f] == '\0')) && (pcVar24[4] != '\x04')) break;
    iVar13 = 0;
LAB_005d3bf4:
    iVar28 = this_00->field_1F4F;
LAB_005d3bfa:
    pbVar16 = (byte *)FUN_0070b3a0(iVar28,iVar13);
    DibPut(*(undefined4 **)(&this_00->field_0x20f4 + (int)pcVar20 * 4),
           (local_20 - *(int *)(pbVar16 + 4)) / 2 + local_28,
           (local_1c - *(int *)(pbVar16 + 8)) / 2 + 1 + local_24,'\x06',pbVar16);
  }
switchD_005d35aa_default:
  FUN_006b35d0(DAT_008075a8,*(uint *)(&this_00->field_0x20cc + (int)pcVar20 * 4));
  if (*(short *)(param_1 + 0x14) == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_f4.previous;
  return 0;
}


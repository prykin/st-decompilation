
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::GetMessage
   
   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19 */

undefined4 __thiscall SettMapMTy::GetMessage(SettMapMTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  MMsgTy *pMVar4;
  undefined4 uVar5;
  StartSystemTy *this_00;
  ccFntTy *pcVar6;
  int *piVar7;
  code *pcVar8;
  CursorClassTy *pCVar9;
  SettMapTy *this_01;
  undefined1 uVar10;
  DWORD DVar11;
  int iVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined3 extraout_var;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  undefined4 unaff_ESI;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  void *unaff_EDI;
  uint uVar21;
  undefined4 *puVar22;
  char *pcVar23;
  bool bVar24;
  bool bVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  char local_680 [64];
  char local_640 [1044];
  char local_22c [64];
  undefined4 local_1ec;
  undefined4 local_1e8;
  DWORD local_1e4;
  char local_190 [64];
  undefined4 local_150;
  undefined4 local_14c;
  DWORD local_148;
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
  SettMapTy *local_48;
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
  
  local_48 = (SettMapTy *)this;
  DVar11 = FUN_006e51b0(this->field_0010);
  uVar21 = 0;
  this->field_0061 = DVar11;
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar12 = Library::MSVCRT::__setjmp3(local_f4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_48;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_f4.previous;
    iVar27 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x986,0,iVar12,
                                &DAT_007a4ccc,s_SettMapMTy__GetMessage_007cd4e4);
    if (iVar27 != 0) {
      pcVar8 = (code *)swi(3);
      uVar29 = (*pcVar8)();
      return uVar29;
    }
    RaiseInternalException(iVar12,0,s_E____titans_Start_settmobj_cpp_007cd258,0x986);
    return 0xffff;
  }
  SettMapTy::GetMessage(local_48,param_1);
  StartSystemTy::ChatMessage(PTR_0081176c,(int)param_1);
  pCVar9 = PTR_00802a30;
  uVar17 = *(uint *)&param_1->field_0x10;
  if (uVar17 < 0x6505) {
    if (uVar17 == 0x6504) {
      uVar21 = *(uint *)&param_1->field_0x14;
      if ((uVar21 != 0xffffffff) && (this_01->field_1F84 != 0)) {
        iVar12 = this_01->field_1E2F;
        if (uVar21 < *(uint *)(iVar12 + 0xc)) {
          iVar12 = *(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c);
        }
        else {
          iVar12 = 0;
        }
        bVar16 = *(byte *)(iVar12 + 0x104);
        local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar16);
        if (DAT_0080877e == '\0') {
          ChgPlList((SettMapMTy *)this_01,*(undefined4 *)&param_1->field_0x18,2,(uint)bVar16,0);
        }
        else {
          ChangePlayerCiv((SettMapMTy *)this_01,*(uint *)&param_1->field_0x18,bVar16);
          SendPlList((SettMapMTy *)this_01,0);
        }
      }
    }
    else if (uVar17 < 0x6341) {
      if (uVar17 == 0x6340) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)(this_01->field_1A5B + 0x55c),
                   (int)param_1,0);
      }
      else if (uVar17 < 0x6327) {
        if (uVar17 == 0x6326) {
          *(char *)&this_01[1].field_000C = '\x02' - **(char **)&param_1->field_0x14;
        }
        else if (uVar17 == 2) {
          *(DWORD *)((int)&this_01[1].field_000C + 1) = this_01->field_0061;
        }
        else if (uVar17 == 3) {
          if (*(int *)&this_01[1].field_0x2a != 0) {
            FUN_006ab060((LPVOID *)&this_01[1].field_0x2a);
            *(undefined4 *)((int)&this_01[1].field_002D + 1) = 0;
          }
          pbVar15 = *(byte **)((int)&this_01[1].field_0031 + 2);
          if (pbVar15 != (byte *)0x0) {
            FUN_006ae110(pbVar15);
          }
          *(undefined4 *)((int)&this_01[1].field_0031 + 2) = 0;
          if ((this_01->field_004D != 0x60ff) && (g_int_00811764 != (int *)0x0)) {
            if (DAT_0080877e == '\0') {
              FUN_00715360(g_int_00811764,0,'\x11',(char *)0x0,0,0,0xffffffff);
              if (this_01->field_004D != 0x6109) {
                thunk_FUN_005dac60();
              }
            }
            else if (this_01->field_004D == 0x611f) {
              FUN_00715360(g_int_00811764,0,'\x12',(char *)0x0,0,0,0xffffffff);
            }
            else {
              FUN_00715360(g_int_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
              thunk_FUN_005dac60();
            }
          }
        }
      }
      else if (uVar17 == 0x6327) {
        piVar7 = *(int **)&param_1->field_0x14;
        thunk_FUN_005b5f00(this_01,this_01[1].field_0008,piVar7);
        iVar12 = *piVar7;
        local_10 = (char *)piVar7[5];
        ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01[1].field_0008,0,
                         (iVar12 + -1) * (int)local_10,0,(int)local_10,
                         *(int *)(this_01[1].field_0008 + 8) -
                         ((-(uint)(piVar7[1] != 1) & 0xfffffffd) + 3));
        uVar29 = 2;
        iVar28 = -1;
        iVar27 = -1;
        puVar13 = (uint *)FUN_006b0140((iVar12 != 1) + 0x2422,HINSTANCE_00807618);
        ccFntTy::WrStr(PTR_0081176c->field_0034,puVar13,iVar27,iVar28,uVar29);
        FUN_006b35d0(DAT_008075a8,*(uint *)&this_01[1].field_0x4);
      }
    }
    else if (uVar17 < 0x6502) {
      if (uVar17 == 0x6501) {
        uVar21 = *(uint *)&param_1->field_0x14;
        if ((uVar21 != 0xffffffff) && (this_01->field_1F84 != 0)) {
          iVar12 = this_01->field_1E2F;
          if (uVar21 < *(uint *)(iVar12 + 0xc)) {
            iVar12 = *(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c);
          }
          else {
            iVar12 = 0;
          }
          bVar16 = *(byte *)(iVar12 + 0x104);
          local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar16);
          if (DAT_0080877e == '\0') {
            ChgPlList((SettMapMTy *)this_01,*(undefined4 *)&param_1->field_0x18,5,1,(uint)bVar16);
          }
          else {
            ChangePlayerTeam((SettMapMTy *)this_01,*(uint *)&param_1->field_0x18,1,(uint)bVar16);
            SendPlList((SettMapMTy *)this_01,0);
          }
        }
      }
      else if (uVar17 == 0x6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_01,(AnonShape_005B6560_61F462DF *)(this_01->field_1A5B + 0x5ed),
                   (int)param_1,0);
      }
      else if ((uVar17 == 0x64ff) && (DAT_0080877e != '\0')) {
        FUN_00715360(g_int_00811764,0,' ',(char *)&this_01->field_1F53,0xd,1,0xffffffff);
      }
    }
    else if (((uVar17 == 0x6502) && (uVar21 = *(uint *)&param_1->field_0x14, uVar21 != 0xffffffff))
            && (this_01->field_1F84 != 0)) {
      iVar12 = this_01->field_1E2F;
      if (uVar21 < *(uint *)(iVar12 + 0xc)) {
        iVar12 = *(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c);
      }
      else {
        iVar12 = 0;
      }
      bVar16 = *(byte *)(iVar12 + 0x104);
      local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar16);
      if (DAT_0080877e == '\0') {
        ChgPlList((SettMapMTy *)this_01,*(undefined4 *)&param_1->field_0x18,1,(uint)bVar16,0);
      }
      else {
        ChangePlayerColor((SettMapMTy *)this_01,*(uint *)&param_1->field_0x18,bVar16);
        SendPlList((SettMapMTy *)this_01,0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (0x654b < uVar17) {
    if (uVar17 < 0x694b) {
      if (uVar17 == 0x694a) {
        iVar12 = this_01->field_1F84;
        local_34 = 0x1010101;
        bVar25 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (iVar12 != 0) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (PTR_00802a30 != (CursorClassTy *)0x0) {
              uVar29 = PTR_00802a30->field_00C9;
              uVar5 = PTR_00802a30->field_00C5;
              PTR_00802a30->field_0493 = 5;
              pCVar9->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar9,CASE_0,uVar5,uVar29);
              CursorClassTy::DrawSprite(pCVar9,pCVar9->field_00C5,pCVar9->field_00C9);
              pCVar9->field_0xd2 = 0;
              *(undefined4 *)&pCVar9->field_0x4df = 0xffffffff;
            }
            DAT_008087c4._2_1_ = '\0';
            DAT_0080874f = 0;
            puVar22 = (undefined4 *)((int)&DAT_008087c4 + 3);
            for (iVar12 = 0xa2; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar22 = 0;
              puVar22 = puVar22 + 1;
            }
            puVar14 = &DAT_008087e9;
            do {
              puVar14[-1] = 0;
              *puVar14 = 0xff;
              puVar14 = puVar14 + 0x51;
            } while ((int)puVar14 < 0x808a71);
            iVar12 = this_01->field_1F84;
            uVar17 = 0;
            uVar21 = *(uint *)(iVar12 + 0xc);
            if (0 < (int)uVar21) {
              bVar25 = uVar21 != 0;
              do {
                if (bVar25) {
                  pcVar19 = (char *)(*(int *)(iVar12 + 8) * uVar17 + *(int *)(iVar12 + 0x1c));
                }
                else {
                  pcVar19 = (char *)0x0;
                }
                if (((pcVar19 != (char *)0x0) && (*pcVar19 != '\0')) && (pcVar19[2] != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)pcVar19[2]) = 0;
                }
                uVar17 = uVar17 + 1;
                bVar25 = uVar17 < uVar21;
              } while ((int)uVar17 < (int)uVar21);
            }
            local_18 = (char *)0x0;
            if (0 < (int)uVar21) {
              bVar25 = uVar21 != 0;
              do {
                if (bVar25) {
                  pcVar19 = (char *)(*(int *)(iVar12 + 8) * (int)local_18 + *(int *)(iVar12 + 0x1c))
                  ;
                }
                else {
                  pcVar19 = (char *)0x0;
                }
                if (((pcVar19 != (char *)0x0) && (pcVar19[4] != '\0')) &&
                   ((pcVar19[4] != '\x01' ||
                    ((this_01->field_1E26 == '\x05' || (this_01->field_1E26 == '\x0f')))))) {
                  iVar12 = *(int *)(pcVar19 + 0x50);
                  if ((uint)(byte)pcVar19[5] < *(uint *)(iVar12 + 0xc)) {
                    local_c = (undefined1 *)
                              (*(int *)(iVar12 + 8) * (uint)(byte)pcVar19[5] +
                              *(int *)(iVar12 + 0x1c));
                  }
                  else {
                    local_c = (undefined1 *)0x0;
                  }
                  DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
                  if (pcVar19[2] == -1) {
                    iVar12 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar12) != '\0') {
                        pcVar19[2] = (char)iVar12;
                        *(undefined1 *)((int)&local_34 + iVar12) = 0;
                        break;
                      }
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < 8);
                  }
                  (&DAT_008087e9)[(uint)(byte)pcVar19[2] * 0x51] = pcVar19[2];
                  pcVar23 = local_18 + 1;
                  (&DAT_008087e8)[(uint)(byte)pcVar19[2] * 0x51] = pcVar19[3];
                  iVar12 = this_01->field_1F84;
                  bVar25 = pcVar23 < *(char **)(iVar12 + 0xc);
                  if ((int)pcVar23 < (int)*(char **)(iVar12 + 0xc)) {
                    do {
                      if (bVar25) {
                        pcVar18 = (char *)(*(int *)(iVar12 + 8) * (int)pcVar23 +
                                          *(int *)(iVar12 + 0x1c));
                      }
                      else {
                        pcVar18 = (char *)0x0;
                      }
                      if (pcVar18 != (char *)0x0) {
                        if (*pcVar18 != '\0') break;
                        pcVar18[2] = pcVar19[2];
                      }
                      iVar12 = this_01->field_1F84;
                      pcVar23 = pcVar23 + 1;
                      bVar25 = pcVar23 < *(char **)(iVar12 + 0xc);
                    } while ((int)pcVar23 < (int)*(char **)(iVar12 + 0xc));
                  }
                  uVar21 = 0xffffffff;
                  pcVar23 = &DAT_008016a0;
                  do {
                    pcVar18 = pcVar23;
                    if (uVar21 == 0) break;
                    uVar21 = uVar21 - 1;
                    pcVar18 = pcVar23 + 1;
                    cVar2 = *pcVar23;
                    pcVar23 = pcVar18;
                  } while (cVar2 != '\0');
                  uVar21 = ~uVar21;
                  local_10 = &DAT_008087c8 + (uint)(byte)pcVar19[2] * 0x51;
                  pcVar23 = pcVar18 + -uVar21;
                  pcVar18 = &DAT_008087c8 + (uint)(byte)pcVar19[2] * 0x51;
                  for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar23;
                    pcVar23 = pcVar23 + 4;
                    pcVar18 = pcVar18 + 4;
                  }
                  for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                    *pcVar18 = *pcVar23;
                    pcVar23 = pcVar23 + 1;
                    pcVar18 = pcVar18 + 1;
                  }
                  cVar2 = pcVar19[4];
                  if (cVar2 == '\x02') {
                    if (*pcVar19 != '\0') {
                      *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar19[2] * 0x51 + 3) = 0;
                    }
                    if (DAT_0080877f == *(int *)(pcVar19 + 6)) {
                      DAT_0080874d = pcVar19[2];
                      DAT_0080874e = pcVar19[3];
                    }
                  }
                  else if (cVar2 == '\x03') {
                    if (DAT_0080877f == *(int *)(pcVar19 + 6)) {
                      DAT_0080874d = pcVar19[2];
                      DAT_0080874e = pcVar19[3];
                      DAT_0080874f = 1;
                    }
                  }
                  else if (cVar2 == '\x04') {
                    *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar19[2] * 0x51 + 3) = 1;
                    if (local_c == (undefined1 *)0x0) {
                      uVar21 = 0xffffffff;
                      pcVar23 = &DAT_008016a0;
                      do {
                        pcVar18 = pcVar23;
                        if (uVar21 == 0) break;
                        uVar21 = uVar21 - 1;
                        pcVar18 = pcVar23 + 1;
                        cVar2 = *pcVar23;
                        pcVar23 = pcVar18;
                      } while (cVar2 != '\0');
                      uVar21 = ~uVar21;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar19[2] * 0x51;
                      pcVar23 = pcVar18 + -uVar21;
                      pcVar18 = &DAT_008087c8 + (uint)(byte)pcVar19[2] * 0x51;
                      for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar23;
                        pcVar23 = pcVar23 + 4;
                        pcVar18 = pcVar18 + 4;
                      }
                      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                        *pcVar18 = *pcVar23;
                        pcVar23 = pcVar23 + 1;
                        pcVar18 = pcVar18 + 1;
                      }
                    }
                    else {
                      uVar21 = 0xffffffff;
                      pcVar23 = local_c + 0x4c;
                      do {
                        pcVar18 = pcVar23;
                        if (uVar21 == 0) break;
                        uVar21 = uVar21 - 1;
                        pcVar18 = pcVar23 + 1;
                        cVar2 = *pcVar23;
                        pcVar23 = pcVar18;
                      } while (cVar2 != '\0');
                      uVar21 = ~uVar21;
                      local_10 = &DAT_008087c8 + (uint)(byte)pcVar19[2] * 0x51;
                      pcVar23 = pcVar18 + -uVar21;
                      pcVar18 = &DAT_008087c8 + (uint)(byte)pcVar19[2] * 0x51;
                      for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar23;
                        pcVar23 = pcVar23 + 4;
                        pcVar18 = pcVar18 + 4;
                      }
                      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                        *pcVar18 = *pcVar23;
                        pcVar23 = pcVar23 + 1;
                        pcVar18 = pcVar18 + 1;
                      }
                    }
                  }
                  (&DAT_008087ea)[(uint)(byte)pcVar19[2] * 0x51] = pcVar19[0x4a];
                  *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar19[2] * 0x51) =
                       *(undefined4 *)(pcVar19 + 0x54);
                  *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar19[2] * 0x51) =
                       *(undefined4 *)(pcVar19 + 0x58);
                  *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar19[2] * 0x51) =
                       *(undefined4 *)(pcVar19 + 0x5c);
                }
                iVar12 = this_01->field_1F84;
                local_18 = local_18 + 1;
                bVar25 = local_18 < *(char **)(iVar12 + 0xc);
              } while ((int)local_18 < (int)*(char **)(iVar12 + 0xc));
            }
            thunk_FUN_0056ee90((AnonShape_0056EE90_04DD57E6 *)&DAT_00807620);
            pCVar9 = PTR_00802a30;
            if ((this_01->field_1E26 == '\a') || (this_01->field_1E26 == '\x0e')) {
              if ((this_01->field_1F47 != 0) || (*(int *)&param_1->field_0x14 != 0)) {
                uVar21 = 0xffffffff;
                pcVar19 = &DAT_00853de4;
                do {
                  pcVar23 = pcVar19;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar23 = pcVar19 + 1;
                  cVar2 = *pcVar19;
                  pcVar19 = pcVar23;
                } while (cVar2 != '\0');
                uVar21 = ~uVar21;
                pcVar19 = pcVar23 + -uVar21;
                pcVar23 = &DAT_0080ed16;
                for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
                  pcVar19 = pcVar19 + 4;
                  pcVar23 = pcVar23 + 4;
                }
                for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *pcVar23 = *pcVar19;
                  pcVar19 = pcVar19 + 1;
                  pcVar23 = pcVar23 + 1;
                }
                goto LAB_005d2018;
              }
              if ((DAT_0080877e != '\0') && (*(int *)(this_01->field_1A5B + 0x2e6) != 0)) {
                if (PTR_00802a30 != (CursorClassTy *)0x0) {
                  uVar29 = PTR_00802a30->field_00C9;
                  uVar5 = PTR_00802a30->field_00C5;
                  PTR_00802a30->field_0493 = 1;
                  pCVar9->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar9,CASE_0,uVar5,uVar29);
                  CursorClassTy::DrawSprite(pCVar9,pCVar9->field_00C5,pCVar9->field_00C9);
                  pCVar9->field_0xd2 = 0;
                  *(undefined4 *)&pCVar9->field_0x4df = 0xffffffff;
                }
                iVar12 = this_01->field_1A5B;
                puVar22 = local_90;
                for (iVar27 = 8; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                puVar22 = local_b0;
                for (iVar27 = 8; iVar27 != 0; iVar27 = iVar27 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                local_b0[2] = this_01->field_0008;
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                iVar12 = MMsgTy::SetMessage(*(MMsgTy **)(iVar12 + 0x2e6),0x251f,'\x01',local_90,
                                            local_b0,(undefined4 *)0x0,0,0);
                if (iVar12 != 0) {
                  (**(code **)(this_01->field_0000 + 0x24))();
                }
              }
            }
            else {
LAB_005d2018:
              uVar21 = 0xffffffff;
              local_5 = '\x01';
              pcVar19 = &DAT_0080ed16;
              do {
                pcVar23 = pcVar19;
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                pcVar23 = pcVar19 + 1;
                cVar2 = *pcVar19;
                pcVar19 = pcVar23;
              } while (cVar2 != '\0');
              uVar21 = ~uVar21;
              pcVar19 = pcVar23 + -uVar21;
              pcVar23 = (char *)&DAT_0080ee1a;
              for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
                pcVar19 = pcVar19 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                *pcVar23 = *pcVar19;
                pcVar19 = pcVar19 + 1;
                pcVar23 = pcVar23 + 1;
              }
              uVar21 = 0xffffffff;
              pcVar19 = &DAT_00807680;
              do {
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                cVar2 = *pcVar19;
                pcVar19 = pcVar19 + 1;
              } while (cVar2 != '\0');
              uVar17 = 0xffffffff;
              pcVar19 = (char *)((int)&DAT_0080ed12 + ~uVar21 + 3);
              do {
                pcVar23 = pcVar19;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1;
                pcVar23 = pcVar19 + 1;
                cVar2 = *pcVar19;
                pcVar19 = pcVar23;
              } while (cVar2 != '\0');
              uVar17 = ~uVar17;
              pcVar19 = pcVar23 + -uVar17;
              pcVar23 = &DAT_0080ef1e;
              for (uVar21 = uVar17 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
                pcVar19 = pcVar19 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                *pcVar23 = *pcVar19;
                pcVar19 = pcVar19 + 1;
                pcVar23 = pcVar23 + 1;
              }
            }
            if (local_5 != '\0') {
              DAT_008087a0 = this_01->field_1E26;
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                puVar22 = &DAT_00808ab0;
                for (iVar12 = 0x3a8; iVar12 != 0; iVar12 = iVar12 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                DAT_00808aaf = 0;
                iVar12 = this_01->field_1F84;
                local_18 = (char *)0x0;
                if (0 < *(int *)(iVar12 + 0xc)) {
                  bVar25 = *(int *)(iVar12 + 0xc) != 0;
                  do {
                    if (bVar25) {
                      puVar14 = (undefined1 *)
                                (*(int *)(iVar12 + 8) * (int)local_18 + *(int *)(iVar12 + 0x1c));
                    }
                    else {
                      puVar14 = (undefined1 *)0x0;
                    }
                    if (puVar14 != (undefined1 *)0x0) {
                      cVar2 = puVar14[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        if (cVar2 == '\x04') {
                          iVar12 = *(int *)(puVar14 + 0x50);
                          if ((uint)(byte)puVar14[5] < *(uint *)(iVar12 + 0xc)) {
                            pcVar19 = (char *)(*(int *)(iVar12 + 8) * (uint)(byte)puVar14[5] +
                                              *(int *)(iVar12 + 0x1c));
                          }
                          else {
                            pcVar19 = (char *)0x0;
                          }
                          if (pcVar19 != (char *)0x0) {
                            uVar21 = 0xffffffff;
                            do {
                              pcVar23 = pcVar19;
                              if (uVar21 == 0) break;
                              uVar21 = uVar21 - 1;
                              pcVar23 = pcVar19 + 1;
                              cVar1 = *pcVar19;
                              pcVar19 = pcVar23;
                            } while (cVar1 != '\0');
                            uVar21 = ~uVar21;
                            pcVar23 = pcVar23 + -uVar21;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar21 = 0xffffffff;
                          pcVar19 = puVar14 + 10;
                          do {
                            pcVar23 = pcVar19;
                            if (uVar21 == 0) break;
                            uVar21 = uVar21 - 1;
                            pcVar23 = pcVar19 + 1;
                            cVar1 = *pcVar19;
                            pcVar19 = pcVar23;
                          } while (cVar1 != '\0');
                          uVar21 = ~uVar21;
                          pcVar23 = pcVar23 + -uVar21;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar19 = local_22c;
                          for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar23;
                            pcVar23 = pcVar23 + 4;
                            pcVar19 = pcVar19 + 4;
                          }
                          for (uVar21 = uVar21 & 3; local_10 = local_22c, uVar21 != 0;
                              uVar21 = uVar21 - 1) {
                            *pcVar19 = *pcVar23;
                            pcVar23 = pcVar23 + 1;
                            pcVar19 = pcVar19 + 1;
                          }
                        }
                        local_1ec = *(undefined4 *)(puVar14 + 6);
                        local_1e8._0_2_ = CONCAT11(*puVar14,puVar14[2]);
                        local_1e4 = this_01->field_0061;
                        if (cVar2 == '\x02') {
                          local_1e8 = CONCAT13(1,CONCAT12(1,(undefined2)local_1e8));
                        }
                        else {
                          local_1e8 = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_1e8)) & 0xff02ffff;
                        }
                        pcVar19 = local_22c;
                        puVar22 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar12 = 0x27; iVar12 != 0; iVar12 = iVar12 + -1) {
                          *puVar22 = *(undefined4 *)pcVar19;
                          pcVar19 = pcVar19 + 4;
                          puVar22 = puVar22 + 1;
                        }
                        if ((byte)local_1e8 < 8) {
                          iVar27 = 0;
                          iVar12 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar27 + iVar12] == '\0') {
                              (&DAT_00808800)[iVar27 + iVar12] = DAT_00808aaf;
                              break;
                            }
                            iVar27 = iVar27 + 1;
                          } while (iVar27 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    iVar12 = this_01->field_1F84;
                    local_18 = local_18 + 1;
                    bVar25 = local_18 < *(char **)(iVar12 + 0xc);
                  } while ((int)local_18 < (int)*(char **)(iVar12 + 0xc));
                }
                RunGame((SettMapMTy *)this_01);
                FUN_006b6500(g_int_00811764,1);
                FUN_00715360(g_int_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
                FUN_006b6500(g_int_00811764,DAT_0080733c);
              }
              else {
                FUN_006b6500(g_int_00811764,1);
                puVar22 = (undefined4 *)local_70;
                for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                *(undefined2 *)puVar22 = 0;
                local_64 = DAT_0080733b;
                local_70._3_4_ = DAT_008087be;
                local_70._0_2_ = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                local_63 = DAT_00807361;
                local_62 = DAT_00808754;
                local_56 = *(undefined4 *)&this_01->field_0x2121;
                local_70[2] = 2;
                local_5a = DAT_00808aab;
                switch(this_01->field_1E26) {
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
                *(DWORD *)&this_01[1].field_0x37 = this_01->field_0061;
                *(undefined1 *)((int)&this_01[1].field_0031 + 1) = 1;
                puVar13 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x28,4,10);
                *(uint **)((int)&this_01[1].field_0031 + 2) = puVar13;
                if (PTR_0080c4fe != (DArrayTy *)0x0) {
                  FUN_006ae110((byte *)PTR_0080c4fe);
                }
                PTR_0080c4fe = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x28,4,10);
                puVar22 = &DAT_00808ab0;
                for (iVar12 = 0x3a8; iVar12 != 0; iVar12 = iVar12 + -1) {
                  *puVar22 = 0;
                  puVar22 = puVar22 + 1;
                }
                DAT_00808aaf = 0;
                iVar12 = this_01->field_1F84;
                local_18 = (char *)0x0;
                if (0 < *(int *)(iVar12 + 0xc)) {
                  bVar25 = *(int *)(iVar12 + 0xc) != 0;
                  do {
                    if (bVar25) {
                      puVar14 = (undefined1 *)
                                (*(int *)(iVar12 + 8) * (int)local_18 + *(int *)(iVar12 + 0x1c));
                    }
                    else {
                      puVar14 = (undefined1 *)0x0;
                    }
                    local_c = puVar14;
                    if (puVar14 != (undefined1 *)0x0) {
                      if (((puVar14[4] == '\x02') || (puVar14[4] == '\x03')) &&
                         (DAT_0080877f != *(int *)(puVar14 + 6))) {
                        Library::DKW::TBL::FUN_006ae1c0
                                  (*(uint **)((int)&this_01[1].field_0031 + 2),
                                   (undefined4 *)(puVar14 + 6));
                        Library::DKW::TBL::FUN_006ae1c0
                                  (&PTR_0080c4fe->flags,(undefined4 *)(puVar14 + 6));
                      }
                      cVar2 = puVar14[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        uVar21 = 0xffffffff;
                        local_10 = local_190;
                        pcVar19 = local_c + 10;
                        do {
                          pcVar23 = pcVar19;
                          if (uVar21 == 0) break;
                          uVar21 = uVar21 - 1;
                          pcVar23 = pcVar19 + 1;
                          cVar1 = *pcVar19;
                          pcVar19 = pcVar23;
                        } while (cVar1 != '\0');
                        uVar21 = ~uVar21;
                        pcVar19 = pcVar23 + -uVar21;
                        pcVar23 = local_190;
                        for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
                          pcVar19 = pcVar19 + 4;
                          pcVar23 = pcVar23 + 4;
                        }
                        for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                          *pcVar23 = *pcVar19;
                          pcVar19 = pcVar19 + 1;
                          pcVar23 = pcVar23 + 1;
                        }
                        if (cVar2 == '\x04') {
                          iVar12 = *(int *)(local_c + 0x50);
                          if ((uint)(byte)local_c[5] < *(uint *)(iVar12 + 0xc)) {
                            pcVar19 = (char *)(*(int *)(iVar12 + 8) * (uint)(byte)local_c[5] +
                                              *(int *)(iVar12 + 0x1c));
                          }
                          else {
                            pcVar19 = (char *)0x0;
                          }
                          if (pcVar19 != (char *)0x0) {
                            uVar21 = 0xffffffff;
                            do {
                              pcVar23 = pcVar19;
                              if (uVar21 == 0) break;
                              uVar21 = uVar21 - 1;
                              pcVar23 = pcVar19 + 1;
                              cVar1 = *pcVar19;
                              pcVar19 = pcVar23;
                            } while (cVar1 != '\0');
                            uVar21 = ~uVar21;
                            pcVar23 = pcVar23 + -uVar21;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar21 = 0xffffffff;
                          pcVar19 = local_c + 10;
                          do {
                            pcVar23 = pcVar19;
                            if (uVar21 == 0) break;
                            uVar21 = uVar21 - 1;
                            pcVar23 = pcVar19 + 1;
                            cVar1 = *pcVar19;
                            pcVar19 = pcVar23;
                          } while (cVar1 != '\0');
                          uVar21 = ~uVar21;
                          pcVar23 = pcVar23 + -uVar21;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar19 = local_190;
                          for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar23;
                            pcVar23 = pcVar23 + 4;
                            pcVar19 = pcVar19 + 4;
                          }
                          for (uVar21 = uVar21 & 3; local_10 = local_190, uVar21 != 0;
                              uVar21 = uVar21 - 1) {
                            *pcVar19 = *pcVar23;
                            pcVar23 = pcVar23 + 1;
                            pcVar19 = pcVar19 + 1;
                          }
                        }
                        local_150 = *(undefined4 *)(local_c + 6);
                        local_14c._0_2_ = CONCAT11(*local_c,local_c[2]);
                        local_148 = this_01->field_0061;
                        if (cVar2 == '\x02') {
                          local_14c = CONCAT13(1,CONCAT12(1,(undefined2)local_14c));
                        }
                        else {
                          local_14c = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_14c)) & 0xff02ffff;
                        }
                        pcVar19 = local_190;
                        puVar22 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
                        for (iVar12 = 0x27; iVar12 != 0; iVar12 = iVar12 + -1) {
                          *puVar22 = *(undefined4 *)pcVar19;
                          pcVar19 = pcVar19 + 4;
                          puVar22 = puVar22 + 1;
                        }
                        if ((byte)local_14c < 8) {
                          iVar27 = 0;
                          iVar12 = (local_14c & 0xff) * 0x51;
                          do {
                            if ((&DAT_00808800)[iVar27 + iVar12] == '\0') {
                              (&DAT_00808800)[iVar27 + iVar12] = DAT_00808aaf;
                              break;
                            }
                            iVar27 = iVar27 + 1;
                          } while (iVar27 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    iVar12 = this_01->field_1F84;
                    local_18 = local_18 + 1;
                    bVar25 = local_18 < *(char **)(iVar12 + 0xc);
                  } while ((int)local_18 < (int)*(char **)(iVar12 + 0xc));
                }
                if (*(int *)(*(int *)((int)&this_01[1].field_0031 + 2) + 0xc) == 0) {
                  *(undefined1 *)((int)&this_01[1].field_0031 + 1) = 0;
                  RunGame((SettMapMTy *)this_01);
                  if (DAT_008067a0 != '\0') {
                    CFsgsConnection::UpdateGame
                              ((CFsgsConnection *)&DAT_00802a90,6,&this_01->field_0x1a5f);
                    CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
                  }
                }
              }
              if ((this_01->field_1E26 == '\f') || (this_01->field_1E26 == '\x10')) {
                DAT_0080879c = 1;
                _DAT_0080f32e = 1;
              }
            }
          }
          else {
            if (0 < *(int *)(iVar12 + 0xc)) {
              bVar24 = *(int *)(iVar12 + 0xc) != 0;
              do {
                if (bVar24) {
                  iVar27 = *(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c);
                }
                else {
                  iVar27 = 0;
                }
                if ((iVar27 != 0) &&
                   (((*(char *)(iVar27 + 4) == '\x02' || (*(char *)(iVar27 + 4) == '\x03')) &&
                    (*(char *)(iVar27 + 0x4f) == '\0')))) {
                  bVar25 = true;
                  break;
                }
                uVar21 = uVar21 + 1;
                bVar24 = uVar21 < *(uint *)(iVar12 + 0xc);
              } while ((int)uVar21 < (int)*(uint *)(iVar12 + 0xc));
            }
            if (bVar25) {
              pMVar4 = *(MMsgTy **)(this_01->field_1A5B + 0x2e6);
              if (pMVar4 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar4,0x2527,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
            else {
              uVar21 = 0;
              if (0 < *(int *)(iVar12 + 0xc)) {
                bVar25 = *(int *)(iVar12 + 0xc) != 0;
                do {
                  if (bVar25) {
                    pcVar19 = (char *)(*(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c));
                  }
                  else {
                    pcVar19 = (char *)0x0;
                  }
                  if ((pcVar19 != (char *)0x0) && (*pcVar19 != '\0')) {
                    cVar2 = pcVar19[4];
                    if (this_01->field_1E26 == '\f') {
                      if ((cVar2 == '\0') || (cVar2 == '\x01')) {
                        local_11 = 0;
                        break;
                      }
                    }
                    else if ((cVar2 == '\0') || (cVar2 == '\x01')) goto LAB_005d1b17;
                    local_11 = local_11 + 1;
                  }
LAB_005d1b17:
                  uVar21 = uVar21 + 1;
                  bVar25 = uVar21 < *(uint *)(iVar12 + 0xc);
                } while ((int)uVar21 < (int)*(uint *)(iVar12 + 0xc));
              }
              if (1 < local_11) goto LAB_005d1b5a;
              pMVar4 = *(MMsgTy **)(this_01->field_1A5B + 0x2e6);
              if (pMVar4 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar4,0x2528,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
        }
      }
      else if (uVar17 == 0x654c) {
        if (DAT_0080877e != '\0') {
          CheckPlList((SettMapMTy *)this_01,unaff_EDI);
          thunk_FUN_005d1380((int)this_01);
          (**(code **)(this_01->field_0000 + 0x2c))();
          SettMapTy::PaintSC(this_01);
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (uVar17 == 0x654d) goto switchD_005d1877_caseD_6548;
    }
    else if (uVar17 == 0xc0a2) {
      iVar12 = thunk_FUN_005ddb40(this_01->field_1A5B);
      if (iVar12 == 0) {
        if (DAT_008067a0 != '\0') {
          iVar12 = *(int *)(this_01->field_1A5B + 0x686);
          if (*(int *)(iVar12 + 8) < 1) {
            pcVar19 = (char *)0x0;
          }
          else {
            pcVar19 = (char *)**(undefined4 **)(iVar12 + 0x14);
          }
          bVar25 = thunk_FUN_005717e0(pcVar19);
          if (CONCAT31(extraout_var,bVar25) != 0) {
            iVar12 = *(int *)(this_01->field_1A5B + 0x686);
            if (*(int *)(iVar12 + 8) < 1) {
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
            }
            else {
              CFsgsConnection::SendChatMessage
                        ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar12 + 0x14));
            }
            goto LAB_005d28da;
          }
        }
        pcVar19 = local_680;
        for (iVar12 = 0x114; iVar12 != 0; iVar12 = iVar12 + -1) {
          pcVar19[0] = '\0';
          pcVar19[1] = '\0';
          pcVar19[2] = '\0';
          pcVar19[3] = '\0';
          pcVar19 = pcVar19 + 4;
        }
        *pcVar19 = '\0';
        pcVar19 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar19 = (char *)&DAT_00807ddd;
        }
        uVar21 = 0xffffffff;
        do {
          pcVar23 = pcVar19;
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          pcVar23 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar23;
        } while (cVar2 != '\0');
        uVar21 = ~uVar21;
        this_00 = (StartSystemTy *)this_01->field_1A5B;
        pcVar19 = pcVar23 + -uVar21;
        pcVar23 = local_680;
        for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
          *pcVar23 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar23 = pcVar23 + 1;
        }
        iVar12 = this_00->field_0686;
        if (*(int *)(iVar12 + 8) < 1) {
          pcVar19 = (char *)0x0;
        }
        else {
          pcVar19 = (char *)**(undefined4 **)(iVar12 + 0x14);
        }
        uVar21 = 0xffffffff;
        do {
          pcVar23 = pcVar19;
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          pcVar23 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar23;
        } while (cVar2 != '\0');
        uVar21 = ~uVar21;
        pcVar19 = pcVar23 + -uVar21;
        pcVar23 = local_640;
        for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
          pcVar19 = pcVar19 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
          *pcVar23 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar23 = pcVar23 + 1;
        }
        local_10 = local_640;
        StartSystemTy::AddToChat(this_00,(int)local_680);
        if (*(char *)&this_01[1].field_000C == '\0') {
          iVar12 = this_01->field_1F84;
          if (iVar12 != 0) {
            uVar21 = *(uint *)(iVar12 + 0xc);
            uVar17 = 0;
            if (uVar21 != 0) {
              if (uVar21 == 0) {
                iVar27 = 0;
                goto LAB_005d277a;
              }
              do {
                iVar27 = *(int *)(iVar12 + 8) * uVar17 + *(int *)(iVar12 + 0x1c);
LAB_005d277a:
                if ((iVar27 != 0) &&
                   (((*(char *)(iVar27 + 4) == '\x02' || (*(char *)(iVar27 + 4) == '\x03')) &&
                    (*(int *)(iVar27 + 6) == DAT_0080877f)))) {
                  local_5 = *(char *)(iVar27 + 0x4a);
                  break;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar21);
            }
            local_c = (undefined1 *)0x0;
            if (uVar21 != 0) {
              if (uVar21 == 0) {
                iVar12 = 0;
                goto LAB_005d27c3;
              }
              do {
                iVar12 = *(int *)(iVar12 + 8) * (int)local_c + *(int *)(iVar12 + 0x1c);
LAB_005d27c3:
                if (((iVar12 != 0) &&
                    ((*(char *)(iVar12 + 4) == '\x02' || (*(char *)(iVar12 + 4) == '\x03')))) &&
                   (*(int *)(iVar12 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) && (bVar16 = *(byte *)(iVar12 + 2), bVar16 != 0xff))
                       && (DAT_0080874d != bVar16)) {
                      local_10 = (char *)CONCAT31(local_10._1_3_,bVar16);
                      uVar17 = (uint)DAT_0080874d;
                      uVar21 = (uint)bVar16;
                      cVar2 = *(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar21);
                      if ((cVar2 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar17) == '\0')) {
                        iVar27 = -2;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar17) == '\0')) {
                        iVar27 = -1;
                      }
                      else if ((cVar2 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar17) == '\x01')) {
                        iVar27 = 1;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar17) == '\x01')) {
                        iVar27 = 2;
                      }
                      else {
                        iVar27 = 0;
                      }
                      if (iVar27 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (*(char *)(iVar12 + 0x4a) == local_5) {
LAB_005d28a0:
                    FUN_00715360(g_int_00811764,*(int *)(iVar12 + 6),'\x1b',local_680,0x451,1,
                                 0xffffffff);
                  }
                }
                iVar12 = this_01->field_1F84;
                local_c = local_c + 1;
              } while (local_c < *(undefined1 **)(iVar12 + 0xc));
            }
          }
        }
        else {
          FUN_00715360(g_int_00811764,0,'\x1b',local_680,0x451,1,0xffffffff);
        }
      }
LAB_005d28da:
      Library::DKW::TBL::FUN_006b6020(*(uint **)(this_01->field_1A5B + 0x686),0,&DAT_008016a0);
      this_01->field_002D = 0x33;
      this_01->field_0031 = *(undefined4 *)(this_01->field_1A5B + 0x686);
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01->field_1A5B + 0x54c),
                   (undefined4 *)&this_01->field_0x1d);
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (uVar17 < 0x654a) {
    switch(uVar17) {
    case 0x6505:
      uVar21 = *(uint *)&param_1->field_0x14;
      if ((uVar21 != 0xffffffff) && (this_01->field_1F84 != 0)) {
        iVar12 = this_01->field_1E2F;
        if (uVar21 < *(uint *)(iVar12 + 0xc)) {
          iVar12 = *(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c);
        }
        else {
          iVar12 = 0;
        }
        if (DAT_0080877e == '\0') {
          ChgPlList((SettMapMTy *)this_01,*(undefined4 *)&param_1->field_0x18,3,
                    *(undefined4 *)(iVar12 + 0x104),*(undefined4 *)(iVar12 + 0x108));
          *(undefined1 *)((int)&this_01[1].field_0045 + 3) = 0;
        }
        else {
          pcVar19 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar19 = (char *)&DAT_00807ddd;
          }
          ChangePlayerList((SettMapMTy *)this_01,DAT_0080877f,*(uint *)&param_1->field_0x18,
                           *(int *)(iVar12 + 0x104),(char)*(undefined4 *)(iVar12 + 0x108),pcVar19);
          SendPlList((SettMapMTy *)this_01,0);
        }
      }
      break;
    case 0x6506:
      uVar21 = *(uint *)&param_1->field_0x18;
      if (uVar21 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          *(int *)&this_01->field_0x2121 = *(int *)&this_01->field_0x2121 + 1;
          SendDesc((SettMapMTy *)this_01,0);
          SendPlList((SettMapMTy *)this_01,0);
        }
      }
      else if (((2 < uVar21) && (uVar21 < 9)) && (DAT_0080877e != '\0')) {
        DAT_00808aab = DAT_00808aab + 1;
        SendDesc((SettMapMTy *)this_01,0);
      }
      break;
    case 0x6548:
      goto switchD_005d1877_caseD_6548;
    case 0x6549:
switchD_005d1877_caseD_6549:
      if (DAT_0080877e != '\0') {
        *(int *)&this_01->field_0x2121 = *(int *)&this_01->field_0x2121 + 1;
        SendPlList((SettMapMTy *)this_01,0);
        goto switchD_005d1877_caseD_6548;
      }
    }
  }
  else {
switchD_005d1877_caseD_6548:
    if (DAT_0080877e != '\0') {
      DAT_00808aab = DAT_00808aab + 1;
      SendDesc((SettMapMTy *)this_01,0);
    }
  }
switchD_005d1877_caseD_6507:
  uVar21 = *(uint *)&param_1->field_0x10;
  if (((0x69fe < uVar21) && (uVar21 < 0x6a7f)) && (this_01->field_0065 == '\x01')) {
    iVar12 = this_01->field_1F84;
    local_2c = uVar21 - 0x69ff >> 3;
    if ((iVar12 == 0) ||
       (uVar17 = local_2c + this_01->field_1F88, *(uint *)(iVar12 + 0xc) <= uVar17)) {
      pcVar19 = (char *)0x0;
    }
    else {
      pcVar19 = (char *)(*(int *)(iVar12 + 8) * uVar17 + *(int *)(iVar12 + 0x1c));
    }
    local_18 = pcVar19;
    if (pcVar19 != (char *)0x0) {
      switch(uVar21 + 1 & 7) {
      case 0:
        if ((pcVar19[4] == '\x02') && (*(int *)(pcVar19 + 6) == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar17 = 0;
            uVar21 = 0;
            iVar12 = this_01->field_1F88 + local_2c;
            uVar29 = 0;
            goto LAB_005d34ee;
          }
          ChangePlayerState((SettMapMTy *)this_01,this_01->field_1F88 + local_2c);
          SendPlList((SettMapMTy *)this_01,0);
        }
        break;
      case 1:
        if (*pcVar19 != '\0') {
          uVar21 = *(uint *)(iVar12 + 0xc);
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar17 = 0;
          if (0 < (int)uVar21) {
            bVar25 = uVar21 != 0;
            do {
              if (bVar25) {
                pcVar23 = (char *)(*(int *)(this_01->field_1F84 + 8) * uVar17 +
                                  *(int *)(this_01->field_1F84 + 0x1c));
              }
              else {
                pcVar23 = (char *)0x0;
              }
              if ((*pcVar23 != '\0') && (pcVar23[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar23[2]) = 0;
              }
              uVar17 = uVar17 + 1;
              bVar25 = uVar17 < uVar21;
            } while ((int)uVar17 < (int)uVar21);
          }
          if (pcVar19[2] != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar19[2]) = 1;
          }
          uVar21 = 0;
          this_01->field_2171 = 0x6502;
          this_01->field_2179 = this_01->field_1F88 + local_2c;
          this_01->field_2191 = 0x6503;
          this_01->field_21A1 = 0;
          *(undefined4 *)(this_01->field_1E2F + 0xc) = 0;
          this_01->field_1F37 = 0xff;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
          local_c = (undefined1 *)CONCAT31(local_c._1_3_,1);
          do {
            if (*(char *)((int)&local_44 + uVar21) != '\0') {
              this_01->field_1F37 = uVar21;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
              if ((byte)pcVar19[2] == uVar21) {
                this_01->field_21A1 = (uint)local_c & 0xff;
              }
              local_c = (undefined1 *)CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
            }
            uVar21 = uVar21 + 1;
          } while ((int)uVar21 < 8);
          uVar29 = *(undefined4 *)(this_01->field_1E2F + 0xc);
          this_01->field_21C5 = 0x124;
          this_01->field_21A9 = uVar29;
          this_01->field_21CD = 0x1e;
          this_01->field_21A5 = 0x12;
          this_01->field_21C9 = local_2c * 0x19 + 0x41;
LAB_005d3188:
          (*this_01->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_01->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                     &this_01->field_0x2161,0);
        }
        break;
      case 2:
        if (*pcVar19 != '\0') {
          this_01->field_2171 = 0x6504;
          this_01->field_2179 = this_01->field_1F88 + local_2c;
          this_01->field_2191 = 0x6500;
          *(undefined4 *)(this_01->field_1E2F + 0xc) = 0;
          local_10 = (char *)0x1;
          pcVar19 = (char *)FUN_006b0140(0x23f1,HINSTANCE_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar23 = pcVar19;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar23 = pcVar19 + 1;
            cVar2 = *pcVar19;
            pcVar19 = pcVar23;
          } while (cVar2 != '\0');
          uVar21 = ~uVar21;
          pcVar19 = pcVar23 + -uVar21;
          pcVar23 = &this_01->field_0x1e33;
          for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pcVar23 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar23 = pcVar23 + 1;
          }
          for (puVar13 = Library::MSVCRT::FUN_0072e560((uint *)&this_01->field_0x1e33,'\n');
              puVar13 != (uint *)0x0; puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
            *(undefined1 *)puVar13 = 0x20;
          }
          this_01->field_1F37 = 1;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
          pcVar19 = (char *)FUN_006b0140(0x23f0,HINSTANCE_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar23 = pcVar19;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar23 = pcVar19 + 1;
            cVar2 = *pcVar19;
            pcVar19 = pcVar23;
          } while (cVar2 != '\0');
          uVar21 = ~uVar21;
          pcVar19 = pcVar23 + -uVar21;
          pcVar23 = &this_01->field_0x1e33;
          for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pcVar23 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar23 = pcVar23 + 1;
          }
          for (puVar13 = Library::MSVCRT::FUN_0072e560((uint *)&this_01->field_0x1e33,'\n');
              puVar13 != (uint *)0x0; puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
            *(undefined1 *)puVar13 = 0x20;
          }
          this_01->field_1F37 = 2;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
          pcVar19 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar19 = (char *)(uint)(local_18[4] != '\x02');
          }
          if (pcVar19 != (char *)0x0) {
            pcVar19 = (char *)FUN_006b0140(0x23f2,HINSTANCE_00807618);
            uVar21 = 0xffffffff;
            do {
              pcVar23 = pcVar19;
              if (uVar21 == 0) break;
              uVar21 = uVar21 - 1;
              pcVar23 = pcVar19 + 1;
              cVar2 = *pcVar19;
              pcVar19 = pcVar23;
            } while (cVar2 != '\0');
            uVar21 = ~uVar21;
            pcVar19 = pcVar23 + -uVar21;
            pcVar23 = &this_01->field_0x1e33;
            for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
              *pcVar23 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar23 = pcVar23 + 1;
            }
            for (puVar13 = Library::MSVCRT::FUN_0072e560((uint *)&this_01->field_0x1e33,'\n');
                puVar13 != (uint *)0x0; puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
              *(undefined1 *)puVar13 = 0x20;
            }
            this_01->field_1F37 = 3;
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
          }
          this_01->field_21A9 = *(undefined4 *)(this_01->field_1E2F + 0xc);
          bVar16 = local_18[3];
          this_01->field_21C5 = 0x143;
          this_01->field_21CD = 0x78;
          this_01->field_21A1 = bVar16 - 1;
          this_01->field_21C9 = local_2c * 0x19 + 0x41;
          pcVar6 = PTR_0081176c->field_0034;
          if (pcVar6->field_00A0 != 0) {
            FUN_00710790((uint *)pcVar6);
          }
          this_01->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
          goto LAB_005d3188;
        }
        break;
      case 3:
        this_01->field_2171 = 0x6505;
        this_01->field_2179 = local_2c + this_01->field_1F88;
        this_01->field_2191 = 0x6500;
        *(undefined4 *)(this_01->field_1E2F + 0xc) = 0;
        puVar22 = (undefined4 *)&this_01->field_0x1e33;
        for (iVar12 = 0x43; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar22 = 0;
          puVar22 = puVar22 + 1;
        }
        if (*pcVar19 == '\0') {
          uVar21 = local_2c + this_01->field_1F88;
          local_5 = '\0';
          if (-1 < (int)uVar21) {
            iVar12 = this_01->field_1F84;
            do {
              if (uVar21 < *(uint *)(iVar12 + 0xc)) {
                pcVar19 = (char *)(*(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c));
              }
              else {
                pcVar19 = (char *)0x0;
              }
              if (*pcVar19 != '\0') {
                if ((pcVar19[4] == '\x02') && (*(int *)(pcVar19 + 6) != DAT_0080877f)) {
                  local_5 = '\x01';
                }
                break;
              }
              uVar21 = uVar21 - 1;
            } while (-1 < (int)uVar21);
          }
          if (local_5 != '\0') {
            pcVar19 = (char *)FUN_006b0140(0x1f42,HINSTANCE_00807618);
            uVar21 = 0xffffffff;
            do {
              pcVar23 = pcVar19;
              if (uVar21 == 0) break;
              uVar21 = uVar21 - 1;
              pcVar23 = pcVar19 + 1;
              cVar2 = *pcVar19;
              pcVar19 = pcVar23;
            } while (cVar2 != '\0');
            uVar21 = ~uVar21;
            pcVar19 = pcVar23 + -uVar21;
            pcVar23 = &this_01->field_0x1e33;
            for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
              *pcVar23 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar23 = pcVar23 + 1;
            }
            this_01->field_1F37 = 2;
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
            if (DAT_00808aaa != '\0') {
              pcVar19 = (char *)FUN_006b0140(0x1f46,HINSTANCE_00807618);
              uVar21 = 0xffffffff;
              do {
                pcVar23 = pcVar19;
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                pcVar23 = pcVar19 + 1;
                cVar2 = *pcVar19;
                pcVar19 = pcVar23;
              } while (cVar2 != '\0');
              uVar21 = ~uVar21;
              pcVar19 = pcVar23 + -uVar21;
              pcVar23 = &this_01->field_0x1e33;
              for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
                pcVar19 = pcVar19 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                *pcVar23 = *pcVar19;
                pcVar19 = pcVar19 + 1;
                pcVar23 = pcVar23 + 1;
              }
              this_01->field_1F37 = 3;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
            }
          }
          pcVar19 = (char *)FUN_006b0140(0x1f41,HINSTANCE_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar23 = pcVar19;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar23 = pcVar19 + 1;
            cVar2 = *pcVar19;
            pcVar19 = pcVar23;
          } while (cVar2 != '\0');
          uVar21 = ~uVar21;
          pcVar19 = pcVar23 + -uVar21;
          pcVar23 = &this_01->field_0x1e33;
          for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pcVar23 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar23 = pcVar23 + 1;
          }
          this_01->field_1F37 = 1;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
        }
        else {
          if ((this_01->field_1E26 != '\x05') || (pcVar19[4] != '\x04')) {
            if ((DAT_0080877e != '\0') && (this_01->field_1E26 != '\x05')) {
              pcVar19 = (char *)FUN_006b0140(8000,HINSTANCE_00807618);
              uVar21 = 0xffffffff;
              do {
                pcVar23 = pcVar19;
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                pcVar23 = pcVar19 + 1;
                cVar2 = *pcVar19;
                pcVar19 = pcVar23;
              } while (cVar2 != '\0');
              uVar21 = ~uVar21;
              pcVar19 = pcVar23 + -uVar21;
              pcVar23 = &this_01->field_0x1e33;
              for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
                pcVar19 = pcVar19 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                *pcVar23 = *pcVar19;
                pcVar19 = pcVar19 + 1;
                pcVar23 = pcVar23 + 1;
              }
              this_01->field_1F37 = 0;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
            }
            bVar25 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar25 = local_18[3] != '\x03';
            }
            if (bVar25) {
              pcVar19 = (char *)FUN_006b0140(0x1f42,HINSTANCE_00807618);
              uVar21 = 0xffffffff;
              do {
                pcVar23 = pcVar19;
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                pcVar23 = pcVar19 + 1;
                cVar2 = *pcVar19;
                pcVar19 = pcVar23;
              } while (cVar2 != '\0');
              uVar21 = ~uVar21;
              pcVar19 = pcVar23 + -uVar21;
              pcVar23 = &this_01->field_0x1e33;
              for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
                pcVar19 = pcVar19 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                *pcVar23 = *pcVar19;
                pcVar19 = pcVar19 + 1;
                pcVar23 = pcVar23 + 1;
              }
              this_01->field_1F37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
            }
            pcVar19 = (char *)FUN_006b0140(0x1f41,HINSTANCE_00807618);
            uVar21 = 0xffffffff;
            do {
              pcVar23 = pcVar19;
              if (uVar21 == 0) break;
              uVar21 = uVar21 - 1;
              pcVar23 = pcVar19 + 1;
              cVar2 = *pcVar19;
              pcVar19 = pcVar23;
            } while (cVar2 != '\0');
            uVar21 = ~uVar21;
            pcVar19 = pcVar23 + -uVar21;
            pcVar23 = &this_01->field_0x1e33;
            for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
              *pcVar23 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar23 = pcVar23 + 1;
            }
            this_01->field_1F37 = 1;
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
          }
          if ((DAT_0080877e != '\0') && (this_01->field_1E26 != '\x05')) {
            local_c = (undefined1 *)0x0;
            iVar12 = *(int *)(local_18 + 0x50);
            puVar14 = *(undefined1 **)(iVar12 + 0xc);
            if (0 < (int)puVar14) {
              do {
                if (local_c < puVar14) {
                  iVar12 = *(int *)(iVar12 + 8) * (int)local_c + *(int *)(iVar12 + 0x1c);
                }
                else {
                  iVar12 = 0;
                }
                uVar21 = 0xffffffff;
                pcVar19 = (char *)(iVar12 + 0x40);
                do {
                  pcVar23 = pcVar19;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar23 = pcVar19 + 1;
                  cVar2 = *pcVar19;
                  pcVar19 = pcVar23;
                } while (cVar2 != '\0');
                uVar21 = ~uVar21;
                pcVar19 = pcVar23 + -uVar21;
                pcVar23 = &this_01->field_0x1e33;
                for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
                  pcVar19 = pcVar19 + 4;
                  pcVar23 = pcVar23 + 4;
                }
                for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *pcVar23 = *pcVar19;
                  pcVar19 = pcVar19 + 1;
                  pcVar23 = pcVar23 + 1;
                }
                this_01->field_1F37 = 4;
                *(undefined1 **)&this_01->field_0x1f3b = local_c;
                Library::DKW::TBL::FUN_006ae1c0
                          ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
                local_c = local_c + 1;
                iVar12 = *(int *)(local_18 + 0x50);
                puVar14 = *(undefined1 **)(iVar12 + 0xc);
              } while ((int)local_c < (int)puVar14);
            }
          }
        }
        iVar12 = this_01->field_1E2F;
        uVar21 = 0;
        this_01->field_21A1 = 0;
        if (0 < *(int *)(iVar12 + 0xc)) {
          bVar25 = *(int *)(iVar12 + 0xc) != 0;
          local_10 = (char *)(uint)(byte)local_18[4];
          do {
            if (bVar25) {
              iVar27 = *(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c);
            }
            else {
              iVar27 = 0;
            }
            if ((*(char **)(iVar27 + 0x104) == local_10) &&
               (*(uint *)(iVar27 + 0x108) == (uint)(byte)local_18[5])) {
              this_01->field_21A1 = uVar21;
              break;
            }
            uVar21 = uVar21 + 1;
            bVar25 = uVar21 < *(uint *)(iVar12 + 0xc);
          } while ((int)uVar21 < (int)*(uint *)(iVar12 + 0xc));
        }
        uVar29 = *(undefined4 *)(iVar12 + 0xc);
        this_01->field_21C5 = 0x15d;
        this_01->field_21A9 = uVar29;
        this_01->field_21CD = 0x5f;
        this_01->field_21C9 = local_2c * 0x19 + 0x41;
        pcVar6 = PTR_0081176c->field_0034;
        if (pcVar6->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar6);
        }
        this_01->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
        if (0 < (int)this_01->field_21A9) goto LAB_005d3188;
        break;
      case 5:
        if (*pcVar19 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar17 = (uint)DAT_0080874d;
              uVar21 = 0;
              iVar12 = this_01->field_1F88 + local_2c;
              uVar29 = 5;
              goto LAB_005d34ee;
            }
            ChangePlayerTeam((SettMapMTy *)this_01,this_01->field_1F88 + local_2c,0,
                             (uint)DAT_0080874d);
            SendDesc((SettMapMTy *)this_01,0);
          }
          else {
            uVar21 = *(uint *)(iVar12 + 0xc);
            uVar17 = 0;
            local_3c = 0;
            local_c = (undefined1 *)CONCAT31(local_c._1_3_,0xff);
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar21;
            if (0 < (int)uVar21) {
              bVar25 = uVar21 != 0;
              do {
                if (bVar25) {
                  iVar12 = *(int *)(this_01->field_1F84 + 8) * uVar17 +
                           *(int *)(this_01->field_1F84 + 0x1c);
                }
                else {
                  iVar12 = 0;
                }
                if ((iVar12 != 0) && (*(byte *)(iVar12 + 0x4a) < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)*(byte *)(iVar12 + 0x4a)) = 1;
                }
                uVar17 = uVar17 + 1;
                bVar25 = uVar17 < uVar21;
              } while ((int)uVar17 < (int)uVar21);
            }
            uVar17 = local_2c;
            bVar16 = 0;
            iVar12 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar12) != '\0') {
                bVar16 = bVar16 + 1;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < 8);
            bVar3 = this_01->field_0x211c;
joined_r0x005d3229:
            if (bVar16 < bVar3) {
              iVar12 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar12) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar12) = 1;
                  bVar16 = bVar16 + 1;
                  break;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < 8);
              goto joined_r0x005d3229;
            }
            uVar20 = 0;
            if (0 < (int)uVar21) {
              do {
                puVar14 = local_30;
                if (uVar20 < local_30) {
                  pcVar19 = (char *)(*(int *)(this_01->field_1F84 + 8) * uVar20 +
                                    *(int *)(this_01->field_1F84 + 0x1c));
                }
                else {
                  pcVar19 = (char *)0x0;
                }
                if (pcVar19 != (char *)0x0) {
                  if (this_01->field_1F88 + uVar17 != uVar20) {
                    if (*pcVar19 == '\0') goto LAB_005d32d3;
                    if ((pcVar19[4] != '\0') && (pcVar19[4] != '\x01')) {
                      if (local_10 == (char *)0x0) {
                        if ((byte)local_c != pcVar19[0x4a]) {
                          local_c = (undefined1 *)CONCAT31(local_c._1_3_,0xff);
                        }
                      }
                      else {
                        local_10 = (char *)0x0;
                        local_c = (undefined1 *)CONCAT31(local_c._1_3_,pcVar19[0x4a]);
                      }
                    }
                  }
                  if ((*pcVar19 != '\0') &&
                     (((pcVar19[4] == '\0' || (pcVar19[4] == '\x01')) && ((byte)pcVar19[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar19[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar20 = uVar20 + 1;
              } while ((int)uVar20 < (int)puVar14);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar21 = 0;
            this_01->field_2171 = 0x6501;
            this_01->field_2179 = this_01->field_1F88 + local_2c;
            this_01->field_2191 = 0x6500;
            this_01->field_21A1 = 0;
            *(undefined4 *)(this_01->field_1E2F + 0xc) = 0;
            local_c = (undefined1 *)((uint)local_c & 0xffffff00);
            puVar14 = &uStack_7d;
            local_30 = puVar14;
            do {
              iVar12 = uVar21 + 0x41;
              if (puVar14[uVar21 + 0x41] != '\0') {
                uVar29 = FUN_006b0140(0x1f4a,HINSTANCE_00807618);
                wsprintfA(&this_01->field_0x1e33,&DAT_007cd508,uVar29,iVar12);
                this_01->field_1F37 = uVar21;
                Library::DKW::TBL::FUN_006ae1c0
                          ((uint *)this_01->field_1E2F,(undefined4 *)&this_01->field_0x1e33);
                if ((byte)local_18[0x4a] == uVar21) {
                  this_01->field_21A1 = (uint)local_c & 0xff;
                }
                local_c = (undefined1 *)CONCAT31(local_c._1_3_,(byte)local_c + '\x01');
                puVar14 = local_30;
              }
              uVar21 = uVar21 + 1;
            } while ((int)uVar21 < 8);
            cVar2 = this_01->field_1E26;
            this_01->field_21A9 = *(undefined4 *)(this_01->field_1E2F + 0xc);
            if (((cVar2 == '\x06') || (cVar2 == '\x01')) || (uVar29 = 0x26b, cVar2 == '\x02')) {
              uVar29 = 0x2ab;
            }
            this_01->field_21C5 = uVar29;
            this_01->field_21CD = 0x46;
            this_01->field_21C9 = local_2c * 0x19 + 0x41;
            pcVar6 = PTR_0081176c->field_0034;
            if (pcVar6->field_00A0 != 0) {
              FUN_00710790((uint *)pcVar6);
            }
            this_01->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
            (*this_01->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_01->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                       &this_01->field_0x2161,0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar17 = 0;
          uVar21 = (uint)(pcVar19[0x4f] == '\0');
          iVar12 = this_01->field_1F88 + local_2c;
          uVar29 = 7;
LAB_005d34ee:
          ChgPlList((SettMapMTy *)this_01,iVar12,uVar29,uVar21,uVar17);
        }
        else {
          pcVar19[0x4f] = pcVar19[0x4f] == '\0';
          this_01->field_002D = 5;
          FUN_006e6080(this_01,2,*(undefined4 *)(&this_01->field_0x1fa8 + local_2c * 0x20),
                       (undefined4 *)&this_01->field_0x1d);
          *(int *)&this_01->field_0x2121 = *(int *)&this_01->field_0x2121 + 1;
          SendPlList((SettMapMTy *)this_01,0);
        }
      }
    }
  }
  uVar21 = *(uint *)&param_1->field_0x10;
  if (uVar21 < 0x6a7f) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  if (0x6afe < uVar21) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  pcVar23 = (char *)0x0;
  pcVar19 = (char *)(uVar21 - 0x6a7f >> 3);
  local_30 = (undefined1 *)(uVar21 + 1 & 7);
  piVar7 = *(int **)&param_1->field_0x18;
  local_20 = piVar7[2];
  local_1c = piVar7[3];
  iVar12 = this_01->field_1F84;
  local_28 = *piVar7 + -0x113;
  local_24 = 0;
  if ((iVar12 != 0) &&
     (uVar21 = this_01->field_1F88 + (int)pcVar19, uVar21 < *(uint *)(iVar12 + 0xc))) {
    pcVar23 = (char *)(*(int *)(iVar12 + 8) * uVar21 + *(int *)(iVar12 + 0x1c));
  }
  local_10 = pcVar19;
  FUN_006b4170((&this_01->field_20F4)[(int)pcVar19],0,*piVar7 + -0x113,0,piVar7[2],piVar7[3],0xff);
  if (pcVar23 == (char *)0x0) goto switchD_005d35aa_default;
  switch(local_30) {
  case (undefined1 *)0x0:
    if (((*pcVar23 == '\0') || (pcVar23[4] != '\x02')) || (*(int *)(pcVar23 + 6) != DAT_0080877f))
    break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar19],&local_28,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    iVar12 = 2 - (uint)(pcVar23[1] != '\0');
    goto LAB_005d3bf4;
  case (undefined1 *)0x1:
    if (*pcVar23 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar19],&local_28,0,
                 (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pcVar23[2] != -1) {
        switch(pcVar23[2]) {
        case '\0':
          uVar10 = 0xfc;
          break;
        case '\x01':
          uVar10 = 0xfa;
          break;
        case '\x02':
          uVar10 = 0xfb;
          break;
        case '\x03':
          uVar10 = 0xf9;
          break;
        case '\x04':
          uVar10 = 0xfd;
          break;
        case '\x05':
          uVar10 = 0xfe;
          break;
        case '\x06':
          uVar10 = 0xf3;
          break;
        case '\a':
          uVar10 = 7;
          break;
        default:
          uVar10 = 0xff;
        }
        FUN_006b4170((&this_01->field_20F4)[(int)pcVar19],0,local_28 + 2,local_24 + 2,local_20 + -4,
                     local_1c + -4,uVar10);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*pcVar23 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar19],&local_28,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_01->field_20F4)[(int)pcVar19],0,local_28,
                     local_24,local_20,local_1c);
    if (pcVar23[3] == '\x01') {
      pcVar19 = &DAT_007ca250;
LAB_005d3780:
      uVar21 = 0xffffffff;
      do {
        pcVar23 = pcVar19;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar23 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar23;
      } while (cVar2 != '\0');
      uVar21 = ~uVar21;
      pcVar19 = pcVar23 + -uVar21;
      pcVar23 = (char *)&DAT_0080f33a;
      for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar23 = pcVar23 + 4;
      }
    }
    else {
      if (pcVar23[3] != '\x02') {
        pcVar19 = &DAT_007ca24c;
        goto LAB_005d3780;
      }
      uVar21 = 0xffffffff;
      pcVar19 = &DAT_007ca248;
      do {
        pcVar23 = pcVar19;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar23 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar23;
      } while (cVar2 != '\0');
      uVar21 = ~uVar21;
      pcVar19 = pcVar23 + -uVar21;
      pcVar23 = (char *)&DAT_0080f33a;
      for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
        pcVar19 = pcVar19 + 4;
        pcVar23 = pcVar23 + 4;
      }
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *pcVar23 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar23 = pcVar23 + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
    pcVar19 = local_10;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar19],&local_28,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_01->field_20F4)[(int)pcVar19],0,local_28,
                     local_24,local_20,local_1c);
    uVar29 = 2;
    iVar28 = -1;
    iVar27 = -1;
    puVar26 = (uint *)&DAT_007c2310;
    iVar12 = local_20;
    puVar13 = (uint *)thunk_FUN_005cbbe0(this_01,pcVar23);
    goto LAB_005d38bd;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar19],&local_28,2,0x67,0x67);
    bVar16 = pcVar23[4];
    if (bVar16 < 2) break;
    if (bVar16 < 4) {
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_01->field_20F4)[(int)pcVar19],0,local_28,
                       local_24,local_20,local_1c);
      uVar29 = 2;
      iVar27 = -1;
      iVar12 = -1;
      puVar13 = thunk_FUN_00540c40(PTR_0081176c->field_0034,(uint *)(pcVar23 + 10),
                                   (uint *)&DAT_007c7274,local_20);
      ccFntTy::WrStr(PTR_0081176c->field_0034,puVar13,iVar12,iVar27,uVar29);
      break;
    }
    if (bVar16 != 4) break;
    iVar12 = *(int *)(pcVar23 + 0x50);
    if ((uint)(byte)pcVar23[5] < *(uint *)(iVar12 + 0xc)) {
      puVar13 = (uint *)(*(int *)(iVar12 + 8) * (uint)(byte)pcVar23[5] + *(int *)(iVar12 + 0x1c));
    }
    else {
      puVar13 = (uint *)0x0;
    }
    if (puVar13 == (uint *)0x0) break;
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_01->field_20F4)[(int)pcVar19],0,local_28,
                     local_24,local_20,local_1c);
    uVar29 = 2;
    iVar28 = -1;
    iVar27 = -1;
    puVar26 = (uint *)&DAT_007c7274;
    iVar12 = local_20;
LAB_005d38bd:
    puVar13 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar13,puVar26,iVar12);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar13,iVar27,iVar28,uVar29);
    break;
  case (undefined1 *)0x5:
    if ((*pcVar23 == '\0') ||
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar19],&local_28,2,
                   (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67), pcVar23[4] == '\0'
       )) break;
    if (DAT_00808a8f != '\0') {
      iVar12 = (byte)pcVar23[0x4a] + 0x41;
      uVar29 = FUN_006b0140(0x1f4a,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,uVar29,iVar12);
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_01->field_20F4)[(int)pcVar19],0,local_28,
                       local_24,local_20,local_1c);
      ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar16 = pcVar23[2], bVar16 == 0xff)) ||
       (DAT_0080874d == bVar16)) break;
    local_10 = (char *)0xffffffff;
    local_30 = (undefined1 *)CONCAT31(local_30._1_3_,bVar16);
    uVar17 = (uint)DAT_0080874d;
    uVar21 = (uint)bVar16;
    cVar2 = *(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar21);
    if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar17) == '\0')) {
      uVar29 = 0xfffffffe;
    }
    else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar17) == '\0')) {
      uVar29 = 0xffffffff;
    }
    else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar17) == '\x01')) {
      uVar29 = 1;
    }
    else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar17) == '\x01')) {
      uVar29 = 2;
    }
    else {
      uVar29 = 0;
    }
    switch(uVar29) {
    default:
      iVar12 = -1;
      break;
    case 1:
      iVar12 = 1;
      break;
    case 2:
      iVar12 = 3;
      break;
    case 0xfffffffe:
      iVar12 = 0;
      break;
    case 0xffffffff:
      iVar12 = 2;
    }
    iVar12 = iVar12 + -1;
    if (iVar12 < 0) break;
    iVar27 = *(int *)&this_01->field_0x1f4b;
    goto LAB_005d3bfa;
  case (undefined1 *)0x6:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar19],&local_28,2,0x67,0x67);
    if (((pcVar23[4] == '\x02') || (pcVar23[4] == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)(pcVar23 + 6) != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)(pcVar23 + 6) == DAT_0080877f)))))) {
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_01->field_20F4)[(int)pcVar19],0,local_28,
                       local_24,local_20,local_1c);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)(pcVar23 + 0x4b));
      uVar21 = 0xffffffff;
      pcVar23 = (char *)&DAT_0080f33a;
      do {
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        cVar2 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar2 != '\0');
      if (4 < ~uVar21 - 1) {
        uVar21 = 0xffffffff;
        pcVar19 = &DAT_007cd500;
        do {
          pcVar23 = pcVar19;
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          pcVar23 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar23;
        } while (cVar2 != '\0');
        uVar21 = ~uVar21;
        pcVar23 = pcVar23 + -uVar21;
        pcVar18 = (char *)&DAT_0080f33a;
        for (uVar17 = uVar21 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar23;
          pcVar23 = pcVar23 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar21 = uVar21 & 3; pcVar19 = local_10, uVar21 != 0; uVar21 = uVar21 - 1) {
          *pcVar18 = *pcVar23;
          pcVar23 = pcVar23 + 1;
          pcVar18 = pcVar18 + 1;
        }
      }
      ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
    }
    break;
  case (undefined1 *)0x7:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_01,(&this_01->field_20F4)[(int)pcVar19],&local_28,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    if (((pcVar23[4] != '\x02') || (pcVar23[0x4f] == '\0')) && (pcVar23[4] != '\x04')) break;
    iVar12 = 0;
LAB_005d3bf4:
    iVar27 = this_01->field_1F4F;
LAB_005d3bfa:
    pbVar15 = (byte *)FUN_0070b3a0(iVar27,iVar12);
    DibPut((undefined4 *)(&this_01->field_20F4)[(int)pcVar19],
           (local_20 - *(int *)(pbVar15 + 4)) / 2 + local_28,
           (local_1c - *(int *)(pbVar15 + 8)) / 2 + 1 + local_24,'\x06',pbVar15);
  }
switchD_005d35aa_default:
  FUN_006b35d0(DAT_008075a8,(&this_01->field_20CC)[(int)pcVar19]);
  if (*(short *)&param_1->field_0x14 == 3) {
    thunk_FUN_005b6730(this_01,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_f4.previous;
  return 0;
}


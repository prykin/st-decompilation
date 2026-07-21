
void __fastcall FUN_00521cf0(AnonShape_00521CF0_154649D2 *param_1)

{
  undefined1 *_Str1;
  char cVar1;
  byte bVar2;
  byte bVar3;
  AnonShape_00521CF0_4A42AA62 *pAVar4;
  bool bVar5;
  int iVar6;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  undefined4 extraout_EAX_04;
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined4 unaff_ESI;
  int iVar11;
  void *unaff_EDI;
  char *pcVar12;
  char *pcVar13;
  undefined4 uVar14;
  char local_4b4 [64];
  char local_474 [1040];
  byte local_64;
  InternalExceptionFrame local_60;
  uint local_1c;
  uint local_18;
  AnonShape_00521CF0_4A42AA62 *local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  if (param_1->field_0198->field_0008 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = *param_1->field_0198->field_0014;
  }
  if (iVar6 != 0) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_14 = (AnonShape_00521CF0_4A42AA62 *)param_1;
    iVar6 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar6 == 0) {
      if (DAT_00808783 == '\x03') {
        local_10 = 1;
        if (local_14->field_0198->field_0008 < 1) {
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar12 = (char *)*local_14->field_0198->field_0014;
        }
        uVar8 = 0xffffffff;
        _Str1 = &local_14->field_0x6c;
        do {
          pcVar13 = pcVar12;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar12 = pcVar13 + -uVar8;
        pcVar13 = _Str1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_006b77e0(_Str1,_Str1);
        FUN_006b7780(_Str1,_Str1);
        iVar6 = Library::MSVCRT::_strncmp(_Str1,s__WAITING_007c4124,8);
        uVar8 = local_10;
        if ((iVar6 == 0) && (uVar8 = 0, PTR_00802a38 != (STPlaySystemC *)0x0)) {
          PTR_00802a38->field_00F0 = (uint)(PTR_00802a38->field_00F0 == 0);
          LoadResourceString(0x2747 - (PTR_00802a38->field_00F0 != 0),HINSTANCE_00807618);
          uVar14 = extraout_EAX;
          LoadResourceString(0x42c3,HINSTANCE_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,extraout_EAX_00,uVar14);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            if (DAT_0080874d == 0xff) {
              thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
            }
            else {
              thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,(uint)DAT_0080874d);
            }
          }
        }
        iVar6 = Library::MSVCRT::_strncmp(_Str1,s__FIXNETERRORS_007c410c,0xd);
        if (iVar6 == 0) {
          DAT_0080735e = DAT_0080735e == '\0';
          uVar8 = 0;
          LoadResourceString(0x2747 - (byte)DAT_0080735e,HINSTANCE_00807618);
          uVar14 = extraout_EAX_01;
          LoadResourceString(0x42c5,HINSTANCE_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,extraout_EAX_02,uVar14);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            if (DAT_0080874d == 0xff) {
              uVar9 = 8;
            }
            else {
              uVar9 = (uint)DAT_0080874d;
            }
            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar9);
          }
        }
        iVar6 = Library::MSVCRT::_strncmp(_Str1,s__NETGUARANTEE_007c40fc,0xd);
        if (iVar6 == 0) {
          DAT_0080733c = (uint)(DAT_0080733c == 0);
          uVar8 = 0;
          if (g_int_00811764 != (int *)0x0) {
            FUN_006b6500(g_int_00811764,DAT_0080733c);
          }
          LoadResourceString(0x2747 - (DAT_0080733c != 0),HINSTANCE_00807618);
          uVar14 = extraout_EAX_03;
          LoadResourceString(0x42c4,HINSTANCE_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,extraout_EAX_04,uVar14);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            if (DAT_0080874d == 0xff) {
              uVar9 = 8;
            }
            else {
              uVar9 = (uint)DAT_0080874d;
            }
            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar9);
          }
        }
        if (uVar8 != 0) {
          local_c = local_c & 0xffffff00;
          local_5 = '\0';
          iVar6 = Library::MSVCRT::_strncmp(_Str1,&DAT_007c40f4,4);
          if (iVar6 == 0) {
            local_c = CONCAT31(local_c._1_3_,1);
          }
          iVar6 = Library::MSVCRT::_strncmp(_Str1,s__EALL_007c40ec,5);
          if (iVar6 == 0) {
            local_c = CONCAT31(local_c._1_3_,2);
          }
          iVar6 = Library::MSVCRT::_strncmp(_Str1,s__AALL_007c40e4,5);
          pAVar4 = local_14;
          if (iVar6 == 0) {
            local_c = CONCAT31(local_c._1_3_,3);
            bVar10 = 3;
          }
          else {
            bVar10 = (byte)local_c;
          }
          if ((DAT_008067a0 != '\0') && (bVar10 == 0)) {
            if (local_14->field_0198->field_0008 < 1) {
              pcVar12 = (char *)0x0;
            }
            else {
              pcVar12 = (char *)*local_14->field_0198->field_0014;
            }
            bVar5 = thunk_FUN_005717e0(pcVar12);
            if (CONCAT31(extraout_var,bVar5) != 0) {
              if (0 < pAVar4->field_0198->field_0008) {
                CFsgsConnection::SendChatMessage
                          ((CFsgsConnection *)&DAT_00802a90,(char *)*pAVar4->field_0198->field_0014)
                ;
                g_currentExceptionFrame = local_60.previous;
                return;
              }
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
              g_currentExceptionFrame = local_60.previous;
              return;
            }
          }
          pcVar12 = local_4b4;
          for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
            pcVar12[0] = '\0';
            pcVar12[1] = '\0';
            pcVar12[2] = '\0';
            pcVar12[3] = '\0';
            pcVar12 = pcVar12 + 4;
          }
          *pcVar12 = '\0';
          pAVar4 = local_14;
          pcVar12 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar12 = (char *)&DAT_00807ddd;
          }
          uVar8 = 0xffffffff;
          do {
            pcVar13 = pcVar12;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar13;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar12 = pcVar13 + -uVar8;
          pcVar13 = local_4b4;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          local_64 = DAT_0080874d;
          if ((bVar10 == 0) && (bVar2 = pAVar4[1].field_0x8, bVar2 != 0)) {
            local_c = CONCAT31(local_c._1_3_,bVar2);
            local_5 = '\x01';
            bVar10 = bVar2;
          }
          if ((bVar10 == 0) || (3 < bVar10)) {
            if (pAVar4->field_0198->field_0008 < 1) {
              pcVar12 = (char *)0x0;
            }
            else {
              pcVar12 = (char *)*pAVar4->field_0198->field_0014;
            }
            uVar8 = 0xffffffff;
            do {
              pcVar13 = pcVar12;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar13 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            bVar10 = 0;
            pcVar12 = pcVar13 + -uVar8;
            pcVar13 = local_474;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar13 = pcVar13 + 4;
            }
            local_10 = local_10 & 0xffffff00;
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            }
            if (DAT_00808aaf != 0) {
              do {
                iVar6 = (local_10 & 0xff) * 0x9c;
                if ((((&DAT_00808af7)[iVar6] != '\0') &&
                    ((&DAT_00808af0)[(local_10 & 0xff) * 0x27] != DAT_0080877f)) &&
                   ((&DAT_00808af6)[iVar6] != '\0')) {
                  FUN_00715360(g_int_00811764,(&DAT_00808af0)[(local_10 & 0xff) * 0x27],'3',
                               local_4b4,0x451,1,0xffffffff);
                }
                bVar10 = bVar10 + 1;
                local_10 = CONCAT31(local_10._1_3_,bVar10);
              } while (bVar10 < DAT_00808aaf);
            }
          }
          else {
            if (local_5 == '\0') {
              iVar6 = (bVar10 != 1) + 4;
            }
            else {
              iVar6 = 0;
            }
            if (pAVar4->field_0198->field_0008 < 1) {
              iVar11 = 0;
            }
            else {
              iVar11 = *pAVar4->field_0198->field_0014;
            }
            if ((char *)(iVar11 + iVar6) == (char *)0x0) {
              uVar8 = 0xffffffff;
              pcVar12 = &DAT_008016a0;
              do {
                pcVar13 = pcVar12;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar13 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar13;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar12 = pcVar13 + -uVar8;
              pcVar13 = local_474;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar13 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              }
            }
            else {
              uVar8 = 0xffffffff;
              pcVar12 = (char *)(iVar11 + iVar6);
              do {
                pcVar13 = pcVar12;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar13 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar13;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar12 = pcVar13 + -uVar8;
              pcVar13 = local_474;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar13 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar13 = pcVar13 + 1;
              }
              FUN_006b60b0(local_474,local_474);
            }
            bVar10 = 0;
            local_18 = local_18 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              local_1c = local_c & 0xff;
              do {
                if (local_1c == 1) {
                  iVar6 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                  if (iVar6 != DAT_0080877f) {
                    cVar1 = (&DAT_00808af6)[(local_18 & 0xff) * 0x9c];
joined_r0x0052240a:
                    if (cVar1 != '\0') {
                      FUN_00715360(g_int_00811764,iVar6,'3',local_4b4,0x451,1,0xffffffff);
                    }
                  }
                }
                else if (local_1c == 2) {
                  if (DAT_0080874d < 8) {
                    iVar11 = (local_18 & 0xff) * 0x9c;
                    iVar6 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                    if (iVar6 != DAT_0080877f) {
                      bVar2 = (&DAT_00808af4)[iVar11];
                      local_10 = CONCAT31(local_10._1_3_,bVar2);
                      if (DAT_00808a8f == '\0') {
                        if (bVar2 == DAT_0080874d) {
LAB_005223b6:
                          iVar7 = 0;
                        }
                        else {
                          uVar8 = (uint)DAT_0080874d;
                          bVar3 = g_playerRelationMatrix[bVar2][uVar8];
                          if ((bVar3 == 0) && (g_playerRelationMatrix[uVar8][bVar2] == 0)) {
                            iVar7 = -2;
                          }
                          else if ((bVar3 == 1) && (g_playerRelationMatrix[uVar8][bVar2] == 0)) {
                            iVar7 = -1;
                          }
                          else if ((bVar3 == 0) && (g_playerRelationMatrix[uVar8][bVar2] == 1)) {
                            iVar7 = 1;
                          }
                          else {
                            if ((bVar3 != 1) || (g_playerRelationMatrix[uVar8][bVar2] != 1))
                            goto LAB_005223b6;
                            iVar7 = 2;
                          }
                        }
                        bVar5 = iVar7 < 0;
                      }
                      else {
                        bVar5 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                                (&DAT_008087ea)[(uint)bVar2 * 0x51];
                      }
                      if (bVar5) {
                        cVar1 = (&DAT_00808af6)[iVar11];
                        goto joined_r0x0052240a;
                      }
                    }
                  }
                }
                else if ((local_1c == 3) && (DAT_0080874d < 8)) {
                  iVar11 = (local_18 & 0xff) * 0x9c;
                  iVar6 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                  if (iVar6 != DAT_0080877f) {
                    bVar2 = (&DAT_00808af4)[iVar11];
                    local_c = CONCAT31(local_c._1_3_,bVar2);
                    if (DAT_00808a8f == '\0') {
                      if (bVar2 == DAT_0080874d) {
LAB_00522294:
                        iVar7 = 0;
                      }
                      else {
                        uVar8 = (uint)DAT_0080874d;
                        bVar3 = g_playerRelationMatrix[bVar2][uVar8];
                        if ((bVar3 == 0) && (g_playerRelationMatrix[uVar8][bVar2] == 0)) {
                          iVar7 = -2;
                        }
                        else if ((bVar3 == 1) && (g_playerRelationMatrix[uVar8][bVar2] == 0)) {
                          iVar7 = -1;
                        }
                        else if ((bVar3 == 0) && (g_playerRelationMatrix[uVar8][bVar2] == 1)) {
                          iVar7 = 1;
                        }
                        else {
                          if ((bVar3 != 1) || (g_playerRelationMatrix[uVar8][bVar2] != 1))
                          goto LAB_00522294;
                          iVar7 = 2;
                        }
                      }
                      bVar5 = iVar7 < 0;
                    }
                    else {
                      bVar5 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                              (&DAT_008087ea)[(uint)bVar2 * 0x51];
                    }
                    if (!bVar5) {
                      cVar1 = (&DAT_00808af6)[iVar11];
                      goto joined_r0x0052240a;
                    }
                  }
                }
                bVar10 = bVar10 + 1;
                local_18 = CONCAT31(local_18._1_3_,bVar10);
              } while (bVar10 < DAT_00808aaf);
            }
          }
          wsprintfA((LPSTR)&DAT_0080f33a,s__s>__s_007c40dc,local_4b4,local_474);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            if (DAT_0080874d != 0xff) {
              thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,(uint)DAT_0080874d);
              g_currentExceptionFrame = local_60.previous;
              return;
            }
            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
            g_currentExceptionFrame = local_60.previous;
            return;
          }
        }
      }
      else if (DAT_0080874e != '\0') {
        if (0 < local_14->field_0198->field_0008) {
          thunk_FUN_00522810((char *)*local_14->field_0198->field_0014);
          g_currentExceptionFrame = local_60.previous;
          return;
        }
        thunk_FUN_00522810((char *)0x0);
      }
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
  }
  return;
}



void __fastcall FUN_00521cf0(AnonShape_00521CF0_154649D2 *param_1)

{
  undefined1 *_Str1;
  char cVar1;
  byte bVar2;
  AnonShape_00521CF0_4A42AA62 *pAVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  undefined4 unaff_ESI;
  int iVar12;
  void *unaff_EDI;
  char *pcVar13;
  char *pcVar14;
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
    iVar5 = 0;
  }
  else {
    iVar5 = *param_1->field_0198->field_0014;
  }
  if (iVar5 != 0) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_14 = (AnonShape_00521CF0_4A42AA62 *)param_1;
    iVar5 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar5 == 0) {
      if (DAT_00808783 == '\x03') {
        local_10 = 1;
        if (local_14->field_0198->field_0008 < 1) {
          pcVar13 = (char *)0x0;
        }
        else {
          pcVar13 = (char *)*local_14->field_0198->field_0014;
        }
        uVar9 = 0xffffffff;
        _Str1 = &local_14->field_0x6c;
        do {
          pcVar14 = pcVar13;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar13 = pcVar14 + -uVar9;
        pcVar14 = _Str1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar14 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar14 = pcVar14 + 1;
        }
        FUN_006b77e0(_Str1,_Str1);
        FUN_006b7780(_Str1,_Str1);
        iVar5 = Library::MSVCRT::_strncmp(_Str1,s__WAITING_007c4124,8);
        uVar9 = local_10;
        if ((iVar5 == 0) && (uVar9 = 0, PTR_00802a38 != (STPlaySystemC *)0x0)) {
          PTR_00802a38->field_00F0 = (uint)(PTR_00802a38->field_00F0 == 0);
          uVar6 = FUN_006b0140(0x2747 - (PTR_00802a38->field_00F0 != 0),HINSTANCE_00807618);
          uVar7 = FUN_006b0140(0x42c3,HINSTANCE_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,uVar7,uVar6);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            if (DAT_0080874d == 0xff) {
              thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
            }
            else {
              thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,(uint)DAT_0080874d);
            }
          }
        }
        iVar5 = Library::MSVCRT::_strncmp(_Str1,s__FIXNETERRORS_007c410c,0xd);
        if (iVar5 == 0) {
          DAT_0080735e = DAT_0080735e == '\0';
          uVar9 = 0;
          uVar6 = FUN_006b0140(0x2747 - (byte)DAT_0080735e,HINSTANCE_00807618);
          uVar7 = FUN_006b0140(0x42c5,HINSTANCE_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,uVar7,uVar6);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            if (DAT_0080874d == 0xff) {
              uVar10 = 8;
            }
            else {
              uVar10 = (uint)DAT_0080874d;
            }
            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar10);
          }
        }
        iVar5 = Library::MSVCRT::_strncmp(_Str1,s__NETGUARANTEE_007c40fc,0xd);
        if (iVar5 == 0) {
          DAT_0080733c = (uint)(DAT_0080733c == 0);
          uVar9 = 0;
          if (g_int_00811764 != (int *)0x0) {
            FUN_006b6500(g_int_00811764,DAT_0080733c);
          }
          uVar6 = FUN_006b0140(0x2747 - (DAT_0080733c != 0),HINSTANCE_00807618);
          uVar7 = FUN_006b0140(0x42c4,HINSTANCE_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,uVar7,uVar6);
          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
            if (DAT_0080874d == 0xff) {
              uVar10 = 8;
            }
            else {
              uVar10 = (uint)DAT_0080874d;
            }
            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar10);
          }
        }
        if (uVar9 != 0) {
          local_c = local_c & 0xffffff00;
          local_5 = '\0';
          iVar5 = Library::MSVCRT::_strncmp(_Str1,&DAT_007c40f4,4);
          if (iVar5 == 0) {
            local_c = CONCAT31(local_c._1_3_,1);
          }
          iVar5 = Library::MSVCRT::_strncmp(_Str1,s__EALL_007c40ec,5);
          if (iVar5 == 0) {
            local_c = CONCAT31(local_c._1_3_,2);
          }
          iVar5 = Library::MSVCRT::_strncmp(_Str1,s__AALL_007c40e4,5);
          pAVar3 = local_14;
          if (iVar5 == 0) {
            local_c = CONCAT31(local_c._1_3_,3);
            bVar11 = 3;
          }
          else {
            bVar11 = (byte)local_c;
          }
          if ((DAT_008067a0 != '\0') && (bVar11 == 0)) {
            if (local_14->field_0198->field_0008 < 1) {
              pcVar13 = (char *)0x0;
            }
            else {
              pcVar13 = (char *)*local_14->field_0198->field_0014;
            }
            bVar4 = thunk_FUN_005717e0(pcVar13);
            if (CONCAT31(extraout_var,bVar4) != 0) {
              if (0 < pAVar3->field_0198->field_0008) {
                CFsgsConnection::SendChatMessage
                          ((CFsgsConnection *)&DAT_00802a90,(char *)*pAVar3->field_0198->field_0014)
                ;
                g_currentExceptionFrame = local_60.previous;
                return;
              }
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
              g_currentExceptionFrame = local_60.previous;
              return;
            }
          }
          pcVar13 = local_4b4;
          for (iVar5 = 0x114; iVar5 != 0; iVar5 = iVar5 + -1) {
            pcVar13[0] = '\0';
            pcVar13[1] = '\0';
            pcVar13[2] = '\0';
            pcVar13[3] = '\0';
            pcVar13 = pcVar13 + 4;
          }
          *pcVar13 = '\0';
          pAVar3 = local_14;
          pcVar13 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar13 = (char *)&DAT_00807ddd;
          }
          uVar9 = 0xffffffff;
          do {
            pcVar14 = pcVar13;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar14;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar13 = pcVar14 + -uVar9;
          pcVar14 = local_4b4;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar14 = pcVar14 + 1;
          }
          local_64 = DAT_0080874d;
          if ((bVar11 == 0) && (bVar2 = pAVar3[1].field_0x8, bVar2 != 0)) {
            local_c = CONCAT31(local_c._1_3_,bVar2);
            local_5 = '\x01';
            bVar11 = bVar2;
          }
          if ((bVar11 == 0) || (3 < bVar11)) {
            if (pAVar3->field_0198->field_0008 < 1) {
              pcVar13 = (char *)0x0;
            }
            else {
              pcVar13 = (char *)*pAVar3->field_0198->field_0014;
            }
            uVar9 = 0xffffffff;
            do {
              pcVar14 = pcVar13;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar14 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            bVar11 = 0;
            pcVar13 = pcVar14 + -uVar9;
            pcVar14 = local_474;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar14 = pcVar14 + 4;
            }
            local_10 = local_10 & 0xffffff00;
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar14 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar14 = pcVar14 + 1;
            }
            if (DAT_00808aaf != 0) {
              do {
                iVar5 = (local_10 & 0xff) * 0x9c;
                if ((((&DAT_00808af7)[iVar5] != '\0') &&
                    ((&DAT_00808af0)[(local_10 & 0xff) * 0x27] != DAT_0080877f)) &&
                   ((&DAT_00808af6)[iVar5] != '\0')) {
                  FUN_00715360(g_int_00811764,(&DAT_00808af0)[(local_10 & 0xff) * 0x27],'3',
                               local_4b4,0x451,1,0xffffffff);
                }
                bVar11 = bVar11 + 1;
                local_10 = CONCAT31(local_10._1_3_,bVar11);
              } while (bVar11 < DAT_00808aaf);
            }
          }
          else {
            if (local_5 == '\0') {
              iVar5 = (bVar11 != 1) + 4;
            }
            else {
              iVar5 = 0;
            }
            if (pAVar3->field_0198->field_0008 < 1) {
              iVar12 = 0;
            }
            else {
              iVar12 = *pAVar3->field_0198->field_0014;
            }
            if ((char *)(iVar12 + iVar5) == (char *)0x0) {
              uVar9 = 0xffffffff;
              pcVar13 = &DAT_008016a0;
              do {
                pcVar14 = pcVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              uVar9 = ~uVar9;
              pcVar13 = pcVar14 + -uVar9;
              pcVar14 = local_474;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar14 = pcVar14 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar14 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar14 = pcVar14 + 1;
              }
            }
            else {
              uVar9 = 0xffffffff;
              pcVar13 = (char *)(iVar12 + iVar5);
              do {
                pcVar14 = pcVar13;
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              uVar9 = ~uVar9;
              pcVar13 = pcVar14 + -uVar9;
              pcVar14 = local_474;
              for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar14 = pcVar14 + 4;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar14 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar14 = pcVar14 + 1;
              }
              FUN_006b60b0(local_474,local_474);
            }
            bVar11 = 0;
            local_18 = local_18 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              local_1c = local_c & 0xff;
              do {
                if (local_1c == 1) {
                  iVar5 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                  if (iVar5 != DAT_0080877f) {
                    cVar1 = (&DAT_00808af6)[(local_18 & 0xff) * 0x9c];
joined_r0x0052240a:
                    if (cVar1 != '\0') {
                      FUN_00715360(g_int_00811764,iVar5,'3',local_4b4,0x451,1,0xffffffff);
                    }
                  }
                }
                else if (local_1c == 2) {
                  if (DAT_0080874d < 8) {
                    iVar12 = (local_18 & 0xff) * 0x9c;
                    iVar5 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                    if (iVar5 != DAT_0080877f) {
                      bVar2 = (&DAT_00808af4)[iVar12];
                      local_10 = CONCAT31(local_10._1_3_,bVar2);
                      if (DAT_00808a8f == '\0') {
                        if (bVar2 == DAT_0080874d) {
LAB_005223b6:
                          iVar8 = 0;
                        }
                        else {
                          uVar10 = (uint)DAT_0080874d;
                          uVar9 = (uint)bVar2;
                          cVar1 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10);
                          if ((cVar1 == '\0') &&
                             (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                            iVar8 = -2;
                          }
                          else if ((cVar1 == '\x01') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                            iVar8 = -1;
                          }
                          else if ((cVar1 == '\0') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\x01')) {
                            iVar8 = 1;
                          }
                          else {
                            if ((cVar1 != '\x01') ||
                               (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) != '\x01'))
                            goto LAB_005223b6;
                            iVar8 = 2;
                          }
                        }
                        bVar4 = iVar8 < 0;
                      }
                      else {
                        bVar4 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                                (&DAT_008087ea)[(uint)bVar2 * 0x51];
                      }
                      if (bVar4) {
                        cVar1 = (&DAT_00808af6)[iVar12];
                        goto joined_r0x0052240a;
                      }
                    }
                  }
                }
                else if ((local_1c == 3) && (DAT_0080874d < 8)) {
                  iVar12 = (local_18 & 0xff) * 0x9c;
                  iVar5 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                  if (iVar5 != DAT_0080877f) {
                    bVar2 = (&DAT_00808af4)[iVar12];
                    local_c = CONCAT31(local_c._1_3_,bVar2);
                    if (DAT_00808a8f == '\0') {
                      if (bVar2 == DAT_0080874d) {
LAB_00522294:
                        iVar8 = 0;
                      }
                      else {
                        uVar10 = (uint)DAT_0080874d;
                        uVar9 = (uint)bVar2;
                        cVar1 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10);
                        if ((cVar1 == '\0') &&
                           (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                          iVar8 = -2;
                        }
                        else if ((cVar1 == '\x01') &&
                                (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\0')) {
                          iVar8 = -1;
                        }
                        else if ((cVar1 == '\0') &&
                                (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) == '\x01')) {
                          iVar8 = 1;
                        }
                        else {
                          if ((cVar1 != '\x01') ||
                             (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9) != '\x01'))
                          goto LAB_00522294;
                          iVar8 = 2;
                        }
                      }
                      bVar4 = iVar8 < 0;
                    }
                    else {
                      bVar4 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                              (&DAT_008087ea)[(uint)bVar2 * 0x51];
                    }
                    if (!bVar4) {
                      cVar1 = (&DAT_00808af6)[iVar12];
                      goto joined_r0x0052240a;
                    }
                  }
                }
                bVar11 = bVar11 + 1;
                local_18 = CONCAT31(local_18._1_3_,bVar11);
              } while (bVar11 < DAT_00808aaf);
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


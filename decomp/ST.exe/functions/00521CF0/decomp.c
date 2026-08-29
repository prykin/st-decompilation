#include "../../pseudocode_runtime.h"


void __fastcall FUN_00521cf0(AnonShape_00521CF0_154649D2 *param_1)

{
  byte *_Str1;
  char cVar1;
  byte bVar2;
  byte bVar3;
  AnonShape_00521CF0_4A42AA62 *pAVar4;
  bool bVar5;
  int local_EAX_69;
  int iVar6;
  char *pcVar6_mg2;
  char *pcVar7_mg2;
  int local_EAX_380;
  char *pcVar6_mg3;
  char *pcVar7_mg3;
  int local_EAX_521;
  char *pcVar6_mg4;
  char *pcVar7_mg4;
  int local_EAX_705;
  int local_EAX_729;
  int local_EAX_753;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
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
    iVar10 = 0;
  }
  else {
    iVar10 = *param_1->field_0198->field_0014;
  }
  if (iVar10 != 0) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_14 = (AnonShape_00521CF0_4A42AA62 *)param_1;
    local_EAX_69 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
    if (local_EAX_69 == 0) {
      if (DAT_00808783 == '\x03') {
        local_10 = 1;
        if (local_14->field_0198->field_0008 < 1) {
          pcVar13 = nullptr;
        }
        else {
          pcVar13 = (char *)*local_14->field_0198->field_0014;
        }
        uVar8 = 0xffffffff;
        _Str1 = &local_14->field_0x6c;
        do {
          pcVar14 = pcVar13;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar13 = pcVar14 + -uVar8;
        pcVar14 = _Str1;
        memmove(pcVar14, pcVar13, uVar8); /* compiler REP MOVS byte copy */
        FUN_006b77e0(_Str1,_Str1);
        FUN_006b7780(_Str1,_Str1);
        iVar6 = Library::MSVCRT::_strncmp(_Str1,"/WAITING",8);
        uVar8 = local_10;
        if ((iVar6 == 0) && (uVar8 = 0, g_playSystem_00802A38 != nullptr)) {
          g_playSystem_00802A38->field_00F0 = (uint)(g_playSystem_00802A38->field_00F0 == 0);
          pcVar6_mg2 = LoadResourceString(0x2747 - (g_playSystem_00802A38->field_00F0 != 0),
                                          g_hINSTANCE_00807618);
          pcVar7_mg2 = LoadResourceString(0x42c3,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00521E1C]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar7_mg2,pcVar6_mg2);
          if (g_popUp_008016D8 != nullptr) {
            if (DAT_0080874d == 0xff) {
              /* ST_CALLSITE[00521E5A]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
              PopUpTy::sub_0052D320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
            }
            else {
              /* ST_CALLSITE[00521E46]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
              PopUpTy::sub_0052D320(g_popUp_008016D8,(char *)&DAT_0080f33a,(uint)DAT_0080874d);
            }
          }
        }
        local_EAX_380 = Library::MSVCRT::_strncmp(_Str1,"/FIXNETERRORS",0xd);
        if (local_EAX_380 == 0) {
          DAT_0080735e = DAT_0080735e == '\0';
          uVar8 = 0;
          pcVar6_mg3 = LoadResourceString(0x2747 - (byte)DAT_0080735e,g_hINSTANCE_00807618);
          pcVar7_mg3 = LoadResourceString(0x42c5,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00521EBB]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar7_mg3,pcVar6_mg3);
          if (g_popUp_008016D8 != nullptr) {
            if (DAT_0080874d == 0xff) {
              uVar9 = 8;
            }
            else {
              uVar9 = (uint)DAT_0080874d;
            }
            /* ST_CALLSITE[00521EEC]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            PopUpTy::sub_0052D320(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar9);
          }
        }
        local_EAX_521 = Library::MSVCRT::_strncmp(_Str1,"/NETGUARANTEE",0xd);
        if (local_EAX_521 == 0) {
          DAT_0080733c = (uint)(DAT_0080733c == 0);
          uVar8 = 0;
          if (g_int_00811764 != nullptr) {
            FUN_006b6500(g_int_00811764,DAT_0080733c);
          }
          pcVar6_mg4 = LoadResourceString(0x2747 - (DAT_0080733c != 0),g_hINSTANCE_00807618);
          pcVar7_mg4 = LoadResourceString(0x42c4,g_hINSTANCE_00807618);
          /* ST_CALLSITE[00521F63]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar7_mg4,pcVar6_mg4);
          if (g_popUp_008016D8 != nullptr) {
            if (DAT_0080874d == 0xff) {
              uVar9 = 8;
            }
            else {
              uVar9 = (uint)DAT_0080874d;
            }
            /* ST_CALLSITE[00521F94]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            PopUpTy::sub_0052D320(g_popUp_008016D8,(char *)&DAT_0080f33a,uVar9);
          }
        }
        if (uVar8 != 0) {
          local_c = local_c & 0xffffff00;
          local_5 = '\0';
          local_EAX_705 = Library::MSVCRT::_strncmp(_Str1,&DAT_007c40f4,4);
          if (local_EAX_705 == 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
          }
          local_EAX_729 = Library::MSVCRT::_strncmp(_Str1,"/EALL",5);
          if (local_EAX_729 == 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
          }
          local_EAX_753 = Library::MSVCRT::_strncmp(_Str1,"/AALL",5);
          pAVar4 = local_14;
          if (local_EAX_753 == 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(3));
            bVar11 = 3;
          }
          else {
            bVar11 = (byte)local_c;
          }
          if ((DAT_008067a0 != '\0') && (bVar11 == 0)) {
            if (local_14->field_0198->field_0008 < 1) {
              pcVar13 = nullptr;
            }
            else {
              pcVar13 = (char *)*local_14->field_0198->field_0014;
            }
            bVar5 = thunk_FUN_005717e0(pcVar13);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var,bVar5) != 0) {
              if (0 < pAVar4->field_0198->field_0008) {
                /* ST_CALLSITE[00522044]: CALL dword ptr [0x0085c064] */
                CFsgsConnection::SendChatMessage
                          ((CFsgsConnection *)&DAT_00802a90,(char *)*pAVar4->field_0198->field_0014);
                g_currentExceptionFrame = local_60.previous;
                return;
              }
              /* ST_CALLSITE[00522062]: CALL dword ptr [0x0085c064] */
              CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,nullptr);
              g_currentExceptionFrame = local_60.previous;
              return;
            }
          }
          pcVar13 = local_4b4;
          for (iVar10 = 0x114; iVar10 != 0; iVar10 = iVar10 + -1) {
            pcVar13[0] = '\0';
            pcVar13[1] = '\0';
            pcVar13[2] = '\0';
            pcVar13[3] = '\0';
            pcVar13 = pcVar13 + 4;
          }
          *pcVar13 = '\0';
          pAVar4 = local_14;
          pcVar13 = &CHAR_00h_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar13 = &CHAR_00h_00807ddd;
          }
          uVar8 = 0xffffffff;
          do {
            pcVar14 = pcVar13;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar14;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar13 = pcVar14 + -uVar8;
          pcVar14 = local_4b4;
          memmove(pcVar14, pcVar13, uVar8); /* compiler REP MOVS byte copy */
          uVar9 = 0;
          local_64 = DAT_0080874d;
          if ((bVar11 == 0) && (bVar2 = pAVar4[1].field_0x8, bVar2 != 0)) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar2));
            local_5 = '\x01';
            bVar11 = bVar2;
          }
          if ((bVar11 == 0) || (3 < bVar11)) {
            if (pAVar4->field_0198->field_0008 < 1) {
              pcVar13 = nullptr;
            }
            else {
              pcVar13 = (char *)*pAVar4->field_0198->field_0014;
            }
            uVar8 = 0xffffffff;
            do {
              pcVar14 = pcVar13;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            bVar11 = 0;
            pcVar13 = pcVar14 + -uVar8;
            pcVar14 = local_474;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar14 = pcVar14 + 4;
            }
            local_10 = local_10 & 0xffffff00;
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar14 = pcVar14 + 1;
            }
            if (DAT_00808aaf != 0) {
              do {
                iVar10 = (local_10 & 0xff) * 0x9c;
                if ((((&DAT_00808af7)[iVar10] != '\0') &&
                    ((&DAT_00808af0)[(local_10 & 0xff) * 0x27] != DAT_0080877f)) &&
                   ((&DAT_00808af6)[iVar10] != '\0')) {
                  FUN_00715360(g_int_00811764,(&DAT_00808af0)[(local_10 & 0xff) * 0x27],'3',
                               local_4b4,0x451,1,0xffffffff);
                }
                bVar11 = bVar11 + 1;
                local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar11));
              } while (bVar11 < DAT_00808aaf);
            }
          }
          else {
            if (local_5 == '\0') {
              iVar10 = (bVar11 != 1) + 4;
            }
            else {
              iVar10 = 0;
            }
            if (pAVar4->field_0198->field_0008 < 1) {
              iVar12 = 0;
            }
            else {
              iVar12 = *pAVar4->field_0198->field_0014;
            }
            if ((char *)(iVar12 + iVar10) == nullptr) {
              uVar8 = 0xffffffff;
              pcVar13 = &CHAR_00h_008016a0;
              do {
                pcVar14 = pcVar13;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar13 = pcVar14 + -uVar8;
              pcVar14 = local_474;
              memmove(pcVar14, pcVar13, uVar8); /* compiler REP MOVS byte copy */
              uVar9 = 0;
            }
            else {
              uVar8 = 0xffffffff;
              pcVar13 = (char *)(iVar12 + iVar10);
              do {
                pcVar14 = pcVar13;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar14 = pcVar13 + 1;
                cVar1 = *pcVar13;
                pcVar13 = pcVar14;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pcVar13 = pcVar14 + -uVar8;
              pcVar14 = local_474;
              memmove(pcVar14, pcVar13, uVar8); /* compiler REP MOVS byte copy */
              FUN_006b60b0(local_474,local_474);
            }
            bVar11 = 0;
            local_18 = local_18 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              local_1c = local_c & 0xff;
              do {
                if (local_1c == 1) {
                  iVar10 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                  if (iVar10 != DAT_0080877f) {
                    cVar1 = (&DAT_00808af6)[(local_18 & 0xff) * 0x9c];
joined_r0x0052240a:
                    if (cVar1 != '\0') {
                      FUN_00715360(g_int_00811764,iVar10,'3',local_4b4,0x451,1,0xffffffff);
                    }
                  }
                }
                else if (local_1c == 2) {
                  if (DAT_0080874d < 8) {
                    iVar12 = (local_18 & 0xff) * 0x9c;
                    iVar10 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                    if (iVar10 != DAT_0080877f) {
                      bVar2 = (&DAT_00808af4)[iVar12];
                      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar2));
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
                        bVar5 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                                g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                      }
                      if (bVar5) {
                        cVar1 = (&DAT_00808af6)[iVar12];
                        goto joined_r0x0052240a;
                      }
                    }
                  }
                }
                else if ((local_1c == 3) && (DAT_0080874d < 8)) {
                  iVar12 = (local_18 & 0xff) * 0x9c;
                  iVar10 = (&DAT_00808af0)[(local_18 & 0xff) * 0x27];
                  if (iVar10 != DAT_0080877f) {
                    bVar2 = (&DAT_00808af4)[iVar12];
                    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar2));
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
                      bVar5 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                              g_bulkInitializedRecords_008087C7[bVar2].field_0023;
                    }
                    if (!bVar5) {
                      cVar1 = (&DAT_00808af6)[iVar12];
                      goto joined_r0x0052240a;
                    }
                  }
                }
                bVar11 = bVar11 + 1;
                local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar11));
              } while (bVar11 < DAT_00808aaf);
            }
          }
          /* ST_CALLSITE[0052250A]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,s__s>__s_007c40dc,local_4b4,local_474);
          if (g_popUp_008016D8 != nullptr) {
            if (DAT_0080874d != 0xff) {
              /* ST_CALLSITE[00522536]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
              PopUpTy::sub_0052D320(g_popUp_008016D8,(char *)&DAT_0080f33a,(uint)DAT_0080874d);
              g_currentExceptionFrame = local_60.previous;
              return;
            }
            /* ST_CALLSITE[00522556]: CALL 0x004014d8; direct=004014D8 PopUpTy::sub_0052D320 */
            PopUpTy::sub_0052D320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
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
        thunk_FUN_00522810(nullptr);
      }
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
  }
  return;
}


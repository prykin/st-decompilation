
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::GetMessage */

undefined4 __thiscall SettMapSTy::GetMessage(SettMapSTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  byte bVar1;
  MMsgTy *pMVar2;
  ccFntTy *pcVar3;
  int *piVar4;
  code *pcVar5;
  uint3 uVar6;
  StartSystemTy *pSVar7;
  SettMapTy *this_00;
  undefined1 uVar8;
  DWORD DVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  char cVar22;
  undefined4 unaff_ESI;
  uint uVar23;
  void *unaff_EDI;
  char *pcVar24;
  char *pcVar25;
  undefined4 *puVar26;
  bool bVar27;
  uint *puVar28;
  char local_164 [64];
  undefined4 local_124;
  undefined4 local_120;
  DWORD local_11c;
  InternalExceptionFrame local_c8;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined1 uStack_79;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_64 [8];
  SettMapTy *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  char *local_14;
  byte local_d;
  uint local_c;
  char *local_8;
  
  local_44 = (SettMapTy *)this;
  DVar9 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar9;
  local_c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c8;
  iVar10 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_settsobj_cpp_007cd544,0x27d,0,iVar10,
                                &DAT_007a4ccc,s_SettMapSTy__GetMessage_007cd5a8);
    if (iVar11 != 0) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return uVar18;
    }
    RaiseInternalException(iVar10,0,s_E____titans_Start_settsobj_cpp_007cd544,0x27d);
    return 0xffff;
  }
  SettMapTy::GetMessage(local_44,param_1);
  uVar23 = *(uint *)&param_1->field_0x10;
  if (uVar23 < 0x6505) {
    if (uVar23 == 0x6504) {
      uVar23 = *(uint *)&param_1->field_0x14;
      if ((uVar23 != 0xffffffff) && (iVar10 = this_00->field_1F84, iVar10 != 0)) {
        iVar11 = this_00->field_1E2F;
        if (uVar23 < *(uint *)(iVar11 + 0xc)) {
          iVar11 = *(int *)(iVar11 + 8) * uVar23 + *(int *)(iVar11 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        cVar22 = *(char *)(iVar11 + 0x104);
        if (*(uint *)&param_1->field_0x18 < *(uint *)(iVar10 + 0xc)) {
          iVar10 = *(int *)(iVar10 + 8) * *(uint *)&param_1->field_0x18 + *(int *)(iVar10 + 0x1c);
        }
        else {
          iVar10 = 0;
        }
        if (iVar10 != 0) {
          *(char *)(iVar10 + 3) = cVar22;
        }
        iVar10 = this_00->field_1F84;
        uVar23 = *(int *)&param_1->field_0x18 + 1;
        bVar27 = uVar23 < *(uint *)(iVar10 + 0xc);
        if ((int)uVar23 < (int)*(uint *)(iVar10 + 0xc)) {
          do {
            if (bVar27) {
              pcVar12 = (char *)(*(int *)(iVar10 + 8) * uVar23 + *(int *)(iVar10 + 0x1c));
            }
            else {
              pcVar12 = (char *)0x0;
            }
            if ((pcVar12 == (char *)0x0) || (*pcVar12 != '\0')) break;
            pcVar12[3] = cVar22;
            iVar10 = this_00->field_1F84;
            uVar23 = uVar23 + 1;
            bVar27 = uVar23 < *(uint *)(iVar10 + 0xc);
          } while ((int)uVar23 < (int)*(uint *)(iVar10 + 0xc));
        }
        (**(code **)(this_00->field_0000 + 0x2c))();
      }
    }
    else if (uVar23 == 0x6501) {
      uVar23 = *(uint *)&param_1->field_0x14;
      if ((uVar23 != 0xffffffff) && (iVar10 = this_00->field_1F84, iVar10 != 0)) {
        iVar11 = this_00->field_1E2F;
        if (uVar23 < *(uint *)(iVar11 + 0xc)) {
          iVar11 = *(int *)(iVar11 + 8) * uVar23 + *(int *)(iVar11 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        cVar22 = *(char *)(iVar11 + 0x104);
        if (*(uint *)&param_1->field_0x18 < *(uint *)(iVar10 + 0xc)) {
          iVar10 = *(int *)(iVar10 + 8) * *(uint *)&param_1->field_0x18 + *(int *)(iVar10 + 0x1c);
        }
        else {
          iVar10 = 0;
        }
        if (iVar10 != 0) {
          *(char *)(iVar10 + 0x4a) = cVar22;
        }
        iVar10 = this_00->field_1F84;
        uVar23 = *(int *)&param_1->field_0x18 + 1;
        bVar27 = uVar23 < *(uint *)(iVar10 + 0xc);
        if ((int)uVar23 < (int)*(uint *)(iVar10 + 0xc)) {
          do {
            if (bVar27) {
              pcVar12 = (char *)(*(int *)(iVar10 + 8) * uVar23 + *(int *)(iVar10 + 0x1c));
            }
            else {
              pcVar12 = (char *)0x0;
            }
            if ((pcVar12 == (char *)0x0) || (*pcVar12 != '\0')) break;
            pcVar12[0x4a] = cVar22;
            iVar10 = this_00->field_1F84;
            uVar23 = uVar23 + 1;
            bVar27 = uVar23 < *(uint *)(iVar10 + 0xc);
          } while ((int)uVar23 < (int)*(uint *)(iVar10 + 0xc));
        }
        (**(code **)(this_00->field_0000 + 0x2c))();
      }
    }
    else if (((uVar23 == 0x6502) && (uVar23 = *(uint *)&param_1->field_0x14, uVar23 != 0xffffffff))
            && (iVar10 = this_00->field_1F84, iVar10 != 0)) {
      iVar11 = this_00->field_1E2F;
      if (uVar23 < *(uint *)(iVar11 + 0xc)) {
        iVar11 = *(int *)(iVar11 + 8) * uVar23 + *(int *)(iVar11 + 0x1c);
      }
      else {
        iVar11 = 0;
      }
      local_d = *(byte *)(iVar11 + 0x104);
      if (*(uint *)&param_1->field_0x18 < *(uint *)(iVar10 + 0xc)) {
        iVar10 = *(int *)(iVar10 + 8) * *(uint *)&param_1->field_0x18 + *(int *)(iVar10 + 0x1c);
      }
      else {
        iVar10 = 0;
      }
      if (iVar10 != 0) {
        if (*(byte *)(iVar10 + 2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,*(byte *)(iVar10 + 2));
        }
        *(byte *)(iVar10 + 2) = local_d;
        if (*(char *)(iVar10 + 4) == '\x02') {
          DAT_0080874d = local_d;
        }
        iVar10 = this_00->field_1F84;
        uVar23 = *(int *)&param_1->field_0x18 + 1;
        bVar27 = uVar23 < *(uint *)(iVar10 + 0xc);
        if ((int)uVar23 < (int)*(uint *)(iVar10 + 0xc)) {
          do {
            if (bVar27) {
              pcVar12 = (char *)(*(int *)(iVar10 + 8) * uVar23 + *(int *)(iVar10 + 0x1c));
            }
            else {
              pcVar12 = (char *)0x0;
            }
            if ((pcVar12 == (char *)0x0) || (*pcVar12 != '\0')) break;
            pcVar12[2] = local_d;
            iVar10 = this_00->field_1F84;
            uVar23 = uVar23 + 1;
            bVar27 = uVar23 < *(uint *)(iVar10 + 0xc);
          } while ((int)uVar23 < (int)*(uint *)(iVar10 + 0xc));
        }
        (**(code **)(this_00->field_0000 + 0x2c))();
        goto LAB_005d5ff8;
      }
    }
  }
  else if (uVar23 == 0x6505) {
    uVar23 = *(uint *)&param_1->field_0x14;
    if ((uVar23 != 0xffffffff) && (iVar10 = this_00->field_1F84, iVar10 != 0)) {
      iVar11 = this_00->field_1E2F;
      if (uVar23 < *(uint *)(iVar11 + 0xc)) {
        iVar11 = *(int *)(iVar11 + 8) * uVar23 + *(int *)(iVar11 + 0x1c);
      }
      else {
        iVar11 = 0;
      }
      uVar23 = *(uint *)(iVar10 + 0xc);
      if (*(uint *)&param_1->field_0x18 < uVar23) {
        iVar14 = *(int *)(iVar10 + 8) * *(uint *)&param_1->field_0x18 + *(int *)(iVar10 + 0x1c);
      }
      else {
        iVar14 = 0;
      }
      if (iVar14 != 0) {
        if ((*(int *)(iVar11 + 0x104) == 2) && (uVar20 = 0, 0 < (int)uVar23)) {
          bVar27 = uVar23 != 0;
          do {
            if (bVar27) {
              iVar14 = *(int *)(iVar10 + 8) * uVar20 + *(int *)(iVar10 + 0x1c);
            }
            else {
              iVar14 = 0;
            }
            if ((iVar14 != 0) && (*(char *)(iVar14 + 4) == '\x02')) {
              cVar22 = this_00->field_1E26;
              if ((cVar22 == '\x06') || ((cVar22 == '\x01' || (cVar22 == '\x02')))) {
                *(undefined1 *)(iVar14 + 4) = 4;
                *(undefined1 *)(iVar14 + 5) = 0;
              }
              else {
                *(undefined1 *)(iVar14 + 4) = 1;
              }
              break;
            }
            uVar20 = uVar20 + 1;
            bVar27 = uVar20 < uVar23;
          } while ((int)uVar20 < (int)uVar23);
        }
        iVar10 = this_00->field_1F84;
        if (*(uint *)&param_1->field_0x18 < *(uint *)(iVar10 + 0xc)) {
          iVar10 = *(int *)(iVar10 + 8) * *(uint *)&param_1->field_0x18 + *(int *)(iVar10 + 0x1c);
        }
        else {
          iVar10 = 0;
        }
        cVar22 = *(char *)(iVar11 + 0x104);
        *(char *)(iVar10 + 4) = cVar22;
        *(undefined1 *)(iVar10 + 5) = *(undefined1 *)(iVar11 + 0x108);
        if (cVar22 == '\0') {
          if (*(byte *)(iVar10 + 2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,*(byte *)(iVar10 + 2));
          }
          *(undefined1 *)(iVar10 + 2) = 0xff;
        }
        DAT_0080874d = 0xff;
        iVar10 = this_00->field_1F84;
        uVar20 = 0;
        uVar23 = *(uint *)(iVar10 + 0xc);
        if (0 < (int)uVar23) {
          bVar27 = uVar23 != 0;
          do {
            if (bVar27) {
              iVar11 = *(int *)(iVar10 + 8) * uVar20 + *(int *)(iVar10 + 0x1c);
            }
            else {
              iVar11 = 0;
            }
            if (((iVar11 != 0) && (*(char *)(iVar11 + 4) == '\x02')) &&
               (*(int *)(iVar11 + 6) == DAT_0080877f)) {
              DAT_0080874d = *(byte *)(iVar11 + 2);
              break;
            }
            uVar20 = uVar20 + 1;
            bVar27 = uVar20 < uVar23;
          } while ((int)uVar20 < (int)uVar23);
        }
        (**(code **)(this_00->field_0000 + 0x2c))();
LAB_005d5ff8:
        SettMapTy::PaintSC(this_00);
      }
    }
  }
  else if (uVar23 == 0x694a) {
    local_30 = 0x1010101;
    local_2c = (undefined1 *)0x1010101;
    if (this_00->field_1F84 != 0) {
      DAT_00808aa9 = 1;
      DAT_008087c4._2_1_ = '\0';
      DAT_0080874f = 0;
      puVar26 = (undefined4 *)((int)&DAT_008087c4 + 3);
      for (iVar10 = 0xa2; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar26 = 0;
        puVar26 = puVar26 + 1;
      }
      puVar13 = &DAT_008087e9;
      do {
        puVar13[-1] = 0;
        *puVar13 = 0xff;
        puVar13 = puVar13 + 0x51;
      } while ((int)puVar13 < 0x808a71);
      iVar10 = this_00->field_1F84;
      uVar20 = 0;
      uVar23 = *(uint *)(iVar10 + 0xc);
      if (0 < (int)uVar23) {
        bVar27 = uVar23 != 0;
        do {
          if (bVar27) {
            pcVar12 = (char *)(*(int *)(iVar10 + 8) * uVar20 + *(int *)(iVar10 + 0x1c));
          }
          else {
            pcVar12 = (char *)0x0;
          }
          if (((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) && (pcVar12[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar12[2]) = 0;
          }
          uVar20 = uVar20 + 1;
          bVar27 = uVar20 < uVar23;
        } while ((int)uVar20 < (int)uVar23);
      }
      local_c = 0;
      if (0 < (int)uVar23) {
        bVar27 = uVar23 != 0;
        do {
          if (bVar27) {
            pcVar12 = (char *)(*(int *)(iVar10 + 8) * local_c + *(int *)(iVar10 + 0x1c));
          }
          else {
            pcVar12 = (char *)0x0;
          }
          if (((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) &&
             ((pcVar12[4] != '\0' && ((pcVar12[4] != '\x01' || (this_00->field_1E26 == '\x02'))))))
          {
            iVar10 = *(int *)(pcVar12 + 0x50);
            if ((uint)(byte)pcVar12[5] < *(uint *)(iVar10 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar10 + 8) * (uint)(byte)pcVar12[5] +
                                *(int *)(iVar10 + 0x1c));
            }
            else {
              local_8 = (char *)0x0;
            }
            DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
            if (pcVar12[2] == -1) {
              iVar10 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar10) != '\0') {
                  pcVar12[2] = (char)iVar10;
                  *(undefined1 *)((int)&local_30 + iVar10) = 0;
                  break;
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < 8);
            }
            (&DAT_008087e9)[(uint)(byte)pcVar12[2] * 0x51] = pcVar12[2];
            (&DAT_008087e8)[(uint)(byte)pcVar12[2] * 0x51] = pcVar12[3];
            uVar23 = 0xffffffff;
            pcVar25 = &DAT_008016a0;
            do {
              pcVar24 = pcVar25;
              if (uVar23 == 0) break;
              uVar23 = uVar23 - 1;
              pcVar24 = pcVar25 + 1;
              cVar22 = *pcVar25;
              pcVar25 = pcVar24;
            } while (cVar22 != '\0');
            uVar23 = ~uVar23;
            local_14 = &DAT_008087c8 + (uint)(byte)pcVar12[2] * 0x51;
            pcVar25 = pcVar24 + -uVar23;
            pcVar24 = &DAT_008087c8 + (uint)(byte)pcVar12[2] * 0x51;
            for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar25;
              pcVar25 = pcVar25 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *pcVar24 = *pcVar25;
              pcVar25 = pcVar25 + 1;
              pcVar24 = pcVar24 + 1;
            }
            if (pcVar12[4] == '\x02') {
              if (*pcVar12 != '\0') {
                *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar12[2] * 0x51 + 3) = 0;
                DAT_0080874d = pcVar12[2];
                DAT_0080874e = pcVar12[3];
              }
            }
            else if (pcVar12[4] == '\x04') {
              *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar12[2] * 0x51 + 3) = 1;
              if (local_8 == (char *)0x0) {
                uVar23 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar12[2] * 0x51;
                pcVar25 = &DAT_008016a0;
                do {
                  pcVar24 = pcVar25;
                  if (uVar23 == 0) break;
                  uVar23 = uVar23 - 1;
                  pcVar24 = pcVar25 + 1;
                  cVar22 = *pcVar25;
                  pcVar25 = pcVar24;
                } while (cVar22 != '\0');
                uVar23 = ~uVar23;
                pcVar25 = pcVar24 + -uVar23;
                pcVar24 = local_8;
                for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *(undefined4 *)pcVar24 = *(undefined4 *)pcVar25;
                  pcVar25 = pcVar25 + 4;
                  pcVar24 = pcVar24 + 4;
                }
                for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                  *pcVar24 = *pcVar25;
                  pcVar25 = pcVar25 + 1;
                  pcVar24 = pcVar24 + 1;
                }
              }
              else {
                pcVar25 = local_8 + 0x4c;
                uVar23 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar12[2] * 0x51;
                do {
                  pcVar24 = pcVar25;
                  if (uVar23 == 0) break;
                  uVar23 = uVar23 - 1;
                  pcVar24 = pcVar25 + 1;
                  cVar22 = *pcVar25;
                  pcVar25 = pcVar24;
                } while (cVar22 != '\0');
                uVar23 = ~uVar23;
                pcVar25 = pcVar24 + -uVar23;
                pcVar24 = local_8;
                for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *(undefined4 *)pcVar24 = *(undefined4 *)pcVar25;
                  pcVar25 = pcVar25 + 4;
                  pcVar24 = pcVar24 + 4;
                }
                for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                  *pcVar24 = *pcVar25;
                  pcVar25 = pcVar25 + 1;
                  pcVar24 = pcVar24 + 1;
                }
              }
            }
            (&DAT_008087ea)[(uint)(byte)pcVar12[2] * 0x51] = pcVar12[0x4a];
            *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar12[2] * 0x51) =
                 *(undefined4 *)(pcVar12 + 0x54);
            *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar12[2] * 0x51) =
                 *(undefined4 *)(pcVar12 + 0x58);
            *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar12[2] * 0x51) =
                 *(undefined4 *)(pcVar12 + 0x5c);
          }
          iVar10 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar27 = local_c < *(uint *)(iVar10 + 0xc);
        } while ((int)local_c < (int)*(uint *)(iVar10 + 0xc));
      }
      thunk_FUN_0056ee90((AnonShape_0056EE90_04DD57E6 *)&DAT_00807620);
      puVar26 = &DAT_00808ab0;
      for (iVar10 = 0x3a8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar26 = 0;
        puVar26 = puVar26 + 1;
      }
      DAT_00808aaf = 0;
      iVar10 = this_00->field_1F84;
      local_c = 0;
      if (0 < *(int *)(iVar10 + 0xc)) {
        bVar27 = *(int *)(iVar10 + 0xc) != 0;
        do {
          if (bVar27) {
            puVar13 = (undefined1 *)(*(int *)(iVar10 + 8) * local_c + *(int *)(iVar10 + 0x1c));
          }
          else {
            puVar13 = (undefined1 *)0x0;
          }
          if (puVar13 != (undefined1 *)0x0) {
            bVar19 = puVar13[4];
            local_d = bVar19;
            if ((bVar19 != 1) && (bVar19 != 0)) {
              if (bVar19 == 4) {
                iVar10 = *(int *)(puVar13 + 0x50);
                if ((uint)(byte)puVar13[5] < *(uint *)(iVar10 + 0xc)) {
                  pcVar12 = (char *)(*(int *)(iVar10 + 8) * (uint)(byte)puVar13[5] +
                                    *(int *)(iVar10 + 0x1c));
                }
                else {
                  pcVar12 = (char *)0x0;
                }
                if (pcVar12 != (char *)0x0) {
                  uVar23 = 0xffffffff;
                  do {
                    pcVar25 = pcVar12;
                    if (uVar23 == 0) break;
                    uVar23 = uVar23 - 1;
                    pcVar25 = pcVar12 + 1;
                    cVar22 = *pcVar12;
                    pcVar12 = pcVar25;
                  } while (cVar22 != '\0');
                  uVar23 = ~uVar23;
                  pcVar25 = pcVar25 + -uVar23;
                  local_8 = local_164;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar23 = 0xffffffff;
                pcVar12 = puVar13 + 10;
                do {
                  pcVar25 = pcVar12;
                  if (uVar23 == 0) break;
                  uVar23 = uVar23 - 1;
                  pcVar25 = pcVar12 + 1;
                  cVar22 = *pcVar12;
                  pcVar12 = pcVar25;
                } while (cVar22 != '\0');
                uVar23 = ~uVar23;
                pcVar25 = pcVar25 + -uVar23;
                local_8 = local_164;
LAB_005d5b7e:
                pcVar12 = local_164;
                for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar25;
                  pcVar25 = pcVar25 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar23 = uVar23 & 3; local_8 = local_164, uVar23 != 0; uVar23 = uVar23 - 1) {
                  *pcVar12 = *pcVar25;
                  pcVar25 = pcVar25 + 1;
                  pcVar12 = pcVar12 + 1;
                }
              }
              local_124 = *(undefined4 *)(puVar13 + 6);
              local_120._0_2_ = CONCAT11(*puVar13,puVar13[2]);
              local_11c = this_00->field_0061;
              if (bVar19 == 2) {
                local_120 = CONCAT13(1,CONCAT12(1,(undefined2)local_120));
              }
              else {
                local_120 = CONCAT13(1,CONCAT12((bVar19 != 3) + -1,(undefined2)local_120)) &
                            0xff02ffff;
              }
              pcVar12 = local_164;
              puVar26 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar10 = 0x27; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar26 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                puVar26 = puVar26 + 1;
              }
              if ((byte)local_120 < 8) {
                iVar10 = 0;
                do {
                  if ((&DAT_00808800)[iVar10 + (local_120 & 0xff) * 0x51] == '\0') {
                    (&DAT_00808800)[iVar10 + (local_120 & 0xff) * 0x51] = DAT_00808aaf;
                    break;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          iVar10 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar27 = local_c < *(uint *)(iVar10 + 0xc);
        } while ((int)local_c < (int)*(uint *)(iVar10 + 0xc));
      }
      if (this_00->field_1E26 == '\x06') {
        if ((this_00->field_1F47 == 0) && (*(int *)&param_1->field_0x14 == 0)) {
          iVar10 = this_00->field_1A5B;
          if (*(int *)(iVar10 + 0x2e6) != 0) {
            puVar26 = local_64;
            for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar26 = 0;
              puVar26 = puVar26 + 1;
            }
            puVar26 = local_84;
            for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar26 = 0;
              puVar26 = puVar26 + 1;
            }
            local_7c = this_00->field_0008;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            iVar10 = MMsgTy::SetMessage(*(MMsgTy **)(iVar10 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,(undefined4 *)0x0,0,0);
            if (iVar10 != 0) {
              (**(code **)(this_00->field_0000 + 0x24))();
            }
          }
        }
        else {
          uVar23 = 0xffffffff;
          DAT_008087a0 = '\x06';
          pcVar12 = &DAT_00853de4;
          do {
            pcVar25 = pcVar12;
            if (uVar23 == 0) break;
            uVar23 = uVar23 - 1;
            pcVar25 = pcVar12 + 1;
            cVar22 = *pcVar12;
            pcVar12 = pcVar25;
          } while (cVar22 != '\0');
          uVar23 = ~uVar23;
          DAT_00808783 = 2;
          pcVar12 = pcVar25 + -uVar23;
          pcVar25 = &DAT_0080ed16;
          for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar25 = pcVar25 + 4;
          }
          for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
            *pcVar25 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar25 = pcVar25 + 1;
          }
          uVar23 = 0xffffffff;
          pcVar12 = &DAT_0080ed16;
          do {
            pcVar25 = pcVar12;
            if (uVar23 == 0) break;
            uVar23 = uVar23 - 1;
            pcVar25 = pcVar12 + 1;
            cVar22 = *pcVar12;
            pcVar12 = pcVar25;
          } while (cVar22 != '\0');
          uVar23 = ~uVar23;
          pcVar12 = pcVar25 + -uVar23;
          pcVar25 = (char *)&DAT_0080ee1a;
          for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar25 = pcVar25 + 4;
          }
          for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
            *pcVar25 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar25 = pcVar25 + 1;
          }
          uVar23 = 0xffffffff;
          pcVar12 = &DAT_00807680;
          do {
            if (uVar23 == 0) break;
            uVar23 = uVar23 - 1;
            cVar22 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar22 != '\0');
          uVar20 = 0xffffffff;
          pcVar12 = (char *)((int)&DAT_0080ed12 + ~uVar23 + 3);
          do {
            pcVar25 = pcVar12;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar25 = pcVar12 + 1;
            cVar22 = *pcVar12;
            pcVar12 = pcVar25;
          } while (cVar22 != '\0');
          uVar20 = ~uVar20;
          pcVar12 = pcVar25 + -uVar20;
          pcVar25 = &DAT_0080ef1e;
          for (uVar23 = uVar20 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar25 = pcVar25 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar25 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar25 = pcVar25 + 1;
          }
          thunk_FUN_005b6350(this_00,0x6948,0,0);
          this_00->field_0x21e5 = 1;
          this_00->field_0x21e4 = 1;
          this_00->field_21E7 = 1;
          this_00->field_0x21e3 = 1;
          this_00->field_0x21e1 = 1;
          (**(code **)(this_00->field_0000 + 8))();
          pMVar2 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
          if (pMVar2 != (MMsgTy *)0x0) {
            MMsgTy::HidePanel(pMVar2,1,0,1);
          }
        }
      }
      else {
        uVar23 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar12 = &DAT_0080ed16;
        do {
          pcVar25 = pcVar12;
          if (uVar23 == 0) break;
          uVar23 = uVar23 - 1;
          pcVar25 = pcVar12 + 1;
          cVar22 = *pcVar12;
          pcVar12 = pcVar25;
        } while (cVar22 != '\0');
        uVar23 = ~uVar23;
        pcVar12 = pcVar25 + -uVar23;
        pcVar25 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = this_00->field_1E26;
        for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar25 = pcVar25 + 4;
        }
        for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
          *pcVar25 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar25 = pcVar25 + 1;
        }
        uVar23 = 0xffffffff;
        pcVar12 = &DAT_00807680;
        do {
          if (uVar23 == 0) break;
          uVar23 = uVar23 - 1;
          cVar22 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar22 != '\0');
        uVar20 = 0xffffffff;
        pcVar12 = (char *)((int)&DAT_0080ed12 + ~uVar23 + 3);
        do {
          pcVar25 = pcVar12;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar25 = pcVar12 + 1;
          cVar22 = *pcVar12;
          pcVar12 = pcVar25;
        } while (cVar22 != '\0');
        uVar20 = ~uVar20;
        pcVar12 = pcVar25 + -uVar20;
        pcVar25 = &DAT_0080ef1e;
        for (uVar23 = uVar20 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar25 = pcVar25 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar25 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar25 = pcVar25 + 1;
        }
        thunk_FUN_005b6350(this_00,0x6948,0,0);
        this_00->field_0x21e5 = 1;
        this_00->field_0x21e4 = 1;
        this_00->field_21E7 = 1;
        this_00->field_0x21e2 = 1;
        this_00->field_0x21e1 = 1;
        (**(code **)(this_00->field_0000 + 8))();
        pMVar2 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
        if (pMVar2 != (MMsgTy *)0x0) {
          MMsgTy::HidePanel(pMVar2,1,0,1);
        }
      }
    }
  }
  uVar23 = *(uint *)&param_1->field_0x10;
  if (((0x69fe < uVar23) && (uVar23 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    iVar10 = this_00->field_1F84;
    local_c = uVar23 - 0x69ff >> 3;
    if ((iVar10 == 0) || (uVar20 = this_00->field_1F88 + local_c, *(uint *)(iVar10 + 0xc) <= uVar20)
       ) {
      local_14 = (char *)0x0;
    }
    else {
      local_14 = (char *)(*(int *)(iVar10 + 8) * uVar20 + *(int *)(iVar10 + 0x1c));
    }
    uVar20 = 0;
    if (local_14 != (char *)0x0) {
      switch(uVar23 + 1 & 7) {
      case 1:
        uVar20 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar23 = *(uint *)(iVar10 + 0xc);
        if (0 < (int)uVar23) {
          bVar27 = uVar23 != 0;
          do {
            if (bVar27) {
              pcVar12 = (char *)(*(int *)(iVar10 + 8) * uVar20 + *(int *)(iVar10 + 0x1c));
            }
            else {
              pcVar12 = (char *)0x0;
            }
            if ((*pcVar12 != '\0') && (pcVar12[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar12[2]) = 0;
            }
            uVar20 = uVar20 + 1;
            bVar27 = uVar20 < uVar23;
          } while ((int)uVar20 < (int)uVar23);
        }
        bVar19 = local_14[2];
        iVar10 = this_00->field_1F88 + local_c;
        uVar23 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar19) = 1;
        this_00->field_2179 = iVar10;
        this_00->field_2191 = 0x6503;
        this_00->field_21A1 = 0;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        this_00->field_1F37 = 0xff;
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        local_8 = (char *)CONCAT31(local_8._1_3_,1);
        do {
          if (*(char *)((int)&local_40 + uVar23) != '\0') {
            this_00->field_1F37 = uVar23;
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
            if ((byte)local_14[2] == uVar23) {
              this_00->field_21A1 = (uint)local_8 & 0xff;
            }
            local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
          }
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < 8);
        this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
        this_00->field_21C5 = 0x124;
        this_00->field_21CD = 0x1e;
        this_00->field_21A5 = 0x12;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
LAB_005d619b:
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &this_00->field_0x2161,0);
        break;
      case 2:
        this_00->field_2171 = 0x6504;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        local_28 = 1;
        pcVar12 = (char *)FUN_006b0140(0x23f1,HINSTANCE_00807618);
        uVar23 = 0xffffffff;
        do {
          pcVar25 = pcVar12;
          if (uVar23 == 0) break;
          uVar23 = uVar23 - 1;
          pcVar25 = pcVar12 + 1;
          cVar22 = *pcVar12;
          pcVar12 = pcVar25;
        } while (cVar22 != '\0');
        uVar23 = ~uVar23;
        pcVar12 = pcVar25 + -uVar23;
        pcVar25 = &this_00->field_0x1e33;
        for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar25 = pcVar25 + 4;
        }
        for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
          *pcVar25 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar25 = pcVar25 + 1;
        }
        for (puVar15 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar15 != (uint *)0x0; puVar15 = Library::MSVCRT::FUN_0072e560(puVar15,'\n')) {
          *(undefined1 *)puVar15 = 0x20;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        pcVar12 = (char *)FUN_006b0140(0x23f0,HINSTANCE_00807618);
        uVar23 = 0xffffffff;
        do {
          pcVar25 = pcVar12;
          if (uVar23 == 0) break;
          uVar23 = uVar23 - 1;
          pcVar25 = pcVar12 + 1;
          cVar22 = *pcVar12;
          pcVar12 = pcVar25;
        } while (cVar22 != '\0');
        uVar23 = ~uVar23;
        pcVar12 = pcVar25 + -uVar23;
        pcVar25 = &this_00->field_0x1e33;
        for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar25 = pcVar25 + 4;
        }
        for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
          *pcVar25 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar25 = pcVar25 + 1;
        }
        for (puVar15 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar15 != (uint *)0x0; puVar15 = Library::MSVCRT::FUN_0072e560(puVar15,'\n')) {
          *(undefined1 *)puVar15 = 0x20;
        }
        this_00->field_1F37 = 2;
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        uVar23 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar23 = (uint)(local_14[4] != '\x02');
        }
        if (uVar23 != 0) {
          pcVar12 = (char *)FUN_006b0140(0x23f2,HINSTANCE_00807618);
          uVar23 = 0xffffffff;
          do {
            pcVar25 = pcVar12;
            if (uVar23 == 0) break;
            uVar23 = uVar23 - 1;
            pcVar25 = pcVar12 + 1;
            cVar22 = *pcVar12;
            pcVar12 = pcVar25;
          } while (cVar22 != '\0');
          uVar23 = ~uVar23;
          pcVar12 = pcVar25 + -uVar23;
          pcVar25 = &this_00->field_0x1e33;
          for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar25 = pcVar25 + 4;
          }
          for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
            *pcVar25 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar25 = pcVar25 + 1;
          }
          for (puVar15 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar15 != (uint *)0x0; puVar15 = Library::MSVCRT::FUN_0072e560(puVar15,'\n')) {
            *(undefined1 *)puVar15 = 0x20;
          }
          this_00->field_1F37 = 3;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        }
        this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
        bVar19 = local_14[3];
        this_00->field_21C5 = 0x143;
        this_00->field_21CD = 0x78;
        this_00->field_21A1 = bVar19 - 1;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar3 = PTR_0081176c->field_0034;
        if (pcVar3->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar3);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar3->field_0x8a;
LAB_005d6676:
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &this_00->field_0x2161,0);
        break;
      case 3:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        if (*local_14 != '\0') {
          uVar23 = 0;
          local_8 = (char *)0x0;
          if ((this_00->field_1E26 == '\x02') && (local_14[4] == '\x02')) break;
          iVar10 = this_00->field_1F84;
          uVar20 = *(uint *)(iVar10 + 0xc);
          bVar27 = uVar20 != 0;
          if (0 < (int)uVar20) {
            do {
              if (bVar27) {
                pcVar12 = (char *)(*(int *)(iVar10 + 8) * uVar23 + *(int *)(iVar10 + 0x1c));
              }
              else {
                pcVar12 = (char *)0x0;
              }
              if ((*pcVar12 != '\0') && (pcVar12[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar23 = uVar23 + 1;
              bVar27 = uVar23 < uVar20;
            } while ((int)uVar23 < (int)uVar20);
          }
          if ((this_00->field_1E26 != '\x02') && (2 < (int)local_8)) {
            pcVar12 = (char *)FUN_006b0140(8000,HINSTANCE_00807618);
            uVar23 = 0xffffffff;
            do {
              pcVar25 = pcVar12;
              if (uVar23 == 0) break;
              uVar23 = uVar23 - 1;
              pcVar25 = pcVar12 + 1;
              cVar22 = *pcVar12;
              pcVar12 = pcVar25;
            } while (cVar22 != '\0');
            uVar23 = ~uVar23;
            pcVar12 = pcVar25 + -uVar23;
            pcVar25 = &this_00->field_0x1e33;
            for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
              *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar25 = pcVar25 + 4;
            }
            for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *pcVar25 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar25 = pcVar25 + 1;
            }
            this_00->field_1F37 = 0;
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          }
          if (this_00->field_1E26 != '\x02') {
            bVar27 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar27 = local_14[3] != '\x03';
            }
            if (bVar27) {
              pcVar12 = (char *)FUN_006b0140(0x1f42,HINSTANCE_00807618);
              uVar23 = 0xffffffff;
              do {
                pcVar25 = pcVar12;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar25 = pcVar12 + 1;
                cVar22 = *pcVar12;
                pcVar12 = pcVar25;
              } while (cVar22 != '\0');
              uVar23 = ~uVar23;
              pcVar12 = pcVar25 + -uVar23;
              pcVar25 = &this_00->field_0x1e33;
              for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar25 = pcVar25 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar25 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar25 = pcVar25 + 1;
              }
              this_00->field_1F37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
            }
          }
          local_8 = (char *)0x0;
          iVar10 = *(int *)(local_14 + 0x50);
          pcVar12 = *(char **)(iVar10 + 0xc);
          if (0 < (int)pcVar12) {
            do {
              if (local_8 < pcVar12) {
                iVar10 = *(int *)(iVar10 + 8) * (int)local_8 + *(int *)(iVar10 + 0x1c);
              }
              else {
                iVar10 = 0;
              }
              uVar23 = 0xffffffff;
              pcVar12 = (char *)(iVar10 + 0x40);
              do {
                pcVar25 = pcVar12;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar25 = pcVar12 + 1;
                cVar22 = *pcVar12;
                pcVar12 = pcVar25;
              } while (cVar22 != '\0');
              uVar23 = ~uVar23;
              pcVar12 = pcVar25 + -uVar23;
              pcVar25 = &this_00->field_0x1e33;
              for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
                pcVar12 = pcVar12 + 4;
                pcVar25 = pcVar25 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar25 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                pcVar25 = pcVar25 + 1;
              }
              this_00->field_1F37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
              local_8 = local_8 + 1;
              iVar10 = *(int *)(local_14 + 0x50);
              pcVar12 = *(char **)(iVar10 + 0xc);
            } while ((int)local_8 < (int)pcVar12);
          }
        }
        iVar10 = this_00->field_1E2F;
        uVar23 = 0;
        if (0 < *(int *)(iVar10 + 0xc)) {
          bVar27 = *(int *)(iVar10 + 0xc) != 0;
          local_28 = (uint)(byte)local_14[4];
          do {
            if (bVar27) {
              iVar11 = *(int *)(iVar10 + 8) * uVar23 + *(int *)(iVar10 + 0x1c);
            }
            else {
              iVar11 = 0;
            }
            if ((*(uint *)(iVar11 + 0x104) == local_28) &&
               (*(uint *)(iVar11 + 0x108) == (uint)(byte)local_14[5])) {
              this_00->field_21A1 = uVar23;
              break;
            }
            uVar23 = uVar23 + 1;
            bVar27 = uVar23 < *(uint *)(iVar10 + 0xc);
          } while ((int)uVar23 < (int)*(uint *)(iVar10 + 0xc));
        }
        uVar18 = *(undefined4 *)(iVar10 + 0xc);
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = uVar18;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar3 = PTR_0081176c->field_0034;
        if (pcVar3->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar3);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar3->field_0x8a;
        if (1 < (int)this_00->field_21A9) goto LAB_005d6676;
        break;
      case 5:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar23 = *(uint *)(iVar10 + 0xc);
          if (0 < (int)uVar23) {
            bVar27 = uVar23 != 0;
            do {
              if (bVar27) {
                iVar11 = *(int *)(iVar10 + 8) * uVar20 + *(int *)(iVar10 + 0x1c);
              }
              else {
                iVar11 = 0;
              }
              if ((iVar11 != 0) && (*(byte *)(iVar11 + 0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)*(byte *)(iVar11 + 0x4a)) = 1;
              }
              uVar20 = uVar20 + 1;
              bVar27 = uVar20 < uVar23;
            } while ((int)uVar20 < (int)uVar23);
          }
          bVar19 = 0;
          iVar11 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar11) != '\0') {
              bVar19 = bVar19 + 1;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < 8);
          bVar1 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar19 < bVar1) {
            iVar11 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar11) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar11) = 1;
                bVar19 = bVar19 + 1;
                break;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < 8);
            goto joined_r0x005d6701;
          }
          uVar23 = 0;
          cVar22 = (char)local_28;
          if (0 < *(int *)(iVar10 + 0xc)) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar27 = *(int *)(iVar10 + 0xc) != 0;
            do {
              if (bVar27) {
                pcVar12 = (char *)(*(int *)(iVar10 + 8) * uVar23 + *(int *)(iVar10 + 0x1c));
              }
              else {
                pcVar12 = (char *)0x0;
              }
              if (local_2c == (undefined1 *)uVar23) {
LAB_005d6784:
                if ((*pcVar12 != '\0') && ((pcVar12[4] == '\0' || (pcVar12[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar12[0x4a]) = 0;
                }
              }
              else if (*pcVar12 != '\0') {
                if ((pcVar12[4] != '\0') && (pcVar12[4] != '\x01')) {
                  if (local_8 == (char *)0x0) {
                    if (cVar22 != pcVar12[0x4a]) {
                      cVar22 = -1;
                    }
                  }
                  else {
                    cVar22 = pcVar12[0x4a];
                    local_8 = (char *)0x0;
                  }
                }
                goto LAB_005d6784;
              }
              uVar23 = uVar23 + 1;
              bVar27 = uVar23 < *(uint *)(iVar10 + 0xc);
            } while ((int)uVar23 < (int)*(uint *)(iVar10 + 0xc));
            local_28 = CONCAT31(local_28._1_3_,cVar22);
          }
          if (cVar22 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          uVar23 = 0;
          this_00->field_2171 = 0x6501;
          this_00->field_2179 = this_00->field_1F88 + local_c;
          this_00->field_2191 = 0x6500;
          this_00->field_21A1 = 0;
          *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar13 = &uStack_79;
          local_2c = puVar13;
          do {
            iVar10 = uVar23 + 0x41;
            if (puVar13[uVar23 + 0x41] != '\0') {
              uVar18 = FUN_006b0140(0x1f4a,HINSTANCE_00807618);
              wsprintfA(&this_00->field_0x1e33,&DAT_007cd508,uVar18,iVar10);
              this_00->field_1F37 = uVar23;
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
              if ((byte)local_14[0x4a] == uVar23) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
              puVar13 = local_2c;
            }
            uVar23 = uVar23 + 1;
          } while ((int)uVar23 < 8);
          cVar22 = this_00->field_1E26;
          this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
          if (((cVar22 == '\x06') || (cVar22 == '\x01')) || (uVar18 = 0x26b, cVar22 == '\x02')) {
            uVar18 = 0x2ab;
          }
          this_00->field_21C5 = uVar18;
          this_00->field_21CD = 0x46;
          this_00->field_21C9 = local_c * 0x19 + 0x41;
          pcVar3 = PTR_0081176c->field_0034;
          if (pcVar3->field_00A0 != 0) {
            FUN_00710790((uint *)pcVar3);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar3->field_0x8a;
          goto LAB_005d619b;
        }
        uVar6 = (uint3)(uVar23 - 0x69ff >> 8);
        uVar23 = CONCAT31(uVar6 >> 3,DAT_0080874d);
        if (DAT_0080874d != 0xff) {
          bVar19 = local_14[2];
          local_c = CONCAT31(uVar6 >> 3,bVar19);
          if ((bVar19 != 0xff) && (DAT_0080874d != bVar19)) {
            if (local_14[4] == '\x04') {
              local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar19);
              if (DAT_0080874d == bVar19) {
                uVar18 = 0;
                uVar21 = (uint)bVar19;
              }
              else {
                uVar16 = (uint)DAT_0080874d;
                uVar20 = (uint)bVar19;
                cVar22 = *(char *)((int)&DAT_00808a4f + uVar16 * 8 + uVar20);
                uVar21 = local_c;
                if ((cVar22 == '\0') &&
                   (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar16) == '\0')) {
                  uVar18 = 0xfffffffe;
                }
                else if ((cVar22 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar16) == '\0')) {
                  uVar18 = 0xffffffff;
                }
                else if ((cVar22 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar16) == '\x01')) {
                  uVar18 = 1;
                }
                else if ((cVar22 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar16) == '\x01')) {
                  uVar18 = 2;
                }
                else {
                  uVar18 = 0;
                }
              }
              switch(uVar18) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar21,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar23,(byte)uVar21,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar23,(byte)uVar21,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar21,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,uVar23,bVar19);
            }
            (**(code **)(this_00->field_0000 + 0x2c))();
          }
        }
      }
    }
  }
  uVar23 = *(uint *)&param_1->field_0x10;
  if (uVar23 < 0x6a7f) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  if (0x6afe < uVar23) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  uVar20 = uVar23 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(uVar23 + 1 & 7);
  piVar4 = *(int **)&param_1->field_0x18;
  local_1c = piVar4[2];
  local_18 = piVar4[3];
  iVar10 = this_00->field_1F84;
  local_24 = *piVar4 + -0x113;
  local_20 = 0;
  if ((iVar10 == 0) || (uVar23 = this_00->field_1F88 + uVar20, *(uint *)(iVar10 + 0xc) <= uVar23)) {
    pcVar12 = (char *)0x0;
  }
  else {
    pcVar12 = (char *)(*(int *)(iVar10 + 8) * uVar23 + *(int *)(iVar10 + 0x1c));
  }
  local_28 = uVar20;
  FUN_006b4170((&this_00->field_20F4)[uVar20],0,*piVar4 + -0x113,0,piVar4[2],piVar4[3],0xff);
  if (pcVar12 == (char *)0x0) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*pcVar12 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar20],&local_24,0,
                 (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pcVar12[2] != -1) {
        switch(pcVar12[2]) {
        case '\0':
          uVar8 = 0xfc;
          break;
        case '\x01':
          uVar8 = 0xfa;
          break;
        case '\x02':
          uVar8 = 0xfb;
          break;
        case '\x03':
          uVar8 = 0xf9;
          break;
        case '\x04':
          uVar8 = 0xfd;
          break;
        case '\x05':
          uVar8 = 0xfe;
          break;
        case '\x06':
          uVar8 = 0xf3;
          break;
        case '\a':
          uVar8 = 7;
          break;
        default:
          uVar8 = 0xff;
        }
        FUN_006b4170((&this_00->field_20F4)[uVar20],0,local_24 + 2,local_20 + 2,local_1c + -4,
                     local_18 + -4,uVar8);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*pcVar12 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar20],&local_24,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar20],0,local_24,local_20,
                     local_1c,local_18);
    if (pcVar12[3] == '\x01') {
      pcVar12 = &DAT_007ca250;
LAB_005d6c37:
      uVar23 = 0xffffffff;
      do {
        pcVar25 = pcVar12;
        if (uVar23 == 0) break;
        uVar23 = uVar23 - 1;
        pcVar25 = pcVar12 + 1;
        cVar22 = *pcVar12;
        pcVar12 = pcVar25;
      } while (cVar22 != '\0');
      uVar23 = ~uVar23;
      pcVar12 = pcVar25 + -uVar23;
      pcVar25 = (char *)&DAT_0080f33a;
      for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar25 = pcVar25 + 4;
      }
    }
    else {
      if (pcVar12[3] != '\x02') {
        pcVar12 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar23 = 0xffffffff;
      pcVar12 = &DAT_007ca248;
      do {
        pcVar25 = pcVar12;
        if (uVar23 == 0) break;
        uVar23 = uVar23 - 1;
        pcVar25 = pcVar12 + 1;
        cVar22 = *pcVar12;
        pcVar12 = pcVar25;
      } while (cVar22 != '\0');
      uVar23 = ~uVar23;
      pcVar12 = pcVar25 + -uVar23;
      pcVar25 = (char *)&DAT_0080f33a;
      for (uVar20 = uVar23 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar25 = pcVar25 + 4;
      }
    }
    pSVar7 = PTR_0081176c;
    for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
      *pcVar25 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar25 = pcVar25 + 1;
    }
    ccFntTy::WrStr(pSVar7->field_0034,&DAT_0080f33a,-1,-1,2);
    uVar20 = local_28;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar20],&local_24,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar20],0,local_24,local_20,
                     local_1c,local_18);
    uVar18 = 2;
    iVar14 = -1;
    iVar11 = -1;
    puVar28 = (uint *)&DAT_007c2310;
    iVar10 = local_1c;
    puVar15 = (uint *)thunk_FUN_005cbbe0(this_00,pcVar12);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib((MMObjTy *)this_00,(&this_00->field_20F4)[uVar20],&local_24,2,0x67,0x67);
    if (pcVar12[4] == '\x02') {
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar20],0,local_24,local_20,
                       local_1c,local_18);
      uVar18 = 2;
      iVar11 = -1;
      iVar10 = -1;
      puVar15 = thunk_FUN_00540c40(PTR_0081176c->field_0034,(uint *)(pcVar12 + 10),
                                   (uint *)&DAT_007c7274,local_1c);
      ccFntTy::WrStr(PTR_0081176c->field_0034,puVar15,iVar10,iVar11,uVar18);
      break;
    }
    if (pcVar12[4] != '\x04') break;
    iVar10 = *(int *)(pcVar12 + 0x50);
    if ((uint)(byte)pcVar12[5] < *(uint *)(iVar10 + 0xc)) {
      puVar15 = (uint *)(*(int *)(iVar10 + 8) * (uint)(byte)pcVar12[5] + *(int *)(iVar10 + 0x1c));
    }
    else {
      puVar15 = (uint *)0x0;
    }
    if (puVar15 == (uint *)0x0) break;
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar20],0,local_24,local_20,
                     local_1c,local_18);
    uVar18 = 2;
    iVar14 = -1;
    iVar11 = -1;
    puVar28 = (uint *)&DAT_007c7274;
    iVar10 = local_1c;
LAB_005d6d70:
    puVar15 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar15,puVar28,iVar10);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar15,iVar11,iVar14,uVar18);
    break;
  case (undefined1 *)0x5:
    if ((*pcVar12 != '\0') &&
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar20],&local_24,2,
                   (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67), pcVar12[4] != '\0'
       )) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar19 = pcVar12[2], bVar19 != 0xff)) &&
           (DAT_0080874d != bVar19)) {
          local_28 = 0xffffffff;
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar19);
          uVar21 = (uint)DAT_0080874d;
          uVar23 = (uint)bVar19;
          cVar22 = *(char *)((int)&DAT_00808a4f + uVar21 * 8 + uVar23);
          if ((cVar22 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar23 * 8 + uVar21) == '\0')) {
            uVar18 = 0xfffffffe;
          }
          else if ((cVar22 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar23 * 8 + uVar21) == '\0')) {
            uVar18 = 0xffffffff;
          }
          else if ((cVar22 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar23 * 8 + uVar21) == '\x01')) {
            uVar18 = 1;
          }
          else if ((cVar22 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar23 * 8 + uVar21) == '\x01')) {
            uVar18 = 2;
          }
          else {
            uVar18 = 0;
          }
          switch(uVar18) {
          default:
            iVar10 = -1;
            break;
          case 1:
            iVar10 = 1;
            break;
          case 2:
            iVar10 = 3;
            break;
          case 0xfffffffe:
            iVar10 = 0;
            break;
          case 0xffffffff:
            iVar10 = 2;
          }
          if (-1 < iVar10 + -1) {
            pbVar17 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x1f4b,iVar10 + -1);
            DibPut((undefined4 *)(&this_00->field_20F4)[uVar20],
                   (local_1c - *(int *)(pbVar17 + 4)) / 2 + local_24,
                   (local_18 - *(int *)(pbVar17 + 8)) / 2 + 1 + local_20,'\x06',pbVar17);
          }
        }
      }
      else {
        iVar10 = (byte)pcVar12[0x4a] + 0x41;
        uVar18 = FUN_006b0140(0x1f4a,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,uVar18,iVar10);
        ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar20],0,local_24,local_20
                         ,local_1c,local_18);
        ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0(DAT_008075a8,(&this_00->field_20CC)[uVar20]);
  if (*(short *)&param_1->field_0x14 == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}


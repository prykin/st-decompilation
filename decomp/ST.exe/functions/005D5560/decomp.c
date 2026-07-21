
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::GetMessage */

undefined4 __thiscall SettMapSTy::GetMessage(SettMapSTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  SettMapTy_field_1E26State SVar1;
  byte bVar2;
  DArrayTy *pDVar3;
  MMsgTy *pMVar4;
  dword dVar5;
  ccFntTy *pcVar6;
  int *piVar7;
  code *pcVar8;
  uint3 uVar9;
  char cVar10;
  char cVar11;
  StartSystemTy *pSVar12;
  SettMapTy *this_00;
  undefined1 uVar13;
  DWORD DVar14;
  int iVar15;
  void *pvVar16;
  char *pcVar17;
  undefined1 *puVar18;
  DArrayTy *pDVar19;
  void *pvVar20;
  char *extraout_EAX;
  uint *puVar21;
  char *extraout_EAX_00;
  char *extraout_EAX_01;
  char *extraout_EAX_02;
  char *extraout_EAX_03;
  AnonNested_005D5560_0050_EBFA0A51 *pAVar22;
  undefined4 extraout_EAX_04;
  uint uVar23;
  undefined4 extraout_EAX_05;
  byte *pbVar24;
  undefined4 uVar25;
  byte bVar26;
  int iVar27;
  uint uVar28;
  char cVar29;
  undefined4 unaff_ESI;
  uint uVar30;
  void *unaff_EDI;
  AnonShape_005D5560_9031BF1B *pAVar31;
  char *pcVar32;
  char *pcVar33;
  undefined4 *puVar34;
  AnonShape_005CBBE0_2D1CAA09 *pAVar35;
  bool bVar36;
  uint *puVar37;
  int iVar38;
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
  AnonShape_005D5560_9031BF1B *local_14;
  byte local_d;
  uint local_c;
  char *local_8;
  
  local_44 = (SettMapTy *)this;
  DVar14 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar14;
  local_c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c8;
  iVar15 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar15 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    iVar27 = ReportDebugMessage(s_E____titans_Start_settsobj_cpp_007cd544,0x27d,0,iVar15,
                                &DAT_007a4ccc,s_SettMapSTy__GetMessage_007cd5a8);
    if (iVar27 != 0) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return uVar25;
    }
    RaiseInternalException(iVar15,0,s_E____titans_Start_settsobj_cpp_007cd544,0x27d);
    return 0xffff;
  }
  SettMapTy::GetMessage(local_44,param_1);
  uVar30 = *(uint *)&param_1->field_0x10;
  if (uVar30 < 0x6505) {
    if (uVar30 == 0x6504) {
      uVar30 = *(uint *)&param_1->field_0x14;
      if ((uVar30 != 0xffffffff) && (pDVar19 = this_00->field_1F84, pDVar19 != (DArrayTy *)0x0)) {
        pDVar3 = this_00->field_1E2F;
        if (uVar30 < pDVar3->count) {
          pvVar16 = (void *)(pDVar3->elementSize * uVar30 + (int)pDVar3->data);
        }
        else {
          pvVar16 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar16 + 0x104);
        if (*(uint *)&param_1->field_0x18 < pDVar19->count) {
          pvVar16 = (void *)(pDVar19->elementSize * *(uint *)&param_1->field_0x18 +
                            (int)pDVar19->data);
        }
        else {
          pvVar16 = (void *)0x0;
        }
        if (pvVar16 != (void *)0x0) {
          *(char *)((int)pvVar16 + 3) = cVar29;
        }
        pDVar19 = this_00->field_1F84;
        uVar30 = *(int *)&param_1->field_0x18 + 1;
        bVar36 = uVar30 < pDVar19->count;
        if ((int)uVar30 < (int)pDVar19->count) {
          do {
            if (bVar36) {
              pcVar17 = (char *)(pDVar19->elementSize * uVar30 + (int)pDVar19->data);
            }
            else {
              pcVar17 = (char *)0x0;
            }
            if ((pcVar17 == (char *)0x0) || (*pcVar17 != '\0')) break;
            pcVar17[3] = cVar29;
            pDVar19 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar36 = uVar30 < pDVar19->count;
          } while ((int)uVar30 < (int)pDVar19->count);
        }
        (*(code *)this_00->field_0000->field_002C)();
      }
    }
    else if (uVar30 == 0x6501) {
      uVar30 = *(uint *)&param_1->field_0x14;
      if ((uVar30 != 0xffffffff) && (pDVar19 = this_00->field_1F84, pDVar19 != (DArrayTy *)0x0)) {
        pDVar3 = this_00->field_1E2F;
        if (uVar30 < pDVar3->count) {
          pvVar16 = (void *)(pDVar3->elementSize * uVar30 + (int)pDVar3->data);
        }
        else {
          pvVar16 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar16 + 0x104);
        if (*(uint *)&param_1->field_0x18 < pDVar19->count) {
          pvVar16 = (void *)(pDVar19->elementSize * *(uint *)&param_1->field_0x18 +
                            (int)pDVar19->data);
        }
        else {
          pvVar16 = (void *)0x0;
        }
        if (pvVar16 != (void *)0x0) {
          *(char *)((int)pvVar16 + 0x4a) = cVar29;
        }
        pDVar19 = this_00->field_1F84;
        uVar30 = *(int *)&param_1->field_0x18 + 1;
        bVar36 = uVar30 < pDVar19->count;
        if ((int)uVar30 < (int)pDVar19->count) {
          do {
            if (bVar36) {
              pcVar17 = (char *)(pDVar19->elementSize * uVar30 + (int)pDVar19->data);
            }
            else {
              pcVar17 = (char *)0x0;
            }
            if ((pcVar17 == (char *)0x0) || (*pcVar17 != '\0')) break;
            pcVar17[0x4a] = cVar29;
            pDVar19 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar36 = uVar30 < pDVar19->count;
          } while ((int)uVar30 < (int)pDVar19->count);
        }
        (*(code *)this_00->field_0000->field_002C)();
      }
    }
    else if (((uVar30 == 0x6502) && (uVar30 = *(uint *)&param_1->field_0x14, uVar30 != 0xffffffff))
            && (pDVar19 = this_00->field_1F84, pDVar19 != (DArrayTy *)0x0)) {
      pDVar3 = this_00->field_1E2F;
      if (uVar30 < pDVar3->count) {
        pvVar16 = (void *)(pDVar3->elementSize * uVar30 + (int)pDVar3->data);
      }
      else {
        pvVar16 = (void *)0x0;
      }
      local_d = *(byte *)((int)pvVar16 + 0x104);
      if (*(uint *)&param_1->field_0x18 < pDVar19->count) {
        pvVar16 = (void *)(pDVar19->elementSize * *(uint *)&param_1->field_0x18 + (int)pDVar19->data
                          );
      }
      else {
        pvVar16 = (void *)0x0;
      }
      if (pvVar16 != (void *)0x0) {
        if (*(byte *)((int)pvVar16 + 2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar16 + 2));
        }
        *(byte *)((int)pvVar16 + 2) = local_d;
        if (*(char *)((int)pvVar16 + 4) == '\x02') {
          DAT_0080874d = local_d;
        }
        pDVar19 = this_00->field_1F84;
        uVar30 = *(int *)&param_1->field_0x18 + 1;
        bVar36 = uVar30 < pDVar19->count;
        if ((int)uVar30 < (int)pDVar19->count) {
          do {
            if (bVar36) {
              pcVar17 = (char *)(pDVar19->elementSize * uVar30 + (int)pDVar19->data);
            }
            else {
              pcVar17 = (char *)0x0;
            }
            if ((pcVar17 == (char *)0x0) || (*pcVar17 != '\0')) break;
            pcVar17[2] = local_d;
            pDVar19 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar36 = uVar30 < pDVar19->count;
          } while ((int)uVar30 < (int)pDVar19->count);
        }
        (*(code *)this_00->field_0000->field_002C)();
        goto LAB_005d5ff8;
      }
    }
  }
  else if (uVar30 == 0x6505) {
    uVar30 = *(uint *)&param_1->field_0x14;
    if ((uVar30 != 0xffffffff) && (pDVar19 = this_00->field_1F84, pDVar19 != (DArrayTy *)0x0)) {
      pDVar3 = this_00->field_1E2F;
      if (uVar30 < pDVar3->count) {
        pvVar16 = (void *)(pDVar3->elementSize * uVar30 + (int)pDVar3->data);
      }
      else {
        pvVar16 = (void *)0x0;
      }
      uVar30 = pDVar19->count;
      if (*(uint *)&param_1->field_0x18 < uVar30) {
        pvVar20 = (void *)(pDVar19->elementSize * *(uint *)&param_1->field_0x18 + (int)pDVar19->data
                          );
      }
      else {
        pvVar20 = (void *)0x0;
      }
      if (pvVar20 != (void *)0x0) {
        if ((*(int *)((int)pvVar16 + 0x104) == 2) && (uVar28 = 0, 0 < (int)uVar30)) {
          bVar36 = uVar30 != 0;
          do {
            if (bVar36) {
              pvVar20 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
            }
            else {
              pvVar20 = (void *)0x0;
            }
            if ((pvVar20 != (void *)0x0) && (*(char *)((int)pvVar20 + 4) == '\x02')) {
              SVar1 = this_00->field_1E26;
              if ((SVar1 == 6) || ((SVar1 == 1 || (SVar1 == 2)))) {
                *(undefined1 *)((int)pvVar20 + 4) = 4;
                *(undefined1 *)((int)pvVar20 + 5) = 0;
              }
              else {
                *(undefined1 *)((int)pvVar20 + 4) = 1;
              }
              break;
            }
            uVar28 = uVar28 + 1;
            bVar36 = uVar28 < uVar30;
          } while ((int)uVar28 < (int)uVar30);
        }
        pDVar19 = this_00->field_1F84;
        if (*(uint *)&param_1->field_0x18 < pDVar19->count) {
          pvVar20 = (void *)(pDVar19->elementSize * *(uint *)&param_1->field_0x18 +
                            (int)pDVar19->data);
        }
        else {
          pvVar20 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar16 + 0x104);
        *(char *)((int)pvVar20 + 4) = cVar29;
        *(undefined1 *)((int)pvVar20 + 5) = *(undefined1 *)((int)pvVar16 + 0x108);
        if (cVar29 == '\0') {
          if (*(byte *)((int)pvVar20 + 2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar20 + 2));
          }
          *(undefined1 *)((int)pvVar20 + 2) = 0xff;
        }
        DAT_0080874d = 0xff;
        pDVar19 = this_00->field_1F84;
        uVar28 = 0;
        uVar30 = pDVar19->count;
        if (0 < (int)uVar30) {
          bVar36 = uVar30 != 0;
          do {
            if (bVar36) {
              pvVar16 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
            }
            else {
              pvVar16 = (void *)0x0;
            }
            if (((pvVar16 != (void *)0x0) && (*(char *)((int)pvVar16 + 4) == '\x02')) &&
               (*(int *)((int)pvVar16 + 6) == DAT_0080877f)) {
              DAT_0080874d = *(byte *)((int)pvVar16 + 2);
              break;
            }
            uVar28 = uVar28 + 1;
            bVar36 = uVar28 < uVar30;
          } while ((int)uVar28 < (int)uVar30);
        }
        (*(code *)this_00->field_0000->field_002C)();
LAB_005d5ff8:
        SettMapTy::PaintSC(this_00);
      }
    }
  }
  else if (uVar30 == 0x694a) {
    local_30 = 0x1010101;
    local_2c = (undefined1 *)0x1010101;
    if (this_00->field_1F84 != (DArrayTy *)0x0) {
      DAT_00808aa9 = 1;
      DAT_008087c4._2_1_ = '\0';
      DAT_0080874f = 0;
      puVar34 = (undefined4 *)((int)&DAT_008087c4 + 3);
      for (iVar15 = 0xa2; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar34 = 0;
        puVar34 = puVar34 + 1;
      }
      puVar18 = &DAT_008087e9;
      do {
        puVar18[-1] = 0;
        *puVar18 = 0xff;
        puVar18 = puVar18 + 0x51;
      } while ((int)puVar18 < 0x808a71);
      pDVar19 = this_00->field_1F84;
      uVar28 = 0;
      uVar30 = pDVar19->count;
      if (0 < (int)uVar30) {
        bVar36 = uVar30 != 0;
        do {
          if (bVar36) {
            pcVar17 = (char *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
          }
          else {
            pcVar17 = (char *)0x0;
          }
          if (((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) && (pcVar17[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar17[2]) = 0;
          }
          uVar28 = uVar28 + 1;
          bVar36 = uVar28 < uVar30;
        } while ((int)uVar28 < (int)uVar30);
      }
      local_c = 0;
      if (0 < (int)uVar30) {
        bVar36 = uVar30 != 0;
        do {
          if (bVar36) {
            pcVar17 = (char *)(pDVar19->elementSize * local_c + (int)pDVar19->data);
          }
          else {
            pcVar17 = (char *)0x0;
          }
          if (((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) &&
             ((pcVar17[4] != '\0' && ((pcVar17[4] != '\x01' || (this_00->field_1E26 == 2)))))) {
            iVar15 = *(int *)(pcVar17 + 0x50);
            if ((uint)(byte)pcVar17[5] < *(uint *)(iVar15 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar15 + 8) * (uint)(byte)pcVar17[5] +
                                *(int *)(iVar15 + 0x1c));
            }
            else {
              local_8 = (char *)0x0;
            }
            DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
            if (pcVar17[2] == -1) {
              iVar15 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar15) != '\0') {
                  pcVar17[2] = (char)iVar15;
                  *(undefined1 *)((int)&local_30 + iVar15) = 0;
                  break;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < 8);
            }
            (&DAT_008087e9)[(uint)(byte)pcVar17[2] * 0x51] = pcVar17[2];
            (&DAT_008087e8)[(uint)(byte)pcVar17[2] * 0x51] = pcVar17[3];
            uVar30 = 0xffffffff;
            pcVar33 = &DAT_008016a0;
            do {
              pcVar32 = pcVar33;
              if (uVar30 == 0) break;
              uVar30 = uVar30 - 1;
              pcVar32 = pcVar33 + 1;
              cVar29 = *pcVar33;
              pcVar33 = pcVar32;
            } while (cVar29 != '\0');
            uVar30 = ~uVar30;
            local_14 = (AnonShape_005D5560_9031BF1B *)
                       (&DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51);
            pcVar33 = pcVar32 + -uVar30;
            pAVar31 = (AnonShape_005D5560_9031BF1B *)(&DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51)
            ;
            for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              cVar29 = pcVar33[1];
              cVar10 = pcVar33[2];
              cVar11 = pcVar33[3];
              pAVar31->field_0x0 = pcVar33[0];
              pAVar31->field_0x1 = cVar29;
              pAVar31->field_0x2 = cVar10;
              pAVar31->field_0x3 = cVar11;
              pcVar33 = pcVar33 + 4;
              pAVar31 = (AnonShape_005D5560_9031BF1B *)&pAVar31->field_0x4;
            }
            for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
              *(char *)pAVar31 = *pcVar33;
              pcVar33 = pcVar33 + 1;
              pAVar31 = (AnonShape_005D5560_9031BF1B *)&pAVar31->field_0x1;
            }
            if (pcVar17[4] == '\x02') {
              if (*pcVar17 != '\0') {
                *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar17[2] * 0x51 + 3) = 0;
                DAT_0080874d = pcVar17[2];
                DAT_0080874e = pcVar17[3];
              }
            }
            else if (pcVar17[4] == '\x04') {
              *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar17[2] * 0x51 + 3) = 1;
              if (local_8 == (char *)0x0) {
                uVar30 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51;
                pcVar33 = &DAT_008016a0;
                do {
                  pcVar32 = pcVar33;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar32 = pcVar33 + 1;
                  cVar29 = *pcVar33;
                  pcVar33 = pcVar32;
                } while (cVar29 != '\0');
                uVar30 = ~uVar30;
                pcVar33 = pcVar32 + -uVar30;
                pcVar32 = local_8;
                for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar32 = *(undefined4 *)pcVar33;
                  pcVar33 = pcVar33 + 4;
                  pcVar32 = pcVar32 + 4;
                }
                for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                  *pcVar32 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  pcVar32 = pcVar32 + 1;
                }
              }
              else {
                pcVar33 = local_8 + 0x4c;
                uVar30 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar17[2] * 0x51;
                do {
                  pcVar32 = pcVar33;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar32 = pcVar33 + 1;
                  cVar29 = *pcVar33;
                  pcVar33 = pcVar32;
                } while (cVar29 != '\0');
                uVar30 = ~uVar30;
                pcVar33 = pcVar32 + -uVar30;
                pcVar32 = local_8;
                for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar32 = *(undefined4 *)pcVar33;
                  pcVar33 = pcVar33 + 4;
                  pcVar32 = pcVar32 + 4;
                }
                for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                  *pcVar32 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  pcVar32 = pcVar32 + 1;
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
          pDVar19 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar36 = local_c < pDVar19->count;
        } while ((int)local_c < (int)pDVar19->count);
      }
      thunk_FUN_0056ee90((AnonShape_0056EE90_04DD57E6 *)&DAT_00807620);
      puVar34 = &DAT_00808ab0;
      for (iVar15 = 0x3a8; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar34 = 0;
        puVar34 = puVar34 + 1;
      }
      DAT_00808aaf = 0;
      pDVar19 = this_00->field_1F84;
      local_c = 0;
      if (0 < (int)pDVar19->count) {
        bVar36 = pDVar19->count != 0;
        do {
          if (bVar36) {
            puVar18 = (undefined1 *)(pDVar19->elementSize * local_c + (int)pDVar19->data);
          }
          else {
            puVar18 = (undefined1 *)0x0;
          }
          if (puVar18 != (undefined1 *)0x0) {
            bVar26 = puVar18[4];
            local_d = bVar26;
            if ((bVar26 != 1) && (bVar26 != 0)) {
              if (bVar26 == 4) {
                iVar15 = *(int *)(puVar18 + 0x50);
                if ((uint)(byte)puVar18[5] < *(uint *)(iVar15 + 0xc)) {
                  pcVar17 = (char *)(*(int *)(iVar15 + 8) * (uint)(byte)puVar18[5] +
                                    *(int *)(iVar15 + 0x1c));
                }
                else {
                  pcVar17 = (char *)0x0;
                }
                if (pcVar17 != (char *)0x0) {
                  uVar30 = 0xffffffff;
                  do {
                    pcVar33 = pcVar17;
                    if (uVar30 == 0) break;
                    uVar30 = uVar30 - 1;
                    pcVar33 = pcVar17 + 1;
                    cVar29 = *pcVar17;
                    pcVar17 = pcVar33;
                  } while (cVar29 != '\0');
                  uVar30 = ~uVar30;
                  pcVar33 = pcVar33 + -uVar30;
                  local_8 = local_164;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar30 = 0xffffffff;
                pcVar17 = puVar18 + 10;
                do {
                  pcVar33 = pcVar17;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar33 = pcVar17 + 1;
                  cVar29 = *pcVar17;
                  pcVar17 = pcVar33;
                } while (cVar29 != '\0');
                uVar30 = ~uVar30;
                pcVar33 = pcVar33 + -uVar30;
                local_8 = local_164;
LAB_005d5b7e:
                pcVar17 = local_164;
                for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar17 = *(undefined4 *)pcVar33;
                  pcVar33 = pcVar33 + 4;
                  pcVar17 = pcVar17 + 4;
                }
                for (uVar30 = uVar30 & 3; local_8 = local_164, uVar30 != 0; uVar30 = uVar30 - 1) {
                  *pcVar17 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  pcVar17 = pcVar17 + 1;
                }
              }
              local_124 = *(undefined4 *)(puVar18 + 6);
              local_120._0_2_ = CONCAT11(*puVar18,puVar18[2]);
              local_11c = this_00->field_0061;
              if (bVar26 == 2) {
                local_120 = CONCAT13(1,CONCAT12(1,(undefined2)local_120));
              }
              else {
                local_120 = CONCAT13(1,CONCAT12((bVar26 != 3) + -1,(undefined2)local_120)) &
                            0xff02ffff;
              }
              pcVar17 = local_164;
              puVar34 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar15 = 0x27; iVar15 != 0; iVar15 = iVar15 + -1) {
                *puVar34 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                puVar34 = puVar34 + 1;
              }
              if ((byte)local_120 < 8) {
                iVar15 = 0;
                do {
                  if ((&DAT_00808800)[iVar15 + (local_120 & 0xff) * 0x51] == '\0') {
                    (&DAT_00808800)[iVar15 + (local_120 & 0xff) * 0x51] = DAT_00808aaf;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          pDVar19 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar36 = local_c < pDVar19->count;
        } while ((int)local_c < (int)pDVar19->count);
      }
      if (this_00->field_1E26 == 6) {
        if ((this_00->field_1F47 == 0) && (*(int *)&param_1->field_0x14 == 0)) {
          iVar15 = this_00->field_1A5B;
          if (*(int *)(iVar15 + 0x2e6) != 0) {
            puVar34 = local_64;
            for (iVar27 = 8; iVar27 != 0; iVar27 = iVar27 + -1) {
              *puVar34 = 0;
              puVar34 = puVar34 + 1;
            }
            puVar34 = local_84;
            for (iVar27 = 8; iVar27 != 0; iVar27 = iVar27 + -1) {
              *puVar34 = 0;
              puVar34 = puVar34 + 1;
            }
            local_7c = this_00->field_0008;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            iVar15 = MMsgTy::SetMessage(*(MMsgTy **)(iVar15 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,(undefined4 *)0x0,0,0);
            if (iVar15 != 0) {
              (*(code *)this_00->field_0000->field_0024)();
            }
          }
        }
        else {
          uVar30 = 0xffffffff;
          DAT_008087a0 = 6;
          pcVar17 = &DAT_00853de4;
          do {
            pcVar33 = pcVar17;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar33 = pcVar17 + 1;
            cVar29 = *pcVar17;
            pcVar17 = pcVar33;
          } while (cVar29 != '\0');
          uVar30 = ~uVar30;
          DAT_00808783 = 2;
          pcVar17 = pcVar33 + -uVar30;
          pcVar33 = &DAT_0080ed16;
          for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar33 = pcVar33 + 4;
          }
          for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pcVar33 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar33 = pcVar33 + 1;
          }
          uVar30 = 0xffffffff;
          pcVar17 = &DAT_0080ed16;
          do {
            pcVar33 = pcVar17;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar33 = pcVar17 + 1;
            cVar29 = *pcVar17;
            pcVar17 = pcVar33;
          } while (cVar29 != '\0');
          uVar30 = ~uVar30;
          pcVar17 = pcVar33 + -uVar30;
          pcVar33 = (char *)&DAT_0080ee1a;
          for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar33 = pcVar33 + 4;
          }
          for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pcVar33 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar33 = pcVar33 + 1;
          }
          uVar30 = 0xffffffff;
          pcVar17 = &DAT_00807680;
          do {
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            cVar29 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar29 != '\0');
          uVar28 = 0xffffffff;
          pcVar17 = (char *)((int)&DAT_0080ed12 + ~uVar30 + 3);
          do {
            pcVar33 = pcVar17;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar33 = pcVar17 + 1;
            cVar29 = *pcVar17;
            pcVar17 = pcVar33;
          } while (cVar29 != '\0');
          uVar28 = ~uVar28;
          pcVar17 = pcVar33 + -uVar28;
          pcVar33 = &DAT_0080ef1e;
          for (uVar30 = uVar28 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar33 = pcVar33 + 4;
          }
          for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
            *pcVar33 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar33 = pcVar33 + 1;
          }
          thunk_FUN_005b6350(this_00,0x6948,0,0);
          this_00->field_0x21e5 = 1;
          this_00->field_0x21e4 = 1;
          this_00->field_21E7 = 1;
          this_00->field_0x21e3 = 1;
          this_00->field_0x21e1 = 1;
          (*(code *)this_00->field_0000->field_0008)();
          pMVar4 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
          if (pMVar4 != (MMsgTy *)0x0) {
            MMsgTy::HidePanel(pMVar4,1,0,1);
          }
        }
      }
      else {
        uVar30 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar17 = &DAT_0080ed16;
        do {
          pcVar33 = pcVar17;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar33 = pcVar17 + 1;
          cVar29 = *pcVar17;
          pcVar17 = pcVar33;
        } while (cVar29 != '\0');
        uVar30 = ~uVar30;
        pcVar17 = pcVar33 + -uVar30;
        pcVar33 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = this_00->field_1E26;
        for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
          *pcVar33 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar33 = pcVar33 + 1;
        }
        uVar30 = 0xffffffff;
        pcVar17 = &DAT_00807680;
        do {
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          cVar29 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar29 != '\0');
        uVar28 = 0xffffffff;
        pcVar17 = (char *)((int)&DAT_0080ed12 + ~uVar30 + 3);
        do {
          pcVar33 = pcVar17;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar33 = pcVar17 + 1;
          cVar29 = *pcVar17;
          pcVar17 = pcVar33;
        } while (cVar29 != '\0');
        uVar28 = ~uVar28;
        pcVar17 = pcVar33 + -uVar28;
        pcVar33 = &DAT_0080ef1e;
        for (uVar30 = uVar28 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *pcVar33 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar33 = pcVar33 + 1;
        }
        thunk_FUN_005b6350(this_00,0x6948,0,0);
        this_00->field_0x21e5 = 1;
        this_00->field_0x21e4 = 1;
        this_00->field_21E7 = 1;
        this_00->field_0x21e2 = 1;
        this_00->field_0x21e1 = 1;
        (*(code *)this_00->field_0000->field_0008)();
        pMVar4 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
        if (pMVar4 != (MMsgTy *)0x0) {
          MMsgTy::HidePanel(pMVar4,1,0,1);
        }
      }
    }
  }
  uVar30 = *(uint *)&param_1->field_0x10;
  if (((0x69fe < uVar30) && (uVar30 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    pDVar19 = this_00->field_1F84;
    local_c = uVar30 - 0x69ff >> 3;
    if ((pDVar19 == (DArrayTy *)0x0) ||
       (uVar28 = this_00->field_1F88 + local_c, pDVar19->count <= uVar28)) {
      local_14 = (AnonShape_005D5560_9031BF1B *)0x0;
    }
    else {
      local_14 = (AnonShape_005D5560_9031BF1B *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data)
      ;
    }
    uVar28 = 0;
    if (local_14 != (AnonShape_005D5560_9031BF1B *)0x0) {
      switch(uVar30 + 1 & 7) {
      case 1:
        uVar28 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar30 = pDVar19->count;
        if (0 < (int)uVar30) {
          bVar36 = uVar30 != 0;
          do {
            if (bVar36) {
              pcVar17 = (char *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
            }
            else {
              pcVar17 = (char *)0x0;
            }
            if ((*pcVar17 != '\0') && (pcVar17[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar17[2]) = 0;
            }
            uVar28 = uVar28 + 1;
            bVar36 = uVar28 < uVar30;
          } while ((int)uVar28 < (int)uVar30);
        }
        bVar26 = local_14->field_0x2;
        iVar15 = this_00->field_1F88 + local_c;
        uVar30 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar26) = 1;
        this_00->field_2179 = iVar15;
        this_00->field_2191 = 0x6503;
        this_00->field_21A1 = 0;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0xff;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        local_8 = (char *)CONCAT31(local_8._1_3_,1);
        do {
          if (*(char *)((int)&local_40 + uVar30) != '\0') {
            this_00->field_1F37 = uVar30;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            if ((byte)local_14->field_0x2 == uVar30) {
              this_00->field_21A1 = (uint)local_8 & 0xff;
            }
            local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
          }
          uVar30 = uVar30 + 1;
        } while ((int)uVar30 < 8);
        this_00->field_21A9 = this_00->field_1E2F->count;
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
        this_00->field_1E2F->count = 0;
        local_28 = 1;
        LoadResourceString(0x23f1,HINSTANCE_00807618);
        uVar30 = 0xffffffff;
        pcVar17 = extraout_EAX;
        do {
          pcVar33 = pcVar17;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar33 = pcVar17 + 1;
          cVar29 = *pcVar17;
          pcVar17 = pcVar33;
        } while (cVar29 != '\0');
        uVar30 = ~uVar30;
        pcVar17 = pcVar33 + -uVar30;
        pcVar33 = &this_00->field_0x1e33;
        for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
          *pcVar33 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar33 = pcVar33 + 1;
        }
        for (puVar21 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar21 != (uint *)0x0; puVar21 = Library::MSVCRT::FUN_0072e560(puVar21,'\n')) {
          *(undefined1 *)puVar21 = 0x20;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        LoadResourceString(0x23f0,HINSTANCE_00807618);
        uVar30 = 0xffffffff;
        pcVar17 = extraout_EAX_00;
        do {
          pcVar33 = pcVar17;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar33 = pcVar17 + 1;
          cVar29 = *pcVar17;
          pcVar17 = pcVar33;
        } while (cVar29 != '\0');
        uVar30 = ~uVar30;
        pcVar17 = pcVar33 + -uVar30;
        pcVar33 = &this_00->field_0x1e33;
        for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
          *pcVar33 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar33 = pcVar33 + 1;
        }
        for (puVar21 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar21 != (uint *)0x0; puVar21 = Library::MSVCRT::FUN_0072e560(puVar21,'\n')) {
          *(undefined1 *)puVar21 = 0x20;
        }
        this_00->field_1F37 = 2;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        uVar30 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar30 = (uint)(local_14->field_0x4 != '\x02');
        }
        if (uVar30 != 0) {
          LoadResourceString(0x23f2,HINSTANCE_00807618);
          uVar30 = 0xffffffff;
          pcVar17 = extraout_EAX_01;
          do {
            pcVar33 = pcVar17;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar33 = pcVar17 + 1;
            cVar29 = *pcVar17;
            pcVar17 = pcVar33;
          } while (cVar29 != '\0');
          uVar30 = ~uVar30;
          pcVar17 = pcVar33 + -uVar30;
          pcVar33 = &this_00->field_0x1e33;
          for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar33 = pcVar33 + 4;
          }
          for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pcVar33 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar33 = pcVar33 + 1;
          }
          for (puVar21 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar21 != (uint *)0x0; puVar21 = Library::MSVCRT::FUN_0072e560(puVar21,'\n')) {
            *(undefined1 *)puVar21 = 0x20;
          }
          this_00->field_1F37 = 3;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        bVar26 = local_14->field_0x3;
        this_00->field_21C5 = 0x143;
        this_00->field_21CD = 0x78;
        this_00->field_21A1 = bVar26 - 1;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar6 = PTR_0081176c->field_0034;
        if (pcVar6->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar6);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
LAB_005d6676:
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &this_00->field_0x2161,0);
        break;
      case 3:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        if (*(char *)local_14 != '\0') {
          uVar30 = 0;
          local_8 = (char *)0x0;
          if ((this_00->field_1E26 == 2) && (local_14->field_0x4 == '\x02')) break;
          pDVar19 = this_00->field_1F84;
          uVar28 = pDVar19->count;
          bVar36 = uVar28 != 0;
          if (0 < (int)uVar28) {
            do {
              if (bVar36) {
                pcVar17 = (char *)(pDVar19->elementSize * uVar30 + (int)pDVar19->data);
              }
              else {
                pcVar17 = (char *)0x0;
              }
              if ((*pcVar17 != '\0') && (pcVar17[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar30 = uVar30 + 1;
              bVar36 = uVar30 < uVar28;
            } while ((int)uVar30 < (int)uVar28);
          }
          if ((this_00->field_1E26 != 2) && (2 < (int)local_8)) {
            LoadResourceString(8000,HINSTANCE_00807618);
            uVar30 = 0xffffffff;
            pcVar17 = extraout_EAX_02;
            do {
              pcVar33 = pcVar17;
              if (uVar30 == 0) break;
              uVar30 = uVar30 - 1;
              pcVar33 = pcVar17 + 1;
              cVar29 = *pcVar17;
              pcVar17 = pcVar33;
            } while (cVar29 != '\0');
            uVar30 = ~uVar30;
            pcVar17 = pcVar33 + -uVar30;
            pcVar33 = &this_00->field_0x1e33;
            for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar33 = pcVar33 + 4;
            }
            for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
              *pcVar33 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar33 = pcVar33 + 1;
            }
            this_00->field_1F37 = 0;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          }
          if (this_00->field_1E26 != 2) {
            bVar36 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar36 = local_14->field_0x3 != '\x03';
            }
            if (bVar36) {
              LoadResourceString(0x1f42,HINSTANCE_00807618);
              uVar30 = 0xffffffff;
              pcVar17 = extraout_EAX_03;
              do {
                pcVar33 = pcVar17;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar33 = pcVar17 + 1;
                cVar29 = *pcVar17;
                pcVar17 = pcVar33;
              } while (cVar29 != '\0');
              uVar30 = ~uVar30;
              pcVar17 = pcVar33 + -uVar30;
              pcVar33 = &this_00->field_0x1e33;
              for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar33 = pcVar33 + 4;
              }
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar33 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar33 = pcVar33 + 1;
              }
              this_00->field_1F37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            }
          }
          local_8 = (char *)0x0;
          pAVar22 = local_14->field_0050;
          pcVar17 = (char *)pAVar22->field_000C;
          if (0 < (int)pcVar17) {
            do {
              if (local_8 < pcVar17) {
                iVar15 = pAVar22->field_0008 * (int)local_8 + pAVar22->field_001C;
              }
              else {
                iVar15 = 0;
              }
              uVar30 = 0xffffffff;
              pcVar17 = (char *)(iVar15 + 0x40);
              do {
                pcVar33 = pcVar17;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar33 = pcVar17 + 1;
                cVar29 = *pcVar17;
                pcVar17 = pcVar33;
              } while (cVar29 != '\0');
              uVar30 = ~uVar30;
              pcVar17 = pcVar33 + -uVar30;
              pcVar33 = &this_00->field_0x1e33;
              for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                pcVar33 = pcVar33 + 4;
              }
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar33 = *pcVar17;
                pcVar17 = pcVar17 + 1;
                pcVar33 = pcVar33 + 1;
              }
              this_00->field_1F37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              local_8 = local_8 + 1;
              pAVar22 = local_14->field_0050;
              pcVar17 = (char *)pAVar22->field_000C;
            } while ((int)local_8 < (int)pcVar17);
          }
        }
        pDVar19 = this_00->field_1E2F;
        uVar30 = 0;
        if (0 < (int)pDVar19->count) {
          bVar36 = pDVar19->count != 0;
          local_28 = (uint)(byte)local_14->field_0x4;
          do {
            if (bVar36) {
              pvVar16 = (void *)(pDVar19->elementSize * uVar30 + (int)pDVar19->data);
            }
            else {
              pvVar16 = (void *)0x0;
            }
            if ((*(uint *)((int)pvVar16 + 0x104) == local_28) &&
               (*(uint *)((int)pvVar16 + 0x108) == (uint)(byte)local_14->field_0x5)) {
              this_00->field_21A1 = uVar30;
              break;
            }
            uVar30 = uVar30 + 1;
            bVar36 = uVar30 < pDVar19->count;
          } while ((int)uVar30 < (int)pDVar19->count);
        }
        dVar5 = pDVar19->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar5;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar6 = PTR_0081176c->field_0034;
        if (pcVar6->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar6);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
        if (1 < (int)this_00->field_21A9) goto LAB_005d6676;
        break;
      case 5:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar30 = pDVar19->count;
          if (0 < (int)uVar30) {
            bVar36 = uVar30 != 0;
            do {
              if (bVar36) {
                pvVar16 = (void *)(pDVar19->elementSize * uVar28 + (int)pDVar19->data);
              }
              else {
                pvVar16 = (void *)0x0;
              }
              if ((pvVar16 != (void *)0x0) && (*(byte *)((int)pvVar16 + 0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)*(byte *)((int)pvVar16 + 0x4a)) = 1;
              }
              uVar28 = uVar28 + 1;
              bVar36 = uVar28 < uVar30;
            } while ((int)uVar28 < (int)uVar30);
          }
          bVar26 = 0;
          iVar15 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar15) != '\0') {
              bVar26 = bVar26 + 1;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 8);
          bVar2 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar26 < bVar2) {
            iVar15 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar15) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar15) = 1;
                bVar26 = bVar26 + 1;
                break;
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < 8);
            goto joined_r0x005d6701;
          }
          uVar30 = 0;
          cVar29 = (char)local_28;
          if (0 < (int)pDVar19->count) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar36 = pDVar19->count != 0;
            do {
              if (bVar36) {
                pcVar17 = (char *)(pDVar19->elementSize * uVar30 + (int)pDVar19->data);
              }
              else {
                pcVar17 = (char *)0x0;
              }
              if (local_2c == (undefined1 *)uVar30) {
LAB_005d6784:
                if ((*pcVar17 != '\0') && ((pcVar17[4] == '\0' || (pcVar17[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar17[0x4a]) = 0;
                }
              }
              else if (*pcVar17 != '\0') {
                if ((pcVar17[4] != '\0') && (pcVar17[4] != '\x01')) {
                  if (local_8 == (char *)0x0) {
                    if (cVar29 != pcVar17[0x4a]) {
                      cVar29 = -1;
                    }
                  }
                  else {
                    cVar29 = pcVar17[0x4a];
                    local_8 = (char *)0x0;
                  }
                }
                goto LAB_005d6784;
              }
              uVar30 = uVar30 + 1;
              bVar36 = uVar30 < pDVar19->count;
            } while ((int)uVar30 < (int)pDVar19->count);
            local_28 = CONCAT31(local_28._1_3_,cVar29);
          }
          if (cVar29 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          uVar30 = 0;
          this_00->field_2171 = 0x6501;
          this_00->field_2179 = this_00->field_1F88 + local_c;
          this_00->field_2191 = 0x6500;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar18 = &uStack_79;
          local_2c = puVar18;
          do {
            iVar15 = uVar30 + 0x41;
            if (puVar18[uVar30 + 0x41] != '\0') {
              LoadResourceString(0x1f4a,HINSTANCE_00807618);
              wsprintfA(&this_00->field_0x1e33,&DAT_007cd508,extraout_EAX_04,iVar15);
              this_00->field_1F37 = uVar30;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              if ((byte)local_14->field_0x4a == uVar30) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
              puVar18 = local_2c;
            }
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < 8);
          SVar1 = this_00->field_1E26;
          this_00->field_21A9 = this_00->field_1E2F->count;
          if (((SVar1 == 6) || (SVar1 == 1)) || (uVar25 = 0x26b, SVar1 == 2)) {
            uVar25 = 0x2ab;
          }
          this_00->field_21C5 = uVar25;
          this_00->field_21CD = 0x46;
          this_00->field_21C9 = local_c * 0x19 + 0x41;
          pcVar6 = PTR_0081176c->field_0034;
          if (pcVar6->field_00A0 != 0) {
            FUN_00710790((uint *)pcVar6);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
          goto LAB_005d619b;
        }
        uVar9 = (uint3)(uVar30 - 0x69ff >> 8);
        uVar30 = CONCAT31(uVar9 >> 3,DAT_0080874d);
        if (DAT_0080874d != 0xff) {
          bVar26 = local_14->field_0x2;
          local_c = CONCAT31(uVar9 >> 3,bVar26);
          if ((bVar26 != 0xff) && (DAT_0080874d != bVar26)) {
            if (local_14->field_0x4 == '\x04') {
              local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar26);
              if (DAT_0080874d == bVar26) {
                uVar25 = 0;
                uVar28 = (uint)bVar26;
              }
              else {
                uVar23 = (uint)DAT_0080874d;
                bVar2 = g_playerRelationMatrix[uVar23][bVar26];
                uVar28 = local_c;
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar26][uVar23] == 0)) {
                  uVar25 = 0xfffffffe;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar26][uVar23] == 0)) {
                  uVar25 = 0xffffffff;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar26][uVar23] == 1)) {
                  uVar25 = 1;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar26][uVar23] == 1)) {
                  uVar25 = 2;
                }
                else {
                  uVar25 = 0;
                }
              }
              switch(uVar25) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar28,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar30,(byte)uVar28,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar30,(byte)uVar28,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar28,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,uVar30,bVar26);
            }
            (*(code *)this_00->field_0000->field_002C)();
          }
        }
      }
    }
  }
  uVar30 = *(uint *)&param_1->field_0x10;
  if (uVar30 < 0x6a7f) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  if (0x6afe < uVar30) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  uVar28 = uVar30 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(uVar30 + 1 & 7);
  piVar7 = *(int **)&param_1->field_0x18;
  local_1c = piVar7[2];
  local_18 = piVar7[3];
  pDVar19 = this_00->field_1F84;
  local_24 = *piVar7 + -0x113;
  local_20 = 0;
  if ((pDVar19 == (DArrayTy *)0x0) ||
     (uVar30 = this_00->field_1F88 + uVar28, pDVar19->count <= uVar30)) {
    pAVar35 = (AnonShape_005CBBE0_2D1CAA09 *)0x0;
  }
  else {
    pAVar35 = (AnonShape_005CBBE0_2D1CAA09 *)(pDVar19->elementSize * uVar30 + (int)pDVar19->data);
  }
  local_28 = uVar28;
  FUN_006b4170((AnonShape_006C7610_838EDECF *)(&this_00->field_20F4)[uVar28],0,*piVar7 + -0x113,0,
               piVar7[2],piVar7[3],0xff);
  if (pAVar35 == (AnonShape_005CBBE0_2D1CAA09 *)0x0) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*(char *)pAVar35 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar28],&local_24,0,
                 (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar35->field_0x2 != -1) {
        switch(pAVar35->field_0x2) {
        case 0:
          uVar13 = 0xfc;
          break;
        case 1:
          uVar13 = 0xfa;
          break;
        case 2:
          uVar13 = 0xfb;
          break;
        case 3:
          uVar13 = 0xf9;
          break;
        case 4:
          uVar13 = 0xfd;
          break;
        case 5:
          uVar13 = 0xfe;
          break;
        case 6:
          uVar13 = 0xf3;
          break;
        case 7:
          uVar13 = 7;
          break;
        default:
          uVar13 = 0xff;
        }
        FUN_006b4170((AnonShape_006C7610_838EDECF *)(&this_00->field_20F4)[uVar28],0,local_24 + 2,
                     local_20 + 2,local_1c + -4,local_18 + -4,uVar13);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar35 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar28],&local_24,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar28],0,local_24,local_20,
                     local_1c,local_18);
    if (pAVar35->field_0x3 == '\x01') {
      pcVar17 = &DAT_007ca250;
LAB_005d6c37:
      uVar30 = 0xffffffff;
      do {
        pcVar33 = pcVar17;
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        pcVar33 = pcVar17 + 1;
        cVar29 = *pcVar17;
        pcVar17 = pcVar33;
      } while (cVar29 != '\0');
      uVar30 = ~uVar30;
      pcVar17 = pcVar33 + -uVar30;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    else {
      if (pAVar35->field_0x3 != '\x02') {
        pcVar17 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar30 = 0xffffffff;
      pcVar17 = &DAT_007ca248;
      do {
        pcVar33 = pcVar17;
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        pcVar33 = pcVar17 + 1;
        cVar29 = *pcVar17;
        pcVar17 = pcVar33;
      } while (cVar29 != '\0');
      uVar30 = ~uVar30;
      pcVar17 = pcVar33 + -uVar30;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar28 = uVar30 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    pSVar12 = PTR_0081176c;
    for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
      *pcVar33 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar33 = pcVar33 + 1;
    }
    ccFntTy::WrStr(pSVar12->field_0034,&DAT_0080f33a,-1,-1,2);
    uVar28 = local_28;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar28],&local_24,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar28],0,local_24,local_20,
                     local_1c,local_18);
    uVar25 = 2;
    iVar38 = -1;
    iVar27 = -1;
    puVar37 = (uint *)&DAT_007c2310;
    iVar15 = local_1c;
    puVar21 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar35);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib((MMObjTy *)this_00,(&this_00->field_20F4)[uVar28],&local_24,2,0x67,0x67);
    if (pAVar35->field_0x4 == '\x02') {
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar28],0,local_24,local_20,
                       local_1c,local_18);
      uVar25 = 2;
      iVar27 = -1;
      iVar15 = -1;
      puVar21 = thunk_FUN_00540c40(PTR_0081176c->field_0034,(uint *)&pAVar35->field_0xa,
                                   (uint *)&DAT_007c7274,local_1c);
      ccFntTy::WrStr(PTR_0081176c->field_0034,puVar21,iVar15,iVar27,uVar25);
      break;
    }
    if (pAVar35->field_0x4 != '\x04') break;
    pDVar19 = pAVar35->field_0050;
    if ((uint)(byte)pAVar35->field_0x5 < pDVar19->count) {
      puVar21 = (uint *)(pDVar19->elementSize * (uint)(byte)pAVar35->field_0x5 + (int)pDVar19->data)
      ;
    }
    else {
      puVar21 = (uint *)0x0;
    }
    if (puVar21 == (uint *)0x0) break;
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar28],0,local_24,local_20,
                     local_1c,local_18);
    uVar25 = 2;
    iVar38 = -1;
    iVar27 = -1;
    puVar37 = (uint *)&DAT_007c7274;
    iVar15 = local_1c;
LAB_005d6d70:
    puVar21 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar21,puVar37,iVar15);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar21,iVar27,iVar38,uVar25);
    break;
  case (undefined1 *)0x5:
    if ((*(char *)pAVar35 != '\0') &&
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar28],&local_24,2,
                   (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67),
       pAVar35->field_0x4 != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar26 = pAVar35->field_0x2, bVar26 != 0xff)) &&
           (DAT_0080874d != bVar26)) {
          local_28 = 0xffffffff;
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar26);
          uVar30 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar30][bVar26];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar26][uVar30] == 0)) {
            uVar25 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar26][uVar30] == 0)) {
            uVar25 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar26][uVar30] == 1)) {
            uVar25 = 1;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar26][uVar30] == 1)) {
            uVar25 = 2;
          }
          else {
            uVar25 = 0;
          }
          switch(uVar25) {
          default:
            iVar15 = -1;
            break;
          case 1:
            iVar15 = 1;
            break;
          case 2:
            iVar15 = 3;
            break;
          case 0xfffffffe:
            iVar15 = 0;
            break;
          case 0xffffffff:
            iVar15 = 2;
          }
          if (-1 < iVar15 + -1) {
            pbVar24 = (byte *)FUN_0070b3a0(*(AnonShape_GLOBAL_0081175C_57F682DD **)
                                            &this_00->field_0x1f4b,iVar15 + -1);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)(&this_00->field_20F4)[uVar28],
                   (local_1c - *(int *)(pbVar24 + 4)) / 2 + local_24,
                   (local_18 - *(int *)(pbVar24 + 8)) / 2 + 1 + local_20,'\x06',pbVar24);
          }
        }
      }
      else {
        iVar15 = (byte)pAVar35->field_0x4a + 0x41;
        LoadResourceString(0x1f4a,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,extraout_EAX_05,iVar15);
        ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar28],0,local_24,local_20
                         ,local_1c,local_18);
        ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0(DAT_008075a8,(&this_00->field_20CC)[uVar28]);
  if (*(short *)&param_1->field_0x14 == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}


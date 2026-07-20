
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::GetMessage */

undefined4 __thiscall SettMapSTy::GetMessage(SettMapSTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  byte bVar1;
  DArrayTy *pDVar2;
  MMsgTy *pMVar3;
  dword dVar4;
  ccFntTy *pcVar5;
  int *piVar6;
  code *pcVar7;
  uint3 uVar8;
  char cVar9;
  char cVar10;
  StartSystemTy *pSVar11;
  SettMapTy *this_00;
  undefined1 uVar12;
  DWORD DVar13;
  int iVar14;
  void *pvVar15;
  char *pcVar16;
  undefined1 *puVar17;
  DArrayTy *pDVar18;
  void *pvVar19;
  uint *puVar20;
  AnonNested_005D5560_0050_EBFA0A51 *pAVar21;
  uint uVar22;
  byte *pbVar23;
  undefined4 uVar24;
  byte bVar25;
  int iVar26;
  uint uVar27;
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
  DVar13 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar13;
  local_c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c8;
  iVar14 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar14 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    iVar26 = ReportDebugMessage(s_E____titans_Start_settsobj_cpp_007cd544,0x27d,0,iVar14,
                                &DAT_007a4ccc,s_SettMapSTy__GetMessage_007cd5a8);
    if (iVar26 != 0) {
      pcVar7 = (code *)swi(3);
      uVar24 = (*pcVar7)();
      return uVar24;
    }
    RaiseInternalException(iVar14,0,s_E____titans_Start_settsobj_cpp_007cd544,0x27d);
    return 0xffff;
  }
  SettMapTy::GetMessage(local_44,param_1);
  uVar30 = *(uint *)&param_1->field_0x10;
  if (uVar30 < 0x6505) {
    if (uVar30 == 0x6504) {
      uVar30 = *(uint *)&param_1->field_0x14;
      if ((uVar30 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != (DArrayTy *)0x0)) {
        pDVar2 = this_00->field_1E2F;
        if (uVar30 < pDVar2->count) {
          pvVar15 = (void *)(pDVar2->elementSize * uVar30 + (int)pDVar2->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar15 + 0x104);
        if (*(uint *)&param_1->field_0x18 < pDVar18->count) {
          pvVar15 = (void *)(pDVar18->elementSize * *(uint *)&param_1->field_0x18 +
                            (int)pDVar18->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        if (pvVar15 != (void *)0x0) {
          *(char *)((int)pvVar15 + 3) = cVar29;
        }
        pDVar18 = this_00->field_1F84;
        uVar30 = *(int *)&param_1->field_0x18 + 1;
        bVar36 = uVar30 < pDVar18->count;
        if ((int)uVar30 < (int)pDVar18->count) {
          do {
            if (bVar36) {
              pcVar16 = (char *)(pDVar18->elementSize * uVar30 + (int)pDVar18->data);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((pcVar16 == (char *)0x0) || (*pcVar16 != '\0')) break;
            pcVar16[3] = cVar29;
            pDVar18 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar36 = uVar30 < pDVar18->count;
          } while ((int)uVar30 < (int)pDVar18->count);
        }
        (*(code *)this_00->field_0000->field_002C)();
      }
    }
    else if (uVar30 == 0x6501) {
      uVar30 = *(uint *)&param_1->field_0x14;
      if ((uVar30 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != (DArrayTy *)0x0)) {
        pDVar2 = this_00->field_1E2F;
        if (uVar30 < pDVar2->count) {
          pvVar15 = (void *)(pDVar2->elementSize * uVar30 + (int)pDVar2->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar15 + 0x104);
        if (*(uint *)&param_1->field_0x18 < pDVar18->count) {
          pvVar15 = (void *)(pDVar18->elementSize * *(uint *)&param_1->field_0x18 +
                            (int)pDVar18->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        if (pvVar15 != (void *)0x0) {
          *(char *)((int)pvVar15 + 0x4a) = cVar29;
        }
        pDVar18 = this_00->field_1F84;
        uVar30 = *(int *)&param_1->field_0x18 + 1;
        bVar36 = uVar30 < pDVar18->count;
        if ((int)uVar30 < (int)pDVar18->count) {
          do {
            if (bVar36) {
              pcVar16 = (char *)(pDVar18->elementSize * uVar30 + (int)pDVar18->data);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((pcVar16 == (char *)0x0) || (*pcVar16 != '\0')) break;
            pcVar16[0x4a] = cVar29;
            pDVar18 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar36 = uVar30 < pDVar18->count;
          } while ((int)uVar30 < (int)pDVar18->count);
        }
        (*(code *)this_00->field_0000->field_002C)();
      }
    }
    else if (((uVar30 == 0x6502) && (uVar30 = *(uint *)&param_1->field_0x14, uVar30 != 0xffffffff))
            && (pDVar18 = this_00->field_1F84, pDVar18 != (DArrayTy *)0x0)) {
      pDVar2 = this_00->field_1E2F;
      if (uVar30 < pDVar2->count) {
        pvVar15 = (void *)(pDVar2->elementSize * uVar30 + (int)pDVar2->data);
      }
      else {
        pvVar15 = (void *)0x0;
      }
      local_d = *(byte *)((int)pvVar15 + 0x104);
      if (*(uint *)&param_1->field_0x18 < pDVar18->count) {
        pvVar15 = (void *)(pDVar18->elementSize * *(uint *)&param_1->field_0x18 + (int)pDVar18->data
                          );
      }
      else {
        pvVar15 = (void *)0x0;
      }
      if (pvVar15 != (void *)0x0) {
        if (*(byte *)((int)pvVar15 + 2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar15 + 2));
        }
        *(byte *)((int)pvVar15 + 2) = local_d;
        if (*(char *)((int)pvVar15 + 4) == '\x02') {
          DAT_0080874d = local_d;
        }
        pDVar18 = this_00->field_1F84;
        uVar30 = *(int *)&param_1->field_0x18 + 1;
        bVar36 = uVar30 < pDVar18->count;
        if ((int)uVar30 < (int)pDVar18->count) {
          do {
            if (bVar36) {
              pcVar16 = (char *)(pDVar18->elementSize * uVar30 + (int)pDVar18->data);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((pcVar16 == (char *)0x0) || (*pcVar16 != '\0')) break;
            pcVar16[2] = local_d;
            pDVar18 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar36 = uVar30 < pDVar18->count;
          } while ((int)uVar30 < (int)pDVar18->count);
        }
        (*(code *)this_00->field_0000->field_002C)();
        goto LAB_005d5ff8;
      }
    }
  }
  else if (uVar30 == 0x6505) {
    uVar30 = *(uint *)&param_1->field_0x14;
    if ((uVar30 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != (DArrayTy *)0x0)) {
      pDVar2 = this_00->field_1E2F;
      if (uVar30 < pDVar2->count) {
        pvVar15 = (void *)(pDVar2->elementSize * uVar30 + (int)pDVar2->data);
      }
      else {
        pvVar15 = (void *)0x0;
      }
      uVar30 = pDVar18->count;
      if (*(uint *)&param_1->field_0x18 < uVar30) {
        pvVar19 = (void *)(pDVar18->elementSize * *(uint *)&param_1->field_0x18 + (int)pDVar18->data
                          );
      }
      else {
        pvVar19 = (void *)0x0;
      }
      if (pvVar19 != (void *)0x0) {
        if ((*(int *)((int)pvVar15 + 0x104) == 2) && (uVar27 = 0, 0 < (int)uVar30)) {
          bVar36 = uVar30 != 0;
          do {
            if (bVar36) {
              pvVar19 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
            }
            else {
              pvVar19 = (void *)0x0;
            }
            if ((pvVar19 != (void *)0x0) && (*(char *)((int)pvVar19 + 4) == '\x02')) {
              cVar29 = this_00->field_1E26;
              if ((cVar29 == '\x06') || ((cVar29 == '\x01' || (cVar29 == '\x02')))) {
                *(undefined1 *)((int)pvVar19 + 4) = 4;
                *(undefined1 *)((int)pvVar19 + 5) = 0;
              }
              else {
                *(undefined1 *)((int)pvVar19 + 4) = 1;
              }
              break;
            }
            uVar27 = uVar27 + 1;
            bVar36 = uVar27 < uVar30;
          } while ((int)uVar27 < (int)uVar30);
        }
        pDVar18 = this_00->field_1F84;
        if (*(uint *)&param_1->field_0x18 < pDVar18->count) {
          pvVar19 = (void *)(pDVar18->elementSize * *(uint *)&param_1->field_0x18 +
                            (int)pDVar18->data);
        }
        else {
          pvVar19 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar15 + 0x104);
        *(char *)((int)pvVar19 + 4) = cVar29;
        *(undefined1 *)((int)pvVar19 + 5) = *(undefined1 *)((int)pvVar15 + 0x108);
        if (cVar29 == '\0') {
          if (*(byte *)((int)pvVar19 + 2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar19 + 2));
          }
          *(undefined1 *)((int)pvVar19 + 2) = 0xff;
        }
        DAT_0080874d = 0xff;
        pDVar18 = this_00->field_1F84;
        uVar27 = 0;
        uVar30 = pDVar18->count;
        if (0 < (int)uVar30) {
          bVar36 = uVar30 != 0;
          do {
            if (bVar36) {
              pvVar15 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
            }
            else {
              pvVar15 = (void *)0x0;
            }
            if (((pvVar15 != (void *)0x0) && (*(char *)((int)pvVar15 + 4) == '\x02')) &&
               (*(int *)((int)pvVar15 + 6) == DAT_0080877f)) {
              DAT_0080874d = *(byte *)((int)pvVar15 + 2);
              break;
            }
            uVar27 = uVar27 + 1;
            bVar36 = uVar27 < uVar30;
          } while ((int)uVar27 < (int)uVar30);
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
      for (iVar14 = 0xa2; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar34 = 0;
        puVar34 = puVar34 + 1;
      }
      puVar17 = &DAT_008087e9;
      do {
        puVar17[-1] = 0;
        *puVar17 = 0xff;
        puVar17 = puVar17 + 0x51;
      } while ((int)puVar17 < 0x808a71);
      pDVar18 = this_00->field_1F84;
      uVar27 = 0;
      uVar30 = pDVar18->count;
      if (0 < (int)uVar30) {
        bVar36 = uVar30 != 0;
        do {
          if (bVar36) {
            pcVar16 = (char *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
          }
          else {
            pcVar16 = (char *)0x0;
          }
          if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) && (pcVar16[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar16[2]) = 0;
          }
          uVar27 = uVar27 + 1;
          bVar36 = uVar27 < uVar30;
        } while ((int)uVar27 < (int)uVar30);
      }
      local_c = 0;
      if (0 < (int)uVar30) {
        bVar36 = uVar30 != 0;
        do {
          if (bVar36) {
            pcVar16 = (char *)(pDVar18->elementSize * local_c + (int)pDVar18->data);
          }
          else {
            pcVar16 = (char *)0x0;
          }
          if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) &&
             ((pcVar16[4] != '\0' && ((pcVar16[4] != '\x01' || (this_00->field_1E26 == '\x02'))))))
          {
            iVar14 = *(int *)(pcVar16 + 0x50);
            if ((uint)(byte)pcVar16[5] < *(uint *)(iVar14 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar14 + 8) * (uint)(byte)pcVar16[5] +
                                *(int *)(iVar14 + 0x1c));
            }
            else {
              local_8 = (char *)0x0;
            }
            DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
            if (pcVar16[2] == -1) {
              iVar14 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar14) != '\0') {
                  pcVar16[2] = (char)iVar14;
                  *(undefined1 *)((int)&local_30 + iVar14) = 0;
                  break;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < 8);
            }
            (&DAT_008087e9)[(uint)(byte)pcVar16[2] * 0x51] = pcVar16[2];
            (&DAT_008087e8)[(uint)(byte)pcVar16[2] * 0x51] = pcVar16[3];
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
                       (&DAT_008087c8 + (uint)(byte)pcVar16[2] * 0x51);
            pcVar33 = pcVar32 + -uVar30;
            pAVar31 = (AnonShape_005D5560_9031BF1B *)(&DAT_008087c8 + (uint)(byte)pcVar16[2] * 0x51)
            ;
            for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
              cVar29 = pcVar33[1];
              cVar9 = pcVar33[2];
              cVar10 = pcVar33[3];
              pAVar31->field_0x0 = pcVar33[0];
              pAVar31->field_0x1 = cVar29;
              pAVar31->field_0x2 = cVar9;
              pAVar31->field_0x3 = cVar10;
              pcVar33 = pcVar33 + 4;
              pAVar31 = (AnonShape_005D5560_9031BF1B *)&pAVar31->field_0x4;
            }
            for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
              *(char *)pAVar31 = *pcVar33;
              pcVar33 = pcVar33 + 1;
              pAVar31 = (AnonShape_005D5560_9031BF1B *)&pAVar31->field_0x1;
            }
            if (pcVar16[4] == '\x02') {
              if (*pcVar16 != '\0') {
                *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar16[2] * 0x51 + 3) = 0;
                DAT_0080874d = pcVar16[2];
                DAT_0080874e = pcVar16[3];
              }
            }
            else if (pcVar16[4] == '\x04') {
              *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar16[2] * 0x51 + 3) = 1;
              if (local_8 == (char *)0x0) {
                uVar30 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar16[2] * 0x51;
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
                for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
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
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar16[2] * 0x51;
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
                for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
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
            (&DAT_008087ea)[(uint)(byte)pcVar16[2] * 0x51] = pcVar16[0x4a];
            *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar16[2] * 0x51) =
                 *(undefined4 *)(pcVar16 + 0x54);
            *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar16[2] * 0x51) =
                 *(undefined4 *)(pcVar16 + 0x58);
            *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar16[2] * 0x51) =
                 *(undefined4 *)(pcVar16 + 0x5c);
          }
          pDVar18 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar36 = local_c < pDVar18->count;
        } while ((int)local_c < (int)pDVar18->count);
      }
      thunk_FUN_0056ee90((AnonShape_0056EE90_04DD57E6 *)&DAT_00807620);
      puVar34 = &DAT_00808ab0;
      for (iVar14 = 0x3a8; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar34 = 0;
        puVar34 = puVar34 + 1;
      }
      DAT_00808aaf = 0;
      pDVar18 = this_00->field_1F84;
      local_c = 0;
      if (0 < (int)pDVar18->count) {
        bVar36 = pDVar18->count != 0;
        do {
          if (bVar36) {
            puVar17 = (undefined1 *)(pDVar18->elementSize * local_c + (int)pDVar18->data);
          }
          else {
            puVar17 = (undefined1 *)0x0;
          }
          if (puVar17 != (undefined1 *)0x0) {
            bVar25 = puVar17[4];
            local_d = bVar25;
            if ((bVar25 != 1) && (bVar25 != 0)) {
              if (bVar25 == 4) {
                iVar14 = *(int *)(puVar17 + 0x50);
                if ((uint)(byte)puVar17[5] < *(uint *)(iVar14 + 0xc)) {
                  pcVar16 = (char *)(*(int *)(iVar14 + 8) * (uint)(byte)puVar17[5] +
                                    *(int *)(iVar14 + 0x1c));
                }
                else {
                  pcVar16 = (char *)0x0;
                }
                if (pcVar16 != (char *)0x0) {
                  uVar30 = 0xffffffff;
                  do {
                    pcVar33 = pcVar16;
                    if (uVar30 == 0) break;
                    uVar30 = uVar30 - 1;
                    pcVar33 = pcVar16 + 1;
                    cVar29 = *pcVar16;
                    pcVar16 = pcVar33;
                  } while (cVar29 != '\0');
                  uVar30 = ~uVar30;
                  pcVar33 = pcVar33 + -uVar30;
                  local_8 = local_164;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar30 = 0xffffffff;
                pcVar16 = puVar17 + 10;
                do {
                  pcVar33 = pcVar16;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar33 = pcVar16 + 1;
                  cVar29 = *pcVar16;
                  pcVar16 = pcVar33;
                } while (cVar29 != '\0');
                uVar30 = ~uVar30;
                pcVar33 = pcVar33 + -uVar30;
                local_8 = local_164;
LAB_005d5b7e:
                pcVar16 = local_164;
                for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                  *(undefined4 *)pcVar16 = *(undefined4 *)pcVar33;
                  pcVar33 = pcVar33 + 4;
                  pcVar16 = pcVar16 + 4;
                }
                for (uVar30 = uVar30 & 3; local_8 = local_164, uVar30 != 0; uVar30 = uVar30 - 1) {
                  *pcVar16 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  pcVar16 = pcVar16 + 1;
                }
              }
              local_124 = *(undefined4 *)(puVar17 + 6);
              local_120._0_2_ = CONCAT11(*puVar17,puVar17[2]);
              local_11c = this_00->field_0061;
              if (bVar25 == 2) {
                local_120 = CONCAT13(1,CONCAT12(1,(undefined2)local_120));
              }
              else {
                local_120 = CONCAT13(1,CONCAT12((bVar25 != 3) + -1,(undefined2)local_120)) &
                            0xff02ffff;
              }
              pcVar16 = local_164;
              puVar34 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar14 = 0x27; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar34 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                puVar34 = puVar34 + 1;
              }
              if ((byte)local_120 < 8) {
                iVar14 = 0;
                do {
                  if ((&DAT_00808800)[iVar14 + (local_120 & 0xff) * 0x51] == '\0') {
                    (&DAT_00808800)[iVar14 + (local_120 & 0xff) * 0x51] = DAT_00808aaf;
                    break;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          pDVar18 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar36 = local_c < pDVar18->count;
        } while ((int)local_c < (int)pDVar18->count);
      }
      if (this_00->field_1E26 == '\x06') {
        if ((this_00->field_1F47 == 0) && (*(int *)&param_1->field_0x14 == 0)) {
          iVar14 = this_00->field_1A5B;
          if (*(int *)(iVar14 + 0x2e6) != 0) {
            puVar34 = local_64;
            for (iVar26 = 8; iVar26 != 0; iVar26 = iVar26 + -1) {
              *puVar34 = 0;
              puVar34 = puVar34 + 1;
            }
            puVar34 = local_84;
            for (iVar26 = 8; iVar26 != 0; iVar26 = iVar26 + -1) {
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
            iVar14 = MMsgTy::SetMessage(*(MMsgTy **)(iVar14 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,(undefined4 *)0x0,0,0);
            if (iVar14 != 0) {
              (*(code *)this_00->field_0000->field_0024)();
            }
          }
        }
        else {
          uVar30 = 0xffffffff;
          DAT_008087a0 = '\x06';
          pcVar16 = &DAT_00853de4;
          do {
            pcVar33 = pcVar16;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar33 = pcVar16 + 1;
            cVar29 = *pcVar16;
            pcVar16 = pcVar33;
          } while (cVar29 != '\0');
          uVar30 = ~uVar30;
          DAT_00808783 = 2;
          pcVar16 = pcVar33 + -uVar30;
          pcVar33 = &DAT_0080ed16;
          for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar33 = pcVar33 + 4;
          }
          for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pcVar33 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar33 = pcVar33 + 1;
          }
          uVar30 = 0xffffffff;
          pcVar16 = &DAT_0080ed16;
          do {
            pcVar33 = pcVar16;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar33 = pcVar16 + 1;
            cVar29 = *pcVar16;
            pcVar16 = pcVar33;
          } while (cVar29 != '\0');
          uVar30 = ~uVar30;
          pcVar16 = pcVar33 + -uVar30;
          pcVar33 = (char *)&DAT_0080ee1a;
          for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar33 = pcVar33 + 4;
          }
          for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pcVar33 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar33 = pcVar33 + 1;
          }
          uVar30 = 0xffffffff;
          pcVar16 = &DAT_00807680;
          do {
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            cVar29 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar29 != '\0');
          uVar27 = 0xffffffff;
          pcVar16 = (char *)((int)&DAT_0080ed12 + ~uVar30 + 3);
          do {
            pcVar33 = pcVar16;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar33 = pcVar16 + 1;
            cVar29 = *pcVar16;
            pcVar16 = pcVar33;
          } while (cVar29 != '\0');
          uVar27 = ~uVar27;
          pcVar16 = pcVar33 + -uVar27;
          pcVar33 = &DAT_0080ef1e;
          for (uVar30 = uVar27 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar33 = pcVar33 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar33 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar33 = pcVar33 + 1;
          }
          thunk_FUN_005b6350(this_00,0x6948,0,0);
          this_00->field_0x21e5 = 1;
          this_00->field_0x21e4 = 1;
          this_00->field_21E7 = 1;
          this_00->field_0x21e3 = 1;
          this_00->field_0x21e1 = 1;
          (*(code *)this_00->field_0000->field_0008)();
          pMVar3 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
          if (pMVar3 != (MMsgTy *)0x0) {
            MMsgTy::HidePanel(pMVar3,1,0,1);
          }
        }
      }
      else {
        uVar30 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar16 = &DAT_0080ed16;
        do {
          pcVar33 = pcVar16;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar33 = pcVar16 + 1;
          cVar29 = *pcVar16;
          pcVar16 = pcVar33;
        } while (cVar29 != '\0');
        uVar30 = ~uVar30;
        pcVar16 = pcVar33 + -uVar30;
        pcVar33 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = this_00->field_1E26;
        for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
          *pcVar33 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar33 = pcVar33 + 1;
        }
        uVar30 = 0xffffffff;
        pcVar16 = &DAT_00807680;
        do {
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          cVar29 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar29 != '\0');
        uVar27 = 0xffffffff;
        pcVar16 = (char *)((int)&DAT_0080ed12 + ~uVar30 + 3);
        do {
          pcVar33 = pcVar16;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar33 = pcVar16 + 1;
          cVar29 = *pcVar16;
          pcVar16 = pcVar33;
        } while (cVar29 != '\0');
        uVar27 = ~uVar27;
        pcVar16 = pcVar33 + -uVar27;
        pcVar33 = &DAT_0080ef1e;
        for (uVar30 = uVar27 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
          *pcVar33 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar33 = pcVar33 + 1;
        }
        thunk_FUN_005b6350(this_00,0x6948,0,0);
        this_00->field_0x21e5 = 1;
        this_00->field_0x21e4 = 1;
        this_00->field_21E7 = 1;
        this_00->field_0x21e2 = 1;
        this_00->field_0x21e1 = 1;
        (*(code *)this_00->field_0000->field_0008)();
        pMVar3 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
        if (pMVar3 != (MMsgTy *)0x0) {
          MMsgTy::HidePanel(pMVar3,1,0,1);
        }
      }
    }
  }
  uVar30 = *(uint *)&param_1->field_0x10;
  if (((0x69fe < uVar30) && (uVar30 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    pDVar18 = this_00->field_1F84;
    local_c = uVar30 - 0x69ff >> 3;
    if ((pDVar18 == (DArrayTy *)0x0) ||
       (uVar27 = this_00->field_1F88 + local_c, pDVar18->count <= uVar27)) {
      local_14 = (AnonShape_005D5560_9031BF1B *)0x0;
    }
    else {
      local_14 = (AnonShape_005D5560_9031BF1B *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data)
      ;
    }
    uVar27 = 0;
    if (local_14 != (AnonShape_005D5560_9031BF1B *)0x0) {
      switch(uVar30 + 1 & 7) {
      case 1:
        uVar27 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar30 = pDVar18->count;
        if (0 < (int)uVar30) {
          bVar36 = uVar30 != 0;
          do {
            if (bVar36) {
              pcVar16 = (char *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((*pcVar16 != '\0') && (pcVar16[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar16[2]) = 0;
            }
            uVar27 = uVar27 + 1;
            bVar36 = uVar27 < uVar30;
          } while ((int)uVar27 < (int)uVar30);
        }
        bVar25 = local_14->field_0x2;
        iVar14 = this_00->field_1F88 + local_c;
        uVar30 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar25) = 1;
        this_00->field_2179 = iVar14;
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
        pcVar16 = (char *)FUN_006b0140(0x23f1,HINSTANCE_00807618);
        uVar30 = 0xffffffff;
        do {
          pcVar33 = pcVar16;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar33 = pcVar16 + 1;
          cVar29 = *pcVar16;
          pcVar16 = pcVar33;
        } while (cVar29 != '\0');
        uVar30 = ~uVar30;
        pcVar16 = pcVar33 + -uVar30;
        pcVar33 = &this_00->field_0x1e33;
        for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
          *pcVar33 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar33 = pcVar33 + 1;
        }
        for (puVar20 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar20 != (uint *)0x0; puVar20 = Library::MSVCRT::FUN_0072e560(puVar20,'\n')) {
          *(undefined1 *)puVar20 = 0x20;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        pcVar16 = (char *)FUN_006b0140(0x23f0,HINSTANCE_00807618);
        uVar30 = 0xffffffff;
        do {
          pcVar33 = pcVar16;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar33 = pcVar16 + 1;
          cVar29 = *pcVar16;
          pcVar16 = pcVar33;
        } while (cVar29 != '\0');
        uVar30 = ~uVar30;
        pcVar16 = pcVar33 + -uVar30;
        pcVar33 = &this_00->field_0x1e33;
        for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
          *pcVar33 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar33 = pcVar33 + 1;
        }
        for (puVar20 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar20 != (uint *)0x0; puVar20 = Library::MSVCRT::FUN_0072e560(puVar20,'\n')) {
          *(undefined1 *)puVar20 = 0x20;
        }
        this_00->field_1F37 = 2;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        uVar30 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar30 = (uint)(local_14->field_0x4 != '\x02');
        }
        if (uVar30 != 0) {
          pcVar16 = (char *)FUN_006b0140(0x23f2,HINSTANCE_00807618);
          uVar30 = 0xffffffff;
          do {
            pcVar33 = pcVar16;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar33 = pcVar16 + 1;
            cVar29 = *pcVar16;
            pcVar16 = pcVar33;
          } while (cVar29 != '\0');
          uVar30 = ~uVar30;
          pcVar16 = pcVar33 + -uVar30;
          pcVar33 = &this_00->field_0x1e33;
          for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar33 = pcVar33 + 4;
          }
          for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pcVar33 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar33 = pcVar33 + 1;
          }
          for (puVar20 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar20 != (uint *)0x0; puVar20 = Library::MSVCRT::FUN_0072e560(puVar20,'\n')) {
            *(undefined1 *)puVar20 = 0x20;
          }
          this_00->field_1F37 = 3;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        bVar25 = local_14->field_0x3;
        this_00->field_21C5 = 0x143;
        this_00->field_21CD = 0x78;
        this_00->field_21A1 = bVar25 - 1;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar5 = PTR_0081176c->field_0034;
        if (pcVar5->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar5);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
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
          if ((this_00->field_1E26 == '\x02') && (local_14->field_0x4 == '\x02')) break;
          pDVar18 = this_00->field_1F84;
          uVar27 = pDVar18->count;
          bVar36 = uVar27 != 0;
          if (0 < (int)uVar27) {
            do {
              if (bVar36) {
                pcVar16 = (char *)(pDVar18->elementSize * uVar30 + (int)pDVar18->data);
              }
              else {
                pcVar16 = (char *)0x0;
              }
              if ((*pcVar16 != '\0') && (pcVar16[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar30 = uVar30 + 1;
              bVar36 = uVar30 < uVar27;
            } while ((int)uVar30 < (int)uVar27);
          }
          if ((this_00->field_1E26 != '\x02') && (2 < (int)local_8)) {
            pcVar16 = (char *)FUN_006b0140(8000,HINSTANCE_00807618);
            uVar30 = 0xffffffff;
            do {
              pcVar33 = pcVar16;
              if (uVar30 == 0) break;
              uVar30 = uVar30 - 1;
              pcVar33 = pcVar16 + 1;
              cVar29 = *pcVar16;
              pcVar16 = pcVar33;
            } while (cVar29 != '\0');
            uVar30 = ~uVar30;
            pcVar16 = pcVar33 + -uVar30;
            pcVar33 = &this_00->field_0x1e33;
            for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
              *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              pcVar33 = pcVar33 + 4;
            }
            for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
              *pcVar33 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar33 = pcVar33 + 1;
            }
            this_00->field_1F37 = 0;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          }
          if (this_00->field_1E26 != '\x02') {
            bVar36 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar36 = local_14->field_0x3 != '\x03';
            }
            if (bVar36) {
              pcVar16 = (char *)FUN_006b0140(0x1f42,HINSTANCE_00807618);
              uVar30 = 0xffffffff;
              do {
                pcVar33 = pcVar16;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar33 = pcVar16 + 1;
                cVar29 = *pcVar16;
                pcVar16 = pcVar33;
              } while (cVar29 != '\0');
              uVar30 = ~uVar30;
              pcVar16 = pcVar33 + -uVar30;
              pcVar33 = &this_00->field_0x1e33;
              for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                pcVar33 = pcVar33 + 4;
              }
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar33 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                pcVar33 = pcVar33 + 1;
              }
              this_00->field_1F37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            }
          }
          local_8 = (char *)0x0;
          pAVar21 = local_14->field_0050;
          pcVar16 = (char *)pAVar21->field_000C;
          if (0 < (int)pcVar16) {
            do {
              if (local_8 < pcVar16) {
                iVar14 = pAVar21->field_0008 * (int)local_8 + pAVar21->field_001C;
              }
              else {
                iVar14 = 0;
              }
              uVar30 = 0xffffffff;
              pcVar16 = (char *)(iVar14 + 0x40);
              do {
                pcVar33 = pcVar16;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar33 = pcVar16 + 1;
                cVar29 = *pcVar16;
                pcVar16 = pcVar33;
              } while (cVar29 != '\0');
              uVar30 = ~uVar30;
              pcVar16 = pcVar33 + -uVar30;
              pcVar33 = &this_00->field_0x1e33;
              for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                pcVar33 = pcVar33 + 4;
              }
              for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                *pcVar33 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                pcVar33 = pcVar33 + 1;
              }
              this_00->field_1F37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              local_8 = local_8 + 1;
              pAVar21 = local_14->field_0050;
              pcVar16 = (char *)pAVar21->field_000C;
            } while ((int)local_8 < (int)pcVar16);
          }
        }
        pDVar18 = this_00->field_1E2F;
        uVar30 = 0;
        if (0 < (int)pDVar18->count) {
          bVar36 = pDVar18->count != 0;
          local_28 = (uint)(byte)local_14->field_0x4;
          do {
            if (bVar36) {
              pvVar15 = (void *)(pDVar18->elementSize * uVar30 + (int)pDVar18->data);
            }
            else {
              pvVar15 = (void *)0x0;
            }
            if ((*(uint *)((int)pvVar15 + 0x104) == local_28) &&
               (*(uint *)((int)pvVar15 + 0x108) == (uint)(byte)local_14->field_0x5)) {
              this_00->field_21A1 = uVar30;
              break;
            }
            uVar30 = uVar30 + 1;
            bVar36 = uVar30 < pDVar18->count;
          } while ((int)uVar30 < (int)pDVar18->count);
        }
        dVar4 = pDVar18->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar4;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar5 = PTR_0081176c->field_0034;
        if (pcVar5->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar5);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
        if (1 < (int)this_00->field_21A9) goto LAB_005d6676;
        break;
      case 5:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar30 = pDVar18->count;
          if (0 < (int)uVar30) {
            bVar36 = uVar30 != 0;
            do {
              if (bVar36) {
                pvVar15 = (void *)(pDVar18->elementSize * uVar27 + (int)pDVar18->data);
              }
              else {
                pvVar15 = (void *)0x0;
              }
              if ((pvVar15 != (void *)0x0) && (*(byte *)((int)pvVar15 + 0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)*(byte *)((int)pvVar15 + 0x4a)) = 1;
              }
              uVar27 = uVar27 + 1;
              bVar36 = uVar27 < uVar30;
            } while ((int)uVar27 < (int)uVar30);
          }
          bVar25 = 0;
          iVar14 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar14) != '\0') {
              bVar25 = bVar25 + 1;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < 8);
          bVar1 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar25 < bVar1) {
            iVar14 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar14) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar14) = 1;
                bVar25 = bVar25 + 1;
                break;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < 8);
            goto joined_r0x005d6701;
          }
          uVar30 = 0;
          cVar29 = (char)local_28;
          if (0 < (int)pDVar18->count) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar36 = pDVar18->count != 0;
            do {
              if (bVar36) {
                pcVar16 = (char *)(pDVar18->elementSize * uVar30 + (int)pDVar18->data);
              }
              else {
                pcVar16 = (char *)0x0;
              }
              if (local_2c == (undefined1 *)uVar30) {
LAB_005d6784:
                if ((*pcVar16 != '\0') && ((pcVar16[4] == '\0' || (pcVar16[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar16[0x4a]) = 0;
                }
              }
              else if (*pcVar16 != '\0') {
                if ((pcVar16[4] != '\0') && (pcVar16[4] != '\x01')) {
                  if (local_8 == (char *)0x0) {
                    if (cVar29 != pcVar16[0x4a]) {
                      cVar29 = -1;
                    }
                  }
                  else {
                    cVar29 = pcVar16[0x4a];
                    local_8 = (char *)0x0;
                  }
                }
                goto LAB_005d6784;
              }
              uVar30 = uVar30 + 1;
              bVar36 = uVar30 < pDVar18->count;
            } while ((int)uVar30 < (int)pDVar18->count);
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
          puVar17 = &uStack_79;
          local_2c = puVar17;
          do {
            iVar14 = uVar30 + 0x41;
            if (puVar17[uVar30 + 0x41] != '\0') {
              uVar24 = FUN_006b0140(0x1f4a,HINSTANCE_00807618);
              wsprintfA(&this_00->field_0x1e33,&DAT_007cd508,uVar24,iVar14);
              this_00->field_1F37 = uVar30;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              if ((byte)local_14->field_0x4a == uVar30) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
              puVar17 = local_2c;
            }
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < 8);
          cVar29 = this_00->field_1E26;
          this_00->field_21A9 = this_00->field_1E2F->count;
          if (((cVar29 == '\x06') || (cVar29 == '\x01')) || (uVar24 = 0x26b, cVar29 == '\x02')) {
            uVar24 = 0x2ab;
          }
          this_00->field_21C5 = uVar24;
          this_00->field_21CD = 0x46;
          this_00->field_21C9 = local_c * 0x19 + 0x41;
          pcVar5 = PTR_0081176c->field_0034;
          if (pcVar5->field_00A0 != 0) {
            FUN_00710790((uint *)pcVar5);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
          goto LAB_005d619b;
        }
        uVar8 = (uint3)(uVar30 - 0x69ff >> 8);
        uVar30 = CONCAT31(uVar8 >> 3,DAT_0080874d);
        if (DAT_0080874d != 0xff) {
          bVar25 = local_14->field_0x2;
          local_c = CONCAT31(uVar8 >> 3,bVar25);
          if ((bVar25 != 0xff) && (DAT_0080874d != bVar25)) {
            if (local_14->field_0x4 == '\x04') {
              local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar25);
              if (DAT_0080874d == bVar25) {
                uVar24 = 0;
                uVar28 = (uint)bVar25;
              }
              else {
                uVar22 = (uint)DAT_0080874d;
                uVar27 = (uint)bVar25;
                cVar29 = *(char *)((int)&DAT_00808a4f + uVar22 * 8 + uVar27);
                uVar28 = local_c;
                if ((cVar29 == '\0') &&
                   (*(char *)((int)&DAT_00808a4f + uVar27 * 8 + uVar22) == '\0')) {
                  uVar24 = 0xfffffffe;
                }
                else if ((cVar29 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar27 * 8 + uVar22) == '\0')) {
                  uVar24 = 0xffffffff;
                }
                else if ((cVar29 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar27 * 8 + uVar22) == '\x01')) {
                  uVar24 = 1;
                }
                else if ((cVar29 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar27 * 8 + uVar22) == '\x01')) {
                  uVar24 = 2;
                }
                else {
                  uVar24 = 0;
                }
              }
              switch(uVar24) {
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
              thunk_FUN_0056a960(&DAT_00807620,uVar30,bVar25);
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
  uVar27 = uVar30 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(uVar30 + 1 & 7);
  piVar6 = *(int **)&param_1->field_0x18;
  local_1c = piVar6[2];
  local_18 = piVar6[3];
  pDVar18 = this_00->field_1F84;
  local_24 = *piVar6 + -0x113;
  local_20 = 0;
  if ((pDVar18 == (DArrayTy *)0x0) ||
     (uVar30 = this_00->field_1F88 + uVar27, pDVar18->count <= uVar30)) {
    pAVar35 = (AnonShape_005CBBE0_2D1CAA09 *)0x0;
  }
  else {
    pAVar35 = (AnonShape_005CBBE0_2D1CAA09 *)(pDVar18->elementSize * uVar30 + (int)pDVar18->data);
  }
  local_28 = uVar27;
  FUN_006b4170((&this_00->field_20F4)[uVar27],0,*piVar6 + -0x113,0,piVar6[2],piVar6[3],0xff);
  if (pAVar35 == (AnonShape_005CBBE0_2D1CAA09 *)0x0) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*(char *)pAVar35 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar27],&local_24,0,
                 (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar35->field_0x2 != -1) {
        switch(pAVar35->field_0x2) {
        case 0:
          uVar12 = 0xfc;
          break;
        case 1:
          uVar12 = 0xfa;
          break;
        case 2:
          uVar12 = 0xfb;
          break;
        case 3:
          uVar12 = 0xf9;
          break;
        case 4:
          uVar12 = 0xfd;
          break;
        case 5:
          uVar12 = 0xfe;
          break;
        case 6:
          uVar12 = 0xf3;
          break;
        case 7:
          uVar12 = 7;
          break;
        default:
          uVar12 = 0xff;
        }
        FUN_006b4170((&this_00->field_20F4)[uVar27],0,local_24 + 2,local_20 + 2,local_1c + -4,
                     local_18 + -4,uVar12);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar35 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar27],&local_24,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar27],0,local_24,local_20,
                     local_1c,local_18);
    if (pAVar35->field_0x3 == '\x01') {
      pcVar16 = &DAT_007ca250;
LAB_005d6c37:
      uVar30 = 0xffffffff;
      do {
        pcVar33 = pcVar16;
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        pcVar33 = pcVar16 + 1;
        cVar29 = *pcVar16;
        pcVar16 = pcVar33;
      } while (cVar29 != '\0');
      uVar30 = ~uVar30;
      pcVar16 = pcVar33 + -uVar30;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    else {
      if (pAVar35->field_0x3 != '\x02') {
        pcVar16 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar30 = 0xffffffff;
      pcVar16 = &DAT_007ca248;
      do {
        pcVar33 = pcVar16;
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        pcVar33 = pcVar16 + 1;
        cVar29 = *pcVar16;
        pcVar16 = pcVar33;
      } while (cVar29 != '\0');
      uVar30 = ~uVar30;
      pcVar16 = pcVar33 + -uVar30;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar27 = uVar30 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    pSVar11 = PTR_0081176c;
    for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
      *pcVar33 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar33 = pcVar33 + 1;
    }
    ccFntTy::WrStr(pSVar11->field_0034,&DAT_0080f33a,-1,-1,2);
    uVar27 = local_28;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar27],&local_24,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar27],0,local_24,local_20,
                     local_1c,local_18);
    uVar24 = 2;
    iVar38 = -1;
    iVar26 = -1;
    puVar37 = (uint *)&DAT_007c2310;
    iVar14 = local_1c;
    puVar20 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar35);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib((MMObjTy *)this_00,(&this_00->field_20F4)[uVar27],&local_24,2,0x67,0x67);
    if (pAVar35->field_0x4 == '\x02') {
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar27],0,local_24,local_20,
                       local_1c,local_18);
      uVar24 = 2;
      iVar26 = -1;
      iVar14 = -1;
      puVar20 = thunk_FUN_00540c40(PTR_0081176c->field_0034,(uint *)&pAVar35->field_0xa,
                                   (uint *)&DAT_007c7274,local_1c);
      ccFntTy::WrStr(PTR_0081176c->field_0034,puVar20,iVar14,iVar26,uVar24);
      break;
    }
    if (pAVar35->field_0x4 != '\x04') break;
    pDVar18 = pAVar35->field_0050;
    if ((uint)(byte)pAVar35->field_0x5 < pDVar18->count) {
      puVar20 = (uint *)(pDVar18->elementSize * (uint)(byte)pAVar35->field_0x5 + (int)pDVar18->data)
      ;
    }
    else {
      puVar20 = (uint *)0x0;
    }
    if (puVar20 == (uint *)0x0) break;
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar27],0,local_24,local_20,
                     local_1c,local_18);
    uVar24 = 2;
    iVar38 = -1;
    iVar26 = -1;
    puVar37 = (uint *)&DAT_007c7274;
    iVar14 = local_1c;
LAB_005d6d70:
    puVar20 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar20,puVar37,iVar14);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar20,iVar26,iVar38,uVar24);
    break;
  case (undefined1 *)0x5:
    if ((*(char *)pAVar35 != '\0') &&
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar27],&local_24,2,
                   (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67),
       pAVar35->field_0x4 != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar25 = pAVar35->field_0x2, bVar25 != 0xff)) &&
           (DAT_0080874d != bVar25)) {
          local_28 = 0xffffffff;
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar25);
          uVar28 = (uint)DAT_0080874d;
          uVar30 = (uint)bVar25;
          cVar29 = *(char *)((int)&DAT_00808a4f + uVar28 * 8 + uVar30);
          if ((cVar29 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar30 * 8 + uVar28) == '\0')) {
            uVar24 = 0xfffffffe;
          }
          else if ((cVar29 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar30 * 8 + uVar28) == '\0')) {
            uVar24 = 0xffffffff;
          }
          else if ((cVar29 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar30 * 8 + uVar28) == '\x01')) {
            uVar24 = 1;
          }
          else if ((cVar29 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar30 * 8 + uVar28) == '\x01')) {
            uVar24 = 2;
          }
          else {
            uVar24 = 0;
          }
          switch(uVar24) {
          default:
            iVar14 = -1;
            break;
          case 1:
            iVar14 = 1;
            break;
          case 2:
            iVar14 = 3;
            break;
          case 0xfffffffe:
            iVar14 = 0;
            break;
          case 0xffffffff:
            iVar14 = 2;
          }
          if (-1 < iVar14 + -1) {
            pbVar23 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x1f4b,iVar14 + -1);
            DibPut((AnonShape_006B84D0_7C7D97C6 *)(&this_00->field_20F4)[uVar27],
                   (local_1c - *(int *)(pbVar23 + 4)) / 2 + local_24,
                   (local_18 - *(int *)(pbVar23 + 8)) / 2 + 1 + local_20,'\x06',pbVar23);
          }
        }
      }
      else {
        iVar14 = (byte)pAVar35->field_0x4a + 0x41;
        uVar24 = FUN_006b0140(0x1f4a,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,uVar24,iVar14);
        ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar27],0,local_24,local_20
                         ,local_1c,local_18);
        ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0(DAT_008075a8,(&this_00->field_20CC)[uVar27]);
  if (*(short *)&param_1->field_0x14 == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}


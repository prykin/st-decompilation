#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404D7C|005D5560; family_names=SettMapSTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:10,18:9,1c:28} */

int __thiscall SettMapSTy::GetMessage(SettMapSTy *this,STMessage *message)

{
  SettMapTy_field_1E26State SVar1;
  byte bVar2;
  STMessageId SVar4;
  DArrayTy *pDVar5;
  MMsgTy *pMVar6;
  MMMObjTy *pMVar7;
  dword dVar8;
  ccFntTy *pcVar9;
  int *piVar10;
  StartSystemTy *pSVar12;
  SettMapTy *this_00;
  DWORD DVar13;
  int iVar13;
  void *pvVar14;
  char *pcVar16;
  byte *pbVar17;
  DArrayTy *pDVar18;
  void *pvVar19;
  char *local_EAX_3231;
  uint *puVar18_mg0;
  char *local_EAX_3347;
  uint *puVar18_mg1;
  char *local_EAX_3503;
  uint *puVar18_mg2;
  char *local_EAX_3868;
  char *local_EAX_3994;
  AnonNested_005D5560_0050_EBFA0A51 *pAVar20;
  char *pcVar15;
  undefined4 uVar21;
  char *local_EAX_6384;
  BITMAPINFO *pBVar22;
  int iVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  char cVar27;
  SettMapTy_field_2179State SVar28;
  uint uVar29;
  uint uVar30;
  byte *puVar31;
  BulkInitializedRecord_008087C7 *pBVar32;
  char *pcVar33;
  char *pcVar34;
  AnonShape_005CBBE0_2D1CAA09 *pAVar35;
  uint *puVar36;
  bool bVar37;
  int iVar38;
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
  uint SVar3;
  uint temp_5fb73ea9b4;

  local_44 = (SettMapTy *)this;
  DVar13 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar13;
  local_c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c8;
  iVar13 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0);
  this_00 = local_44;
  if (iVar13 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    iVar22 = ReportDebugMessage("E:\\__titans\\Start\\settsobj.cpp",0x27d,0,iVar13,
                                "%s","SettMapSTy::GetMessage");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar13,0,"E:\\__titans\\Start\\settsobj.cpp",0x27d);
    return 0xffff;
  }
  /* ST_CALLSITE[005D55B7]: CALL 0x0040327e; direct=0040327E SettMapTy::GetMessage */
  SettMapTy::GetMessage(local_44,message);
  SVar4 = message->id;
  if (SVar4 < MESS_SETTMAPSTY_6505) {
    if (SVar4 == MESS_SHARED_6504) {
      uVar30 = (message->arg0).u32;
      if ((uVar30 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != nullptr)) {
        pDVar5 = this_00->field_1E2F;
        if (uVar30 < pDVar5->count) {
          pvVar14 = DArrayAt<void>(pDVar5, uVar30);
        }
        else {
          pvVar14 = nullptr;
        }
        cVar27 = STField<char>(pvVar14,0x104);
        if ((message->arg1).u32 < pDVar18->count) {
          pvVar14 = DArrayAt<void>(pDVar18, (message->arg1).u32);
        }
        else {
          pvVar14 = nullptr;
        }
        if (pvVar14 != nullptr) {
          STField<char>(pvVar14,3) = cVar27;
        }
        pDVar18 = this_00->field_1F84;
        uVar30 = (message->arg1).u32 + 1;
        bVar37 = uVar30 < pDVar18->count;
        if ((int)uVar30 < (int)pDVar18->count) {
          do {
            if (bVar37) {
              pcVar16 = DArrayAt<char>(pDVar18, uVar30);
            }
            else {
              pcVar16 = nullptr;
            }
            if ((pcVar16 == nullptr) || (*pcVar16 != '\0')) break;
            pcVar16[3] = cVar27;
            pDVar18 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar37 = uVar30 < pDVar18->count;
          } while ((int)uVar30 < (int)pDVar18->count);
        }
        /* ST_CALLSITE[005D57EF]: CALL dword ptr [EDX + 0x2c] */
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
      }
    }
    else if (SVar4 == MESS_SHARED_6501) {
      uVar30 = (message->arg0).u32;
      if ((uVar30 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != nullptr)) {
        pDVar5 = this_00->field_1E2F;
        if (uVar30 < pDVar5->count) {
          pvVar14 = DArrayAt<void>(pDVar5, uVar30);
        }
        else {
          pvVar14 = nullptr;
        }
        cVar27 = STField<char>(pvVar14,0x104);
        if ((message->arg1).u32 < pDVar18->count) {
          pvVar14 = DArrayAt<void>(pDVar18, (message->arg1).u32);
        }
        else {
          pvVar14 = nullptr;
        }
        if (pvVar14 != nullptr) {
          STField<char>(pvVar14,0x4a) = cVar27;
        }
        pDVar18 = this_00->field_1F84;
        uVar30 = (message->arg1).u32 + 1;
        bVar37 = uVar30 < pDVar18->count;
        if ((int)uVar30 < (int)pDVar18->count) {
          do {
            if (bVar37) {
              pcVar16 = DArrayAt<char>(pDVar18, uVar30);
            }
            else {
              pcVar16 = nullptr;
            }
            if ((pcVar16 == nullptr) || (*pcVar16 != '\0')) break;
            pcVar16[0x4a] = cVar27;
            pDVar18 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar37 = uVar30 < pDVar18->count;
          } while ((int)uVar30 < (int)pDVar18->count);
        }
        /* ST_CALLSITE[005D574C]: CALL dword ptr [EAX + 0x2c] */
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
      }
    }
    else if (((SVar4 == MESS_PRIVIDERTY_6502) &&
             (uVar30 = (message->arg0).u32, uVar30 != 0xffffffff)) &&
            (pDVar18 = this_00->field_1F84, pDVar18 != nullptr)) {
      pDVar5 = this_00->field_1E2F;
      if (uVar30 < pDVar5->count) {
        pvVar14 = DArrayAt<void>(pDVar5, uVar30);
      }
      else {
        pvVar14 = nullptr;
      }
      local_d = STField<byte>(pvVar14,0x104);
      if ((message->arg1).u32 < pDVar18->count) {
        pvVar14 = DArrayAt<void>(pDVar18, (message->arg1).u32);
      }
      else {
        pvVar14 = nullptr;
      }
      if (pvVar14 != nullptr) {
        if (STField<byte>(pvVar14,2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,STField<byte>(pvVar14,2));
        }
        STField<byte>(pvVar14,2) = local_d;
        if (STField<char>(pvVar14,4) == '\x02') {
          DAT_0080874d = local_d;
        }
        pDVar18 = this_00->field_1F84;
        uVar30 = (message->arg1).u32 + 1;
        bVar37 = uVar30 < pDVar18->count;
        if ((int)uVar30 < (int)pDVar18->count) {
          do {
            if (bVar37) {
              pcVar16 = DArrayAt<char>(pDVar18, uVar30);
            }
            else {
              pcVar16 = nullptr;
            }
            if ((pcVar16 == nullptr) || (*pcVar16 != '\0')) break;
            pcVar16[2] = local_d;
            pDVar18 = this_00->field_1F84;
            uVar30 = uVar30 + 1;
            bVar37 = uVar30 < pDVar18->count;
          } while ((int)uVar30 < (int)pDVar18->count);
        }
        /* ST_CALLSITE[005D56A9]: CALL dword ptr [EDX + 0x2c] */
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
        goto LAB_005d5ff8;
      }
    }
  }
  else if (SVar4 == MESS_SETTMAPSTY_6505) {
    uVar30 = (message->arg0).u32;
    if ((uVar30 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != nullptr)) {
      pDVar5 = this_00->field_1E2F;
      if (uVar30 < pDVar5->count) {
        pvVar14 = DArrayAt<void>(pDVar5, uVar30);
      }
      else {
        pvVar14 = nullptr;
      }
      uVar30 = pDVar18->count;
      if ((message->arg1).u32 < uVar30) {
        pvVar19 = DArrayAt<void>(pDVar18, (message->arg1).u32);
      }
      else {
        pvVar19 = nullptr;
      }
      if (pvVar19 != nullptr) {
        if ((STField<int>(pvVar14,0x104) == 2) && (uVar29 = 0, 0 < (int)uVar30)) {
          bVar37 = uVar30 != 0;
          do {
            if (bVar37) {
              pvVar19 = DArrayAt<void>(pDVar18, uVar29);
            }
            else {
              pvVar19 = nullptr;
            }
            if ((pvVar19 != nullptr) && (STField<char>(pvVar19,4) == '\x02')) {
              SVar1 = this_00->field_1E26;
              if ((SVar1 == CASE_6) || ((SVar1 == CASE_1 || (SVar1 == CASE_2)))) {
                STField<undefined1>(pvVar19,4) = 4;
                STField<undefined1>(pvVar19,5) = 0;
              }
              else {
                STField<undefined1>(pvVar19,4) = 1;
              }
              break;
            }
            uVar29 = uVar29 + 1;
            bVar37 = uVar29 < uVar30;
          } while ((int)uVar29 < (int)uVar30);
        }
        pDVar18 = this_00->field_1F84;
        if ((message->arg1).u32 < pDVar18->count) {
          pvVar19 = DArrayAt<void>(pDVar18, (message->arg1).u32);
        }
        else {
          pvVar19 = nullptr;
        }
        cVar27 = STField<char>(pvVar14,0x104);
        STField<char>(pvVar19,4) = cVar27;
        STField<undefined1>(pvVar19,5) = STField<undefined1>(pvVar14,0x108);
        if (cVar27 == '\0') {
          if (STField<byte>(pvVar19,2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,STField<byte>(pvVar19,2));
          }
          STField<undefined1>(pvVar19,2) = 0xff;
        }
        DAT_0080874d = 0xff;
        pDVar18 = this_00->field_1F84;
        uVar29 = 0;
        uVar30 = pDVar18->count;
        if (0 < (int)uVar30) {
          bVar37 = uVar30 != 0;
          do {
            if (bVar37) {
              pvVar14 = DArrayAt<void>(pDVar18, uVar29);
            }
            else {
              pvVar14 = nullptr;
            }
            if (((pvVar14 != nullptr) && (STField<char>(pvVar14,4) == '\x02')) &&
               (STField<int>(pvVar14,6) == DAT_0080877f)) {
              DAT_0080874d = STField<byte>(pvVar14,2);
              break;
            }
            uVar29 = uVar29 + 1;
            bVar37 = uVar29 < uVar30;
          } while ((int)uVar29 < (int)uVar30);
        }
        /* ST_CALLSITE[005D5FF5]: CALL dword ptr [EAX + 0x2c] */
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
LAB_005d5ff8:
        /* ST_CALLSITE[005D5FFA]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
        SettMapTy::PaintSC(this_00);
      }
    }
  }
  else if (SVar4 == MESS_FSGSTY_694A) {
    local_30 = 0x1010101;
    local_2c = (undefined1 *)0x1010101;
    if (this_00->field_1F84 != nullptr) {
      DAT_00808aa9 = 1;
      DAT_008087c6 = '\0';
      DAT_0080874f = 0;
      pBVar32 = g_bulkInitializedRecords_008087C7;
      for (iVar24 = 0xa2; iVar24 != 0; iVar24 = iVar24 + -1) {
        *(undefined4 *)pBVar32 = 0;
        pBVar32 = (BulkInitializedRecord_008087C7 *)&pBVar32->field_0x4;
      }
      pbVar17 = &g_bulkInitializedRecords_008087C7[0].field_0022;
      do {
        pbVar17[-1] = 0;
        *pbVar17 = 0xff;
        pbVar17 = pbVar17 + 0x51;
      } while ((int)pbVar17 < 0x808a71);
      pDVar18 = this_00->field_1F84;
      uVar29 = 0;
      uVar30 = pDVar18->count;
      if (0 < (int)uVar30) {
        bVar37 = uVar30 != 0;
        do {
          if (bVar37) {
            pcVar16 = DArrayAt<char>(pDVar18, uVar29);
          }
          else {
            pcVar16 = nullptr;
          }
          if (((pcVar16 != nullptr) && (*pcVar16 != '\0')) && (pcVar16[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar16[2]) = 0;
          }
          uVar29 = uVar29 + 1;
          bVar37 = uVar29 < uVar30;
        } while ((int)uVar29 < (int)uVar30);
      }
      local_c = 0;
      if (0 < (int)uVar30) {
        bVar37 = uVar30 != 0;
        do {
          if (bVar37) {
            pcVar16 = DArrayAt<char>(pDVar18, local_c);
          }
          else {
            pcVar16 = nullptr;
          }
          if (((pcVar16 != nullptr) && (*pcVar16 != '\0')) &&
             ((pcVar16[4] != '\0' && ((pcVar16[4] != '\x01' || (this_00->field_1E26 == CASE_2))))))
          {
            iVar24 = *(int *)(pcVar16 + 0x50);
            if ((uint)(byte)pcVar16[5] < *(uint *)(iVar24 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar24 + 8) * (uint)(byte)pcVar16[5] +
                                *(int *)(iVar24 + 0x1c));
            }
            else {
              local_8 = nullptr;
            }
            DAT_008087c6 = DAT_008087c6 + '\x01';
            if (pcVar16[2] == -1) {
              iVar24 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar24) != '\0') {
                  pcVar16[2] = (char)iVar24;
                  *(undefined1 *)((int)&local_30 + iVar24) = 0;
                  break;
                }
                iVar24 = iVar24 + 1;
              } while (iVar24 < 8);
            }
            g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0022 = pcVar16[2];
            g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0021 = pcVar16[3];
            uVar30 = 0xffffffff;
            pcVar34 = &CHAR_00h_008016a0;
            do {
              pcVar33 = pcVar34;
              if (uVar30 == 0) break;
              uVar30 = uVar30 - 1;
              pcVar33 = pcVar34 + 1;
              cVar27 = *pcVar34;
              pcVar34 = pcVar33;
            } while (cVar27 != '\0');
            uVar30 = ~uVar30;
            local_14 = (AnonShape_005D5560_9031BF1B *)
                       &g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0x1;
            pcVar34 = pcVar33 + -uVar30;
            pcVar33 = &g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0x1;
            memmove(pcVar33, pcVar34, uVar30); /* compiler REP MOVS byte copy */
            uVar29 = 0;
            if (pcVar16[4] == '\x02') {
              if (*pcVar16 != '\0') {
                *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)pcVar16[2]) = 0;
                DAT_0080874d = pcVar16[2];
                DAT_0080874e = pcVar16[3];
              }
            }
            else if (pcVar16[4] == '\x04') {
              *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)pcVar16[2]) = 1;
              if (local_8 == nullptr) {
                uVar30 = 0xffffffff;
                local_8 = &g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0x1;
                pcVar34 = &CHAR_00h_008016a0;
                do {
                  pcVar33 = pcVar34;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar33 = pcVar34 + 1;
                  cVar27 = *pcVar34;
                  pcVar34 = pcVar33;
                } while (cVar27 != '\0');
                uVar30 = ~uVar30;
                pcVar34 = pcVar33 + -uVar30;
                pcVar33 = local_8;
                memmove(pcVar33, pcVar34, uVar30); /* compiler REP MOVS byte copy */
                uVar29 = 0;
              }
              else {
                pcVar34 = local_8 + 0x4c;
                uVar30 = 0xffffffff;
                local_8 = &g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0x1;
                do {
                  pcVar33 = pcVar34;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar33 = pcVar34 + 1;
                  cVar27 = *pcVar34;
                  pcVar34 = pcVar33;
                } while (cVar27 != '\0');
                uVar30 = ~uVar30;
                pcVar34 = pcVar33 + -uVar30;
                pcVar33 = local_8;
                memmove(pcVar33, pcVar34, uVar30); /* compiler REP MOVS byte copy */
                uVar29 = 0;
              }
            }
            g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0023 = pcVar16[0x4a];
            g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0024 =
                 *(uint *)(pcVar16 + 0x54);
            g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_0028 =
                 *(uint *)(pcVar16 + 0x58);
            g_bulkInitializedRecords_008087C7[(byte)pcVar16[2]].field_002C =
                 *(uint *)(pcVar16 + 0x5c);
          }
          pDVar18 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar37 = local_c < pDVar18->count;
        } while ((int)local_c < (int)pDVar18->count);
      }
      /* ST_CALLSITE[005D5AC0]: CALL 0x0040591b; direct=0040591B STAppC::sub_0056EE90 */
      STAppC::sub_0056EE90((STAppC *)&DAT_00807620);
      pcVar16 = &CHAR_00h_00808ab0;
      for (iVar24 = 0x3a8; iVar24 != 0; iVar24 = iVar24 + -1) {
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16 = pcVar16 + 4;
      }
      DAT_00808aaf = 0;
      pDVar18 = this_00->field_1F84;
      local_c = 0;
      if (0 < (int)pDVar18->count) {
        bVar37 = pDVar18->count != 0;
        do {
          if (bVar37) {
            pvVar14 = DArrayAt<void>(pDVar18, local_c);
          }
          else {
            pvVar14 = nullptr;
          }
          if (pvVar14 != nullptr) {
            local_d = STField<byte>(pvVar14,4);
            if ((local_d != 1) && (local_d != 0)) {
              if (local_d == 4) {
                iVar24 = STField<int>(pvVar14,0x50);
                if ((uint)STField<byte>(pvVar14,5) < *(uint *)(iVar24 + 0xc)) {
                  pcVar16 = (char *)(*(int *)(iVar24 + 8) * (uint)STField<byte>(pvVar14,5) +
                                    *(int *)(iVar24 + 0x1c));
                }
                else {
                  pcVar16 = nullptr;
                }
                if (pcVar16 != nullptr) {
                  uVar30 = 0xffffffff;
                  do {
                    pcVar34 = pcVar16;
                    if (uVar30 == 0) break;
                    uVar30 = uVar30 - 1;
                    pcVar34 = pcVar16 + 1;
                    cVar27 = *pcVar16;
                    pcVar16 = pcVar34;
                  } while (cVar27 != '\0');
                  uVar30 = ~uVar30;
                  pcVar34 = pcVar34 + -uVar30;
                  local_8 = &stack0xfffffe9c;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar30 = 0xffffffff;
                pcVar16 = (char *)((int)pvVar14 + 10);
                do {
                  pcVar34 = pcVar16;
                  if (uVar30 == 0) break;
                  uVar30 = uVar30 - 1;
                  pcVar34 = pcVar16 + 1;
                  cVar27 = *pcVar16;
                  pcVar16 = pcVar34;
                } while (cVar27 != '\0');
                uVar30 = ~uVar30;
                pcVar34 = pcVar34 + -uVar30;
                local_8 = &stack0xfffffe9c;
LAB_005d5b7e:
                pcVar16 = &stack0xfffffe9c;
                for (uVar29 = uVar30 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
                  *(undefined4 *)pcVar16 = *(undefined4 *)pcVar34;
                  pcVar34 = pcVar34 + 4;
                  pcVar16 = pcVar16 + 4;
                }
                for (uVar30 = uVar30 & 3; local_8 = &stack0xfffffe9c, uVar30 != 0;
                    uVar30 = uVar30 - 1) {
                  *pcVar16 = *pcVar34;
                  pcVar34 = pcVar34 + 1;
                  pcVar16 = pcVar16 + 1;
                }
              }
              bVar23 = STField<byte>(pvVar14,2);
              puVar31 = (byte *)&stack0xfffffe9c;
              pcVar16 = &CHAR_00h_00808ab0 + (uint)DAT_00808aaf * 0x9c;
              memmove(pcVar16, puVar31, 0x9c); /* compiler REP MOVS byte copy */
              if (bVar23 < 8) {
                iVar25 = 0;
                iVar24 = (uint)bVar23 * 0x51 + 0x808800;
                do {
                  if (*(char *)(iVar24 + iVar25) == '\0') {
                    *(byte *)(iVar24 + iVar25) = DAT_00808aaf;
                    break;
                  }
                  iVar25 = iVar25 + 1;
                } while (iVar25 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          pDVar18 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar37 = local_c < pDVar18->count;
        } while ((int)local_c < (int)pDVar18->count);
      }
      if (this_00->field_1E26 == CASE_6) {
        if ((this_00->field_1F47 == 0) && ((message->arg0).u32 == 0)) {
          pMVar7 = this_00->array_00BC[0xc].field_01DB;
          if (*(int *)(pMVar7 + 0x2e6) != 0) {
            memset(local_64, 0, 0x20); /* compiler bulk-zero initialization */
            iVar24 = 0;
            memset(local_84, 0, 0x20); /* compiler bulk-zero initialization */
            local_7c = this_00->field_0008;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            /* ST_CALLSITE[005D5DAD]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
            iVar24 = MMsgTy::SetMessage(*(MMsgTy **)(pMVar7 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,nullptr,0,0);
            if (iVar24 != 0) {
              /* ST_CALLSITE[005D5DBE]: CALL dword ptr [EDX + 0x24] */
              this_00->vfunc_24();
            }
          }
        }
        else {
          uVar30 = 0xffffffff;
          STPiece<0,1>(DAT_008087a0) = CASE_6;
          pcVar16 = &CHAR_00h_00853de4;
          do {
            pcVar34 = pcVar16;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar34 = pcVar16 + 1;
            cVar27 = *pcVar16;
            pcVar16 = pcVar34;
          } while (cVar27 != '\0');
          uVar30 = ~uVar30;
          DAT_00808783 = 2;
          pcVar16 = pcVar34 + -uVar30;
          pcVar34 = &CHAR_00h_0080ed16;
          memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          uVar30 = 0xffffffff;
          pcVar16 = &CHAR_00h_0080ed16;
          do {
            pcVar34 = pcVar16;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar34 = pcVar16 + 1;
            cVar27 = *pcVar16;
            pcVar16 = pcVar34;
          } while (cVar27 != '\0');
          uVar30 = ~uVar30;
          pcVar16 = pcVar34 + -uVar30;
          pcVar34 = (char *)&DAT_0080ee1a;
          memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
          uVar30 = 0xffffffff;
          pcVar16 = &CHAR_00h_00807680;
          do {
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            cVar27 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar27 != '\0');
          uVar29 = 0xffffffff;
          pcVar16 = (char *)((int)&DAT_0080ed12 + ~uVar30 + 3);
          do {
            pcVar34 = pcVar16;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar34 = pcVar16 + 1;
            cVar27 = *pcVar16;
            pcVar16 = pcVar34;
          } while (cVar27 != '\0');
          uVar29 = ~uVar29;
          pcVar16 = pcVar34 + -uVar29;
          pcVar34 = &CHAR_00h_0080ef1e;
          memmove(pcVar34, pcVar16, uVar29); /* compiler REP MOVS byte copy */
          uVar29 = 0;
          thunk_FUN_005b6350(this_00,0x6948,0,0);
          this_00->field_21E5 = 1;
          this_00->field_21E4 = 1;
          this_00->field_21E7 = 1;
          this_00->field_21E3 = 1;
          this_00->field_21E1 = 1;
          /* ST_CALLSITE[005D5E88]: CALL dword ptr [EDX + 0x8] */
          this_00->CloseButtons();
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pMVar6 = *(MMsgTy **)(this_00->array_00BC[0xc].field_01DB + 0x2e6);
          if (pMVar6 != nullptr) {
            /* ST_CALLSITE[005D5EA5]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
            MMsgTy::HidePanel(pMVar6,1,0,1);
          }
        }
      }
      else {
        uVar30 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar16 = &CHAR_00h_0080ed16;
        do {
          pcVar34 = pcVar16;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar34 = pcVar16 + 1;
          cVar27 = *pcVar16;
          pcVar16 = pcVar34;
        } while (cVar27 != '\0');
        uVar30 = ~uVar30;
        pcVar16 = pcVar34 + -uVar30;
        pcVar34 = (char *)&DAT_0080ee1a;
        STPiece<0,1>(DAT_008087a0) = this_00->field_1E26;
        memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
        uVar30 = 0xffffffff;
        pcVar16 = &CHAR_00h_00807680;
        do {
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          cVar27 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar27 != '\0');
        uVar29 = 0xffffffff;
        pcVar16 = (char *)((int)&DAT_0080ed12 + ~uVar30 + 3);
        do {
          pcVar34 = pcVar16;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar34 = pcVar16 + 1;
          cVar27 = *pcVar16;
          pcVar16 = pcVar34;
        } while (cVar27 != '\0');
        uVar29 = ~uVar29;
        pcVar16 = pcVar34 + -uVar29;
        pcVar34 = &CHAR_00h_0080ef1e;
        memmove(pcVar34, pcVar16, uVar29); /* compiler REP MOVS byte copy */
        uVar30 = 0;
        thunk_FUN_005b6350(this_00,0x6948,0,0);
        this_00->field_21E5 = 1;
        this_00->field_21E4 = 1;
        this_00->field_21E7 = 1;
        this_00->field_21E2 = 1;
        this_00->field_21E1 = 1;
        /* ST_CALLSITE[005D5CFC]: CALL dword ptr [EDX + 0x8] */
        this_00->CloseButtons();
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pMVar6 = *(MMsgTy **)(this_00->array_00BC[0xc].field_01DB + 0x2e6);
        if (pMVar6 != nullptr) {
          /* ST_CALLSITE[005D5D19]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
          MMsgTy::HidePanel(pMVar6,1,0,1);
        }
      }
    }
  }
  SVar3 = message->id;
  if (((0x69fe < SVar3) && (SVar3 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    pDVar18 = this_00->field_1F84;
    local_c = SVar3 - 0x69ff >> 3;
    if ((pDVar18 == nullptr) ||
       (uVar30 = this_00->field_1F88 + local_c, pDVar18->count <= uVar30)) {
      local_14 = nullptr;
    }
    else {
      local_14 = DArrayAt<AnonShape_005D5560_9031BF1B>(pDVar18, uVar30);
    }
    uVar30 = 0;
    if (local_14 != nullptr) {
      switch(SVar3 + 1 & 7) {
      case 1:
        uVar29 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar30 = pDVar18->count;
        if (0 < (int)uVar30) {
          bVar37 = uVar30 != 0;
          do {
            if (bVar37) {
              pcVar16 = DArrayAt<char>(pDVar18, uVar29);
            }
            else {
              pcVar16 = nullptr;
            }
            if ((*pcVar16 != '\0') && (pcVar16[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar16[2]) = 0;
            }
            uVar29 = uVar29 + 1;
            bVar37 = uVar29 < uVar30;
          } while ((int)uVar29 < (int)uVar30);
        }
        bVar23 = local_14->field_0x2;
        SVar28 = this_00->field_1F88 + local_c;
        uVar30 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar23) = 1;
        this_00->field_2179 = SVar28;
        this_00->field_2191 = 0x6503;
        this_00->field_21A1 = 0;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0xff;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
        do {
          if (*(char *)((int)&local_40 + uVar30) != '\0') {
            this_00->field_1F37 = uVar30;
            Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
            if ((byte)local_14->field_0x2 == uVar30) {
              this_00->field_21A1 = (uint)local_8 & 0xff;
            }
            local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)((char)local_8 + '\x01'));
          }
          uVar30 = uVar30 + 1;
        } while ((int)uVar30 < 8);
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21C5 = 0x124;
        this_00->field_21CD = 0x1e;
        this_00->field_21A5 = 0x12;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
LAB_005d619b:
        /* ST_CALLSITE[005D61B2]: CALL dword ptr [EAX + 0x8] */
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                   &this_00->field_0x2161,0);
        break;
      case 2:
        this_00->field_2171 = 0x6504;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        local_28 = 1;
        local_EAX_3231 = LoadResourceString(0x23f1,g_hINSTANCE_00807618);
        uVar30 = 0xffffffff;
        do {
          pcVar16 = local_EAX_3231;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar16 = local_EAX_3231 + 1;
          cVar27 = *local_EAX_3231;
          local_EAX_3231 = pcVar16;
        } while (cVar27 != '\0');
        uVar30 = ~uVar30;
        pcVar16 = pcVar16 + -uVar30;
        pcVar34 = &this_00->field_1E33;
        memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
        uVar29 = 0;
        for (puVar18_mg0 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
            puVar18_mg0 != nullptr;
            puVar18_mg0 = Library::MSVCRT::FUN_0072e560(puVar18_mg0,'\n')) {
          *(undefined1 *)puVar18_mg0 = 0x20;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        local_EAX_3347 = LoadResourceString(0x23f0,g_hINSTANCE_00807618);
        uVar30 = 0xffffffff;
        do {
          pcVar16 = local_EAX_3347;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar16 = local_EAX_3347 + 1;
          cVar27 = *local_EAX_3347;
          local_EAX_3347 = pcVar16;
        } while (cVar27 != '\0');
        uVar30 = ~uVar30;
        pcVar16 = pcVar16 + -uVar30;
        pcVar34 = &this_00->field_1E33;
        memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
        uVar29 = 0;
        for (puVar18_mg1 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
            puVar18_mg1 != nullptr;
            puVar18_mg1 = Library::MSVCRT::FUN_0072e560(puVar18_mg1,'\n')) {
          *(undefined1 *)puVar18_mg1 = 0x20;
        }
        this_00->field_1F37 = 2;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        uVar30 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar30 = (uint)(local_14->field_0x4 != '\x02');
        }
        if (uVar30 != 0) {
          local_EAX_3503 = LoadResourceString(0x23f2,g_hINSTANCE_00807618);
          uVar30 = 0xffffffff;
          do {
            pcVar16 = local_EAX_3503;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar16 = local_EAX_3503 + 1;
            cVar27 = *local_EAX_3503;
            local_EAX_3503 = pcVar16;
          } while (cVar27 != '\0');
          uVar30 = ~uVar30;
          pcVar16 = pcVar16 + -uVar30;
          pcVar34 = &this_00->field_1E33;
          memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
          for (puVar18_mg2 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
              puVar18_mg2 != nullptr;
              puVar18_mg2 = Library::MSVCRT::FUN_0072e560(puVar18_mg2,'\n')) {
            *(undefined1 *)puVar18_mg2 = 0x20;
          }
          this_00->field_1F37 = 3;
          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        bVar23 = local_14->field_0x3;
        this_00->field_21C5 = 0x143;
        this_00->field_21CD = 0x78;
        this_00->field_21A1 = bVar23 - 1;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar9 = g_startSystem_0081176C->field_0034;
        if (pcVar9->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar9);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar9->field_0x8a;
LAB_005d6676:
        /* ST_CALLSITE[005D668D]: CALL dword ptr [EDX + 0x8] */
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                   &this_00->field_0x2161,0);
        break;
      case 3:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        if (*(char *)local_14 != '\0') {
          uVar30 = 0;
          local_8 = nullptr;
          if ((this_00->field_1E26 == CASE_2) && (local_14->field_0x4 == '\x02')) break;
          pDVar18 = this_00->field_1F84;
          uVar29 = pDVar18->count;
          bVar37 = uVar29 != 0;
          if (0 < (int)uVar29) {
            do {
              if (bVar37) {
                pcVar16 = DArrayAt<char>(pDVar18, uVar30);
              }
              else {
                pcVar16 = nullptr;
              }
              if ((*pcVar16 != '\0') && (pcVar16[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar30 = uVar30 + 1;
              bVar37 = uVar30 < uVar29;
            } while ((int)uVar30 < (int)uVar29);
          }
          if ((this_00->field_1E26 != CASE_2) && (2 < (int)local_8)) {
            local_EAX_3868 = LoadResourceString(8000,g_hINSTANCE_00807618);
            uVar30 = 0xffffffff;
            do {
              pcVar16 = local_EAX_3868;
              if (uVar30 == 0) break;
              uVar30 = uVar30 - 1;
              pcVar16 = local_EAX_3868 + 1;
              cVar27 = *local_EAX_3868;
              local_EAX_3868 = pcVar16;
            } while (cVar27 != '\0');
            uVar30 = ~uVar30;
            pcVar16 = pcVar16 + -uVar30;
            pcVar34 = &this_00->field_1E33;
            memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
            uVar29 = 0;
            this_00->field_1F37 = 0;
            Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
          }
          if (this_00->field_1E26 != CASE_2) {
            bVar37 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar37 = local_14->field_0x3 != '\x03';
            }
            if (bVar37) {
              local_EAX_3994 = LoadResourceString(0x1f42,g_hINSTANCE_00807618);
              uVar30 = 0xffffffff;
              do {
                pcVar16 = local_EAX_3994;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar16 = local_EAX_3994 + 1;
                cVar27 = *local_EAX_3994;
                local_EAX_3994 = pcVar16;
              } while (cVar27 != '\0');
              uVar30 = ~uVar30;
              pcVar16 = pcVar16 + -uVar30;
              pcVar34 = &this_00->field_1E33;
              memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
              uVar29 = 0;
              this_00->field_1F37 = 2;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
            }
          }
          local_8 = nullptr;
          pAVar20 = local_14->field_0050;
          pcVar16 = (char *)pAVar20->field_000C;
          if (0 < (int)pcVar16) {
            do {
              if (local_8 < pcVar16) {
                iVar24 = pAVar20->field_0008 * (int)local_8 + pAVar20->field_001C;
              }
              else {
                iVar24 = 0;
              }
              uVar30 = 0xffffffff;
              pcVar16 = (char *)(iVar24 + 0x40);
              do {
                pcVar34 = pcVar16;
                if (uVar30 == 0) break;
                uVar30 = uVar30 - 1;
                pcVar34 = pcVar16 + 1;
                cVar27 = *pcVar16;
                pcVar16 = pcVar34;
              } while (cVar27 != '\0');
              uVar30 = ~uVar30;
              pcVar16 = pcVar34 + -uVar30;
              pcVar34 = &this_00->field_1E33;
              memmove(pcVar34, pcVar16, uVar30); /* compiler REP MOVS byte copy */
              this_00->field_1F37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
              local_8 = local_8 + 1;
              pAVar20 = local_14->field_0050;
              pcVar16 = (char *)pAVar20->field_000C;
            } while ((int)local_8 < (int)pcVar16);
          }
        }
        pDVar18 = this_00->field_1E2F;
        uVar30 = 0;
        if (0 < (int)pDVar18->count) {
          bVar37 = pDVar18->count != 0;
          local_28 = (uint)(byte)local_14->field_0x4;
          do {
            if (bVar37) {
              pvVar14 = DArrayAt<void>(pDVar18, uVar30);
            }
            else {
              pvVar14 = nullptr;
            }
            if ((STField<uint>(pvVar14,0x104) == local_28) &&
               (STField<uint>(pvVar14,0x108) == (uint)(byte)local_14->field_0x5)) {
              this_00->field_21A1 = uVar30;
              break;
            }
            uVar30 = uVar30 + 1;
            bVar37 = uVar30 < pDVar18->count;
          } while ((int)uVar30 < (int)pDVar18->count);
        }
        dVar8 = pDVar18->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar8;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar9 = g_startSystem_0081176C->field_0034;
        if (pcVar9->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar9);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar9->field_0x8a;
        if (1 < (int)this_00->field_21A9) goto LAB_005d6676;
        break;
      case 5:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar29 = pDVar18->count;
          if (0 < (int)uVar29) {
            bVar37 = uVar29 != 0;
            do {
              if (bVar37) {
                pvVar14 = DArrayAt<void>(pDVar18, uVar30);
              }
              else {
                pvVar14 = nullptr;
              }
              if ((pvVar14 != nullptr) && (STField<byte>(pvVar14,0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)STField<byte>(pvVar14,0x4a)) = 1;
              }
              uVar30 = uVar30 + 1;
              bVar37 = uVar30 < uVar29;
            } while ((int)uVar30 < (int)uVar29);
          }
          bVar23 = 0;
          iVar24 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar24) != '\0') {
              bVar23 = bVar23 + 1;
            }
            iVar24 = iVar24 + 1;
          } while (iVar24 < 8);
          bVar2 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar23 < bVar2) {
            iVar24 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar24) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar24) = 1;
                bVar23 = bVar23 + 1;
                break;
              }
              iVar24 = iVar24 + 1;
            } while (iVar24 < 8);
            goto joined_r0x005d6701;
          }
          uVar30 = 0;
          cVar27 = (char)local_28;
          if (0 < (int)pDVar18->count) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar37 = pDVar18->count != 0;
            do {
              if (bVar37) {
                pcVar16 = DArrayAt<char>(pDVar18, uVar30);
              }
              else {
                pcVar16 = nullptr;
              }
              if (local_2c == (undefined1 *)uVar30) {
LAB_005d6784:
                if ((*pcVar16 != '\0') && ((pcVar16[4] == '\0' || (pcVar16[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar16[0x4a]) = 0;
                }
              }
              else if (*pcVar16 != '\0') {
                if ((pcVar16[4] != '\0') && (pcVar16[4] != '\x01')) {
                  if (local_8 == nullptr) {
                    if (cVar27 != pcVar16[0x4a]) {
                      cVar27 = -1;
                    }
                  }
                  else {
                    cVar27 = pcVar16[0x4a];
                    local_8 = nullptr;
                  }
                }
                goto LAB_005d6784;
              }
              uVar30 = uVar30 + 1;
              bVar37 = uVar30 < pDVar18->count;
            } while ((int)uVar30 < (int)pDVar18->count);
            local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(cVar27));
          }
          if (cVar27 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          uVar30 = 0;
          this_00->field_2171 = 0x6501;
          this_00->field_2179 = this_00->field_1F88 + local_c;
          this_00->field_2191 = 0x6500;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar26 = &uStack_79;
          local_2c = puVar26;
          do {
            iVar24 = uVar30 + 0x41;
            if (puVar26[uVar30 + 0x41] != '\0') {
              pcVar15 = LoadResourceString(0x1f4a,g_hINSTANCE_00807618);
              /* ST_CALLSITE[005D682A]: CALL dword ptr [0x0085bde8] */
              wsprintfA(&this_00->field_1E33,"%s%c",pcVar15,iVar24);
              this_00->field_1F37 = uVar30;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
              if ((byte)local_14->field_0x4a == uVar30) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)((char)local_8 + '\x01'));
              puVar26 = local_2c;
            }
            uVar30 = uVar30 + 1;
          } while ((int)uVar30 < 8);
          SVar1 = this_00->field_1E26;
          this_00->field_21A9 = this_00->field_1E2F->count;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (uVar21 = 0x26b, SVar1 == CASE_2)) {
            uVar21 = 0x2ab;
          }
          this_00->field_21C5 = uVar21;
          this_00->field_21CD = 0x46;
          this_00->field_21C9 = local_c * 0x19 + 0x41;
          pcVar9 = g_startSystem_0081176C->field_0034;
          if (pcVar9->field_00A0 != 0) {
            FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar9);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar9->field_0x8a;
          goto LAB_005d619b;
        }
        if (DAT_0080874d != 0xff) {
          bVar23 = local_14->field_0x2;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT31((uint3)(SVar3 - 0x69ff >> 0xb),bVar23);
          if ((bVar23 != 0xff) && (DAT_0080874d != bVar23)) {
            if (local_14->field_0x4 == '\x04') {
              local_2c = (undefined1 *)STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar23));
              if (DAT_0080874d == bVar23) {
                uVar21 = 0;
                uVar30 = (uint)bVar23;
              }
              else {
                uVar29 = (uint)DAT_0080874d;
                bVar2 = g_playerRelationMatrix[uVar29][bVar23];
                uVar30 = local_c;
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
                  uVar21 = 0xfffffffe;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
                  uVar21 = 0xffffffff;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
                  uVar21 = 1;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
                  uVar21 = 2;
                }
                else {
                  uVar21 = 0;
                }
              }
              bVar23 = (byte)uVar30;
              switch(uVar21) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar23,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,DAT_0080874d,bVar23,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,DAT_0080874d,bVar23,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar23,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,DAT_0080874d,bVar23);
            }
            /* ST_CALLSITE[005D69FA]: CALL dword ptr [EDX + 0x2c] */
            (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
          }
        }
      }
    }
  }
  temp_5fb73ea9b4 = message->id;
  if (temp_5fb73ea9b4 < 0x6a7f) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  if (0x6afe < temp_5fb73ea9b4) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  uVar30 = temp_5fb73ea9b4 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(temp_5fb73ea9b4 + 1 & 7);
  piVar10 = (message->arg1).ptr;
  local_1c = piVar10[2];
  local_18 = piVar10[3];
  pDVar18 = this_00->field_1F84;
  local_24 = *piVar10 + -0x113;
  local_20 = 0;
  if ((pDVar18 == nullptr) ||
     (uVar29 = this_00->field_1F88 + uVar30, pDVar18->count <= uVar29)) {
    pAVar35 = nullptr;
  }
  else {
    pAVar35 = DArrayAt<AnonShape_005CBBE0_2D1CAA09>(pDVar18, uVar29);
  }
  local_28 = uVar30;
  FUN_006b4170(this_00->field_20F4[uVar30],0,*piVar10 + -0x113,0,piVar10[2],piVar10[3],0xff);
  if (pAVar35 == nullptr) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*(char *)pAVar35 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      /* ST_CALLSITE[005D6B15]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar30],&local_24,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar35->field_0x2 != -1) {
        switch(pAVar35->field_0x2) {
        case 0:
          bVar23 = 0xfc;
          break;
        case 1:
          bVar23 = 0xfa;
          break;
        case 2:
          bVar23 = 0xfb;
          break;
        case 3:
          bVar23 = 0xf9;
          break;
        case 4:
          bVar23 = 0xfd;
          break;
        case 5:
          bVar23 = 0xfe;
          break;
        case 6:
          bVar23 = 0xf3;
          break;
        case 7:
          bVar23 = 7;
          break;
        default:
          bVar23 = 0xff;
        }
        FUN_006b4170(this_00->field_20F4[uVar30],0,local_24 + 2,local_20 + 2,local_1c + -4,
                     local_18 + -4,bVar23);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar35 == '\0') break;
    /* ST_CALLSITE[005D6BD2]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar30],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar30],0,local_24,
                     local_20,local_1c,local_18);
    if (pAVar35->field_0x3 == '\x01') {
      pcVar16 = &CHAR_W_007ca250;
LAB_005d6c37:
      uVar30 = 0xffffffff;
      do {
        pcVar34 = pcVar16;
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        pcVar34 = pcVar16 + 1;
        cVar27 = *pcVar16;
        pcVar16 = pcVar34;
      } while (cVar27 != '\0');
      uVar30 = ~uVar30;
      pcVar16 = pcVar34 + -uVar30;
      pcVar34 = (char *)&DAT_0080f33a;
      for (uVar29 = uVar30 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
        *(undefined4 *)pcVar34 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar34 = pcVar34 + 4;
      }
    }
    else {
      if (pAVar35->field_0x3 != '\x02') {
        pcVar16 = &CHAR_S_007ca24c;
        goto LAB_005d6c37;
      }
      uVar30 = 0xffffffff;
      pcVar16 = &CHAR_B_007ca248;
      do {
        pcVar34 = pcVar16;
        if (uVar30 == 0) break;
        uVar30 = uVar30 - 1;
        pcVar34 = pcVar16 + 1;
        cVar27 = *pcVar16;
        pcVar16 = pcVar34;
      } while (cVar27 != '\0');
      uVar30 = ~uVar30;
      pcVar16 = pcVar34 + -uVar30;
      pcVar34 = (char *)&DAT_0080f33a;
      for (uVar29 = uVar30 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
        *(undefined4 *)pcVar34 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar34 = pcVar34 + 4;
      }
    }
    pSVar12 = g_startSystem_0081176C;
    for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
      *pcVar34 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar34 = pcVar34 + 1;
    }
    ccFntTy::WrStr(pSVar12->field_0034,(char *)&DAT_0080f33a,-1,-1,2);
    uVar30 = local_28;
    break;
  case (undefined1 *)0x3:
    /* ST_CALLSITE[005D6C9C]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar30],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar30],0,local_24,
                     local_20,local_1c,local_18);
    uVar29 = 2;
    iVar38 = -1;
    iVar25 = -1;
    pcVar16 = &DAT_007c2310;
    iVar24 = local_1c;
    puVar36 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar35);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    /* ST_CALLSITE[005D6CFA]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib((MMObjTy *)this_00,(int)this_00->field_20F4[uVar30],&local_24,2,0x67,0x67);
    if (pAVar35->field_0x4 == '\x02') {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar30],0,
                       local_24,local_20,local_1c,local_18);
      uVar29 = 2;
      iVar25 = -1;
      iVar24 = -1;
      pcVar16 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,
                                           (uint *)&pAVar35->field_0xa,(uint *)&CHAR___007c7274,
                                           local_1c);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar16,iVar24,iVar25,uVar29);
      break;
    }
    if (pAVar35->field_0x4 != '\x04') break;
    pDVar18 = pAVar35->field_0050;
    if ((uint)(byte)pAVar35->field_0x5 < pDVar18->count) {
      puVar36 = DArrayAt<uint>(pDVar18, (uint)(byte)pAVar35->field_0x5);
    }
    else {
      puVar36 = nullptr;
    }
    if (puVar36 == nullptr) break;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar30],0,local_24,
                     local_20,local_1c,local_18);
    uVar29 = 2;
    iVar38 = -1;
    iVar25 = -1;
    pcVar16 = &CHAR___007c7274;
    iVar24 = local_1c;
LAB_005d6d70:
    pcVar16 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar36,(uint *)pcVar16,
                                         iVar24);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar16,iVar25,iVar38,uVar29);
    break;
  case (undefined1 *)0x5:
    if ((*(char *)pAVar35 != '\0') &&
       /* ST_CALLSITE[005D6E23]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar30],&local_24,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar35->field_0x4 != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar23 = pAVar35->field_0x2, bVar23 != 0xff)) &&
           (DAT_0080874d != bVar23)) {
          local_28 = 0xffffffff;
          local_2c = (undefined1 *)STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar23));
          uVar29 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar29][bVar23];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
            uVar21 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
            uVar21 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
            uVar21 = 1;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
            uVar21 = 2;
          }
          else {
            uVar21 = 0;
          }
          switch(uVar21) {
          default:
            iVar24 = -1;
            break;
          case 1:
            iVar24 = 1;
            break;
          case 2:
            iVar24 = 3;
            break;
          case 0xfffffffe:
            iVar24 = 0;
            break;
          case 0xffffffff:
            iVar24 = 2;
          }
          if (-1 < iVar24 + -1) {
            pBVar22 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4B,
                                   iVar24 + -1);
            /* ST_CALLSITE[005D6FB6]: CALL 0x00403229; direct=00403229 DibPut */
            DibPut(this_00->field_20F4[uVar30],
                   (local_1c - (pBVar22->bmiHeader).biWidth) / 2 + local_24,
                   (local_18 - (pBVar22->bmiHeader).biHeight) / 2 + 1 + local_20,'\x06',
                   (byte *)pBVar22);
          }
        }
      }
      else {
        local_EAX_6384 = LoadResourceString(0x1f4a,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005D6E60]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",local_EAX_6384);
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar30],0,
                         local_24,local_20,local_1c,local_18);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_20CC[uVar30]);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}


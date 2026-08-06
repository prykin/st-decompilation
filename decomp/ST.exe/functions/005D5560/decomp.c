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
  MMMObjTy *pMVar6;
  dword dVar7;
  ccFntTy *pcVar8;
  int *piVar9;
  StartSystemTy *pSVar11;
  SettMapTy *this_00;
  DWORD DVar12;
  int iVar13;
  void *pvVar13;
  char *pcVar14;
  byte *pbVar15;
  DArrayTy *pDVar16;
  void *pvVar17;
  char *local_EAX_3231;
  uint *puVar18_mg0;
  char *local_EAX_3347;
  uint *puVar18_mg1;
  char *local_EAX_3503;
  uint *puVar18_mg2;
  char *local_EAX_3868;
  char *local_EAX_3994;
  AnonNested_005D5560_0050_EBFA0A51 *pAVar18;
  char *pcVar15;
  undefined4 uVar19;
  char *local_EAX_6384;
  BITMAPINFO *pBVar20;
  int iVar22;
  byte bVar21;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  char cVar26;
  SettMapTy_field_2179State SVar27;
  uint uVar28;
  uint uVar29;
  byte *puVar30;
  BulkInitializedRecord_008087C7 *pBVar31;
  char *pcVar32;
  char *pcVar33;
  byte *puVar34;
  AnonShape_005CBBE0_2D1CAA09 *pAVar35;
  uint *puVar36;
  bool bVar37;
  uint *puVar38;
  int iVar39;
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
  DVar12 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar12;
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
  SettMapTy::GetMessage(local_44,message);
  SVar4 = message->id;
  if (SVar4 < MESS_SETTMAPSTY_6505) {
    if (SVar4 == MESS_SHARED_6504) {
      uVar29 = (message->arg0).u32;
      if ((uVar29 != 0xffffffff) && (pDVar16 = this_00->field_1F84, pDVar16 != nullptr)) {
        pDVar5 = this_00->field_1E2F;
        if (uVar29 < pDVar5->count) {
          pvVar13 = DArrayAt<void>(pDVar5, uVar29);
        }
        else {
          pvVar13 = nullptr;
        }
        cVar26 = STField<char>(pvVar13,0x104);
        if ((message->arg1).u32 < pDVar16->count) {
          pvVar13 = DArrayAt<void>(pDVar16, (message->arg1).u32);
        }
        else {
          pvVar13 = nullptr;
        }
        if (pvVar13 != nullptr) {
          STField<char>(pvVar13,3) = cVar26;
        }
        pDVar16 = this_00->field_1F84;
        uVar29 = (message->arg1).u32 + 1;
        bVar37 = uVar29 < pDVar16->count;
        if ((int)uVar29 < (int)pDVar16->count) {
          do {
            if (bVar37) {
              pcVar14 = DArrayAt<char>(pDVar16, uVar29);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((pcVar14 == nullptr) || (*pcVar14 != '\0')) break;
            pcVar14[3] = cVar26;
            pDVar16 = this_00->field_1F84;
            uVar29 = uVar29 + 1;
            bVar37 = uVar29 < pDVar16->count;
          } while ((int)uVar29 < (int)pDVar16->count);
        }
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
      }
    }
    else if (SVar4 == MESS_SHARED_6501) {
      uVar29 = (message->arg0).u32;
      if ((uVar29 != 0xffffffff) && (pDVar16 = this_00->field_1F84, pDVar16 != nullptr)) {
        pDVar5 = this_00->field_1E2F;
        if (uVar29 < pDVar5->count) {
          pvVar13 = DArrayAt<void>(pDVar5, uVar29);
        }
        else {
          pvVar13 = nullptr;
        }
        cVar26 = STField<char>(pvVar13,0x104);
        if ((message->arg1).u32 < pDVar16->count) {
          pvVar13 = DArrayAt<void>(pDVar16, (message->arg1).u32);
        }
        else {
          pvVar13 = nullptr;
        }
        if (pvVar13 != nullptr) {
          STField<char>(pvVar13,0x4a) = cVar26;
        }
        pDVar16 = this_00->field_1F84;
        uVar29 = (message->arg1).u32 + 1;
        bVar37 = uVar29 < pDVar16->count;
        if ((int)uVar29 < (int)pDVar16->count) {
          do {
            if (bVar37) {
              pcVar14 = DArrayAt<char>(pDVar16, uVar29);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((pcVar14 == nullptr) || (*pcVar14 != '\0')) break;
            pcVar14[0x4a] = cVar26;
            pDVar16 = this_00->field_1F84;
            uVar29 = uVar29 + 1;
            bVar37 = uVar29 < pDVar16->count;
          } while ((int)uVar29 < (int)pDVar16->count);
        }
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
      }
    }
    else if (((SVar4 == MESS_PRIVIDERTY_6502) &&
             (uVar29 = (message->arg0).u32, uVar29 != 0xffffffff)) &&
            (pDVar16 = this_00->field_1F84, pDVar16 != nullptr)) {
      pDVar5 = this_00->field_1E2F;
      if (uVar29 < pDVar5->count) {
        pvVar13 = DArrayAt<void>(pDVar5, uVar29);
      }
      else {
        pvVar13 = nullptr;
      }
      local_d = STField<byte>(pvVar13,0x104);
      if ((message->arg1).u32 < pDVar16->count) {
        pvVar13 = DArrayAt<void>(pDVar16, (message->arg1).u32);
      }
      else {
        pvVar13 = nullptr;
      }
      if (pvVar13 != nullptr) {
        if (STField<byte>(pvVar13,2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,STField<byte>(pvVar13,2));
        }
        STField<byte>(pvVar13,2) = local_d;
        if (STField<char>(pvVar13,4) == '\x02') {
          DAT_0080874d = local_d;
        }
        pDVar16 = this_00->field_1F84;
        uVar29 = (message->arg1).u32 + 1;
        bVar37 = uVar29 < pDVar16->count;
        if ((int)uVar29 < (int)pDVar16->count) {
          do {
            if (bVar37) {
              pcVar14 = DArrayAt<char>(pDVar16, uVar29);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((pcVar14 == nullptr) || (*pcVar14 != '\0')) break;
            pcVar14[2] = local_d;
            pDVar16 = this_00->field_1F84;
            uVar29 = uVar29 + 1;
            bVar37 = uVar29 < pDVar16->count;
          } while ((int)uVar29 < (int)pDVar16->count);
        }
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
        goto LAB_005d5ff8;
      }
    }
  }
  else if (SVar4 == MESS_SETTMAPSTY_6505) {
    uVar29 = (message->arg0).u32;
    if ((uVar29 != 0xffffffff) && (pDVar16 = this_00->field_1F84, pDVar16 != nullptr)) {
      pDVar5 = this_00->field_1E2F;
      if (uVar29 < pDVar5->count) {
        pvVar13 = DArrayAt<void>(pDVar5, uVar29);
      }
      else {
        pvVar13 = nullptr;
      }
      uVar29 = pDVar16->count;
      if ((message->arg1).u32 < uVar29) {
        pvVar17 = DArrayAt<void>(pDVar16, (message->arg1).u32);
      }
      else {
        pvVar17 = nullptr;
      }
      if (pvVar17 != nullptr) {
        if ((STField<int>(pvVar13,0x104) == 2) && (uVar28 = 0, 0 < (int)uVar29)) {
          bVar37 = uVar29 != 0;
          do {
            if (bVar37) {
              pvVar17 = DArrayAt<void>(pDVar16, uVar28);
            }
            else {
              pvVar17 = nullptr;
            }
            if ((pvVar17 != nullptr) && (STField<char>(pvVar17,4) == '\x02')) {
              SVar1 = this_00->field_1E26;
              if ((SVar1 == CASE_6) || ((SVar1 == CASE_1 || (SVar1 == CASE_2)))) {
                STField<undefined1>(pvVar17,4) = 4;
                STField<undefined1>(pvVar17,5) = 0;
              }
              else {
                STField<undefined1>(pvVar17,4) = 1;
              }
              break;
            }
            uVar28 = uVar28 + 1;
            bVar37 = uVar28 < uVar29;
          } while ((int)uVar28 < (int)uVar29);
        }
        pDVar16 = this_00->field_1F84;
        if ((message->arg1).u32 < pDVar16->count) {
          pvVar17 = DArrayAt<void>(pDVar16, (message->arg1).u32);
        }
        else {
          pvVar17 = nullptr;
        }
        cVar26 = STField<char>(pvVar13,0x104);
        STField<char>(pvVar17,4) = cVar26;
        STField<undefined1>(pvVar17,5) = STField<undefined1>(pvVar13,0x108);
        if (cVar26 == '\0') {
          if (STField<byte>(pvVar17,2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,STField<byte>(pvVar17,2));
          }
          STField<undefined1>(pvVar17,2) = 0xff;
        }
        DAT_0080874d = 0xff;
        pDVar16 = this_00->field_1F84;
        uVar28 = 0;
        uVar29 = pDVar16->count;
        if (0 < (int)uVar29) {
          bVar37 = uVar29 != 0;
          do {
            if (bVar37) {
              pvVar13 = DArrayAt<void>(pDVar16, uVar28);
            }
            else {
              pvVar13 = nullptr;
            }
            if (((pvVar13 != nullptr) && (STField<char>(pvVar13,4) == '\x02')) &&
               (STField<int>(pvVar13,6) == DAT_0080877f)) {
              DAT_0080874d = STField<byte>(pvVar13,2);
              break;
            }
            uVar28 = uVar28 + 1;
            bVar37 = uVar28 < uVar29;
          } while ((int)uVar28 < (int)uVar29);
        }
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
LAB_005d5ff8:
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
      pBVar31 = g_bulkInitializedRecords_008087C7;
      for (iVar23 = 0xa2; iVar23 != 0; iVar23 = iVar23 + -1) {
        *(undefined4 *)pBVar31 = 0;
        pBVar31 = (BulkInitializedRecord_008087C7 *)&pBVar31->field_0x4;
      }
      pbVar15 = &g_bulkInitializedRecords_008087C7[0].field_0022;
      do {
        pbVar15[-1] = 0;
        *pbVar15 = 0xff;
        pbVar15 = pbVar15 + 0x51;
      } while ((int)pbVar15 < 0x808a71);
      pDVar16 = this_00->field_1F84;
      uVar28 = 0;
      uVar29 = pDVar16->count;
      if (0 < (int)uVar29) {
        bVar37 = uVar29 != 0;
        do {
          if (bVar37) {
            pcVar14 = DArrayAt<char>(pDVar16, uVar28);
          }
          else {
            pcVar14 = nullptr;
          }
          if (((pcVar14 != nullptr) && (*pcVar14 != '\0')) && (pcVar14[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar14[2]) = 0;
          }
          uVar28 = uVar28 + 1;
          bVar37 = uVar28 < uVar29;
        } while ((int)uVar28 < (int)uVar29);
      }
      local_c = 0;
      if (0 < (int)uVar29) {
        bVar37 = uVar29 != 0;
        do {
          if (bVar37) {
            pcVar14 = DArrayAt<char>(pDVar16, local_c);
          }
          else {
            pcVar14 = nullptr;
          }
          if (((pcVar14 != nullptr) && (*pcVar14 != '\0')) &&
             ((pcVar14[4] != '\0' && ((pcVar14[4] != '\x01' || (this_00->field_1E26 == CASE_2))))))
          {
            iVar23 = *(int *)(pcVar14 + 0x50);
            if ((uint)(byte)pcVar14[5] < *(uint *)(iVar23 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar23 + 8) * (uint)(byte)pcVar14[5] +
                                *(int *)(iVar23 + 0x1c));
            }
            else {
              local_8 = nullptr;
            }
            DAT_008087c6 = DAT_008087c6 + '\x01';
            if (pcVar14[2] == -1) {
              iVar23 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar23) != '\0') {
                  pcVar14[2] = (char)iVar23;
                  *(undefined1 *)((int)&local_30 + iVar23) = 0;
                  break;
                }
                iVar23 = iVar23 + 1;
              } while (iVar23 < 8);
            }
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0022 = pcVar14[2];
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0021 = pcVar14[3];
            uVar29 = 0xffffffff;
            pcVar33 = &DAT_008016a0;
            do {
              pcVar32 = pcVar33;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar32 = pcVar33 + 1;
              cVar26 = *pcVar33;
              pcVar33 = pcVar32;
            } while (cVar26 != '\0');
            uVar29 = ~uVar29;
            local_14 = (AnonShape_005D5560_9031BF1B *)
                       &g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0x1;
            pcVar33 = pcVar32 + -uVar29;
            pcVar32 = &g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0x1;
            memmove(pcVar32, pcVar33, uVar29); /* compiler REP MOVS byte copy */
            uVar28 = 0;
            if (pcVar14[4] == '\x02') {
              if (*pcVar14 != '\0') {
                *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)pcVar14[2]) = 0;
                DAT_0080874d = pcVar14[2];
                DAT_0080874e = pcVar14[3];
              }
            }
            else if (pcVar14[4] == '\x04') {
              *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)pcVar14[2]) = 1;
              if (local_8 == nullptr) {
                uVar29 = 0xffffffff;
                local_8 = &g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0x1;
                pcVar33 = &DAT_008016a0;
                do {
                  pcVar32 = pcVar33;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar32 = pcVar33 + 1;
                  cVar26 = *pcVar33;
                  pcVar33 = pcVar32;
                } while (cVar26 != '\0');
                uVar29 = ~uVar29;
                pcVar33 = pcVar32 + -uVar29;
                pcVar32 = local_8;
                memmove(pcVar32, pcVar33, uVar29); /* compiler REP MOVS byte copy */
                uVar28 = 0;
              }
              else {
                pcVar33 = local_8 + 0x4c;
                uVar29 = 0xffffffff;
                local_8 = &g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0x1;
                do {
                  pcVar32 = pcVar33;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar32 = pcVar33 + 1;
                  cVar26 = *pcVar33;
                  pcVar33 = pcVar32;
                } while (cVar26 != '\0');
                uVar29 = ~uVar29;
                pcVar33 = pcVar32 + -uVar29;
                pcVar32 = local_8;
                memmove(pcVar32, pcVar33, uVar29); /* compiler REP MOVS byte copy */
                uVar28 = 0;
              }
            }
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0023 = pcVar14[0x4a];
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0024 =
                 *(uint *)(pcVar14 + 0x54);
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_0028 =
                 *(uint *)(pcVar14 + 0x58);
            g_bulkInitializedRecords_008087C7[(byte)pcVar14[2]].field_002C =
                 *(uint *)(pcVar14 + 0x5c);
          }
          pDVar16 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar37 = local_c < pDVar16->count;
        } while ((int)local_c < (int)pDVar16->count);
      }
      STAppC::sub_0056EE90((STAppC *)&DAT_00807620);
      memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
      DAT_00808aaf = 0;
      pDVar16 = this_00->field_1F84;
      local_c = 0;
      if (0 < (int)pDVar16->count) {
        bVar37 = pDVar16->count != 0;
        do {
          if (bVar37) {
            pvVar13 = DArrayAt<void>(pDVar16, local_c);
          }
          else {
            pvVar13 = nullptr;
          }
          if (pvVar13 != nullptr) {
            local_d = STField<byte>(pvVar13,4);
            if ((local_d != 1) && (local_d != 0)) {
              if (local_d == 4) {
                iVar23 = STField<int>(pvVar13,0x50);
                if ((uint)STField<byte>(pvVar13,5) < *(uint *)(iVar23 + 0xc)) {
                  pcVar14 = (char *)(*(int *)(iVar23 + 8) * (uint)STField<byte>(pvVar13,5) +
                                    *(int *)(iVar23 + 0x1c));
                }
                else {
                  pcVar14 = nullptr;
                }
                if (pcVar14 != nullptr) {
                  uVar29 = 0xffffffff;
                  do {
                    pcVar33 = pcVar14;
                    if (uVar29 == 0) break;
                    uVar29 = uVar29 - 1;
                    pcVar33 = pcVar14 + 1;
                    cVar26 = *pcVar14;
                    pcVar14 = pcVar33;
                  } while (cVar26 != '\0');
                  uVar29 = ~uVar29;
                  pcVar33 = pcVar33 + -uVar29;
                  local_8 = &stack0xfffffe9c;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar29 = 0xffffffff;
                pcVar14 = (char *)((int)pvVar13 + 10);
                do {
                  pcVar33 = pcVar14;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar33 = pcVar14 + 1;
                  cVar26 = *pcVar14;
                  pcVar14 = pcVar33;
                } while (cVar26 != '\0');
                uVar29 = ~uVar29;
                pcVar33 = pcVar33 + -uVar29;
                local_8 = &stack0xfffffe9c;
LAB_005d5b7e:
                pcVar14 = &stack0xfffffe9c;
                for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar33;
                  pcVar33 = pcVar33 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar29 = uVar29 & 3; local_8 = &stack0xfffffe9c, uVar29 != 0;
                    uVar29 = uVar29 - 1) {
                  *pcVar14 = *pcVar33;
                  pcVar33 = pcVar33 + 1;
                  pcVar14 = pcVar14 + 1;
                }
              }
              bVar21 = STField<byte>(pvVar13,2);
              puVar30 = (byte *)&stack0xfffffe9c;
              puVar34 = (byte *)(&DAT_00808ab0 + (uint)DAT_00808aaf * 0x27);
              memmove(puVar34, puVar30, 0x9c); /* compiler REP MOVS byte copy */
              if (bVar21 < 8) {
                iVar24 = 0;
                iVar23 = (uint)bVar21 * 0x51 + 0x808800;
                do {
                  if (*(char *)(iVar23 + iVar24) == '\0') {
                    *(byte *)(iVar23 + iVar24) = DAT_00808aaf;
                    break;
                  }
                  iVar24 = iVar24 + 1;
                } while (iVar24 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          pDVar16 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar37 = local_c < pDVar16->count;
        } while ((int)local_c < (int)pDVar16->count);
      }
      if (this_00->field_1E26 == CASE_6) {
        if ((this_00->field_1F47 == 0) && ((message->arg0).u32 == 0)) {
          pMVar6 = this_00->field_1A5B;
          if (*(int *)(pMVar6 + 0x2e6) != 0) {
            memset(local_64, 0, 0x20); /* compiler bulk-zero initialization */
            iVar23 = 0;
            memset(local_84, 0, 0x20); /* compiler bulk-zero initialization */
            local_7c = this_00->field_0008;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            iVar23 = MMsgTy::SetMessage(*(MMsgTy **)(pMVar6 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,nullptr,0,0);
            if (iVar23 != 0) {
              this_00->vfunc_24();
            }
          }
        }
        else {
          uVar29 = 0xffffffff;
          DAT_008087a0 = CASE_6;
          pcVar14 = &DAT_00853de4;
          do {
            pcVar33 = pcVar14;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar33 = pcVar14 + 1;
            cVar26 = *pcVar14;
            pcVar14 = pcVar33;
          } while (cVar26 != '\0');
          uVar29 = ~uVar29;
          DAT_00808783 = 2;
          pcVar14 = pcVar33 + -uVar29;
          pcVar33 = &DAT_0080ed16;
          memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
          uVar28 = 0;
          uVar29 = 0xffffffff;
          pcVar14 = &DAT_0080ed16;
          do {
            pcVar33 = pcVar14;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar33 = pcVar14 + 1;
            cVar26 = *pcVar14;
            pcVar14 = pcVar33;
          } while (cVar26 != '\0');
          uVar29 = ~uVar29;
          pcVar14 = pcVar33 + -uVar29;
          pcVar33 = (char *)&DAT_0080ee1a;
          memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
          uVar29 = 0xffffffff;
          pcVar14 = &DAT_00807680;
          do {
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            cVar26 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar26 != '\0');
          uVar28 = 0xffffffff;
          pcVar14 = (char *)((int)&DAT_0080ed12 + ~uVar29 + 3);
          do {
            pcVar33 = pcVar14;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar33 = pcVar14 + 1;
            cVar26 = *pcVar14;
            pcVar14 = pcVar33;
          } while (cVar26 != '\0');
          uVar28 = ~uVar28;
          pcVar14 = pcVar33 + -uVar28;
          pcVar33 = &DAT_0080ef1e;
          memmove(pcVar33, pcVar14, uVar28); /* compiler REP MOVS byte copy */
          uVar28 = 0;
          thunk_FUN_005b6350(this_00,0x6948,0,0);
          this_00->field_0x21e5 = 1;
          this_00->field_0x21e4 = 1;
          this_00->field_21E7 = 1;
          this_00->field_0x21e3 = 1;
          this_00->field_0x21e1 = 1;
          this_00->CloseButtons();
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(MMsgTy **)(this_00->field_1A5B + 0x2e6) != nullptr) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            MMsgTy::HidePanel(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),1,0,1);
          }
        }
      }
      else {
        uVar29 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar14 = &DAT_0080ed16;
        do {
          pcVar33 = pcVar14;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar33 = pcVar14 + 1;
          cVar26 = *pcVar14;
          pcVar14 = pcVar33;
        } while (cVar26 != '\0');
        uVar29 = ~uVar29;
        pcVar14 = pcVar33 + -uVar29;
        pcVar33 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = this_00->field_1E26;
        memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
        uVar29 = 0xffffffff;
        pcVar14 = &DAT_00807680;
        do {
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          cVar26 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar26 != '\0');
        uVar28 = 0xffffffff;
        pcVar14 = (char *)((int)&DAT_0080ed12 + ~uVar29 + 3);
        do {
          pcVar33 = pcVar14;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar33 = pcVar14 + 1;
          cVar26 = *pcVar14;
          pcVar14 = pcVar33;
        } while (cVar26 != '\0');
        uVar28 = ~uVar28;
        pcVar14 = pcVar33 + -uVar28;
        pcVar33 = &DAT_0080ef1e;
        memmove(pcVar33, pcVar14, uVar28); /* compiler REP MOVS byte copy */
        uVar29 = 0;
        thunk_FUN_005b6350(this_00,0x6948,0,0);
        this_00->field_0x21e5 = 1;
        this_00->field_0x21e4 = 1;
        this_00->field_21E7 = 1;
        this_00->field_0x21e2 = 1;
        this_00->field_0x21e1 = 1;
        this_00->CloseButtons();
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(MMsgTy **)(this_00->field_1A5B + 0x2e6) != nullptr) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          MMsgTy::HidePanel(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),1,0,1);
        }
      }
    }
  }
  SVar3 = message->id;
  if (((0x69fe < SVar3) && (SVar3 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    pDVar16 = this_00->field_1F84;
    local_c = SVar3 - 0x69ff >> 3;
    if ((pDVar16 == nullptr) ||
       (uVar29 = this_00->field_1F88 + local_c, pDVar16->count <= uVar29)) {
      local_14 = nullptr;
    }
    else {
      local_14 = DArrayAt<AnonShape_005D5560_9031BF1B>(pDVar16, uVar29);
    }
    uVar29 = 0;
    if (local_14 != nullptr) {
      switch(SVar3 + 1 & 7) {
      case 1:
        uVar28 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar29 = pDVar16->count;
        if (0 < (int)uVar29) {
          bVar37 = uVar29 != 0;
          do {
            if (bVar37) {
              pcVar14 = DArrayAt<char>(pDVar16, uVar28);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((*pcVar14 != '\0') && (pcVar14[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar14[2]) = 0;
            }
            uVar28 = uVar28 + 1;
            bVar37 = uVar28 < uVar29;
          } while ((int)uVar28 < (int)uVar29);
        }
        bVar21 = local_14->field_0x2;
        SVar27 = this_00->field_1F88 + local_c;
        uVar29 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar21) = 1;
        this_00->field_2179 = SVar27;
        this_00->field_2191 = 0x6503;
        this_00->field_21A1 = 0;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0xff;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
        do {
          if (*(char *)((int)&local_40 + uVar29) != '\0') {
            this_00->field_1F37 = uVar29;
            Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
            if ((byte)local_14->field_0x2 == uVar29) {
              this_00->field_21A1 = (uint)local_8 & 0xff;
            }
            local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)((char)local_8 + '\x01'));
          }
          uVar29 = uVar29 + 1;
        } while ((int)uVar29 < 8);
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21C5 = 0x124;
        this_00->field_21CD = 0x1e;
        this_00->field_21A5 = 0x12;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
LAB_005d619b:
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
        uVar29 = 0xffffffff;
        do {
          pcVar14 = local_EAX_3231;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar14 = local_EAX_3231 + 1;
          cVar26 = *local_EAX_3231;
          local_EAX_3231 = pcVar14;
        } while (cVar26 != '\0');
        uVar29 = ~uVar29;
        pcVar14 = pcVar14 + -uVar29;
        pcVar33 = &this_00->field_1E33;
        memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
        uVar28 = 0;
        for (puVar18_mg0 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
            puVar18_mg0 != nullptr;
            puVar18_mg0 = Library::MSVCRT::FUN_0072e560(puVar18_mg0,'\n')) {
          *(undefined1 *)puVar18_mg0 = 0x20;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        local_EAX_3347 = LoadResourceString(0x23f0,g_hINSTANCE_00807618);
        uVar29 = 0xffffffff;
        do {
          pcVar14 = local_EAX_3347;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar14 = local_EAX_3347 + 1;
          cVar26 = *local_EAX_3347;
          local_EAX_3347 = pcVar14;
        } while (cVar26 != '\0');
        uVar29 = ~uVar29;
        pcVar14 = pcVar14 + -uVar29;
        pcVar33 = &this_00->field_1E33;
        memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
        uVar28 = 0;
        for (puVar18_mg1 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
            puVar18_mg1 != nullptr;
            puVar18_mg1 = Library::MSVCRT::FUN_0072e560(puVar18_mg1,'\n')) {
          *(undefined1 *)puVar18_mg1 = 0x20;
        }
        this_00->field_1F37 = 2;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        uVar29 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar29 = (uint)(local_14->field_0x4 != '\x02');
        }
        if (uVar29 != 0) {
          local_EAX_3503 = LoadResourceString(0x23f2,g_hINSTANCE_00807618);
          uVar29 = 0xffffffff;
          do {
            pcVar14 = local_EAX_3503;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar14 = local_EAX_3503 + 1;
            cVar26 = *local_EAX_3503;
            local_EAX_3503 = pcVar14;
          } while (cVar26 != '\0');
          uVar29 = ~uVar29;
          pcVar14 = pcVar14 + -uVar29;
          pcVar33 = &this_00->field_1E33;
          memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
          for (puVar18_mg2 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_1E33,'\n');
              puVar18_mg2 != nullptr;
              puVar18_mg2 = Library::MSVCRT::FUN_0072e560(puVar18_mg2,'\n')) {
            *(undefined1 *)puVar18_mg2 = 0x20;
          }
          this_00->field_1F37 = 3;
          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        bVar21 = local_14->field_0x3;
        this_00->field_21C5 = 0x143;
        this_00->field_21CD = 0x78;
        this_00->field_21A1 = bVar21 - 1;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar8 = g_startSystem_0081176C->field_0034;
        if (pcVar8->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar8);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar8->field_0x8a;
LAB_005d6676:
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
          uVar29 = 0;
          local_8 = nullptr;
          if ((this_00->field_1E26 == CASE_2) && (local_14->field_0x4 == '\x02')) break;
          pDVar16 = this_00->field_1F84;
          uVar28 = pDVar16->count;
          bVar37 = uVar28 != 0;
          if (0 < (int)uVar28) {
            do {
              if (bVar37) {
                pcVar14 = DArrayAt<char>(pDVar16, uVar29);
              }
              else {
                pcVar14 = nullptr;
              }
              if ((*pcVar14 != '\0') && (pcVar14[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar29 = uVar29 + 1;
              bVar37 = uVar29 < uVar28;
            } while ((int)uVar29 < (int)uVar28);
          }
          if ((this_00->field_1E26 != CASE_2) && (2 < (int)local_8)) {
            local_EAX_3868 = LoadResourceString(8000,g_hINSTANCE_00807618);
            uVar29 = 0xffffffff;
            do {
              pcVar14 = local_EAX_3868;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar14 = local_EAX_3868 + 1;
              cVar26 = *local_EAX_3868;
              local_EAX_3868 = pcVar14;
            } while (cVar26 != '\0');
            uVar29 = ~uVar29;
            pcVar14 = pcVar14 + -uVar29;
            pcVar33 = &this_00->field_1E33;
            memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
            uVar28 = 0;
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
              uVar29 = 0xffffffff;
              do {
                pcVar14 = local_EAX_3994;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar14 = local_EAX_3994 + 1;
                cVar26 = *local_EAX_3994;
                local_EAX_3994 = pcVar14;
              } while (cVar26 != '\0');
              uVar29 = ~uVar29;
              pcVar14 = pcVar14 + -uVar29;
              pcVar33 = &this_00->field_1E33;
              memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
              uVar28 = 0;
              this_00->field_1F37 = 2;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
            }
          }
          local_8 = nullptr;
          pAVar18 = local_14->field_0050;
          pcVar14 = (char *)pAVar18->field_000C;
          if (0 < (int)pcVar14) {
            do {
              if (local_8 < pcVar14) {
                iVar23 = pAVar18->field_0008 * (int)local_8 + pAVar18->field_001C;
              }
              else {
                iVar23 = 0;
              }
              uVar29 = 0xffffffff;
              pcVar14 = (char *)(iVar23 + 0x40);
              do {
                pcVar33 = pcVar14;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar14 + 1;
                cVar26 = *pcVar14;
                pcVar14 = pcVar33;
              } while (cVar26 != '\0');
              uVar29 = ~uVar29;
              pcVar14 = pcVar33 + -uVar29;
              pcVar33 = &this_00->field_1E33;
              memmove(pcVar33, pcVar14, uVar29); /* compiler REP MOVS byte copy */
              this_00->field_1F37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
              local_8 = local_8 + 1;
              pAVar18 = local_14->field_0050;
              pcVar14 = (char *)pAVar18->field_000C;
            } while ((int)local_8 < (int)pcVar14);
          }
        }
        pDVar16 = this_00->field_1E2F;
        uVar29 = 0;
        if (0 < (int)pDVar16->count) {
          bVar37 = pDVar16->count != 0;
          local_28 = (uint)(byte)local_14->field_0x4;
          do {
            if (bVar37) {
              pvVar13 = DArrayAt<void>(pDVar16, uVar29);
            }
            else {
              pvVar13 = nullptr;
            }
            if ((STField<uint>(pvVar13,0x104) == local_28) &&
               (STField<uint>(pvVar13,0x108) == (uint)(byte)local_14->field_0x5)) {
              this_00->field_21A1 = uVar29;
              break;
            }
            uVar29 = uVar29 + 1;
            bVar37 = uVar29 < pDVar16->count;
          } while ((int)uVar29 < (int)pDVar16->count);
        }
        dVar7 = pDVar16->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar7;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar8 = g_startSystem_0081176C->field_0034;
        if (pcVar8->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar8);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar8->field_0x8a;
        if (1 < (int)this_00->field_21A9) goto LAB_005d6676;
        break;
      case 5:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar28 = pDVar16->count;
          if (0 < (int)uVar28) {
            bVar37 = uVar28 != 0;
            do {
              if (bVar37) {
                pvVar13 = DArrayAt<void>(pDVar16, uVar29);
              }
              else {
                pvVar13 = nullptr;
              }
              if ((pvVar13 != nullptr) && (STField<byte>(pvVar13,0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)STField<byte>(pvVar13,0x4a)) = 1;
              }
              uVar29 = uVar29 + 1;
              bVar37 = uVar29 < uVar28;
            } while ((int)uVar29 < (int)uVar28);
          }
          bVar21 = 0;
          iVar23 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar23) != '\0') {
              bVar21 = bVar21 + 1;
            }
            iVar23 = iVar23 + 1;
          } while (iVar23 < 8);
          bVar2 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar21 < bVar2) {
            iVar23 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar23) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar23) = 1;
                bVar21 = bVar21 + 1;
                break;
              }
              iVar23 = iVar23 + 1;
            } while (iVar23 < 8);
            goto joined_r0x005d6701;
          }
          uVar29 = 0;
          cVar26 = (char)local_28;
          if (0 < (int)pDVar16->count) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar37 = pDVar16->count != 0;
            do {
              if (bVar37) {
                pcVar14 = DArrayAt<char>(pDVar16, uVar29);
              }
              else {
                pcVar14 = nullptr;
              }
              if (local_2c == (undefined1 *)uVar29) {
LAB_005d6784:
                if ((*pcVar14 != '\0') && ((pcVar14[4] == '\0' || (pcVar14[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar14[0x4a]) = 0;
                }
              }
              else if (*pcVar14 != '\0') {
                if ((pcVar14[4] != '\0') && (pcVar14[4] != '\x01')) {
                  if (local_8 == nullptr) {
                    if (cVar26 != pcVar14[0x4a]) {
                      cVar26 = -1;
                    }
                  }
                  else {
                    cVar26 = pcVar14[0x4a];
                    local_8 = nullptr;
                  }
                }
                goto LAB_005d6784;
              }
              uVar29 = uVar29 + 1;
              bVar37 = uVar29 < pDVar16->count;
            } while ((int)uVar29 < (int)pDVar16->count);
            local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(cVar26));
          }
          if (cVar26 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          uVar29 = 0;
          this_00->field_2171 = 0x6501;
          this_00->field_2179 = this_00->field_1F88 + local_c;
          this_00->field_2191 = 0x6500;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar25 = &uStack_79;
          local_2c = puVar25;
          do {
            iVar23 = uVar29 + 0x41;
            if (puVar25[uVar29 + 0x41] != '\0') {
              pcVar15 = LoadResourceString(0x1f4a,g_hINSTANCE_00807618);
              wsprintfA(&this_00->field_1E33,"%s%c",pcVar15,iVar23);
              this_00->field_1F37 = uVar29;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
              if ((byte)local_14->field_0x4a == uVar29) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              local_8 = (char *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)((char)local_8 + '\x01'));
              puVar25 = local_2c;
            }
            uVar29 = uVar29 + 1;
          } while ((int)uVar29 < 8);
          SVar1 = this_00->field_1E26;
          this_00->field_21A9 = this_00->field_1E2F->count;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (uVar19 = 0x26b, SVar1 == CASE_2)) {
            uVar19 = 0x2ab;
          }
          this_00->field_21C5 = uVar19;
          this_00->field_21CD = 0x46;
          this_00->field_21C9 = local_c * 0x19 + 0x41;
          pcVar8 = g_startSystem_0081176C->field_0034;
          if (pcVar8->field_00A0 != 0) {
            FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar8);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar8->field_0x8a;
          goto LAB_005d619b;
        }
        if (DAT_0080874d != 0xff) {
          bVar21 = local_14->field_0x2;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT31((uint3)(SVar3 - 0x69ff >> 0xb),bVar21);
          if ((bVar21 != 0xff) && (DAT_0080874d != bVar21)) {
            if (local_14->field_0x4 == '\x04') {
              local_2c = (undefined1 *)STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar21));
              if (DAT_0080874d == bVar21) {
                uVar19 = 0;
                uVar29 = (uint)bVar21;
              }
              else {
                uVar28 = (uint)DAT_0080874d;
                bVar2 = g_playerRelationMatrix[uVar28][bVar21];
                uVar29 = local_c;
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar21][uVar28] == 0)) {
                  uVar19 = 0xfffffffe;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar21][uVar28] == 0)) {
                  uVar19 = 0xffffffff;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar21][uVar28] == 1)) {
                  uVar19 = 1;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar21][uVar28] == 1)) {
                  uVar19 = 2;
                }
                else {
                  uVar19 = 0;
                }
              }
              bVar21 = (byte)uVar29;
              switch(uVar19) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar21,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,DAT_0080874d,bVar21,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,DAT_0080874d,bVar21,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar21,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,DAT_0080874d,bVar21);
            }
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
  uVar29 = temp_5fb73ea9b4 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(temp_5fb73ea9b4 + 1 & 7);
  piVar9 = (message->arg1).ptr;
  local_1c = piVar9[2];
  local_18 = piVar9[3];
  pDVar16 = this_00->field_1F84;
  local_24 = *piVar9 + -0x113;
  local_20 = 0;
  if ((pDVar16 == nullptr) ||
     (uVar28 = this_00->field_1F88 + uVar29, pDVar16->count <= uVar28)) {
    pAVar35 = nullptr;
  }
  else {
    pAVar35 = DArrayAt<AnonShape_005CBBE0_2D1CAA09>(pDVar16, uVar28);
  }
  local_28 = uVar29;
  FUN_006b4170(this_00->field_20F4[uVar29],0,*piVar9 + -0x113,0,piVar9[2],piVar9[3],0xff);
  if (pAVar35 == nullptr) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*(char *)pAVar35 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar35->field_0x2 != -1) {
        switch(pAVar35->field_0x2) {
        case 0:
          bVar21 = 0xfc;
          break;
        case 1:
          bVar21 = 0xfa;
          break;
        case 2:
          bVar21 = 0xfb;
          break;
        case 3:
          bVar21 = 0xf9;
          break;
        case 4:
          bVar21 = 0xfd;
          break;
        case 5:
          bVar21 = 0xfe;
          break;
        case 6:
          bVar21 = 0xf3;
          break;
        case 7:
          bVar21 = 7;
          break;
        default:
          bVar21 = 0xff;
        }
        FUN_006b4170(this_00->field_20F4[uVar29],0,local_24 + 2,local_20 + 2,local_1c + -4,
                     local_18 + -4,bVar21);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar35 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,local_24,
                     local_20,local_1c,local_18);
    if (pAVar35->field_0x3 == '\x01') {
      pcVar14 = &DAT_007ca250;
LAB_005d6c37:
      uVar29 = 0xffffffff;
      do {
        pcVar33 = pcVar14;
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        pcVar33 = pcVar14 + 1;
        cVar26 = *pcVar14;
        pcVar14 = pcVar33;
      } while (cVar26 != '\0');
      uVar29 = ~uVar29;
      pcVar14 = pcVar33 + -uVar29;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    else {
      if (pAVar35->field_0x3 != '\x02') {
        pcVar14 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar29 = 0xffffffff;
      pcVar14 = &DAT_007ca248;
      do {
        pcVar33 = pcVar14;
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        pcVar33 = pcVar14 + 1;
        cVar26 = *pcVar14;
        pcVar14 = pcVar33;
      } while (cVar26 != '\0');
      uVar29 = ~uVar29;
      pcVar14 = pcVar33 + -uVar29;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    pSVar11 = g_startSystem_0081176C;
    for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
      *pcVar33 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar33 = pcVar33 + 1;
    }
    ccFntTy::WrStr(pSVar11->field_0034,(char *)&DAT_0080f33a,-1,-1,2);
    uVar29 = local_28;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,local_24,
                     local_20,local_1c,local_18);
    uVar28 = 2;
    iVar39 = -1;
    iVar24 = -1;
    puVar38 = (uint *)&DAT_007c2310;
    iVar23 = local_1c;
    puVar36 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar35);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,2,0x67,0x67);
    if (pAVar35->field_0x4 == '\x02') {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,
                       local_24,local_20,local_1c,local_18);
      uVar28 = 2;
      iVar24 = -1;
      iVar23 = -1;
      pcVar14 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,
                                           (uint *)&pAVar35->field_0xa,(uint *)&DAT_007c7274,
                                           local_1c);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar14,iVar23,iVar24,uVar28);
      break;
    }
    if (pAVar35->field_0x4 != '\x04') break;
    pDVar16 = pAVar35->field_0050;
    if ((uint)(byte)pAVar35->field_0x5 < pDVar16->count) {
      puVar36 = DArrayAt<uint>(pDVar16, (uint)(byte)pAVar35->field_0x5);
    }
    else {
      puVar36 = nullptr;
    }
    if (puVar36 == nullptr) break;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,local_24,
                     local_20,local_1c,local_18);
    uVar28 = 2;
    iVar39 = -1;
    iVar24 = -1;
    puVar38 = (uint *)&DAT_007c7274;
    iVar23 = local_1c;
LAB_005d6d70:
    pcVar14 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar36,puVar38,iVar23);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar14,iVar24,iVar39,uVar28);
    break;
  case (undefined1 *)0x5:
    if ((*(char *)pAVar35 != '\0') &&
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar35->field_0x4 != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar21 = pAVar35->field_0x2, bVar21 != 0xff)) &&
           (DAT_0080874d != bVar21)) {
          local_28 = 0xffffffff;
          local_2c = (undefined1 *)STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar21));
          uVar28 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar28][bVar21];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar21][uVar28] == 0)) {
            uVar19 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar21][uVar28] == 0)) {
            uVar19 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar21][uVar28] == 1)) {
            uVar19 = 1;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar21][uVar28] == 1)) {
            uVar19 = 2;
          }
          else {
            uVar19 = 0;
          }
          switch(uVar19) {
          default:
            iVar23 = -1;
            break;
          case 1:
            iVar23 = 1;
            break;
          case 2:
            iVar23 = 3;
            break;
          case 0xfffffffe:
            iVar23 = 0;
            break;
          case 0xffffffff:
            iVar23 = 2;
          }
          if (-1 < iVar23 + -1) {
            pBVar20 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4B,
                                   iVar23 + -1);
            DibPut(this_00->field_20F4[uVar29],
                   (local_1c - (pBVar20->bmiHeader).biWidth) / 2 + local_24,
                   (local_18 - (pBVar20->bmiHeader).biHeight) / 2 + 1 + local_20,'\x06',
                   (byte *)pBVar20);
          }
        }
      }
      else {
        local_EAX_6384 = LoadResourceString(0x1f4a,g_hINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",local_EAX_6384);
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,
                         local_24,local_20,local_1c,local_18);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_20CC[uVar29]);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}


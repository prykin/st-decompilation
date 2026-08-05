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
  code *pcVar10;
  StartSystemTy *pSVar11;
  SettMapTy *this_00;
  DWORD DVar12;
  int iVar13;
  void *pvVar14;
  char *pcVar15;
  byte *pbVar16;
  DArrayTy *pDVar17;
  void *pvVar18;
  uint *puVar19;
  AnonNested_005D5560_0050_EBFA0A51 *pAVar20;
  undefined4 uVar21;
  byte bVar22;
  int iVar23;
  undefined1 *puVar24;
  char cVar25;
  SettMapTy_field_2179State SVar26;
  uint uVar27;
  uint uVar28;
  byte *puVar29;
  BulkInitializedRecord_008087C7 *pBVar30;
  char *pcVar31;
  char *pcVar32;
  byte *puVar33;
  AnonShape_005CBBE0_2D1CAA09 *pAVar34;
  bool bVar35;
  uint *puVar36;
  int iVar37;
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
    iVar23 = ReportDebugMessage("E:\\__titans\\Start\\settsobj.cpp",0x27d,0,iVar13,
                                "%s","SettMapSTy::GetMessage");
    if (iVar23 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar13,0,"E:\\__titans\\Start\\settsobj.cpp",0x27d);
    return 0xffff;
  }
  SettMapTy::GetMessage(local_44,message);
  SVar4 = message->id;
  if (SVar4 < MESS_SETTMAPSTY_6505) {
    if (SVar4 == MESS_SHARED_6504) {
      uVar28 = (message->arg0).u32;
      if ((uVar28 != 0xffffffff) && (pDVar17 = this_00->field_1F84, pDVar17 != nullptr)) {
        pDVar5 = this_00->field_1E2F;
        if (uVar28 < pDVar5->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar28) (runtime stride) */
          pvVar14 = (void *)(pDVar5->elementSize * uVar28 + (int)pDVar5->data);
        }
        else {
          pvVar14 = nullptr;
        }
        cVar25 = *(char *)((int)pvVar14 + 0x104);
        if ((message->arg1).u32 < pDVar17->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, (message->arg1).u32) (runtime stride) */
          pvVar14 = (void *)(pDVar17->elementSize * (message->arg1).u32 + (int)pDVar17->data);
        }
        else {
          pvVar14 = nullptr;
        }
        if (pvVar14 != nullptr) {
          *(char *)((int)pvVar14 + 3) = cVar25;
        }
        pDVar17 = this_00->field_1F84;
        uVar28 = (message->arg1).u32 + 1;
        bVar35 = uVar28 < pDVar17->count;
        if ((int)uVar28 < (int)pDVar17->count) {
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar28) (runtime stride) */
              pcVar15 = (char *)(pDVar17->elementSize * uVar28 + (int)pDVar17->data);
            }
            else {
              pcVar15 = nullptr;
            }
            if ((pcVar15 == nullptr) || (*pcVar15 != '\0')) break;
            pcVar15[3] = cVar25;
            pDVar17 = this_00->field_1F84;
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar17->count;
          } while ((int)uVar28 < (int)pDVar17->count);
        }
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
      }
    }
    else if (SVar4 == MESS_SHARED_6501) {
      uVar28 = (message->arg0).u32;
      if ((uVar28 != 0xffffffff) && (pDVar17 = this_00->field_1F84, pDVar17 != nullptr)) {
        pDVar5 = this_00->field_1E2F;
        if (uVar28 < pDVar5->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar28) (runtime stride) */
          pvVar14 = (void *)(pDVar5->elementSize * uVar28 + (int)pDVar5->data);
        }
        else {
          pvVar14 = nullptr;
        }
        cVar25 = *(char *)((int)pvVar14 + 0x104);
        if ((message->arg1).u32 < pDVar17->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, (message->arg1).u32) (runtime stride) */
          pvVar14 = (void *)(pDVar17->elementSize * (message->arg1).u32 + (int)pDVar17->data);
        }
        else {
          pvVar14 = nullptr;
        }
        if (pvVar14 != nullptr) {
          *(char *)((int)pvVar14 + 0x4a) = cVar25;
        }
        pDVar17 = this_00->field_1F84;
        uVar28 = (message->arg1).u32 + 1;
        bVar35 = uVar28 < pDVar17->count;
        if ((int)uVar28 < (int)pDVar17->count) {
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar28) (runtime stride) */
              pcVar15 = (char *)(pDVar17->elementSize * uVar28 + (int)pDVar17->data);
            }
            else {
              pcVar15 = nullptr;
            }
            if ((pcVar15 == nullptr) || (*pcVar15 != '\0')) break;
            pcVar15[0x4a] = cVar25;
            pDVar17 = this_00->field_1F84;
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar17->count;
          } while ((int)uVar28 < (int)pDVar17->count);
        }
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
      }
    }
    else if (((SVar4 == MESS_PRIVIDERTY_6502) &&
             (uVar28 = (message->arg0).u32, uVar28 != 0xffffffff)) &&
            (pDVar17 = this_00->field_1F84, pDVar17 != nullptr)) {
      pDVar5 = this_00->field_1E2F;
      if (uVar28 < pDVar5->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar28) (runtime stride) */
        pvVar14 = (void *)(pDVar5->elementSize * uVar28 + (int)pDVar5->data);
      }
      else {
        pvVar14 = nullptr;
      }
      local_d = *(byte *)((int)pvVar14 + 0x104);
      if ((message->arg1).u32 < pDVar17->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, (message->arg1).u32) (runtime stride) */
        pvVar14 = (void *)(pDVar17->elementSize * (message->arg1).u32 + (int)pDVar17->data);
      }
      else {
        pvVar14 = nullptr;
      }
      if (pvVar14 != nullptr) {
        if (*(byte *)((int)pvVar14 + 2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar14 + 2));
        }
        *(byte *)((int)pvVar14 + 2) = local_d;
        if (*(char *)((int)pvVar14 + 4) == '\x02') {
          DAT_0080874d = local_d;
        }
        pDVar17 = this_00->field_1F84;
        uVar28 = (message->arg1).u32 + 1;
        bVar35 = uVar28 < pDVar17->count;
        if ((int)uVar28 < (int)pDVar17->count) {
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar28) (runtime stride) */
              pcVar15 = (char *)(pDVar17->elementSize * uVar28 + (int)pDVar17->data);
            }
            else {
              pcVar15 = nullptr;
            }
            if ((pcVar15 == nullptr) || (*pcVar15 != '\0')) break;
            pcVar15[2] = local_d;
            pDVar17 = this_00->field_1F84;
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar17->count;
          } while ((int)uVar28 < (int)pDVar17->count);
        }
        (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
        goto LAB_005d5ff8;
      }
    }
  }
  else if (SVar4 == MESS_SETTMAPSTY_6505) {
    uVar28 = (message->arg0).u32;
    if ((uVar28 != 0xffffffff) && (pDVar17 = this_00->field_1F84, pDVar17 != nullptr)) {
      pDVar5 = this_00->field_1E2F;
      if (uVar28 < pDVar5->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar28) (runtime stride) */
        pvVar14 = (void *)(pDVar5->elementSize * uVar28 + (int)pDVar5->data);
      }
      else {
        pvVar14 = nullptr;
      }
      uVar28 = pDVar17->count;
      if ((message->arg1).u32 < uVar28) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, (message->arg1).u32) (runtime stride) */
        pvVar18 = (void *)(pDVar17->elementSize * (message->arg1).u32 + (int)pDVar17->data);
      }
      else {
        pvVar18 = nullptr;
      }
      if (pvVar18 != nullptr) {
        if ((*(int *)((int)pvVar14 + 0x104) == 2) && (uVar27 = 0, 0 < (int)uVar28)) {
          bVar35 = uVar28 != 0;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar27) (runtime stride) */
              pvVar18 = (void *)(pDVar17->elementSize * uVar27 + (int)pDVar17->data);
            }
            else {
              pvVar18 = nullptr;
            }
            if ((pvVar18 != nullptr) && (*(char *)((int)pvVar18 + 4) == '\x02')) {
              SVar1 = this_00->field_1E26;
              if ((SVar1 == CASE_6) || ((SVar1 == CASE_1 || (SVar1 == CASE_2)))) {
                *(undefined1 *)((int)pvVar18 + 4) = 4;
                *(undefined1 *)((int)pvVar18 + 5) = 0;
              }
              else {
                *(undefined1 *)((int)pvVar18 + 4) = 1;
              }
              break;
            }
            uVar27 = uVar27 + 1;
            bVar35 = uVar27 < uVar28;
          } while ((int)uVar27 < (int)uVar28);
        }
        pDVar17 = this_00->field_1F84;
        if ((message->arg1).u32 < pDVar17->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, (message->arg1).u32) (runtime stride) */
          pvVar18 = (void *)(pDVar17->elementSize * (message->arg1).u32 + (int)pDVar17->data);
        }
        else {
          pvVar18 = nullptr;
        }
        cVar25 = *(char *)((int)pvVar14 + 0x104);
        *(char *)((int)pvVar18 + 4) = cVar25;
        *(undefined1 *)((int)pvVar18 + 5) = *(undefined1 *)((int)pvVar14 + 0x108);
        if (cVar25 == '\0') {
          if (*(byte *)((int)pvVar18 + 2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar18 + 2));
          }
          *(undefined1 *)((int)pvVar18 + 2) = 0xff;
        }
        DAT_0080874d = 0xff;
        pDVar17 = this_00->field_1F84;
        uVar27 = 0;
        uVar28 = pDVar17->count;
        if (0 < (int)uVar28) {
          bVar35 = uVar28 != 0;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar27) (runtime stride) */
              pvVar14 = (void *)(pDVar17->elementSize * uVar27 + (int)pDVar17->data);
            }
            else {
              pvVar14 = nullptr;
            }
            if (((pvVar14 != nullptr) && (*(char *)((int)pvVar14 + 4) == '\x02')) &&
               (*(int *)((int)pvVar14 + 6) == DAT_0080877f)) {
              DAT_0080874d = *(byte *)((int)pvVar14 + 2);
              break;
            }
            uVar27 = uVar27 + 1;
            bVar35 = uVar27 < uVar28;
          } while ((int)uVar27 < (int)uVar28);
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
      pBVar30 = g_bulkInitializedRecords_008087C7;
      for (iVar13 = 0xa2; iVar13 != 0; iVar13 = iVar13 + -1) {
        *(undefined4 *)pBVar30 = 0;
        pBVar30 = (BulkInitializedRecord_008087C7 *)&pBVar30->field_0x4;
      }
      pbVar16 = &g_bulkInitializedRecords_008087C7[0].field_0022;
      do {
        pbVar16[-1] = 0;
        *pbVar16 = 0xff;
        pbVar16 = pbVar16 + 0x51;
      } while ((int)pbVar16 < 0x808a71);
      pDVar17 = this_00->field_1F84;
      uVar27 = 0;
      uVar28 = pDVar17->count;
      if (0 < (int)uVar28) {
        bVar35 = uVar28 != 0;
        do {
          if (bVar35) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar27) (runtime stride) */
            pcVar15 = (char *)(pDVar17->elementSize * uVar27 + (int)pDVar17->data);
          }
          else {
            pcVar15 = nullptr;
          }
          if (((pcVar15 != nullptr) && (*pcVar15 != '\0')) && (pcVar15[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar15[2]) = 0;
          }
          uVar27 = uVar27 + 1;
          bVar35 = uVar27 < uVar28;
        } while ((int)uVar27 < (int)uVar28);
      }
      local_c = 0;
      if (0 < (int)uVar28) {
        bVar35 = uVar28 != 0;
        do {
          if (bVar35) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, local_c) (runtime stride) */
            pcVar15 = (char *)(pDVar17->elementSize * local_c + (int)pDVar17->data);
          }
          else {
            pcVar15 = nullptr;
          }
          if (((pcVar15 != nullptr) && (*pcVar15 != '\0')) &&
             ((pcVar15[4] != '\0' && ((pcVar15[4] != '\x01' || (this_00->field_1E26 == CASE_2))))))
          {
            iVar13 = *(int *)(pcVar15 + 0x50);
            if ((uint)(byte)pcVar15[5] < *(uint *)(iVar13 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar13 + 8) * (uint)(byte)pcVar15[5] +
                                *(int *)(iVar13 + 0x1c));
            }
            else {
              local_8 = nullptr;
            }
            DAT_008087c6 = DAT_008087c6 + '\x01';
            if (pcVar15[2] == -1) {
              iVar13 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar13) != '\0') {
                  pcVar15[2] = (char)iVar13;
                  *(undefined1 *)((int)&local_30 + iVar13) = 0;
                  break;
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < 8);
            }
            g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0022 = pcVar15[2];
            g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0021 = pcVar15[3];
            uVar28 = 0xffffffff;
            pcVar32 = &DAT_008016a0;
            do {
              pcVar31 = pcVar32;
              if (uVar28 == 0) break;
              uVar28 = uVar28 - 1;
              pcVar31 = pcVar32 + 1;
              cVar25 = *pcVar32;
              pcVar32 = pcVar31;
            } while (cVar25 != '\0');
            uVar28 = ~uVar28;
            local_14 = (AnonShape_005D5560_9031BF1B *)
                       &g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0x1;
            pcVar32 = pcVar31 + -uVar28;
            pcVar31 = &g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0x1;
            memmove(pcVar31, pcVar32, uVar28); /* compiler REP MOVS byte copy */
            uVar27 = 0;
            if (pcVar15[4] == '\x02') {
              if (*pcVar15 != '\0') {
                *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)pcVar15[2]) = 0;
                DAT_0080874d = pcVar15[2];
                DAT_0080874e = pcVar15[3];
              }
            }
            else if (pcVar15[4] == '\x04') {
              *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)pcVar15[2]) = 1;
              if (local_8 == nullptr) {
                uVar28 = 0xffffffff;
                local_8 = &g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0x1;
                pcVar32 = &DAT_008016a0;
                do {
                  pcVar31 = pcVar32;
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1;
                  pcVar31 = pcVar32 + 1;
                  cVar25 = *pcVar32;
                  pcVar32 = pcVar31;
                } while (cVar25 != '\0');
                uVar28 = ~uVar28;
                pcVar32 = pcVar31 + -uVar28;
                pcVar31 = local_8;
                memmove(pcVar31, pcVar32, uVar28); /* compiler REP MOVS byte copy */
                uVar27 = 0;
              }
              else {
                pcVar32 = local_8 + 0x4c;
                uVar28 = 0xffffffff;
                local_8 = &g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0x1;
                do {
                  pcVar31 = pcVar32;
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1;
                  pcVar31 = pcVar32 + 1;
                  cVar25 = *pcVar32;
                  pcVar32 = pcVar31;
                } while (cVar25 != '\0');
                uVar28 = ~uVar28;
                pcVar32 = pcVar31 + -uVar28;
                pcVar31 = local_8;
                memmove(pcVar31, pcVar32, uVar28); /* compiler REP MOVS byte copy */
                uVar27 = 0;
              }
            }
            g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0023 = pcVar15[0x4a];
            g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0024 =
                 *(uint *)(pcVar15 + 0x54);
            g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_0028 =
                 *(uint *)(pcVar15 + 0x58);
            g_bulkInitializedRecords_008087C7[(byte)pcVar15[2]].field_002C =
                 *(uint *)(pcVar15 + 0x5c);
          }
          pDVar17 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar35 = local_c < pDVar17->count;
        } while ((int)local_c < (int)pDVar17->count);
      }
      STAppC::sub_0056EE90((STAppC *)&DAT_00807620);
      memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
      DAT_00808aaf = 0;
      pDVar17 = this_00->field_1F84;
      local_c = 0;
      if (0 < (int)pDVar17->count) {
        bVar35 = pDVar17->count != 0;
        do {
          if (bVar35) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, local_c) (runtime stride) */
            pvVar14 = (void *)(pDVar17->elementSize * local_c + (int)pDVar17->data);
          }
          else {
            pvVar14 = nullptr;
          }
          if (pvVar14 != nullptr) {
            local_d = *(byte *)((int)pvVar14 + 4);
            if ((local_d != 1) && (local_d != 0)) {
              if (local_d == 4) {
                iVar13 = *(int *)((int)pvVar14 + 0x50);
                if ((uint)*(byte *)((int)pvVar14 + 5) < *(uint *)(iVar13 + 0xc)) {
                  pcVar15 = (char *)(*(int *)(iVar13 + 8) * (uint)*(byte *)((int)pvVar14 + 5) +
                                    *(int *)(iVar13 + 0x1c));
                }
                else {
                  pcVar15 = nullptr;
                }
                if (pcVar15 != nullptr) {
                  uVar28 = 0xffffffff;
                  do {
                    pcVar32 = pcVar15;
                    if (uVar28 == 0) break;
                    uVar28 = uVar28 - 1;
                    pcVar32 = pcVar15 + 1;
                    cVar25 = *pcVar15;
                    pcVar15 = pcVar32;
                  } while (cVar25 != '\0');
                  uVar28 = ~uVar28;
                  pcVar32 = pcVar32 + -uVar28;
                  local_8 = &stack0xfffffe9c;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar28 = 0xffffffff;
                pcVar15 = (char *)((int)pvVar14 + 10);
                do {
                  pcVar32 = pcVar15;
                  if (uVar28 == 0) break;
                  uVar28 = uVar28 - 1;
                  pcVar32 = pcVar15 + 1;
                  cVar25 = *pcVar15;
                  pcVar15 = pcVar32;
                } while (cVar25 != '\0');
                uVar28 = ~uVar28;
                pcVar32 = pcVar32 + -uVar28;
                local_8 = &stack0xfffffe9c;
LAB_005d5b7e:
                pcVar15 = &stack0xfffffe9c;
                for (uVar27 = uVar28 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar32;
                  pcVar32 = pcVar32 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar28 = uVar28 & 3; local_8 = &stack0xfffffe9c, uVar28 != 0;
                    uVar28 = uVar28 - 1) {
                  *pcVar15 = *pcVar32;
                  pcVar32 = pcVar32 + 1;
                  pcVar15 = pcVar15 + 1;
                }
              }
              bVar22 = *(byte *)((int)pvVar14 + 2);
              puVar29 = (byte *)&stack0xfffffe9c;
              puVar33 = (byte *)(&DAT_00808ab0 + (uint)DAT_00808aaf * 0x27);
              memmove(puVar33, puVar29, 0x9c); /* compiler REP MOVS byte copy */
              if (bVar22 < 8) {
                iVar23 = 0;
                iVar13 = (uint)bVar22 * 0x51 + 0x808800;
                do {
                  if (*(char *)(iVar13 + iVar23) == '\0') {
                    *(byte *)(iVar13 + iVar23) = DAT_00808aaf;
                    break;
                  }
                  iVar23 = iVar23 + 1;
                } while (iVar23 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          pDVar17 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar35 = local_c < pDVar17->count;
        } while ((int)local_c < (int)pDVar17->count);
      }
      if (this_00->field_1E26 == CASE_6) {
        if ((this_00->field_1F47 == 0) && ((message->arg0).u32 == 0)) {
          pMVar6 = this_00->field_1A5B;
          if (*(int *)(pMVar6 + 0x2e6) != 0) {
            memset(local_64, 0, 0x20); /* compiler bulk-zero initialization */
            iVar13 = 0;
            memset(local_84, 0, 0x20); /* compiler bulk-zero initialization */
            local_7c = this_00->field_0008;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            iVar13 = MMsgTy::SetMessage(*(MMsgTy **)(pMVar6 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,nullptr,0,0);
            if (iVar13 != 0) {
              this_00->vfunc_24();
            }
          }
        }
        else {
          uVar28 = 0xffffffff;
          DAT_008087a0 = CASE_6;
          pcVar15 = &DAT_00853de4;
          do {
            pcVar32 = pcVar15;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar32 = pcVar15 + 1;
            cVar25 = *pcVar15;
            pcVar15 = pcVar32;
          } while (cVar25 != '\0');
          uVar28 = ~uVar28;
          DAT_00808783 = 2;
          pcVar15 = pcVar32 + -uVar28;
          pcVar32 = &DAT_0080ed16;
          memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
          uVar27 = 0;
          uVar28 = 0xffffffff;
          pcVar15 = &DAT_0080ed16;
          do {
            pcVar32 = pcVar15;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar32 = pcVar15 + 1;
            cVar25 = *pcVar15;
            pcVar15 = pcVar32;
          } while (cVar25 != '\0');
          uVar28 = ~uVar28;
          pcVar15 = pcVar32 + -uVar28;
          pcVar32 = (char *)&DAT_0080ee1a;
          memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
          uVar28 = 0xffffffff;
          pcVar15 = &DAT_00807680;
          do {
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            cVar25 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar25 != '\0');
          uVar27 = 0xffffffff;
          pcVar15 = (char *)((int)&DAT_0080ed12 + ~uVar28 + 3);
          do {
            pcVar32 = pcVar15;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar32 = pcVar15 + 1;
            cVar25 = *pcVar15;
            pcVar15 = pcVar32;
          } while (cVar25 != '\0');
          uVar27 = ~uVar27;
          pcVar15 = pcVar32 + -uVar27;
          pcVar32 = &DAT_0080ef1e;
          memmove(pcVar32, pcVar15, uVar27); /* compiler REP MOVS byte copy */
          uVar27 = 0;
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
        uVar28 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar15 = &DAT_0080ed16;
        do {
          pcVar32 = pcVar15;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar32 = pcVar15 + 1;
          cVar25 = *pcVar15;
          pcVar15 = pcVar32;
        } while (cVar25 != '\0');
        uVar28 = ~uVar28;
        pcVar15 = pcVar32 + -uVar28;
        pcVar32 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = this_00->field_1E26;
        memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
        uVar28 = 0xffffffff;
        pcVar15 = &DAT_00807680;
        do {
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          cVar25 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar25 != '\0');
        uVar27 = 0xffffffff;
        pcVar15 = (char *)((int)&DAT_0080ed12 + ~uVar28 + 3);
        do {
          pcVar32 = pcVar15;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar32 = pcVar15 + 1;
          cVar25 = *pcVar15;
          pcVar15 = pcVar32;
        } while (cVar25 != '\0');
        uVar27 = ~uVar27;
        pcVar15 = pcVar32 + -uVar27;
        pcVar32 = &DAT_0080ef1e;
        memmove(pcVar32, pcVar15, uVar27); /* compiler REP MOVS byte copy */
        uVar28 = 0;
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
    pDVar17 = this_00->field_1F84;
    local_c = SVar3 - 0x69ff >> 3;
    if ((pDVar17 == nullptr) ||
       (uVar28 = this_00->field_1F88 + local_c, pDVar17->count <= uVar28)) {
      local_14 = nullptr;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar28) (runtime stride) */
      local_14 = (AnonShape_005D5560_9031BF1B *)(pDVar17->elementSize * uVar28 + (int)pDVar17->data);
    }
    uVar28 = 0;
    if (local_14 != nullptr) {
      switch(SVar3 + 1 & 7) {
      case 1:
        uVar27 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar28 = pDVar17->count;
        if (0 < (int)uVar28) {
          bVar35 = uVar28 != 0;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar27) (runtime stride) */
              pcVar15 = (char *)(pDVar17->elementSize * uVar27 + (int)pDVar17->data);
            }
            else {
              pcVar15 = nullptr;
            }
            if ((*pcVar15 != '\0') && (pcVar15[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar15[2]) = 0;
            }
            uVar27 = uVar27 + 1;
            bVar35 = uVar27 < uVar28;
          } while ((int)uVar27 < (int)uVar28);
        }
        bVar22 = local_14->field_0x2;
        SVar26 = this_00->field_1F88 + local_c;
        uVar28 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar22) = 1;
        this_00->field_2179 = SVar26;
        this_00->field_2191 = 0x6503;
        this_00->field_21A1 = 0;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0xff;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = (char *)CONCAT31(local_8._1_3_,1);
        do {
          if (*(char *)((int)&local_40 + uVar28) != '\0') {
            this_00->field_1F37 = uVar28;
            Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
            if ((byte)local_14->field_0x2 == uVar28) {
              this_00->field_21A1 = (uint)local_8 & 0xff;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
          }
          uVar28 = uVar28 + 1;
        } while ((int)uVar28 < 8);
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
        pcVar15 = LoadResourceString(0x23f1,g_module_00807618);
        uVar28 = 0xffffffff;
        do {
          pcVar32 = pcVar15;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar32 = pcVar15 + 1;
          cVar25 = *pcVar15;
          pcVar15 = pcVar32;
        } while (cVar25 != '\0');
        uVar28 = ~uVar28;
        pcVar15 = pcVar32 + -uVar28;
        pcVar32 = &this_00->field_0x1e33;
        memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
        uVar27 = 0;
        for (puVar19 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar19 != nullptr; puVar19 = Library::MSVCRT::FUN_0072e560(puVar19,'\n')) {
          *(undefined1 *)puVar19 = 0x20;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
        pcVar15 = LoadResourceString(0x23f0,g_module_00807618);
        uVar28 = 0xffffffff;
        do {
          pcVar32 = pcVar15;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar32 = pcVar15 + 1;
          cVar25 = *pcVar15;
          pcVar15 = pcVar32;
        } while (cVar25 != '\0');
        uVar28 = ~uVar28;
        pcVar15 = pcVar32 + -uVar28;
        pcVar32 = &this_00->field_0x1e33;
        memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
        uVar27 = 0;
        for (puVar19 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar19 != nullptr; puVar19 = Library::MSVCRT::FUN_0072e560(puVar19,'\n')) {
          *(undefined1 *)puVar19 = 0x20;
        }
        this_00->field_1F37 = 2;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
        uVar28 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar28 = (uint)(local_14->field_0x4 != '\x02');
        }
        if (uVar28 != 0) {
          pcVar15 = LoadResourceString(0x23f2,g_module_00807618);
          uVar28 = 0xffffffff;
          do {
            pcVar32 = pcVar15;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar32 = pcVar15 + 1;
            cVar25 = *pcVar15;
            pcVar15 = pcVar32;
          } while (cVar25 != '\0');
          uVar28 = ~uVar28;
          pcVar15 = pcVar32 + -uVar28;
          pcVar32 = &this_00->field_0x1e33;
          memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
          for (puVar19 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar19 != nullptr; puVar19 = Library::MSVCRT::FUN_0072e560(puVar19,'\n')) {
            *(undefined1 *)puVar19 = 0x20;
          }
          this_00->field_1F37 = 3;
          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        bVar22 = local_14->field_0x3;
        this_00->field_21C5 = 0x143;
        this_00->field_21CD = 0x78;
        this_00->field_21A1 = bVar22 - 1;
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
          uVar28 = 0;
          local_8 = nullptr;
          if ((this_00->field_1E26 == CASE_2) && (local_14->field_0x4 == '\x02')) break;
          pDVar17 = this_00->field_1F84;
          uVar27 = pDVar17->count;
          bVar35 = uVar27 != 0;
          if (0 < (int)uVar27) {
            do {
              if (bVar35) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar28) (runtime stride) */
                pcVar15 = (char *)(pDVar17->elementSize * uVar28 + (int)pDVar17->data);
              }
              else {
                pcVar15 = nullptr;
              }
              if ((*pcVar15 != '\0') && (pcVar15[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar28 = uVar28 + 1;
              bVar35 = uVar28 < uVar27;
            } while ((int)uVar28 < (int)uVar27);
          }
          if ((this_00->field_1E26 != CASE_2) && (2 < (int)local_8)) {
            pcVar15 = LoadResourceString(8000,g_module_00807618);
            uVar28 = 0xffffffff;
            do {
              pcVar32 = pcVar15;
              if (uVar28 == 0) break;
              uVar28 = uVar28 - 1;
              pcVar32 = pcVar15 + 1;
              cVar25 = *pcVar15;
              pcVar15 = pcVar32;
            } while (cVar25 != '\0');
            uVar28 = ~uVar28;
            pcVar15 = pcVar32 + -uVar28;
            pcVar32 = &this_00->field_0x1e33;
            memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
            uVar27 = 0;
            this_00->field_1F37 = 0;
            Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
          }
          if (this_00->field_1E26 != CASE_2) {
            bVar35 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar35 = local_14->field_0x3 != '\x03';
            }
            if (bVar35) {
              pcVar15 = LoadResourceString(0x1f42,g_module_00807618);
              uVar28 = 0xffffffff;
              do {
                pcVar32 = pcVar15;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar32 = pcVar15 + 1;
                cVar25 = *pcVar15;
                pcVar15 = pcVar32;
              } while (cVar25 != '\0');
              uVar28 = ~uVar28;
              pcVar15 = pcVar32 + -uVar28;
              pcVar32 = &this_00->field_0x1e33;
              memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
              uVar27 = 0;
              this_00->field_1F37 = 2;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
            }
          }
          local_8 = nullptr;
          pAVar20 = local_14->field_0050;
          pcVar15 = (char *)pAVar20->field_000C;
          if (0 < (int)pcVar15) {
            do {
              if (local_8 < pcVar15) {
                iVar13 = pAVar20->field_0008 * (int)local_8 + pAVar20->field_001C;
              }
              else {
                iVar13 = 0;
              }
              uVar28 = 0xffffffff;
              pcVar15 = (char *)(iVar13 + 0x40);
              do {
                pcVar32 = pcVar15;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pcVar32 = pcVar15 + 1;
                cVar25 = *pcVar15;
                pcVar15 = pcVar32;
              } while (cVar25 != '\0');
              uVar28 = ~uVar28;
              pcVar15 = pcVar32 + -uVar28;
              pcVar32 = &this_00->field_0x1e33;
              memmove(pcVar32, pcVar15, uVar28); /* compiler REP MOVS byte copy */
              this_00->field_1F37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
              local_8 = local_8 + 1;
              pAVar20 = local_14->field_0050;
              pcVar15 = (char *)pAVar20->field_000C;
            } while ((int)local_8 < (int)pcVar15);
          }
        }
        pDVar17 = this_00->field_1E2F;
        uVar28 = 0;
        if (0 < (int)pDVar17->count) {
          bVar35 = pDVar17->count != 0;
          local_28 = (uint)(byte)local_14->field_0x4;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar28) (runtime stride) */
              pvVar14 = (void *)(pDVar17->elementSize * uVar28 + (int)pDVar17->data);
            }
            else {
              pvVar14 = nullptr;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((*(uint *)((int)pvVar14 + 0x104) == local_28) &&
               (*(uint *)((int)pvVar14 + 0x108) == (uint)(byte)local_14->field_0x5)) {
              this_00->field_21A1 = uVar28;
              break;
            }
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < pDVar17->count;
          } while ((int)uVar28 < (int)pDVar17->count);
        }
        dVar7 = pDVar17->count;
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
          uVar27 = pDVar17->count;
          if (0 < (int)uVar27) {
            bVar35 = uVar27 != 0;
            do {
              if (bVar35) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar28) (runtime stride) */
                pvVar14 = (void *)(pDVar17->elementSize * uVar28 + (int)pDVar17->data);
              }
              else {
                pvVar14 = nullptr;
              }
              if ((pvVar14 != nullptr) && (*(byte *)((int)pvVar14 + 0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)*(byte *)((int)pvVar14 + 0x4a)) = 1;
              }
              uVar28 = uVar28 + 1;
              bVar35 = uVar28 < uVar27;
            } while ((int)uVar28 < (int)uVar27);
          }
          bVar22 = 0;
          iVar13 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar13) != '\0') {
              bVar22 = bVar22 + 1;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < 8);
          bVar2 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar22 < bVar2) {
            iVar13 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar13) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar13) = 1;
                bVar22 = bVar22 + 1;
                break;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < 8);
            goto joined_r0x005d6701;
          }
          uVar28 = 0;
          cVar25 = (char)local_28;
          if (0 < (int)pDVar17->count) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar35 = pDVar17->count != 0;
            do {
              if (bVar35) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar28) (runtime stride) */
                pcVar15 = (char *)(pDVar17->elementSize * uVar28 + (int)pDVar17->data);
              }
              else {
                pcVar15 = nullptr;
              }
              if (local_2c == (undefined1 *)uVar28) {
LAB_005d6784:
                if ((*pcVar15 != '\0') && ((pcVar15[4] == '\0' || (pcVar15[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar15[0x4a]) = 0;
                }
              }
              else if (*pcVar15 != '\0') {
                if ((pcVar15[4] != '\0') && (pcVar15[4] != '\x01')) {
                  if (local_8 == nullptr) {
                    if (cVar25 != pcVar15[0x4a]) {
                      cVar25 = -1;
                    }
                  }
                  else {
                    cVar25 = pcVar15[0x4a];
                    local_8 = nullptr;
                  }
                }
                goto LAB_005d6784;
              }
              uVar28 = uVar28 + 1;
              bVar35 = uVar28 < pDVar17->count;
            } while ((int)uVar28 < (int)pDVar17->count);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_28 = CONCAT31(local_28._1_3_,cVar25);
          }
          if (cVar25 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          uVar28 = 0;
          this_00->field_2171 = 0x6501;
          this_00->field_2179 = this_00->field_1F88 + local_c;
          this_00->field_2191 = 0x6500;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar24 = &uStack_79;
          local_2c = puVar24;
          do {
            iVar13 = uVar28 + 0x41;
            if (puVar24[uVar28 + 0x41] != '\0') {
              pcVar15 = LoadResourceString(0x1f4a,g_module_00807618);
              wsprintfA(&this_00->field_0x1e33,"%s%c",pcVar15,iVar13);
              this_00->field_1F37 = uVar28;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
              if ((byte)local_14->field_0x4a == uVar28) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
              puVar24 = local_2c;
            }
            uVar28 = uVar28 + 1;
          } while ((int)uVar28 < 8);
          SVar1 = this_00->field_1E26;
          this_00->field_21A9 = this_00->field_1E2F->count;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (uVar21 = 0x26b, SVar1 == CASE_2)) {
            uVar21 = 0x2ab;
          }
          this_00->field_21C5 = uVar21;
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
          bVar22 = local_14->field_0x2;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT31((uint3)(SVar3 - 0x69ff >> 0xb),bVar22);
          if ((bVar22 != 0xff) && (DAT_0080874d != bVar22)) {
            if (local_14->field_0x4 == '\x04') {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar22);
              if (DAT_0080874d == bVar22) {
                uVar21 = 0;
                uVar28 = (uint)bVar22;
              }
              else {
                uVar27 = (uint)DAT_0080874d;
                bVar2 = g_playerRelationMatrix[uVar27][bVar22];
                uVar28 = local_c;
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar22][uVar27] == 0)) {
                  uVar21 = 0xfffffffe;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar22][uVar27] == 0)) {
                  uVar21 = 0xffffffff;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar22][uVar27] == 1)) {
                  uVar21 = 1;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar22][uVar27] == 1)) {
                  uVar21 = 2;
                }
                else {
                  uVar21 = 0;
                }
              }
              bVar22 = (byte)uVar28;
              switch(uVar21) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar22,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,DAT_0080874d,bVar22,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,DAT_0080874d,bVar22,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar22,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,DAT_0080874d,bVar22);
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
  uVar28 = temp_5fb73ea9b4 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(temp_5fb73ea9b4 + 1 & 7);
  piVar9 = (message->arg1).ptr;
  local_1c = piVar9[2];
  local_18 = piVar9[3];
  pDVar17 = this_00->field_1F84;
  local_24 = *piVar9 + -0x113;
  local_20 = 0;
  if ((pDVar17 == nullptr) ||
     (uVar27 = this_00->field_1F88 + uVar28, pDVar17->count <= uVar27)) {
    pAVar34 = nullptr;
  }
  else {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, uVar27) (runtime stride) */
    pAVar34 = (AnonShape_005CBBE0_2D1CAA09 *)(pDVar17->elementSize * uVar27 + (int)pDVar17->data);
  }
  local_28 = uVar28;
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_20F4[uVar28],0,*piVar9 + -0x113,0,
               piVar9[2],piVar9[3],0xff);
  if (pAVar34 == nullptr) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*(char *)pAVar34 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,this_00->field_20F4[uVar28],&local_24,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar34->field_0x2 != -1) {
        switch(pAVar34->field_0x2) {
        case 0:
          bVar22 = 0xfc;
          break;
        case 1:
          bVar22 = 0xfa;
          break;
        case 2:
          bVar22 = 0xfb;
          break;
        case 3:
          bVar22 = 0xf9;
          break;
        case 4:
          bVar22 = 0xfd;
          break;
        case 5:
          bVar22 = 0xfe;
          break;
        case 6:
          bVar22 = 0xf3;
          break;
        case 7:
          bVar22 = 7;
          break;
        default:
          bVar22 = 0xff;
        }
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_20F4[uVar28],0,local_24 + 2,
                     local_20 + 2,local_1c + -4,local_18 + -4,bVar22);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar34 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20F4[uVar28],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20F4[uVar28],0,local_24,
                     local_20,local_1c,local_18);
    if (pAVar34->field_0x3 == '\x01') {
      pcVar15 = &DAT_007ca250;
LAB_005d6c37:
      uVar28 = 0xffffffff;
      do {
        pcVar32 = pcVar15;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar32 = pcVar15 + 1;
        cVar25 = *pcVar15;
        pcVar15 = pcVar32;
      } while (cVar25 != '\0');
      uVar28 = ~uVar28;
      pcVar15 = pcVar32 + -uVar28;
      pcVar32 = (char *)&DAT_0080f33a;
      for (uVar27 = uVar28 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
        *(undefined4 *)pcVar32 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar32 = pcVar32 + 4;
      }
    }
    else {
      if (pAVar34->field_0x3 != '\x02') {
        pcVar15 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar28 = 0xffffffff;
      pcVar15 = &DAT_007ca248;
      do {
        pcVar32 = pcVar15;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar32 = pcVar15 + 1;
        cVar25 = *pcVar15;
        pcVar15 = pcVar32;
      } while (cVar25 != '\0');
      uVar28 = ~uVar28;
      pcVar15 = pcVar32 + -uVar28;
      pcVar32 = (char *)&DAT_0080f33a;
      for (uVar27 = uVar28 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
        *(undefined4 *)pcVar32 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar32 = pcVar32 + 4;
      }
    }
    pSVar11 = g_startSystem_0081176C;
    for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
      *pcVar32 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar32 = pcVar32 + 1;
    }
    ccFntTy::WrStr(pSVar11->field_0034,&DAT_0080f33a,-1,-1,2);
    uVar28 = local_28;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_20F4[uVar28],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20F4[uVar28],0,local_24,
                     local_20,local_1c,local_18);
    uVar27 = 2;
    iVar37 = -1;
    iVar23 = -1;
    puVar36 = (uint *)&DAT_007c2310;
    iVar13 = local_1c;
    puVar19 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar34);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib((MMObjTy *)this_00,this_00->field_20F4[uVar28],&local_24,2,0x67,0x67);
    if (pAVar34->field_0x4 == '\x02') {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20F4[uVar28],0,local_24,
                       local_20,local_1c,local_18);
      uVar27 = 2;
      iVar23 = -1;
      iVar13 = -1;
      puVar19 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,(uint *)&pAVar34->field_0xa,
                                   (uint *)&DAT_007c7274,local_1c);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar19,iVar13,iVar23,uVar27);
      break;
    }
    if (pAVar34->field_0x4 != '\x04') break;
    pDVar17 = pAVar34->field_0050;
    if ((uint)(byte)pAVar34->field_0x5 < pDVar17->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar17, (uint)(byte)pAVar34->field_0x5) (runtime stride) */
      puVar19 = (uint *)(pDVar17->elementSize * (uint)(byte)pAVar34->field_0x5 + (int)pDVar17->data);
    }
    else {
      puVar19 = nullptr;
    }
    if (puVar19 == nullptr) break;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20F4[uVar28],0,local_24,
                     local_20,local_1c,local_18);
    uVar27 = 2;
    iVar37 = -1;
    iVar23 = -1;
    puVar36 = (uint *)&DAT_007c7274;
    iVar13 = local_1c;
LAB_005d6d70:
    puVar19 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar19,puVar36,iVar13);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar19,iVar23,iVar37,uVar27);
    break;
  case (undefined1 *)0x5:
    if ((*(char *)pAVar34 != '\0') &&
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,this_00->field_20F4[uVar28],&local_24,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar34->field_0x4 != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar22 = pAVar34->field_0x2, bVar22 != 0xff)) &&
           (DAT_0080874d != bVar22)) {
          local_28 = 0xffffffff;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar22);
          uVar27 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar27][bVar22];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar22][uVar27] == 0)) {
            uVar21 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar22][uVar27] == 0)) {
            uVar21 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar22][uVar27] == 1)) {
            uVar21 = 1;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar22][uVar27] == 1)) {
            uVar21 = 2;
          }
          else {
            uVar21 = 0;
          }
          switch(uVar21) {
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
          if (-1 < iVar13 + -1) {
            pbVar16 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4B
                                           ,iVar13 + -1);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_20F4[uVar28],
                   (local_1c - *(int *)(pbVar16 + 4)) / 2 + local_24,
                   (local_18 - *(int *)(pbVar16 + 8)) / 2 + 1 + local_20,'\x06',pbVar16);
          }
        }
      }
      else {
        pcVar15 = LoadResourceString(0x1f4a,g_module_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",pcVar15);
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_20F4[uVar28],0,local_24,
                         local_20,local_1c,local_18);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_20CC[uVar28]);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}


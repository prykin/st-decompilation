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
  STMessageId SVar3;
  DArrayTy *pDVar4;
  MMMObjTy *pMVar5;
  dword dVar6;
  ccFntTy *pcVar7;
  int *piVar8;
  code *pcVar9;
  char cVar10;
  char cVar11;
  StartSystemTy *pSVar12;
  SettMapTy *this_00;
  DWORD DVar13;
  int iVar14;
  void *pvVar15;
  char *pcVar16;
  undefined1 *puVar17;
  DArrayTy *pDVar18;
  void *pvVar19;
  uint *puVar20;
  AnonNested_005D5560_0050_EBFA0A51 *pAVar21;
  undefined4 uVar22;
  byte *pbVar23;
  int iVar24;
  byte bVar25;
  char cVar26;
  SettMapTy_field_2179State SVar27;
  uint uVar28;
  uint uVar29;
  AnonShape_005D5560_9031BF1B *pAVar30;
  char *pcVar31;
  char *pcVar32;
  undefined4 *puVar33;
  AnonShape_005CBBE0_2D1CAA09 *pAVar34;
  bool bVar35;
  uint *puVar36;
  int iVar37;
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
  DVar13 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar13;
  local_c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c8;
  iVar14 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0);
  this_00 = local_44;
  if (iVar14 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    iVar24 = ReportDebugMessage("E:\\__titans\\Start\\settsobj.cpp",0x27d,0,iVar14,
                                "%s","SettMapSTy::GetMessage");
    if (iVar24 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar14,0,"E:\\__titans\\Start\\settsobj.cpp",0x27d);
    return 0xffff;
  }
  SettMapTy::GetMessage(local_44,message);
  SVar3 = message->id;
  if (SVar3 < MESS_SETTMAPSTY_6505) {
    if (SVar3 == MESS_SHARED_6504) {
      uVar29 = (message->arg0).u32;
      if ((uVar29 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != (DArrayTy *)0x0)) {
        pDVar4 = this_00->field_1E2F;
        if (uVar29 < pDVar4->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar29) (runtime stride) */
          pvVar15 = (void *)(pDVar4->elementSize * uVar29 + (int)pDVar4->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        cVar26 = *(char *)((int)pvVar15 + 0x104);
        if ((message->arg1).u32 < pDVar18->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (message->arg1).u32) (runtime stride) */
          pvVar15 = (void *)(pDVar18->elementSize * (message->arg1).u32 + (int)pDVar18->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        if (pvVar15 != (void *)0x0) {
          *(char *)((int)pvVar15 + 3) = cVar26;
        }
        pDVar18 = this_00->field_1F84;
        uVar29 = (message->arg1).u32 + 1;
        bVar35 = uVar29 < pDVar18->count;
        if ((int)uVar29 < (int)pDVar18->count) {
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar29) (runtime stride) */
              pcVar16 = (char *)(pDVar18->elementSize * uVar29 + (int)pDVar18->data);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((pcVar16 == (char *)0x0) || (*pcVar16 != '\0')) break;
            pcVar16[3] = cVar26;
            pDVar18 = this_00->field_1F84;
            uVar29 = uVar29 + 1;
            bVar35 = uVar29 < pDVar18->count;
          } while ((int)uVar29 < (int)pDVar18->count);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
      }
    }
    else if (SVar3 == MESS_SHARED_6501) {
      uVar29 = (message->arg0).u32;
      if ((uVar29 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != (DArrayTy *)0x0)) {
        pDVar4 = this_00->field_1E2F;
        if (uVar29 < pDVar4->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar29) (runtime stride) */
          pvVar15 = (void *)(pDVar4->elementSize * uVar29 + (int)pDVar4->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        cVar26 = *(char *)((int)pvVar15 + 0x104);
        if ((message->arg1).u32 < pDVar18->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (message->arg1).u32) (runtime stride) */
          pvVar15 = (void *)(pDVar18->elementSize * (message->arg1).u32 + (int)pDVar18->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        if (pvVar15 != (void *)0x0) {
          *(char *)((int)pvVar15 + 0x4a) = cVar26;
        }
        pDVar18 = this_00->field_1F84;
        uVar29 = (message->arg1).u32 + 1;
        bVar35 = uVar29 < pDVar18->count;
        if ((int)uVar29 < (int)pDVar18->count) {
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar29) (runtime stride) */
              pcVar16 = (char *)(pDVar18->elementSize * uVar29 + (int)pDVar18->data);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((pcVar16 == (char *)0x0) || (*pcVar16 != '\0')) break;
            pcVar16[0x4a] = cVar26;
            pDVar18 = this_00->field_1F84;
            uVar29 = uVar29 + 1;
            bVar35 = uVar29 < pDVar18->count;
          } while ((int)uVar29 < (int)pDVar18->count);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
      }
    }
    else if (((SVar3 == MESS_PRIVIDERTY_6502) &&
             (uVar29 = (message->arg0).u32, uVar29 != 0xffffffff)) &&
            (pDVar18 = this_00->field_1F84, pDVar18 != (DArrayTy *)0x0)) {
      pDVar4 = this_00->field_1E2F;
      if (uVar29 < pDVar4->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar29) (runtime stride) */
        pvVar15 = (void *)(pDVar4->elementSize * uVar29 + (int)pDVar4->data);
      }
      else {
        pvVar15 = (void *)0x0;
      }
      local_d = *(byte *)((int)pvVar15 + 0x104);
      if ((message->arg1).u32 < pDVar18->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (message->arg1).u32) (runtime stride) */
        pvVar15 = (void *)(pDVar18->elementSize * (message->arg1).u32 + (int)pDVar18->data);
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
        uVar29 = (message->arg1).u32 + 1;
        bVar35 = uVar29 < pDVar18->count;
        if ((int)uVar29 < (int)pDVar18->count) {
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar29) (runtime stride) */
              pcVar16 = (char *)(pDVar18->elementSize * uVar29 + (int)pDVar18->data);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((pcVar16 == (char *)0x0) || (*pcVar16 != '\0')) break;
            pcVar16[2] = local_d;
            pDVar18 = this_00->field_1F84;
            uVar29 = uVar29 + 1;
            bVar35 = uVar29 < pDVar18->count;
          } while ((int)uVar29 < (int)pDVar18->count);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
        goto LAB_005d5ff8;
      }
    }
  }
  else if (SVar3 == MESS_SETTMAPSTY_6505) {
    uVar29 = (message->arg0).u32;
    if ((uVar29 != 0xffffffff) && (pDVar18 = this_00->field_1F84, pDVar18 != (DArrayTy *)0x0)) {
      pDVar4 = this_00->field_1E2F;
      if (uVar29 < pDVar4->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar29) (runtime stride) */
        pvVar15 = (void *)(pDVar4->elementSize * uVar29 + (int)pDVar4->data);
      }
      else {
        pvVar15 = (void *)0x0;
      }
      uVar29 = pDVar18->count;
      if ((message->arg1).u32 < uVar29) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (message->arg1).u32) (runtime stride) */
        pvVar19 = (void *)(pDVar18->elementSize * (message->arg1).u32 + (int)pDVar18->data);
      }
      else {
        pvVar19 = (void *)0x0;
      }
      if (pvVar19 != (void *)0x0) {
        if ((*(int *)((int)pvVar15 + 0x104) == 2) && (uVar28 = 0, 0 < (int)uVar29)) {
          bVar35 = uVar29 != 0;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar28) (runtime stride) */
              pvVar19 = (void *)(pDVar18->elementSize * uVar28 + (int)pDVar18->data);
            }
            else {
              pvVar19 = (void *)0x0;
            }
            if ((pvVar19 != (void *)0x0) && (*(char *)((int)pvVar19 + 4) == '\x02')) {
              SVar1 = this_00->field_1E26;
              if ((SVar1 == CASE_6) || ((SVar1 == CASE_1 || (SVar1 == CASE_2)))) {
                *(undefined1 *)((int)pvVar19 + 4) = 4;
                *(undefined1 *)((int)pvVar19 + 5) = 0;
              }
              else {
                *(undefined1 *)((int)pvVar19 + 4) = 1;
              }
              break;
            }
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < uVar29;
          } while ((int)uVar28 < (int)uVar29);
        }
        pDVar18 = this_00->field_1F84;
        if ((message->arg1).u32 < pDVar18->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (message->arg1).u32) (runtime stride) */
          pvVar19 = (void *)(pDVar18->elementSize * (message->arg1).u32 + (int)pDVar18->data);
        }
        else {
          pvVar19 = (void *)0x0;
        }
        cVar26 = *(char *)((int)pvVar15 + 0x104);
        *(char *)((int)pvVar19 + 4) = cVar26;
        *(undefined1 *)((int)pvVar19 + 5) = *(undefined1 *)((int)pvVar15 + 0x108);
        if (cVar26 == '\0') {
          if (*(byte *)((int)pvVar19 + 2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar19 + 2));
          }
          *(undefined1 *)((int)pvVar19 + 2) = 0xff;
        }
        DAT_0080874d = 0xff;
        pDVar18 = this_00->field_1F84;
        uVar28 = 0;
        uVar29 = pDVar18->count;
        if (0 < (int)uVar29) {
          bVar35 = uVar29 != 0;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar28) (runtime stride) */
              pvVar15 = (void *)(pDVar18->elementSize * uVar28 + (int)pDVar18->data);
            }
            else {
              pvVar15 = (void *)0x0;
            }
            if (((pvVar15 != (void *)0x0) && (*(char *)((int)pvVar15 + 4) == '\x02')) &&
               (*(int *)((int)pvVar15 + 6) == DAT_0080877f)) {
              DAT_0080874d = *(byte *)((int)pvVar15 + 2);
              break;
            }
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < uVar29;
          } while ((int)uVar28 < (int)uVar29);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
LAB_005d5ff8:
        SettMapTy::PaintSC(this_00);
      }
    }
  }
  else if (SVar3 == MESS_FSGSTY_694A) {
    local_30 = 0x1010101;
    local_2c = (undefined1 *)0x1010101;
    if (this_00->field_1F84 != (DArrayTy *)0x0) {
      DAT_00808aa9 = 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      DAT_008087c4._2_1_ = '\0';
      DAT_0080874f = 0;
      memset((void *)((int)&DAT_008087c4 + 3), 0, 0x288); /* compiler bulk-zero initialization */
      puVar17 = &DAT_008087e9;
      do {
        puVar17[-1] = 0;
        *puVar17 = 0xff;
        puVar17 = puVar17 + 0x51;
      } while ((int)puVar17 < 0x808a71);
      pDVar18 = this_00->field_1F84;
      uVar28 = 0;
      uVar29 = pDVar18->count;
      if (0 < (int)uVar29) {
        bVar35 = uVar29 != 0;
        do {
          if (bVar35) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar28) (runtime stride) */
            pcVar16 = (char *)(pDVar18->elementSize * uVar28 + (int)pDVar18->data);
          }
          else {
            pcVar16 = (char *)0x0;
          }
          if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) && (pcVar16[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar16[2]) = 0;
          }
          uVar28 = uVar28 + 1;
          bVar35 = uVar28 < uVar29;
        } while ((int)uVar28 < (int)uVar29);
      }
      local_c = 0;
      if (0 < (int)uVar29) {
        bVar35 = uVar29 != 0;
        do {
          if (bVar35) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, local_c) (runtime stride) */
            pcVar16 = (char *)(pDVar18->elementSize * local_c + (int)pDVar18->data);
          }
          else {
            pcVar16 = (char *)0x0;
          }
          if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) &&
             ((pcVar16[4] != '\0' && ((pcVar16[4] != '\x01' || (this_00->field_1E26 == CASE_2))))))
          {
            iVar14 = *(int *)(pcVar16 + 0x50);
            if ((uint)(byte)pcVar16[5] < *(uint *)(iVar14 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar14 + 8) * (uint)(byte)pcVar16[5] +
                                *(int *)(iVar14 + 0x1c));
            }
            else {
              local_8 = (char *)0x0;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
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
            uVar29 = 0xffffffff;
            pcVar32 = &DAT_008016a0;
            do {
              pcVar31 = pcVar32;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar31 = pcVar32 + 1;
              cVar26 = *pcVar32;
              pcVar32 = pcVar31;
            } while (cVar26 != '\0');
            uVar29 = ~uVar29;
            local_14 = (AnonShape_005D5560_9031BF1B *)
                       (&DAT_008087c8 + (uint)(byte)pcVar16[2] * 0x51);
            pcVar32 = pcVar31 + -uVar29;
            pAVar30 = (AnonShape_005D5560_9031BF1B *)(&DAT_008087c8 + (uint)(byte)pcVar16[2] * 0x51)
            ;
            for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              cVar26 = pcVar32[1];
              cVar10 = pcVar32[2];
              cVar11 = pcVar32[3];
              pAVar30->field_0x0 = pcVar32[0];
              pAVar30->field_0x1 = cVar26;
              pAVar30->field_0x2 = cVar10;
              pAVar30->field_0x3 = cVar11;
              pcVar32 = pcVar32 + 4;
              pAVar30 = (AnonShape_005D5560_9031BF1B *)&pAVar30->field_0x4;
            }
            for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
              *(char *)pAVar30 = *pcVar32;
              pcVar32 = pcVar32 + 1;
              pAVar30 = (AnonShape_005D5560_9031BF1B *)&pAVar30->field_0x1;
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
                uVar29 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar16[2] * 0x51;
                pcVar32 = &DAT_008016a0;
                do {
                  pcVar31 = pcVar32;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar31 = pcVar32 + 1;
                  cVar26 = *pcVar32;
                  pcVar32 = pcVar31;
                } while (cVar26 != '\0');
                uVar29 = ~uVar29;
                pcVar32 = pcVar31 + -uVar29;
                pcVar31 = local_8;
                for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar31 = *(undefined4 *)pcVar32;
                  pcVar32 = pcVar32 + 4;
                  pcVar31 = pcVar31 + 4;
                }
                for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                  *pcVar31 = *pcVar32;
                  pcVar32 = pcVar32 + 1;
                  pcVar31 = pcVar31 + 1;
                }
              }
              else {
                pcVar32 = local_8 + 0x4c;
                uVar29 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar16[2] * 0x51;
                do {
                  pcVar31 = pcVar32;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar31 = pcVar32 + 1;
                  cVar26 = *pcVar32;
                  pcVar32 = pcVar31;
                } while (cVar26 != '\0');
                uVar29 = ~uVar29;
                pcVar32 = pcVar31 + -uVar29;
                pcVar31 = local_8;
                for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar31 = *(undefined4 *)pcVar32;
                  pcVar32 = pcVar32 + 4;
                  pcVar31 = pcVar31 + 4;
                }
                for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                  *pcVar31 = *pcVar32;
                  pcVar32 = pcVar32 + 1;
                  pcVar31 = pcVar31 + 1;
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
          bVar35 = local_c < pDVar18->count;
        } while ((int)local_c < (int)pDVar18->count);
      }
      STAppC::sub_0056EE90((STAppC *)&DAT_00807620);
      memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
      DAT_00808aaf = 0;
      pDVar18 = this_00->field_1F84;
      local_c = 0;
      if (0 < (int)pDVar18->count) {
        bVar35 = pDVar18->count != 0;
        do {
          if (bVar35) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, local_c) (runtime stride) */
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
                  uVar29 = 0xffffffff;
                  do {
                    pcVar32 = pcVar16;
                    if (uVar29 == 0) break;
                    uVar29 = uVar29 - 1;
                    pcVar32 = pcVar16 + 1;
                    cVar26 = *pcVar16;
                    pcVar16 = pcVar32;
                  } while (cVar26 != '\0');
                  uVar29 = ~uVar29;
                  pcVar32 = pcVar32 + -uVar29;
                  local_8 = local_164;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar29 = 0xffffffff;
                pcVar16 = puVar17 + 10;
                do {
                  pcVar32 = pcVar16;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar32 = pcVar16 + 1;
                  cVar26 = *pcVar16;
                  pcVar16 = pcVar32;
                } while (cVar26 != '\0');
                uVar29 = ~uVar29;
                pcVar32 = pcVar32 + -uVar29;
                local_8 = local_164;
LAB_005d5b7e:
                pcVar16 = local_164;
                for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                  *(undefined4 *)pcVar16 = *(undefined4 *)pcVar32;
                  pcVar32 = pcVar32 + 4;
                  pcVar16 = pcVar16 + 4;
                }
                for (uVar29 = uVar29 & 3; local_8 = local_164, uVar29 != 0; uVar29 = uVar29 - 1) {
                  *pcVar16 = *pcVar32;
                  pcVar32 = pcVar32 + 1;
                  pcVar16 = pcVar16 + 1;
                }
              }
              local_124 = *(undefined4 *)(puVar17 + 6);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_120._0_2_ = CONCAT11(*puVar17,puVar17[2]);
              local_11c = this_00->field_0061;
              if (bVar25 == 2) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_120 = CONCAT13(1,CONCAT12(1,(undefined2)local_120));
              }
              else {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_120 = CONCAT13(1,CONCAT12((bVar25 != 3) + -1,(undefined2)local_120)) &
                            0xff02ffff;
              }
              pcVar16 = local_164;
              puVar33 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar14 = 0x27; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar33 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                puVar33 = puVar33 + 1;
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
          bVar35 = local_c < pDVar18->count;
        } while ((int)local_c < (int)pDVar18->count);
      }
      if (this_00->field_1E26 == CASE_6) {
        if ((this_00->field_1F47 == 0) && ((message->arg0).u32 == 0)) {
          pMVar5 = this_00->field_1A5B;
          if (*(int *)(pMVar5 + 0x2e6) != 0) {
            memset(local_64, 0, 0x20); /* compiler bulk-zero initialization */
            iVar14 = 0;
            memset(local_84, 0, 0x20); /* compiler bulk-zero initialization */
            local_7c = this_00->field_0008;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            iVar14 = MMsgTy::SetMessage(*(MMsgTy **)(pMVar5 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,(undefined4 *)0x0,0,0);
            if (iVar14 != 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)this_00->field_0000->field_0024)();
            }
          }
        }
        else {
          uVar29 = 0xffffffff;
          DAT_008087a0 = CASE_6;
          pcVar16 = &DAT_00853de4;
          do {
            pcVar32 = pcVar16;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar32 = pcVar16 + 1;
            cVar26 = *pcVar16;
            pcVar16 = pcVar32;
          } while (cVar26 != '\0');
          uVar29 = ~uVar29;
          DAT_00808783 = 2;
          pcVar16 = pcVar32 + -uVar29;
          pcVar32 = &DAT_0080ed16;
          for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar32 = pcVar32 + 4;
          }
          for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
            *pcVar32 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar32 = pcVar32 + 1;
          }
          uVar29 = 0xffffffff;
          pcVar16 = &DAT_0080ed16;
          do {
            pcVar32 = pcVar16;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar32 = pcVar16 + 1;
            cVar26 = *pcVar16;
            pcVar16 = pcVar32;
          } while (cVar26 != '\0');
          uVar29 = ~uVar29;
          pcVar16 = pcVar32 + -uVar29;
          pcVar32 = (char *)&DAT_0080ee1a;
          for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar32 = pcVar32 + 4;
          }
          for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
            *pcVar32 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar32 = pcVar32 + 1;
          }
          uVar29 = 0xffffffff;
          pcVar16 = &DAT_00807680;
          do {
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            cVar26 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar26 != '\0');
          uVar28 = 0xffffffff;
          pcVar16 = (char *)((int)&DAT_0080ed12 + ~uVar29 + 3);
          do {
            pcVar32 = pcVar16;
            if (uVar28 == 0) break;
            uVar28 = uVar28 - 1;
            pcVar32 = pcVar16 + 1;
            cVar26 = *pcVar16;
            pcVar16 = pcVar32;
          } while (cVar26 != '\0');
          uVar28 = ~uVar28;
          pcVar16 = pcVar32 + -uVar28;
          pcVar32 = &DAT_0080ef1e;
          for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
            *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar32 = pcVar32 + 4;
          }
          for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
            *pcVar32 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar32 = pcVar32 + 1;
          }
          thunk_FUN_005b6350(this_00,0x6948,0,0);
          this_00->field_0x21e5 = 1;
          this_00->field_0x21e4 = 1;
          this_00->field_21E7 = 1;
          this_00->field_0x21e3 = 1;
          this_00->field_0x21e1 = 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_0008)();
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(MMsgTy **)(this_00->field_1A5B + 0x2e6) != (MMsgTy *)0x0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            MMsgTy::HidePanel(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),1,0,1);
          }
        }
      }
      else {
        uVar29 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar16 = &DAT_0080ed16;
        do {
          pcVar32 = pcVar16;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar32 = pcVar16 + 1;
          cVar26 = *pcVar16;
          pcVar16 = pcVar32;
        } while (cVar26 != '\0');
        uVar29 = ~uVar29;
        pcVar16 = pcVar32 + -uVar29;
        pcVar32 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = this_00->field_1E26;
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar32 = pcVar32 + 4;
        }
        for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
          *pcVar32 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar32 = pcVar32 + 1;
        }
        uVar29 = 0xffffffff;
        pcVar16 = &DAT_00807680;
        do {
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          cVar26 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar26 != '\0');
        uVar28 = 0xffffffff;
        pcVar16 = (char *)((int)&DAT_0080ed12 + ~uVar29 + 3);
        do {
          pcVar32 = pcVar16;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar32 = pcVar16 + 1;
          cVar26 = *pcVar16;
          pcVar16 = pcVar32;
        } while (cVar26 != '\0');
        uVar28 = ~uVar28;
        pcVar16 = pcVar32 + -uVar28;
        pcVar32 = &DAT_0080ef1e;
        for (uVar29 = uVar28 >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
          *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar32 = pcVar32 + 4;
        }
        for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *pcVar32 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar32 = pcVar32 + 1;
        }
        thunk_FUN_005b6350(this_00,0x6948,0,0);
        this_00->field_0x21e5 = 1;
        this_00->field_0x21e4 = 1;
        this_00->field_21E7 = 1;
        this_00->field_0x21e2 = 1;
        this_00->field_0x21e1 = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_0008)();
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(MMsgTy **)(this_00->field_1A5B + 0x2e6) != (MMsgTy *)0x0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          MMsgTy::HidePanel(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),1,0,1);
        }
      }
    }
  }
  SVar3 = message->id;
  if (((0x69fe < SVar3) && (SVar3 < MESS_SHARED_6A7F)) && (this_00->field_0065 == '\x01')) {
    pDVar18 = this_00->field_1F84;
    local_c = SVar3 - MESS_SHARED_69FF >> 3;
    if ((pDVar18 == (DArrayTy *)0x0) ||
       (uVar29 = this_00->field_1F88 + local_c, pDVar18->count <= uVar29)) {
      local_14 = (AnonShape_005D5560_9031BF1B *)0x0;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar29) (runtime stride) */
      local_14 = (AnonShape_005D5560_9031BF1B *)(pDVar18->elementSize * uVar29 + (int)pDVar18->data)
      ;
    }
    uVar29 = 0;
    if (local_14 != (AnonShape_005D5560_9031BF1B *)0x0) {
      switch(SVar3 + 1 & 7) {
      case 1:
        uVar28 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar29 = pDVar18->count;
        if (0 < (int)uVar29) {
          bVar35 = uVar29 != 0;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar28) (runtime stride) */
              pcVar16 = (char *)(pDVar18->elementSize * uVar28 + (int)pDVar18->data);
            }
            else {
              pcVar16 = (char *)0x0;
            }
            if ((*pcVar16 != '\0') && (pcVar16[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar16[2]) = 0;
            }
            uVar28 = uVar28 + 1;
            bVar35 = uVar28 < uVar29;
          } while ((int)uVar28 < (int)uVar29);
        }
        bVar25 = local_14->field_0x2;
        SVar27 = this_00->field_1F88 + local_c;
        uVar29 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar25) = 1;
        this_00->field_2179 = SVar27;
        this_00->field_2191 = 0x6503;
        this_00->field_21A1 = 0;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0xff;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = (char *)CONCAT31(local_8._1_3_,1);
        do {
          if (*(char *)((int)&local_40 + uVar29) != '\0') {
            this_00->field_1F37 = uVar29;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            if ((byte)local_14->field_0x2 == uVar29) {
              this_00->field_21A1 = (uint)local_8 & 0xff;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
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
                  ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &this_00->field_0x2161,0);
        break;
      case MESS_ID_CREATE:
        this_00->field_2171 = 0x6504;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        local_28 = 1;
        pcVar16 = LoadResourceString(0x23f1,g_module_00807618);
        uVar29 = 0xffffffff;
        do {
          pcVar32 = pcVar16;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar32 = pcVar16 + 1;
          cVar26 = *pcVar16;
          pcVar16 = pcVar32;
        } while (cVar26 != '\0');
        uVar29 = ~uVar29;
        pcVar16 = pcVar32 + -uVar29;
        pcVar32 = &this_00->field_0x1e33;
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar32 = pcVar32 + 4;
        }
        for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
          *pcVar32 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar32 = pcVar32 + 1;
        }
        for (puVar20 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar20 != (uint *)0x0; puVar20 = Library::MSVCRT::FUN_0072e560(puVar20,'\n')) {
          *(undefined1 *)puVar20 = 0x20;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        pcVar16 = LoadResourceString(0x23f0,g_module_00807618);
        uVar29 = 0xffffffff;
        do {
          pcVar32 = pcVar16;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar32 = pcVar16 + 1;
          cVar26 = *pcVar16;
          pcVar16 = pcVar32;
        } while (cVar26 != '\0');
        uVar29 = ~uVar29;
        pcVar16 = pcVar32 + -uVar29;
        pcVar32 = &this_00->field_0x1e33;
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar32 = pcVar32 + 4;
        }
        for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
          *pcVar32 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar32 = pcVar32 + 1;
        }
        for (puVar20 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar20 != (uint *)0x0; puVar20 = Library::MSVCRT::FUN_0072e560(puVar20,'\n')) {
          *(undefined1 *)puVar20 = 0x20;
        }
        this_00->field_1F37 = 2;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        uVar29 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar29 = (uint)(local_14->field_0x4 != '\x02');
        }
        if (uVar29 != 0) {
          pcVar16 = LoadResourceString(0x23f2,g_module_00807618);
          uVar29 = 0xffffffff;
          do {
            pcVar32 = pcVar16;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar32 = pcVar16 + 1;
            cVar26 = *pcVar16;
            pcVar16 = pcVar32;
          } while (cVar26 != '\0');
          uVar29 = ~uVar29;
          pcVar16 = pcVar32 + -uVar29;
          pcVar32 = &this_00->field_0x1e33;
          for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
            *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar32 = pcVar32 + 4;
          }
          for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
            *pcVar32 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar32 = pcVar32 + 1;
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
        pcVar7 = g_startSystem_0081176C->field_0034;
        if (pcVar7->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar7);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar7->field_0x8a;
LAB_005d6676:
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &this_00->field_0x2161,0);
        break;
      case MESS_SHARED_0003:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = this_00->field_1F88 + local_c;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        if (*(char *)local_14 != '\0') {
          uVar29 = 0;
          local_8 = (char *)0x0;
          if ((this_00->field_1E26 == CASE_2) && (local_14->field_0x4 == '\x02')) break;
          pDVar18 = this_00->field_1F84;
          uVar28 = pDVar18->count;
          bVar35 = uVar28 != 0;
          if (0 < (int)uVar28) {
            do {
              if (bVar35) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar29) (runtime stride) */
                pcVar16 = (char *)(pDVar18->elementSize * uVar29 + (int)pDVar18->data);
              }
              else {
                pcVar16 = (char *)0x0;
              }
              if ((*pcVar16 != '\0') && (pcVar16[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar29 = uVar29 + 1;
              bVar35 = uVar29 < uVar28;
            } while ((int)uVar29 < (int)uVar28);
          }
          if ((this_00->field_1E26 != CASE_2) && (2 < (int)local_8)) {
            pcVar16 = LoadResourceString(8000,g_module_00807618);
            uVar29 = 0xffffffff;
            do {
              pcVar32 = pcVar16;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar32 = pcVar16 + 1;
              cVar26 = *pcVar16;
              pcVar16 = pcVar32;
            } while (cVar26 != '\0');
            uVar29 = ~uVar29;
            pcVar16 = pcVar32 + -uVar29;
            pcVar32 = &this_00->field_0x1e33;
            for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
              *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              pcVar32 = pcVar32 + 4;
            }
            for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
              *pcVar32 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar32 = pcVar32 + 1;
            }
            this_00->field_1F37 = 0;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          }
          if (this_00->field_1E26 != CASE_2) {
            bVar35 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar35 = local_14->field_0x3 != '\x03';
            }
            if (bVar35) {
              pcVar16 = LoadResourceString(0x1f42,g_module_00807618);
              uVar29 = 0xffffffff;
              do {
                pcVar32 = pcVar16;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar32 = pcVar16 + 1;
                cVar26 = *pcVar16;
                pcVar16 = pcVar32;
              } while (cVar26 != '\0');
              uVar29 = ~uVar29;
              pcVar16 = pcVar32 + -uVar29;
              pcVar32 = &this_00->field_0x1e33;
              for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                pcVar32 = pcVar32 + 4;
              }
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar32 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                pcVar32 = pcVar32 + 1;
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
              uVar29 = 0xffffffff;
              pcVar16 = (char *)(iVar14 + 0x40);
              do {
                pcVar32 = pcVar16;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar32 = pcVar16 + 1;
                cVar26 = *pcVar16;
                pcVar16 = pcVar32;
              } while (cVar26 != '\0');
              uVar29 = ~uVar29;
              pcVar16 = pcVar32 + -uVar29;
              pcVar32 = &this_00->field_0x1e33;
              for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                pcVar32 = pcVar32 + 4;
              }
              for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
                *pcVar32 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                pcVar32 = pcVar32 + 1;
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
        uVar29 = 0;
        if (0 < (int)pDVar18->count) {
          bVar35 = pDVar18->count != 0;
          local_28 = (uint)(byte)local_14->field_0x4;
          do {
            if (bVar35) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar29) (runtime stride) */
              pvVar15 = (void *)(pDVar18->elementSize * uVar29 + (int)pDVar18->data);
            }
            else {
              pvVar15 = (void *)0x0;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((*(uint *)((int)pvVar15 + 0x104) == local_28) &&
               (*(uint *)((int)pvVar15 + 0x108) == (uint)(byte)local_14->field_0x5)) {
              this_00->field_21A1 = uVar29;
              break;
            }
            uVar29 = uVar29 + 1;
            bVar35 = uVar29 < pDVar18->count;
          } while ((int)uVar29 < (int)pDVar18->count);
        }
        dVar6 = pDVar18->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar6;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar7 = g_startSystem_0081176C->field_0034;
        if (pcVar7->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar7);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar7->field_0x8a;
        if (1 < (int)this_00->field_21A9) goto LAB_005d6676;
        break;
      case MESS_SHARED_0005:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar28 = pDVar18->count;
          if (0 < (int)uVar28) {
            bVar35 = uVar28 != 0;
            do {
              if (bVar35) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar29) (runtime stride) */
                pvVar15 = (void *)(pDVar18->elementSize * uVar29 + (int)pDVar18->data);
              }
              else {
                pvVar15 = (void *)0x0;
              }
              if ((pvVar15 != (void *)0x0) && (*(byte *)((int)pvVar15 + 0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)*(byte *)((int)pvVar15 + 0x4a)) = 1;
              }
              uVar29 = uVar29 + 1;
              bVar35 = uVar29 < uVar28;
            } while ((int)uVar29 < (int)uVar28);
          }
          bVar25 = 0;
          iVar14 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar14) != '\0') {
              bVar25 = bVar25 + 1;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < 8);
          bVar2 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar25 < bVar2) {
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
          uVar29 = 0;
          cVar26 = (char)local_28;
          if (0 < (int)pDVar18->count) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar35 = pDVar18->count != 0;
            do {
              if (bVar35) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar29) (runtime stride) */
                pcVar16 = (char *)(pDVar18->elementSize * uVar29 + (int)pDVar18->data);
              }
              else {
                pcVar16 = (char *)0x0;
              }
              if (local_2c == (undefined1 *)uVar29) {
LAB_005d6784:
                if ((*pcVar16 != '\0') && ((pcVar16[4] == '\0' || (pcVar16[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar16[0x4a]) = 0;
                }
              }
              else if (*pcVar16 != '\0') {
                if ((pcVar16[4] != '\0') && (pcVar16[4] != '\x01')) {
                  if (local_8 == (char *)0x0) {
                    if (cVar26 != pcVar16[0x4a]) {
                      cVar26 = -1;
                    }
                  }
                  else {
                    cVar26 = pcVar16[0x4a];
                    local_8 = (char *)0x0;
                  }
                }
                goto LAB_005d6784;
              }
              uVar29 = uVar29 + 1;
              bVar35 = uVar29 < pDVar18->count;
            } while ((int)uVar29 < (int)pDVar18->count);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_28 = CONCAT31(local_28._1_3_,cVar26);
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
          puVar17 = &uStack_79;
          local_2c = puVar17;
          do {
            iVar14 = uVar29 + 0x41;
            if (puVar17[uVar29 + 0x41] != '\0') {
              pcVar16 = LoadResourceString(0x1f4a,g_module_00807618);
              wsprintfA(&this_00->field_0x1e33,"%s%c",pcVar16,iVar14);
              this_00->field_1F37 = uVar29;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              if ((byte)local_14->field_0x4a == uVar29) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
              puVar17 = local_2c;
            }
            uVar29 = uVar29 + 1;
          } while ((int)uVar29 < 8);
          SVar1 = this_00->field_1E26;
          this_00->field_21A9 = this_00->field_1E2F->count;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (uVar22 = 0x26b, SVar1 == CASE_2)) {
            uVar22 = 0x2ab;
          }
          this_00->field_21C5 = uVar22;
          this_00->field_21CD = 0x46;
          this_00->field_21C9 = local_c * 0x19 + 0x41;
          pcVar7 = g_startSystem_0081176C->field_0034;
          if (pcVar7->field_00A0 != 0) {
            FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar7);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar7->field_0x8a;
          goto LAB_005d619b;
        }
        if (DAT_0080874d != 0xff) {
          bVar25 = local_14->field_0x2;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT31((uint3)(SVar3 - MESS_SHARED_69FF >> 0xb),bVar25);
          if ((bVar25 != 0xff) && (DAT_0080874d != bVar25)) {
            if (local_14->field_0x4 == '\x04') {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar25);
              if (DAT_0080874d == bVar25) {
                uVar22 = 0;
                uVar29 = (uint)bVar25;
              }
              else {
                uVar28 = (uint)DAT_0080874d;
                bVar2 = g_playerRelationMatrix[uVar28][bVar25];
                uVar29 = local_c;
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar25][uVar28] == 0)) {
                  uVar22 = 0xfffffffe;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar25][uVar28] == 0)) {
                  uVar22 = 0xffffffff;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar25][uVar28] == 1)) {
                  uVar22 = 1;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar25][uVar28] == 1)) {
                  uVar22 = 2;
                }
                else {
                  uVar22 = 0;
                }
              }
              bVar25 = (byte)uVar29;
              switch(uVar22) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar25,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,DAT_0080874d,bVar25,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,DAT_0080874d,bVar25,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar25,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,DAT_0080874d,bVar25);
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_00->field_0000->field_002C)();
          }
        }
      }
    }
  }
  SVar3 = message->id;
  if (SVar3 < MESS_SHARED_6A7F) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  if (0x6afe < SVar3) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  uVar29 = SVar3 - MESS_SHARED_6A7F >> 3;
  local_2c = (undefined1 *)(SVar3 + 1 & 7);
  piVar8 = (message->arg1).ptr;
  local_1c = piVar8[2];
  local_18 = piVar8[3];
  pDVar18 = this_00->field_1F84;
  local_24 = *piVar8 + -0x113;
  local_20 = 0;
  if ((pDVar18 == (DArrayTy *)0x0) ||
     (uVar28 = this_00->field_1F88 + uVar29, pDVar18->count <= uVar28)) {
    pAVar34 = (AnonShape_005CBBE0_2D1CAA09 *)0x0;
  }
  else {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, uVar28) (runtime stride) */
    pAVar34 = (AnonShape_005CBBE0_2D1CAA09 *)(pDVar18->elementSize * uVar28 + (int)pDVar18->data);
  }
  local_28 = uVar29;
  FUN_006b4170(this_00->field_20F4[uVar29],0,*piVar8 + -0x113,0,piVar8[2],piVar8[3],0xff);
  if (pAVar34 == (AnonShape_005CBBE0_2D1CAA09 *)0x0) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*(char *)pAVar34 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar34->field_0x2 != -1) {
        switch(pAVar34->field_0x2) {
        case 0:
          bVar25 = 0xfc;
          break;
        case 1:
          bVar25 = 0xfa;
          break;
        case 2:
          bVar25 = 0xfb;
          break;
        case 3:
          bVar25 = 0xf9;
          break;
        case 4:
          bVar25 = 0xfd;
          break;
        case 5:
          bVar25 = 0xfe;
          break;
        case 6:
          bVar25 = 0xf3;
          break;
        case 7:
          bVar25 = 7;
          break;
        default:
          bVar25 = 0xff;
        }
        FUN_006b4170(this_00->field_20F4[uVar29],0,local_24 + 2,local_20 + 2,local_1c + -4,
                     local_18 + -4,bVar25);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar34 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,local_24,
                     local_20,local_1c,local_18);
    if (pAVar34->field_0x3 == '\x01') {
      pcVar16 = &DAT_007ca250;
LAB_005d6c37:
      uVar29 = 0xffffffff;
      do {
        pcVar32 = pcVar16;
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        pcVar32 = pcVar16 + 1;
        cVar26 = *pcVar16;
        pcVar16 = pcVar32;
      } while (cVar26 != '\0');
      uVar29 = ~uVar29;
      pcVar16 = pcVar32 + -uVar29;
      pcVar32 = (char *)&DAT_0080f33a;
      for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar32 = pcVar32 + 4;
      }
    }
    else {
      if (pAVar34->field_0x3 != '\x02') {
        pcVar16 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar29 = 0xffffffff;
      pcVar16 = &DAT_007ca248;
      do {
        pcVar32 = pcVar16;
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        pcVar32 = pcVar16 + 1;
        cVar26 = *pcVar16;
        pcVar16 = pcVar32;
      } while (cVar26 != '\0');
      uVar29 = ~uVar29;
      pcVar16 = pcVar32 + -uVar29;
      pcVar32 = (char *)&DAT_0080f33a;
      for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
        *(undefined4 *)pcVar32 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar32 = pcVar32 + 4;
      }
    }
    pSVar12 = g_startSystem_0081176C;
    for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
      *pcVar32 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar32 = pcVar32 + 1;
    }
    ccFntTy::WrStr(pSVar12->field_0034,&DAT_0080f33a,-1,-1,2);
    uVar29 = local_28;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,local_24,
                     local_20,local_1c,local_18);
    uVar28 = 2;
    iVar37 = -1;
    iVar24 = -1;
    puVar36 = (uint *)&DAT_007c2310;
    iVar14 = local_1c;
    puVar20 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar34);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,2,0x67,0x67);
    if (pAVar34->field_0x4 == '\x02') {
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,
                       local_24,local_20,local_1c,local_18);
      uVar28 = 2;
      iVar24 = -1;
      iVar14 = -1;
      puVar20 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,(uint *)&pAVar34->field_0xa,
                                   (uint *)&DAT_007c7274,local_1c);
      ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar20,iVar14,iVar24,uVar28);
      break;
    }
    if (pAVar34->field_0x4 != '\x04') break;
    pDVar18 = pAVar34->field_0050;
    if ((uint)(byte)pAVar34->field_0x5 < pDVar18->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar18, (uint)(byte)pAVar34->field_0x5) (runtime stride) */
      puVar20 = (uint *)(pDVar18->elementSize * (uint)(byte)pAVar34->field_0x5 + (int)pDVar18->data)
      ;
    }
    else {
      puVar20 = (uint *)0x0;
    }
    if (puVar20 == (uint *)0x0) break;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,local_24,
                     local_20,local_1c,local_18);
    uVar28 = 2;
    iVar37 = -1;
    iVar24 = -1;
    puVar36 = (uint *)&DAT_007c7274;
    iVar14 = local_1c;
LAB_005d6d70:
    puVar20 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar20,puVar36,iVar14);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar20,iVar24,iVar37,uVar28);
    break;
  case (undefined1 *)0x5:
    if ((*(char *)pAVar34 != '\0') &&
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,(int)this_00->field_20F4[uVar29],&local_24,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar34->field_0x4 != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar25 = pAVar34->field_0x2, bVar25 != 0xff)) &&
           (DAT_0080874d != bVar25)) {
          local_28 = 0xffffffff;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar25);
          uVar28 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar28][bVar25];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar25][uVar28] == 0)) {
            uVar22 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar25][uVar28] == 0)) {
            uVar22 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar25][uVar28] == 1)) {
            uVar22 = 1;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar25][uVar28] == 1)) {
            uVar22 = 2;
          }
          else {
            uVar22 = 0;
          }
          switch(uVar22) {
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
            pbVar23 = (byte *)FUN_0070b3a0(*(AnonShape_GLOBAL_0081175C_57F682DD **)
                                            &this_00->field_0x1f4b,iVar14 + -1);
            DibPut(this_00->field_20F4[uVar29],(local_1c - *(int *)(pbVar23 + 4)) / 2 + local_24,
                   (local_18 - *(int *)(pbVar23 + 8)) / 2 + 1 + local_20,'\x06',pbVar23);
          }
        }
      }
      else {
        iVar14 = (byte)pAVar34->field_0x4a + 0x41;
        pcVar16 = LoadResourceString(0x1f4a,g_module_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",pcVar16,iVar14);
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_00->field_20F4[uVar29],0,
                         local_24,local_20,local_1c,local_18);
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
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


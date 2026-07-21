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
  uint3 uVar10;
  char cVar11;
  char cVar12;
  StartSystemTy *pSVar13;
  SettMapTy *this_00;
  undefined1 uVar14;
  DWORD DVar15;
  int iVar16;
  void *pvVar17;
  char *pcVar18;
  undefined1 *puVar19;
  DArrayTy *pDVar20;
  void *pvVar21;
  uint *puVar22;
  AnonNested_005D5560_0050_EBFA0A51 *pAVar23;
  undefined4 uVar24;
  uint uVar25;
  byte *pbVar26;
  int iVar27;
  byte bVar28;
  char cVar29;
  uint uVar30;
  uint uVar31;
  AnonShape_005D5560_9031BF1B *pAVar32;
  char *pcVar33;
  char *pcVar34;
  undefined4 *puVar35;
  AnonShape_005CBBE0_2D1CAA09 *pAVar36;
  bool bVar37;
  uint *puVar38;
  int iVar39;
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
  DVar15 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar15;
  local_c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c8;
  iVar16 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0);
  this_00 = local_44;
  if (iVar16 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    iVar27 = ReportDebugMessage("E:\\__titans\\Start\\settsobj.cpp",0x27d,0,iVar16,
                                "%s","SettMapSTy::GetMessage");
    if (iVar27 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar16,0,"E:\\__titans\\Start\\settsobj.cpp",0x27d);
    return 0xffff;
  }
  SettMapTy::GetMessage(local_44,message);
  SVar3 = message->id;
  if (SVar3 < MESS_SETTMAPSTY_6505) {
    if (SVar3 == MESS_SHARED_6504) {
      uVar31 = (message->arg0).u32;
      if ((uVar31 != 0xffffffff) && (pDVar20 = this_00->field_1F84, pDVar20 != (DArrayTy *)0x0)) {
        pDVar4 = this_00->field_1E2F;
        if (uVar31 < pDVar4->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar31) (runtime stride) */
          pvVar17 = (void *)(pDVar4->elementSize * uVar31 + (int)pDVar4->data);
        }
        else {
          pvVar17 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar17 + 0x104);
        if ((message->arg1).u32 < pDVar20->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, (message->arg1).u32) (runtime stride) */
          pvVar17 = (void *)(pDVar20->elementSize * (message->arg1).u32 + (int)pDVar20->data);
        }
        else {
          pvVar17 = (void *)0x0;
        }
        if (pvVar17 != (void *)0x0) {
          *(char *)((int)pvVar17 + 3) = cVar29;
        }
        pDVar20 = this_00->field_1F84;
        uVar31 = (message->arg1).u32 + 1;
        bVar37 = uVar31 < pDVar20->count;
        if ((int)uVar31 < (int)pDVar20->count) {
          do {
            if (bVar37) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar31) (runtime stride) */
              pcVar18 = (char *)(pDVar20->elementSize * uVar31 + (int)pDVar20->data);
            }
            else {
              pcVar18 = (char *)0x0;
            }
            if ((pcVar18 == (char *)0x0) || (*pcVar18 != '\0')) break;
            pcVar18[3] = cVar29;
            pDVar20 = this_00->field_1F84;
            uVar31 = uVar31 + 1;
            bVar37 = uVar31 < pDVar20->count;
          } while ((int)uVar31 < (int)pDVar20->count);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
      }
    }
    else if (SVar3 == MESS_SHARED_6501) {
      uVar31 = (message->arg0).u32;
      if ((uVar31 != 0xffffffff) && (pDVar20 = this_00->field_1F84, pDVar20 != (DArrayTy *)0x0)) {
        pDVar4 = this_00->field_1E2F;
        if (uVar31 < pDVar4->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar31) (runtime stride) */
          pvVar17 = (void *)(pDVar4->elementSize * uVar31 + (int)pDVar4->data);
        }
        else {
          pvVar17 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar17 + 0x104);
        if ((message->arg1).u32 < pDVar20->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, (message->arg1).u32) (runtime stride) */
          pvVar17 = (void *)(pDVar20->elementSize * (message->arg1).u32 + (int)pDVar20->data);
        }
        else {
          pvVar17 = (void *)0x0;
        }
        if (pvVar17 != (void *)0x0) {
          *(char *)((int)pvVar17 + 0x4a) = cVar29;
        }
        pDVar20 = this_00->field_1F84;
        uVar31 = (message->arg1).u32 + 1;
        bVar37 = uVar31 < pDVar20->count;
        if ((int)uVar31 < (int)pDVar20->count) {
          do {
            if (bVar37) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar31) (runtime stride) */
              pcVar18 = (char *)(pDVar20->elementSize * uVar31 + (int)pDVar20->data);
            }
            else {
              pcVar18 = (char *)0x0;
            }
            if ((pcVar18 == (char *)0x0) || (*pcVar18 != '\0')) break;
            pcVar18[0x4a] = cVar29;
            pDVar20 = this_00->field_1F84;
            uVar31 = uVar31 + 1;
            bVar37 = uVar31 < pDVar20->count;
          } while ((int)uVar31 < (int)pDVar20->count);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
      }
    }
    else if (((SVar3 == MESS_PRIVIDERTY_6502) &&
             (uVar31 = (message->arg0).u32, uVar31 != 0xffffffff)) &&
            (pDVar20 = this_00->field_1F84, pDVar20 != (DArrayTy *)0x0)) {
      pDVar4 = this_00->field_1E2F;
      if (uVar31 < pDVar4->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar31) (runtime stride) */
        pvVar17 = (void *)(pDVar4->elementSize * uVar31 + (int)pDVar4->data);
      }
      else {
        pvVar17 = (void *)0x0;
      }
      local_d = *(byte *)((int)pvVar17 + 0x104);
      if ((message->arg1).u32 < pDVar20->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, (message->arg1).u32) (runtime stride) */
        pvVar17 = (void *)(pDVar20->elementSize * (message->arg1).u32 + (int)pDVar20->data);
      }
      else {
        pvVar17 = (void *)0x0;
      }
      if (pvVar17 != (void *)0x0) {
        if (*(byte *)((int)pvVar17 + 2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar17 + 2));
        }
        *(byte *)((int)pvVar17 + 2) = local_d;
        if (*(char *)((int)pvVar17 + 4) == '\x02') {
          DAT_0080874d = local_d;
        }
        pDVar20 = this_00->field_1F84;
        uVar31 = (message->arg1).u32 + 1;
        bVar37 = uVar31 < pDVar20->count;
        if ((int)uVar31 < (int)pDVar20->count) {
          do {
            if (bVar37) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar31) (runtime stride) */
              pcVar18 = (char *)(pDVar20->elementSize * uVar31 + (int)pDVar20->data);
            }
            else {
              pcVar18 = (char *)0x0;
            }
            if ((pcVar18 == (char *)0x0) || (*pcVar18 != '\0')) break;
            pcVar18[2] = local_d;
            pDVar20 = this_00->field_1F84;
            uVar31 = uVar31 + 1;
            bVar37 = uVar31 < pDVar20->count;
          } while ((int)uVar31 < (int)pDVar20->count);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
        goto LAB_005d5ff8;
      }
    }
  }
  else if (SVar3 == MESS_SETTMAPSTY_6505) {
    uVar31 = (message->arg0).u32;
    if ((uVar31 != 0xffffffff) && (pDVar20 = this_00->field_1F84, pDVar20 != (DArrayTy *)0x0)) {
      pDVar4 = this_00->field_1E2F;
      if (uVar31 < pDVar4->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar31) (runtime stride) */
        pvVar17 = (void *)(pDVar4->elementSize * uVar31 + (int)pDVar4->data);
      }
      else {
        pvVar17 = (void *)0x0;
      }
      uVar31 = pDVar20->count;
      if ((message->arg1).u32 < uVar31) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, (message->arg1).u32) (runtime stride) */
        pvVar21 = (void *)(pDVar20->elementSize * (message->arg1).u32 + (int)pDVar20->data);
      }
      else {
        pvVar21 = (void *)0x0;
      }
      if (pvVar21 != (void *)0x0) {
        if ((*(int *)((int)pvVar17 + 0x104) == 2) && (uVar30 = 0, 0 < (int)uVar31)) {
          bVar37 = uVar31 != 0;
          do {
            if (bVar37) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar30) (runtime stride) */
              pvVar21 = (void *)(pDVar20->elementSize * uVar30 + (int)pDVar20->data);
            }
            else {
              pvVar21 = (void *)0x0;
            }
            if ((pvVar21 != (void *)0x0) && (*(char *)((int)pvVar21 + 4) == '\x02')) {
              SVar1 = this_00->field_1E26;
              if ((SVar1 == 6) || ((SVar1 == 1 || (SVar1 == 2)))) {
                *(undefined1 *)((int)pvVar21 + 4) = 4;
                *(undefined1 *)((int)pvVar21 + 5) = 0;
              }
              else {
                *(undefined1 *)((int)pvVar21 + 4) = 1;
              }
              break;
            }
            uVar30 = uVar30 + 1;
            bVar37 = uVar30 < uVar31;
          } while ((int)uVar30 < (int)uVar31);
        }
        pDVar20 = this_00->field_1F84;
        if ((message->arg1).u32 < pDVar20->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, (message->arg1).u32) (runtime stride) */
          pvVar21 = (void *)(pDVar20->elementSize * (message->arg1).u32 + (int)pDVar20->data);
        }
        else {
          pvVar21 = (void *)0x0;
        }
        cVar29 = *(char *)((int)pvVar17 + 0x104);
        *(char *)((int)pvVar21 + 4) = cVar29;
        *(undefined1 *)((int)pvVar21 + 5) = *(undefined1 *)((int)pvVar17 + 0x108);
        if (cVar29 == '\0') {
          if (*(byte *)((int)pvVar21 + 2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,*(byte *)((int)pvVar21 + 2));
          }
          *(undefined1 *)((int)pvVar21 + 2) = 0xff;
        }
        DAT_0080874d = 0xff;
        pDVar20 = this_00->field_1F84;
        uVar30 = 0;
        uVar31 = pDVar20->count;
        if (0 < (int)uVar31) {
          bVar37 = uVar31 != 0;
          do {
            if (bVar37) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar30) (runtime stride) */
              pvVar17 = (void *)(pDVar20->elementSize * uVar30 + (int)pDVar20->data);
            }
            else {
              pvVar17 = (void *)0x0;
            }
            if (((pvVar17 != (void *)0x0) && (*(char *)((int)pvVar17 + 4) == '\x02')) &&
               (*(int *)((int)pvVar17 + 6) == DAT_0080877f)) {
              DAT_0080874d = *(byte *)((int)pvVar17 + 2);
              break;
            }
            uVar30 = uVar30 + 1;
            bVar37 = uVar30 < uVar31;
          } while ((int)uVar30 < (int)uVar31);
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
      puVar35 = (undefined4 *)((int)&DAT_008087c4 + 3);
      for (iVar16 = 0xa2; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar35 = 0;
        puVar35 = puVar35 + 1;
      }
      puVar19 = &DAT_008087e9;
      do {
        puVar19[-1] = 0;
        *puVar19 = 0xff;
        puVar19 = puVar19 + 0x51;
      } while ((int)puVar19 < 0x808a71);
      pDVar20 = this_00->field_1F84;
      uVar30 = 0;
      uVar31 = pDVar20->count;
      if (0 < (int)uVar31) {
        bVar37 = uVar31 != 0;
        do {
          if (bVar37) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar30) (runtime stride) */
            pcVar18 = (char *)(pDVar20->elementSize * uVar30 + (int)pDVar20->data);
          }
          else {
            pcVar18 = (char *)0x0;
          }
          if (((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) && (pcVar18[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar18[2]) = 0;
          }
          uVar30 = uVar30 + 1;
          bVar37 = uVar30 < uVar31;
        } while ((int)uVar30 < (int)uVar31);
      }
      local_c = 0;
      if (0 < (int)uVar31) {
        bVar37 = uVar31 != 0;
        do {
          if (bVar37) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, local_c) (runtime stride) */
            pcVar18 = (char *)(pDVar20->elementSize * local_c + (int)pDVar20->data);
          }
          else {
            pcVar18 = (char *)0x0;
          }
          if (((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) &&
             ((pcVar18[4] != '\0' && ((pcVar18[4] != '\x01' || (this_00->field_1E26 == 2)))))) {
            iVar16 = *(int *)(pcVar18 + 0x50);
            if ((uint)(byte)pcVar18[5] < *(uint *)(iVar16 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar16 + 8) * (uint)(byte)pcVar18[5] +
                                *(int *)(iVar16 + 0x1c));
            }
            else {
              local_8 = (char *)0x0;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
            if (pcVar18[2] == -1) {
              iVar16 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar16) != '\0') {
                  pcVar18[2] = (char)iVar16;
                  *(undefined1 *)((int)&local_30 + iVar16) = 0;
                  break;
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < 8);
            }
            (&DAT_008087e9)[(uint)(byte)pcVar18[2] * 0x51] = pcVar18[2];
            (&DAT_008087e8)[(uint)(byte)pcVar18[2] * 0x51] = pcVar18[3];
            uVar31 = 0xffffffff;
            pcVar34 = &DAT_008016a0;
            do {
              pcVar33 = pcVar34;
              if (uVar31 == 0) break;
              uVar31 = uVar31 - 1;
              pcVar33 = pcVar34 + 1;
              cVar29 = *pcVar34;
              pcVar34 = pcVar33;
            } while (cVar29 != '\0');
            uVar31 = ~uVar31;
            local_14 = (AnonShape_005D5560_9031BF1B *)
                       (&DAT_008087c8 + (uint)(byte)pcVar18[2] * 0x51);
            pcVar34 = pcVar33 + -uVar31;
            pAVar32 = (AnonShape_005D5560_9031BF1B *)(&DAT_008087c8 + (uint)(byte)pcVar18[2] * 0x51)
            ;
            for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
              cVar29 = pcVar34[1];
              cVar11 = pcVar34[2];
              cVar12 = pcVar34[3];
              pAVar32->field_0x0 = pcVar34[0];
              pAVar32->field_0x1 = cVar29;
              pAVar32->field_0x2 = cVar11;
              pAVar32->field_0x3 = cVar12;
              pcVar34 = pcVar34 + 4;
              pAVar32 = (AnonShape_005D5560_9031BF1B *)&pAVar32->field_0x4;
            }
            for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
              *(char *)pAVar32 = *pcVar34;
              pcVar34 = pcVar34 + 1;
              pAVar32 = (AnonShape_005D5560_9031BF1B *)&pAVar32->field_0x1;
            }
            if (pcVar18[4] == '\x02') {
              if (*pcVar18 != '\0') {
                *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar18[2] * 0x51 + 3) = 0;
                DAT_0080874d = pcVar18[2];
                DAT_0080874e = pcVar18[3];
              }
            }
            else if (pcVar18[4] == '\x04') {
              *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar18[2] * 0x51 + 3) = 1;
              if (local_8 == (char *)0x0) {
                uVar31 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar18[2] * 0x51;
                pcVar34 = &DAT_008016a0;
                do {
                  pcVar33 = pcVar34;
                  if (uVar31 == 0) break;
                  uVar31 = uVar31 - 1;
                  pcVar33 = pcVar34 + 1;
                  cVar29 = *pcVar34;
                  pcVar34 = pcVar33;
                } while (cVar29 != '\0');
                uVar31 = ~uVar31;
                pcVar34 = pcVar33 + -uVar31;
                pcVar33 = local_8;
                for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
                  *(undefined4 *)pcVar33 = *(undefined4 *)pcVar34;
                  pcVar34 = pcVar34 + 4;
                  pcVar33 = pcVar33 + 4;
                }
                for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                  *pcVar33 = *pcVar34;
                  pcVar34 = pcVar34 + 1;
                  pcVar33 = pcVar33 + 1;
                }
              }
              else {
                pcVar34 = local_8 + 0x4c;
                uVar31 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar18[2] * 0x51;
                do {
                  pcVar33 = pcVar34;
                  if (uVar31 == 0) break;
                  uVar31 = uVar31 - 1;
                  pcVar33 = pcVar34 + 1;
                  cVar29 = *pcVar34;
                  pcVar34 = pcVar33;
                } while (cVar29 != '\0');
                uVar31 = ~uVar31;
                pcVar34 = pcVar33 + -uVar31;
                pcVar33 = local_8;
                for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
                  *(undefined4 *)pcVar33 = *(undefined4 *)pcVar34;
                  pcVar34 = pcVar34 + 4;
                  pcVar33 = pcVar33 + 4;
                }
                for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                  *pcVar33 = *pcVar34;
                  pcVar34 = pcVar34 + 1;
                  pcVar33 = pcVar33 + 1;
                }
              }
            }
            (&DAT_008087ea)[(uint)(byte)pcVar18[2] * 0x51] = pcVar18[0x4a];
            *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar18[2] * 0x51) =
                 *(undefined4 *)(pcVar18 + 0x54);
            *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar18[2] * 0x51) =
                 *(undefined4 *)(pcVar18 + 0x58);
            *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar18[2] * 0x51) =
                 *(undefined4 *)(pcVar18 + 0x5c);
          }
          pDVar20 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar37 = local_c < pDVar20->count;
        } while ((int)local_c < (int)pDVar20->count);
      }
      thunk_FUN_0056ee90((AnonShape_0056EE90_04DD57E6 *)&DAT_00807620);
      puVar35 = &DAT_00808ab0;
      for (iVar16 = 0x3a8; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar35 = 0;
        puVar35 = puVar35 + 1;
      }
      DAT_00808aaf = 0;
      pDVar20 = this_00->field_1F84;
      local_c = 0;
      if (0 < (int)pDVar20->count) {
        bVar37 = pDVar20->count != 0;
        do {
          if (bVar37) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, local_c) (runtime stride) */
            puVar19 = (undefined1 *)(pDVar20->elementSize * local_c + (int)pDVar20->data);
          }
          else {
            puVar19 = (undefined1 *)0x0;
          }
          if (puVar19 != (undefined1 *)0x0) {
            bVar28 = puVar19[4];
            local_d = bVar28;
            if ((bVar28 != 1) && (bVar28 != 0)) {
              if (bVar28 == 4) {
                iVar16 = *(int *)(puVar19 + 0x50);
                if ((uint)(byte)puVar19[5] < *(uint *)(iVar16 + 0xc)) {
                  pcVar18 = (char *)(*(int *)(iVar16 + 8) * (uint)(byte)puVar19[5] +
                                    *(int *)(iVar16 + 0x1c));
                }
                else {
                  pcVar18 = (char *)0x0;
                }
                if (pcVar18 != (char *)0x0) {
                  uVar31 = 0xffffffff;
                  do {
                    pcVar34 = pcVar18;
                    if (uVar31 == 0) break;
                    uVar31 = uVar31 - 1;
                    pcVar34 = pcVar18 + 1;
                    cVar29 = *pcVar18;
                    pcVar18 = pcVar34;
                  } while (cVar29 != '\0');
                  uVar31 = ~uVar31;
                  pcVar34 = pcVar34 + -uVar31;
                  local_8 = local_164;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar31 = 0xffffffff;
                pcVar18 = puVar19 + 10;
                do {
                  pcVar34 = pcVar18;
                  if (uVar31 == 0) break;
                  uVar31 = uVar31 - 1;
                  pcVar34 = pcVar18 + 1;
                  cVar29 = *pcVar18;
                  pcVar18 = pcVar34;
                } while (cVar29 != '\0');
                uVar31 = ~uVar31;
                pcVar34 = pcVar34 + -uVar31;
                local_8 = local_164;
LAB_005d5b7e:
                pcVar18 = local_164;
                for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
                  *(undefined4 *)pcVar18 = *(undefined4 *)pcVar34;
                  pcVar34 = pcVar34 + 4;
                  pcVar18 = pcVar18 + 4;
                }
                for (uVar31 = uVar31 & 3; local_8 = local_164, uVar31 != 0; uVar31 = uVar31 - 1) {
                  *pcVar18 = *pcVar34;
                  pcVar34 = pcVar34 + 1;
                  pcVar18 = pcVar18 + 1;
                }
              }
              local_124 = *(undefined4 *)(puVar19 + 6);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_120._0_2_ = CONCAT11(*puVar19,puVar19[2]);
              local_11c = this_00->field_0061;
              if (bVar28 == 2) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_120 = CONCAT13(1,CONCAT12(1,(undefined2)local_120));
              }
              else {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_120 = CONCAT13(1,CONCAT12((bVar28 != 3) + -1,(undefined2)local_120)) &
                            0xff02ffff;
              }
              pcVar18 = local_164;
              puVar35 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar16 = 0x27; iVar16 != 0; iVar16 = iVar16 + -1) {
                *puVar35 = *(undefined4 *)pcVar18;
                pcVar18 = pcVar18 + 4;
                puVar35 = puVar35 + 1;
              }
              if ((byte)local_120 < 8) {
                iVar16 = 0;
                do {
                  if ((&DAT_00808800)[iVar16 + (local_120 & 0xff) * 0x51] == '\0') {
                    (&DAT_00808800)[iVar16 + (local_120 & 0xff) * 0x51] = DAT_00808aaf;
                    break;
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar16 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          pDVar20 = this_00->field_1F84;
          local_c = local_c + 1;
          bVar37 = local_c < pDVar20->count;
        } while ((int)local_c < (int)pDVar20->count);
      }
      if (this_00->field_1E26 == 6) {
        if ((this_00->field_1F47 == 0) && ((message->arg0).u32 == 0)) {
          pMVar5 = this_00->field_1A5B;
          if (*(int *)(pMVar5 + 0x2e6) != 0) {
            puVar35 = local_64;
            for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
              *puVar35 = 0;
              puVar35 = puVar35 + 1;
            }
            puVar35 = local_84;
            for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 + -1) {
              *puVar35 = 0;
              puVar35 = puVar35 + 1;
            }
            local_7c = this_00->field_0008;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            iVar16 = MMsgTy::SetMessage(*(MMsgTy **)(pMVar5 + 0x2e6),0x251f,'\x01',local_64,local_84
                                        ,(undefined4 *)0x0,0,0);
            if (iVar16 != 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)this_00->field_0000->field_0024)();
            }
          }
        }
        else {
          uVar31 = 0xffffffff;
          DAT_008087a0 = 6;
          pcVar18 = &DAT_00853de4;
          do {
            pcVar34 = pcVar18;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1;
            pcVar34 = pcVar18 + 1;
            cVar29 = *pcVar18;
            pcVar18 = pcVar34;
          } while (cVar29 != '\0');
          uVar31 = ~uVar31;
          DAT_00808783 = 2;
          pcVar18 = pcVar34 + -uVar31;
          pcVar34 = &DAT_0080ed16;
          for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
            *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
            pcVar34 = pcVar34 + 4;
          }
          for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
            *pcVar34 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar34 = pcVar34 + 1;
          }
          uVar31 = 0xffffffff;
          pcVar18 = &DAT_0080ed16;
          do {
            pcVar34 = pcVar18;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1;
            pcVar34 = pcVar18 + 1;
            cVar29 = *pcVar18;
            pcVar18 = pcVar34;
          } while (cVar29 != '\0');
          uVar31 = ~uVar31;
          pcVar18 = pcVar34 + -uVar31;
          pcVar34 = (char *)&DAT_0080ee1a;
          for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
            *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
            pcVar34 = pcVar34 + 4;
          }
          for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
            *pcVar34 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar34 = pcVar34 + 1;
          }
          uVar31 = 0xffffffff;
          pcVar18 = &DAT_00807680;
          do {
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1;
            cVar29 = *pcVar18;
            pcVar18 = pcVar18 + 1;
          } while (cVar29 != '\0');
          uVar30 = 0xffffffff;
          pcVar18 = (char *)((int)&DAT_0080ed12 + ~uVar31 + 3);
          do {
            pcVar34 = pcVar18;
            if (uVar30 == 0) break;
            uVar30 = uVar30 - 1;
            pcVar34 = pcVar18 + 1;
            cVar29 = *pcVar18;
            pcVar18 = pcVar34;
          } while (cVar29 != '\0');
          uVar30 = ~uVar30;
          pcVar18 = pcVar34 + -uVar30;
          pcVar34 = &DAT_0080ef1e;
          for (uVar31 = uVar30 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
            *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
            pcVar34 = pcVar34 + 4;
          }
          for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
            *pcVar34 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar34 = pcVar34 + 1;
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
        uVar31 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar18 = &DAT_0080ed16;
        do {
          pcVar34 = pcVar18;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar34 = pcVar18 + 1;
          cVar29 = *pcVar18;
          pcVar18 = pcVar34;
        } while (cVar29 != '\0');
        uVar31 = ~uVar31;
        pcVar18 = pcVar34 + -uVar31;
        pcVar34 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = this_00->field_1E26;
        for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
          *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar34 = pcVar34 + 4;
        }
        for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
          *pcVar34 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar34 = pcVar34 + 1;
        }
        uVar31 = 0xffffffff;
        pcVar18 = &DAT_00807680;
        do {
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          cVar29 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        } while (cVar29 != '\0');
        uVar30 = 0xffffffff;
        pcVar18 = (char *)((int)&DAT_0080ed12 + ~uVar31 + 3);
        do {
          pcVar34 = pcVar18;
          if (uVar30 == 0) break;
          uVar30 = uVar30 - 1;
          pcVar34 = pcVar18 + 1;
          cVar29 = *pcVar18;
          pcVar18 = pcVar34;
        } while (cVar29 != '\0');
        uVar30 = ~uVar30;
        pcVar18 = pcVar34 + -uVar30;
        pcVar34 = &DAT_0080ef1e;
        for (uVar31 = uVar30 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
          *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar34 = pcVar34 + 4;
        }
        for (uVar30 = uVar30 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
          *pcVar34 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar34 = pcVar34 + 1;
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
    pDVar20 = this_00->field_1F84;
    local_c = SVar3 - MESS_SHARED_69FF >> 3;
    if ((pDVar20 == (DArrayTy *)0x0) ||
       (uVar31 = this_00->field_1F88 + local_c, pDVar20->count <= uVar31)) {
      local_14 = (AnonShape_005D5560_9031BF1B *)0x0;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar31) (runtime stride) */
      local_14 = (AnonShape_005D5560_9031BF1B *)(pDVar20->elementSize * uVar31 + (int)pDVar20->data)
      ;
    }
    uVar31 = 0;
    if (local_14 != (AnonShape_005D5560_9031BF1B *)0x0) {
      switch(SVar3 + 1 & 7) {
      case 1:
        uVar30 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar31 = pDVar20->count;
        if (0 < (int)uVar31) {
          bVar37 = uVar31 != 0;
          do {
            if (bVar37) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar30) (runtime stride) */
              pcVar18 = (char *)(pDVar20->elementSize * uVar30 + (int)pDVar20->data);
            }
            else {
              pcVar18 = (char *)0x0;
            }
            if ((*pcVar18 != '\0') && (pcVar18[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar18[2]) = 0;
            }
            uVar30 = uVar30 + 1;
            bVar37 = uVar30 < uVar31;
          } while ((int)uVar30 < (int)uVar31);
        }
        bVar28 = local_14->field_0x2;
        iVar16 = this_00->field_1F88 + local_c;
        uVar31 = 0;
        this_00->field_2171 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar28) = 1;
        this_00->field_2179 = iVar16;
        this_00->field_2191 = 0x6503;
        this_00->field_21A1 = 0;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0xff;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = (char *)CONCAT31(local_8._1_3_,1);
        do {
          if (*(char *)((int)&local_40 + uVar31) != '\0') {
            this_00->field_1F37 = uVar31;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            if ((byte)local_14->field_0x2 == uVar31) {
              this_00->field_21A1 = (uint)local_8 & 0xff;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
          }
          uVar31 = uVar31 + 1;
        } while ((int)uVar31 < 8);
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
        pcVar18 = LoadResourceString(0x23f1,HINSTANCE_00807618);
        uVar31 = 0xffffffff;
        do {
          pcVar34 = pcVar18;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar34 = pcVar18 + 1;
          cVar29 = *pcVar18;
          pcVar18 = pcVar34;
        } while (cVar29 != '\0');
        uVar31 = ~uVar31;
        pcVar18 = pcVar34 + -uVar31;
        pcVar34 = &this_00->field_0x1e33;
        for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
          *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar34 = pcVar34 + 4;
        }
        for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
          *pcVar34 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar34 = pcVar34 + 1;
        }
        for (puVar22 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar22 != (uint *)0x0; puVar22 = Library::MSVCRT::FUN_0072e560(puVar22,'\n')) {
          *(undefined1 *)puVar22 = 0x20;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        pcVar18 = LoadResourceString(0x23f0,HINSTANCE_00807618);
        uVar31 = 0xffffffff;
        do {
          pcVar34 = pcVar18;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar34 = pcVar18 + 1;
          cVar29 = *pcVar18;
          pcVar18 = pcVar34;
        } while (cVar29 != '\0');
        uVar31 = ~uVar31;
        pcVar18 = pcVar34 + -uVar31;
        pcVar34 = &this_00->field_0x1e33;
        for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
          *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar34 = pcVar34 + 4;
        }
        for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
          *pcVar34 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar34 = pcVar34 + 1;
        }
        for (puVar22 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar22 != (uint *)0x0; puVar22 = Library::MSVCRT::FUN_0072e560(puVar22,'\n')) {
          *(undefined1 *)puVar22 = 0x20;
        }
        this_00->field_1F37 = 2;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        uVar31 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar31 = (uint)(local_14->field_0x4 != '\x02');
        }
        if (uVar31 != 0) {
          pcVar18 = LoadResourceString(0x23f2,HINSTANCE_00807618);
          uVar31 = 0xffffffff;
          do {
            pcVar34 = pcVar18;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1;
            pcVar34 = pcVar18 + 1;
            cVar29 = *pcVar18;
            pcVar18 = pcVar34;
          } while (cVar29 != '\0');
          uVar31 = ~uVar31;
          pcVar18 = pcVar34 + -uVar31;
          pcVar34 = &this_00->field_0x1e33;
          for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
            *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
            pcVar18 = pcVar18 + 4;
            pcVar34 = pcVar34 + 4;
          }
          for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
            *pcVar34 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar34 = pcVar34 + 1;
          }
          for (puVar22 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar22 != (uint *)0x0; puVar22 = Library::MSVCRT::FUN_0072e560(puVar22,'\n')) {
            *(undefined1 *)puVar22 = 0x20;
          }
          this_00->field_1F37 = 3;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        bVar28 = local_14->field_0x3;
        this_00->field_21C5 = 0x143;
        this_00->field_21CD = 0x78;
        this_00->field_21A1 = bVar28 - 1;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar7 = PTR_0081176c->field_0034;
        if (pcVar7->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar7);
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
          uVar31 = 0;
          local_8 = (char *)0x0;
          if ((this_00->field_1E26 == 2) && (local_14->field_0x4 == '\x02')) break;
          pDVar20 = this_00->field_1F84;
          uVar30 = pDVar20->count;
          bVar37 = uVar30 != 0;
          if (0 < (int)uVar30) {
            do {
              if (bVar37) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar31) (runtime stride) */
                pcVar18 = (char *)(pDVar20->elementSize * uVar31 + (int)pDVar20->data);
              }
              else {
                pcVar18 = (char *)0x0;
              }
              if ((*pcVar18 != '\0') && (pcVar18[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar31 = uVar31 + 1;
              bVar37 = uVar31 < uVar30;
            } while ((int)uVar31 < (int)uVar30);
          }
          if ((this_00->field_1E26 != 2) && (2 < (int)local_8)) {
            pcVar18 = LoadResourceString(8000,HINSTANCE_00807618);
            uVar31 = 0xffffffff;
            do {
              pcVar34 = pcVar18;
              if (uVar31 == 0) break;
              uVar31 = uVar31 - 1;
              pcVar34 = pcVar18 + 1;
              cVar29 = *pcVar18;
              pcVar18 = pcVar34;
            } while (cVar29 != '\0');
            uVar31 = ~uVar31;
            pcVar18 = pcVar34 + -uVar31;
            pcVar34 = &this_00->field_0x1e33;
            for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
              *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar34 = pcVar34 + 4;
            }
            for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
              *pcVar34 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar34 = pcVar34 + 1;
            }
            this_00->field_1F37 = 0;
            Library::DKW::TBL::FUN_006ae1c0
                      (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          }
          if (this_00->field_1E26 != 2) {
            bVar37 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar37 = local_14->field_0x3 != '\x03';
            }
            if (bVar37) {
              pcVar18 = LoadResourceString(0x1f42,HINSTANCE_00807618);
              uVar31 = 0xffffffff;
              do {
                pcVar34 = pcVar18;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar34 = pcVar18 + 1;
                cVar29 = *pcVar18;
                pcVar18 = pcVar34;
              } while (cVar29 != '\0');
              uVar31 = ~uVar31;
              pcVar18 = pcVar34 + -uVar31;
              pcVar34 = &this_00->field_0x1e33;
              for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
                *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
                pcVar18 = pcVar18 + 4;
                pcVar34 = pcVar34 + 4;
              }
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar34 = *pcVar18;
                pcVar18 = pcVar18 + 1;
                pcVar34 = pcVar34 + 1;
              }
              this_00->field_1F37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
            }
          }
          local_8 = (char *)0x0;
          pAVar23 = local_14->field_0050;
          pcVar18 = (char *)pAVar23->field_000C;
          if (0 < (int)pcVar18) {
            do {
              if (local_8 < pcVar18) {
                iVar16 = pAVar23->field_0008 * (int)local_8 + pAVar23->field_001C;
              }
              else {
                iVar16 = 0;
              }
              uVar31 = 0xffffffff;
              pcVar18 = (char *)(iVar16 + 0x40);
              do {
                pcVar34 = pcVar18;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar34 = pcVar18 + 1;
                cVar29 = *pcVar18;
                pcVar18 = pcVar34;
              } while (cVar29 != '\0');
              uVar31 = ~uVar31;
              pcVar18 = pcVar34 + -uVar31;
              pcVar34 = &this_00->field_0x1e33;
              for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
                *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
                pcVar18 = pcVar18 + 4;
                pcVar34 = pcVar34 + 4;
              }
              for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
                *pcVar34 = *pcVar18;
                pcVar18 = pcVar18 + 1;
                pcVar34 = pcVar34 + 1;
              }
              this_00->field_1F37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              local_8 = local_8 + 1;
              pAVar23 = local_14->field_0050;
              pcVar18 = (char *)pAVar23->field_000C;
            } while ((int)local_8 < (int)pcVar18);
          }
        }
        pDVar20 = this_00->field_1E2F;
        uVar31 = 0;
        if (0 < (int)pDVar20->count) {
          bVar37 = pDVar20->count != 0;
          local_28 = (uint)(byte)local_14->field_0x4;
          do {
            if (bVar37) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar31) (runtime stride) */
              pvVar17 = (void *)(pDVar20->elementSize * uVar31 + (int)pDVar20->data);
            }
            else {
              pvVar17 = (void *)0x0;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((*(uint *)((int)pvVar17 + 0x104) == local_28) &&
               (*(uint *)((int)pvVar17 + 0x108) == (uint)(byte)local_14->field_0x5)) {
              this_00->field_21A1 = uVar31;
              break;
            }
            uVar31 = uVar31 + 1;
            bVar37 = uVar31 < pDVar20->count;
          } while ((int)uVar31 < (int)pDVar20->count);
        }
        dVar6 = pDVar20->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar6;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_c * 0x19 + 0x41;
        pcVar7 = PTR_0081176c->field_0034;
        if (pcVar7->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar7);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar7->field_0x8a;
        if (1 < (int)this_00->field_21A9) goto LAB_005d6676;
        break;
      case MESS_SHARED_0005:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar30 = pDVar20->count;
          if (0 < (int)uVar30) {
            bVar37 = uVar30 != 0;
            do {
              if (bVar37) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar31) (runtime stride) */
                pvVar17 = (void *)(pDVar20->elementSize * uVar31 + (int)pDVar20->data);
              }
              else {
                pvVar17 = (void *)0x0;
              }
              if ((pvVar17 != (void *)0x0) && (*(byte *)((int)pvVar17 + 0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)*(byte *)((int)pvVar17 + 0x4a)) = 1;
              }
              uVar31 = uVar31 + 1;
              bVar37 = uVar31 < uVar30;
            } while ((int)uVar31 < (int)uVar30);
          }
          bVar28 = 0;
          iVar16 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar16) != '\0') {
              bVar28 = bVar28 + 1;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < 8);
          bVar2 = this_00->field_0x211c;
joined_r0x005d6701:
          if (bVar28 < bVar2) {
            iVar16 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar16) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar16) = 1;
                bVar28 = bVar28 + 1;
                break;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < 8);
            goto joined_r0x005d6701;
          }
          uVar31 = 0;
          cVar29 = (char)local_28;
          if (0 < (int)pDVar20->count) {
            local_2c = (undefined1 *)(this_00->field_1F88 + local_c);
            bVar37 = pDVar20->count != 0;
            do {
              if (bVar37) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar31) (runtime stride) */
                pcVar18 = (char *)(pDVar20->elementSize * uVar31 + (int)pDVar20->data);
              }
              else {
                pcVar18 = (char *)0x0;
              }
              if (local_2c == (undefined1 *)uVar31) {
LAB_005d6784:
                if ((*pcVar18 != '\0') && ((pcVar18[4] == '\0' || (pcVar18[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar18[0x4a]) = 0;
                }
              }
              else if (*pcVar18 != '\0') {
                if ((pcVar18[4] != '\0') && (pcVar18[4] != '\x01')) {
                  if (local_8 == (char *)0x0) {
                    if (cVar29 != pcVar18[0x4a]) {
                      cVar29 = -1;
                    }
                  }
                  else {
                    cVar29 = pcVar18[0x4a];
                    local_8 = (char *)0x0;
                  }
                }
                goto LAB_005d6784;
              }
              uVar31 = uVar31 + 1;
              bVar37 = uVar31 < pDVar20->count;
            } while ((int)uVar31 < (int)pDVar20->count);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_28 = CONCAT31(local_28._1_3_,cVar29);
          }
          if (cVar29 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          uVar31 = 0;
          this_00->field_2171 = 0x6501;
          this_00->field_2179 = this_00->field_1F88 + local_c;
          this_00->field_2191 = 0x6500;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar19 = &uStack_79;
          local_2c = puVar19;
          do {
            iVar16 = uVar31 + 0x41;
            if (puVar19[uVar31 + 0x41] != '\0') {
              pcVar18 = LoadResourceString(0x1f4a,HINSTANCE_00807618);
              wsprintfA(&this_00->field_0x1e33,"%s%c",pcVar18,iVar16);
              this_00->field_1F37 = uVar31;
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              if ((byte)local_14->field_0x4a == uVar31) {
                this_00->field_21A1 = (uint)local_8 & 0xff;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
              puVar19 = local_2c;
            }
            uVar31 = uVar31 + 1;
          } while ((int)uVar31 < 8);
          SVar1 = this_00->field_1E26;
          this_00->field_21A9 = this_00->field_1E2F->count;
          if (((SVar1 == 6) || (SVar1 == 1)) || (uVar24 = 0x26b, SVar1 == 2)) {
            uVar24 = 0x2ab;
          }
          this_00->field_21C5 = uVar24;
          this_00->field_21CD = 0x46;
          this_00->field_21C9 = local_c * 0x19 + 0x41;
          pcVar7 = PTR_0081176c->field_0034;
          if (pcVar7->field_00A0 != 0) {
            FUN_00710790((uint *)pcVar7);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar7->field_0x8a;
          goto LAB_005d619b;
        }
        uVar10 = (uint3)(SVar3 - MESS_SHARED_69FF >> 8);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar31 = CONCAT31(uVar10 >> 3,DAT_0080874d);
        if (DAT_0080874d != 0xff) {
          bVar28 = local_14->field_0x2;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT31(uVar10 >> 3,bVar28);
          if ((bVar28 != 0xff) && (DAT_0080874d != bVar28)) {
            if (local_14->field_0x4 == '\x04') {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar28);
              if (DAT_0080874d == bVar28) {
                uVar24 = 0;
                uVar30 = (uint)bVar28;
              }
              else {
                uVar25 = (uint)DAT_0080874d;
                bVar2 = g_playerRelationMatrix[uVar25][bVar28];
                uVar30 = local_c;
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar28][uVar25] == 0)) {
                  uVar24 = 0xfffffffe;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar28][uVar25] == 0)) {
                  uVar24 = 0xffffffff;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar28][uVar25] == 1)) {
                  uVar24 = 1;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar28][uVar25] == 1)) {
                  uVar24 = 2;
                }
                else {
                  uVar24 = 0;
                }
              }
              switch(uVar24) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar30,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar31,(byte)uVar30,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar31,(byte)uVar30,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar30,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,uVar31,bVar28);
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
  uVar31 = SVar3 - MESS_SHARED_6A7F >> 3;
  local_2c = (undefined1 *)(SVar3 + 1 & 7);
  piVar8 = (message->arg1).ptr;
  local_1c = piVar8[2];
  local_18 = piVar8[3];
  pDVar20 = this_00->field_1F84;
  local_24 = *piVar8 + -0x113;
  local_20 = 0;
  if ((pDVar20 == (DArrayTy *)0x0) ||
     (uVar30 = this_00->field_1F88 + uVar31, pDVar20->count <= uVar30)) {
    pAVar36 = (AnonShape_005CBBE0_2D1CAA09 *)0x0;
  }
  else {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, uVar30) (runtime stride) */
    pAVar36 = (AnonShape_005CBBE0_2D1CAA09 *)(pDVar20->elementSize * uVar30 + (int)pDVar20->data);
  }
  local_28 = uVar31;
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)(&this_00->field_20F4)[uVar31],0,*piVar8 + -0x113,0,
               piVar8[2],piVar8[3],0xff);
  if (pAVar36 == (AnonShape_005CBBE0_2D1CAA09 *)0x0) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*(char *)pAVar36 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar31],&local_24,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar36->field_0x2 != -1) {
        switch(pAVar36->field_0x2) {
        case 0:
          uVar14 = 0xfc;
          break;
        case 1:
          uVar14 = 0xfa;
          break;
        case 2:
          uVar14 = 0xfb;
          break;
        case 3:
          uVar14 = 0xf9;
          break;
        case 4:
          uVar14 = 0xfd;
          break;
        case 5:
          uVar14 = 0xfe;
          break;
        case 6:
          uVar14 = 0xf3;
          break;
        case 7:
          uVar14 = 7;
          break;
        default:
          uVar14 = 0xff;
        }
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)(&this_00->field_20F4)[uVar31],0,local_24 + 2,
                     local_20 + 2,local_1c + -4,local_18 + -4,uVar14);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*(char *)pAVar36 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar31],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar31],0,local_24,local_20,
                     local_1c,local_18);
    if (pAVar36->field_0x3 == '\x01') {
      pcVar18 = &DAT_007ca250;
LAB_005d6c37:
      uVar31 = 0xffffffff;
      do {
        pcVar34 = pcVar18;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar34 = pcVar18 + 1;
        cVar29 = *pcVar18;
        pcVar18 = pcVar34;
      } while (cVar29 != '\0');
      uVar31 = ~uVar31;
      pcVar18 = pcVar34 + -uVar31;
      pcVar34 = (char *)&DAT_0080f33a;
      for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
        *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar34 = pcVar34 + 4;
      }
    }
    else {
      if (pAVar36->field_0x3 != '\x02') {
        pcVar18 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar31 = 0xffffffff;
      pcVar18 = &DAT_007ca248;
      do {
        pcVar34 = pcVar18;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar34 = pcVar18 + 1;
        cVar29 = *pcVar18;
        pcVar18 = pcVar34;
      } while (cVar29 != '\0');
      uVar31 = ~uVar31;
      pcVar18 = pcVar34 + -uVar31;
      pcVar34 = (char *)&DAT_0080f33a;
      for (uVar30 = uVar31 >> 2; uVar30 != 0; uVar30 = uVar30 - 1) {
        *(undefined4 *)pcVar34 = *(undefined4 *)pcVar18;
        pcVar18 = pcVar18 + 4;
        pcVar34 = pcVar34 + 4;
      }
    }
    pSVar13 = PTR_0081176c;
    for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
      *pcVar34 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar34 = pcVar34 + 1;
    }
    ccFntTy::WrStr(pSVar13->field_0034,&DAT_0080f33a,-1,-1,2);
    uVar31 = local_28;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar31],&local_24,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar31],0,local_24,local_20,
                     local_1c,local_18);
    uVar24 = 2;
    iVar39 = -1;
    iVar27 = -1;
    puVar38 = (uint *)&DAT_007c2310;
    iVar16 = local_1c;
    puVar22 = (uint *)thunk_FUN_005cbbe0(this_00,pAVar36);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib((MMObjTy *)this_00,(&this_00->field_20F4)[uVar31],&local_24,2,0x67,0x67);
    if (pAVar36->field_0x4 == '\x02') {
      ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar31],0,local_24,local_20,
                       local_1c,local_18);
      uVar24 = 2;
      iVar27 = -1;
      iVar16 = -1;
      puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,(uint *)&pAVar36->field_0xa,
                                   (uint *)&DAT_007c7274,local_1c);
      ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar16,iVar27,uVar24);
      break;
    }
    if (pAVar36->field_0x4 != '\x04') break;
    pDVar20 = pAVar36->field_0050;
    if ((uint)(byte)pAVar36->field_0x5 < pDVar20->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar20, (uint)(byte)pAVar36->field_0x5) (runtime stride) */
      puVar22 = (uint *)(pDVar20->elementSize * (uint)(byte)pAVar36->field_0x5 + (int)pDVar20->data)
      ;
    }
    else {
      puVar22 = (uint *)0x0;
    }
    if (puVar22 == (uint *)0x0) break;
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar31],0,local_24,local_20,
                     local_1c,local_18);
    uVar24 = 2;
    iVar39 = -1;
    iVar27 = -1;
    puVar38 = (uint *)&DAT_007c7274;
    iVar16 = local_1c;
LAB_005d6d70:
    puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar22,puVar38,iVar16);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar27,iVar39,uVar24);
    break;
  case (undefined1 *)0x5:
    if ((*(char *)pAVar36 != '\0') &&
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,(&this_00->field_20F4)[uVar31],&local_24,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar36->field_0x4 != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar28 = pAVar36->field_0x2, bVar28 != 0xff)) &&
           (DAT_0080874d != bVar28)) {
          local_28 = 0xffffffff;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar28);
          uVar30 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar30][bVar28];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar28][uVar30] == 0)) {
            uVar24 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar28][uVar30] == 0)) {
            uVar24 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar28][uVar30] == 1)) {
            uVar24 = 1;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar28][uVar30] == 1)) {
            uVar24 = 2;
          }
          else {
            uVar24 = 0;
          }
          switch(uVar24) {
          default:
            iVar16 = -1;
            break;
          case 1:
            iVar16 = 1;
            break;
          case 2:
            iVar16 = 3;
            break;
          case 0xfffffffe:
            iVar16 = 0;
            break;
          case 0xffffffff:
            iVar16 = 2;
          }
          if (-1 < iVar16 + -1) {
            pbVar26 = (byte *)FUN_0070b3a0(*(AnonShape_GLOBAL_0081175C_57F682DD **)
                                            &this_00->field_0x1f4b,iVar16 + -1);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)(&this_00->field_20F4)[uVar31],
                   (local_1c - *(int *)(pbVar26 + 4)) / 2 + local_24,
                   (local_18 - *(int *)(pbVar26 + 8)) / 2 + 1 + local_20,'\x06',pbVar26);
          }
        }
      }
      else {
        iVar16 = (byte)pAVar36->field_0x4a + 0x41;
        pcVar18 = LoadResourceString(0x1f4a,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%c",pcVar18,iVar16);
        ccFntTy::SetSurf(PTR_0081176c->field_0034,(&this_00->field_20F4)[uVar31],0,local_24,local_20
                         ,local_1c,local_18);
        ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0(DAT_008075a8,(&this_00->field_20CC)[uVar31]);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}


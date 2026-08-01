#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
FUN_00574920(AnonShape_00574920_7507981E *param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  DArrayTy *pDVar2;
  int iVar3;
  byte *puVar4;
  void *pvVar5;
  byte *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte *local_60;
  uint local_5c;
  int local_58;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  int local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079b0f8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff54;
  local_4c = (undefined4 *)0x0;
  iVar3 = (int)*(short *)&param_1->field_0002 * (int)*(short *)param_1;
  local_24 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
  local_40 = 1;
  local_2c = (int *)(&param_1[1].field_0x4 +
                    (local_24 * 5 + param_2 + (*(short *)param_1 * param_3) / 2) * 4);
  local_34 = 5;
  ExceptionList = &local_14;
  do {
    if (local_34 < 0) {
      ExceptionList = local_14;
      return;
    }
    iVar3 = *local_2c;
    if (iVar3 != 0) {
      local_20 = 0;
      local_3c = 0;
      local_28 = 0;
      local_58 = iVar3;
      if ((*(int *)(iVar3 + 0x10) != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
        param_1->field_0451->iteratorIndex = 0;
        do {
          pDVar2 = param_1->field_0451;
          uVar10 = pDVar2->iteratorIndex;
          if (uVar10 < pDVar2->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar10) (runtime stride) */
            piVar12 = (int *)(pDVar2->elementSize * uVar10 + (int)pDVar2->data);
            pDVar2->iteratorIndex = uVar10 + 1;
          }
          else {
            piVar12 = (int *)0x0;
          }
        } while ((piVar12 != (int *)0x0) &&
                ((*(int *)(iVar3 + 0x10) != *piVar12 || (*(int *)(iVar3 + 0x14) != piVar12[1]))));
        local_3c = 1;
        if (piVar12 == (int *)0x0) {
          FUN_006a5e90(*(short **)(iVar3 + 0xc));
          puVar4 = Library::DKW::LIB::MemAlloc
                             ((uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4 * 4);
          *(undefined4 **)(iVar3 + 0xc) = puVar4;
          local_28 = 1;
          local_20 = 1;
          if (*(undefined4 **)(iVar3 + 0x10) != (undefined4 *)0x0) {
            puVar6 = (byte *)(*(undefined4 **)(iVar3 + 0x10));
            for (iVar8 = (uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4; iVar8 != 0
                ; iVar8 = iVar8 + -1) {
              *puVar4 = *puVar6;
              puVar6 = (byte *)(puVar6 + 1);
              puVar4 = (byte *)(puVar4 + 1);
            }
            for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
              *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
              puVar6 = (byte *)((int)puVar6 + 1);
              puVar4 = (byte *)((int)puVar4 + 1);
            }
          }
          local_8 = 0;
          iVar8 = (uint)(byte)param_1->field_0x4 << 1;
          FUN_006b03d0(*(char **)(iVar3 + 0xc),*(char **)(iVar3 + 0x14),iVar8,iVar8,
                       *(char *)(iVar3 + 10));
          local_8 = 0xffffffff;
        }
        else {
          if (*(short **)(iVar3 + 0xc) != (short *)0x0) {
            param_1->field_0451->iteratorIndex = 0;
            do {
              pDVar2 = param_1->field_0451;
              uVar10 = pDVar2->iteratorIndex;
              if (uVar10 < pDVar2->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar10) (runtime stride) */
                piVar12 = (int *)(pDVar2->elementSize * uVar10 + (int)pDVar2->data);
                pDVar2->iteratorIndex = uVar10 + 1;
              }
              else {
                piVar12 = (int *)0x0;
              }
              if (piVar12 == (int *)0x0) goto LAB_00574b14;
            } while (*(int *)(iVar3 + 0xc) != piVar12[2]);
            if (piVar12 == (int *)0x0) {
LAB_00574b14:
              FUN_006a5e90(*(short **)(iVar3 + 0xc));
            }
          }
          *(int *)(iVar3 + 0xc) = piVar12[2];
        }
      }
      if ((local_34 == 0) || ((*(byte *)(iVar3 + 0x4f) & 0x10) != 0)) {
        if (local_40 == 0) goto LAB_00574b4a;
      }
      else {
        local_4c = *(undefined4 **)(iVar3 + 0x18);
        if (local_4c != (undefined4 *)0x0) {
LAB_00574b4a:
          if (local_40 == 0) {
            if (local_3c == 0) {
              if (*(int *)(iVar3 + 0xc) != 0) {
                param_1->field_0451->iteratorIndex = 0;
                do {
                  pDVar2 = param_1->field_0451;
                  uVar10 = pDVar2->iteratorIndex;
                  if (uVar10 < pDVar2->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar10) (runtime stride) */
                    pvVar5 = (void *)(pDVar2->elementSize * uVar10 + (int)pDVar2->data);
                    pDVar2->iteratorIndex = uVar10 + 1;
                  }
                  else {
                    pvVar5 = (void *)0x0;
                  }
                  if (pvVar5 == (void *)0x0) goto LAB_00574bcc;
                } while (*(int *)(iVar3 + 0xc) != *(int *)((int)pvVar5 + 8));
                if (pvVar5 == (void *)0x0) {
LAB_00574bcc:
                  FUN_006a5e90(*(short **)(iVar3 + 0xc));
                }
              }
              puVar6 = Library::DKW::LIB::MemAlloc
                                 ((uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4 *
                                  4);
              *(undefined4 **)(iVar3 + 0xc) = puVar6;
              puVar4 = (byte *)(*(undefined4 **)(iVar3 + 0x10));
              if ((puVar4 != (undefined4 *)0x0) ||
                 (puVar4 = *(undefined4 **)(iVar3 + 0x14), puVar4 != (undefined4 *)0x0)) {
                for (iVar8 = (uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4;
                    iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar6 = *puVar4;
                  puVar4 = (byte *)(puVar4 + 1);
                  puVar6 = (byte *)(puVar6 + 1);
                }
                for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
                  puVar4 = (byte *)((int)puVar4 + 1);
                  puVar6 = (byte *)((int)puVar6 + 1);
                }
              }
            }
            else if (local_20 == 0) {
              puVar7 = Library::DKW::LIB::MemAlloc
                                 ((uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4 *
                                  4);
              puVar4 = (byte *)(*(undefined4 **)(iVar3 + 0xc));
              puVar6 = (byte *)(puVar7);
              for (iVar8 = (uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4;
                  iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar6 = *puVar4;
                puVar4 = (byte *)(puVar4 + 1);
                puVar6 = (byte *)(puVar6 + 1);
              }
              for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
                puVar4 = (byte *)((int)puVar4 + 1);
                puVar6 = (byte *)((int)puVar6 + 1);
              }
              *(undefined4 **)(iVar3 + 0xc) = puVar7;
            }
            local_28 = 0;
            if ((local_34 == 0) || ((*(byte *)(iVar3 + 0x4f) & 0x10) != 0)) {
              for (local_50 = 0; local_50 < (int)((uint)(byte)param_1->field_0x4 * 2);
                  local_50 = local_50 + 1) {
                iVar8 = (uint)(byte)param_1->field_0x4 * local_50;
                local_48 = iVar8 / 2 + (int)param_4;
                local_60 = (byte *)(*(int *)(iVar3 + 0xc) + iVar8 * 2);
                local_30 = 0;
                while ((int)local_30 < (int)((uint)(byte)param_1->field_0x4 * 2)) {
                  uVar10 = local_30 & 0x80000003;
                  if ((int)uVar10 < 0) {
                    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                  }
                  local_5c = (uint)(*(byte *)(((int)(local_30 + ((int)local_30 >> 0x1f & 3U)) >> 2)
                                             + local_48) & (&DAT_007ca6a4)[uVar10]);
                  if (local_5c == 0) {
LAB_00574e10:
                    local_30 = local_30 + 1;
                    local_60 = local_60 + 1;
                  }
                  else {
                    if (local_5c != (byte)(&DAT_007ca6a4)[uVar10]) {
                      *local_60 = *(byte *)((uint)*local_60 + DAT_008073c8);
                      goto LAB_00574e10;
                    }
                    *local_60 = *(byte *)((uint)*local_60 + DAT_00807560);
                    local_30 = local_30 + 1;
                    local_60 = local_60 + 1;
                  }
                }
              }
            }
            else {
              for (local_50 = 0; local_50 < (int)((uint)(byte)param_1->field_0x4 * 2);
                  local_50 = local_50 + 1) {
                iVar11 = (uint)(byte)param_1->field_0x4 * local_50;
                iVar8 = iVar11 / 2;
                local_48 = iVar8 + (int)param_4;
                local_44 = (undefined1 *)(iVar8 + (int)local_4c);
                local_60 = (byte *)(*(int *)(iVar3 + 0xc) + iVar11 * 2);
                for (local_30 = 0; (int)local_30 < (int)((uint)(byte)param_1->field_0x4 * 2);
                    local_30 = local_30 + 1) {
                  iVar3 = (int)(local_30 + ((int)local_30 >> 0x1f & 3U)) >> 2;
                  uVar10 = local_30 & 0x80000003;
                  if ((int)uVar10 < 0) {
                    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                  }
                  bVar1 = (&DAT_007ca6a4)[uVar10];
                  if ((bVar1 & local_44[iVar3]) == bVar1) {
                    local_5c = (uint)(*(byte *)(iVar3 + local_48) & bVar1);
                    if (local_5c != 0) {
                      if (local_5c == bVar1) {
                        *local_60 = *(byte *)((uint)*local_60 + DAT_00807560);
                      }
                      else {
                        *local_60 = *(byte *)((uint)*local_60 + DAT_008073c8);
                      }
                    }
                  }
                  *(byte *)(iVar3 + local_48) =
                       *(byte *)(iVar3 + local_48) | (&DAT_007ca6a4)[uVar10] & local_44[iVar3];
                  local_60 = local_60 + 1;
                  iVar3 = local_58;
                }
              }
            }
            local_8 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(byte)param_1->field_0x4 * (uint)(byte)param_1->field_0x4;
            puVar4 = (byte *)(local_4c);
            puVar6 = (byte *)(param_4);
            memmove(puVar6, puVar4, uVar9); /* compiler REP MOVS byte copy */
            local_40 = 0;
          }
        }
      }
      if (local_28 != 0) {
        local_6c = *(undefined4 *)(iVar3 + 0x10);
        local_68 = *(undefined4 *)(iVar3 + 0x14);
        local_64 = *(undefined4 *)(iVar3 + 0xc);
        Library::DKW::TBL::DArrayAppend(param_1->field_0451,&local_6c);
      }
    }
    local_34 = local_34 + -1;
    local_2c = local_2c + -local_24;
  } while( true );
}


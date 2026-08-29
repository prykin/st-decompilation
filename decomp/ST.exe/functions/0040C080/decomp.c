#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 563 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0040C080 -> 006ACC70 @ 0040C16C */

undefined4 * __thiscall FUN_0040c080(void *this,uint param_1,DArrayTy *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  STFishC *this_00;
  uint *puVar4;
  STGameObjC *pSVar5;
  int iVar6;
  int iVar8;
  int iVar7;
  dword dVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  uint index;
  void *pvVar12;
  uint *puVar13;
  Global_sub_006C8EC0_param_3Enum aGStackY_f8 [9];
  uint uStackY_d4;
  int local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_9c;
  int local_94;
  STFishC *local_90;
  int local_8c;
  int local_88;
  int local_84;
  dword local_80;
  int local_7c;
  short local_78 [2];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  void *local_54;
  int local_50;
  short local_4c [6];
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  short local_24 [2];
  int local_20;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790020;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff34;
  dVar8 = param_2->count;
  local_80 = dVar8;
  if (dVar8 == 0) {
    uStackY_d4 = 0x40c0c5;
    ExceptionList = &local_14;
    local_1c = &stack0xffffff34;
    /* ST_CALLSITE[0040C0C0]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
    puVar4 = Library::DKW::LIB::MemAlloc(4);
    *puVar4 = 0xfffffffc;
  }
  else {
    uStackY_d4 = 0x40c0dd;
    ExceptionList = &local_14;

    puVar4 = Library::DKW::LIB::MemAlloc(dVar8 * 4);
    if (puVar4 != nullptr) {
      uStackY_d4 = 0x40c0f8;
      /* ST_CALLSITE[0040C0F3]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
      pSVar5 = STGroupBoatC::sub_00423E70(this,(ushort)param_1);
      if (pSVar5 == nullptr) {
        puVar13 = puVar4;
        if (0 < (int)dVar8) {
          for (; dVar8 != 0; dVar8 = dVar8 - 1) {
            *puVar13 = 0xfffffffc;
            puVar13 = puVar13 + 1;
          }
        }
      }
      else {
        iVar3 = dVar8 * -0xc;
        local_1c = &stack0xffffff34 + iVar3;
        local_8 = 0xffffffff;
        iVar11 = (int)pSVar5->field_0047;
        local_74 = iVar11;
        local_a8 = (int)pSVar5->field_0049;
        iVar9 = (int)pSVar5->field_004B;
        local_30 = iVar9;
        index = 0;
        local_9c = local_a8;
        if (0 < (int)local_80) {
          do {
            *(STFishC ***)(&stack0xffffff30 + iVar3) = &local_90;
            aGStackY_f8[dVar8 * -3 + 9] = 0x40c171;

            DArrayGetElement(param_2,index,*(void **)(&stack0xffffff30 + iVar3));
            *(short **)(&stack0xffffff30 + iVar3) = local_78;
            aGStackY_f8[dVar8 * -3 + 9] = (Global_sub_006C8EC0_param_3Enum)local_4c;
            aGStackY_f8[dVar8 * -3 + 8] = (Global_sub_006C8EC0_param_3Enum)local_24;
            this_00 = local_90;
            aGStackY_f8[dVar8 * -3 + 7] = 0x40c188;
            /* ST_CALLSITE[0040C183]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
            STFishC::sub_004162F0
                      (this_00,(short *)aGStackY_f8[dVar8 * -3 + 8],
                       (short *)aGStackY_f8[dVar8 * -3 + 9],*(short **)(&stack0xffffff30 + iVar3));
            iVar7 = (int)local_24[0];
            if (iVar7 < local_74) {
              local_74 = iVar7;
            }
            if (iVar11 < iVar7) {
              iVar11 = iVar7;
            }
            iVar6 = (int)local_4c[0];
            if (iVar6 < local_9c) {
              local_9c = iVar6;
            }
            if (local_a8 < iVar6) {
              local_a8 = iVar6;
            }
            iVar6 = (int)local_78[0];
            if (iVar6 < iVar9) {
              iVar9 = iVar6;
            }
            if (local_30 < iVar6) {
              local_30 = iVar6;
            }
            piVar1 = (int *)(&stack0xffffff34 + index * 0xc + iVar3);
            *piVar1 = iVar7;
            piVar1[1] = (int)local_4c[0];
            piVar1[2] = (int)local_78[0];
            index = index + 1;
          } while ((int)index < (int)local_80);
        }
        local_74 = local_74 + -2;
        if (local_74 < 0) {
          local_74 = 0;
        }
        local_9c = local_9c + -2;
        if (local_9c < 0) {
          local_9c = 0;
        }
        local_20 = iVar9 + -2;
        if (iVar9 + -2 < 0) {
          local_20 = 0;
        }
        iVar9 = local_20;
        iVar11 = iVar11 + 2;
        local_84 = iVar11;
        if (g_pathingGrid.sizeX <= iVar11) {
          iVar11 = g_pathingGrid.sizeX + -1;
          local_84 = iVar11;
        }
        local_a8 = local_a8 + 2;
        if (g_pathingGrid.sizeY <= local_a8) {
          local_a8 = g_pathingGrid.sizeY + -1;
        }
        local_30 = local_30 + 2;
        if (g_pathingGrid.sizeZ <= local_30) {
          local_30 = g_pathingGrid.sizeZ + -1;
        }
        local_ac = pSVar5->field_0047 + -2;
        if (local_ac < 0) {
          local_ac = 0;
        }
        local_38 = pSVar5->field_0049 + -2;
        if (local_38 < 0) {
          local_38 = 0;
        }
        local_5c = pSVar5->field_004B + -2;
        if (local_5c < 0) {
          local_5c = 0;
        }
        local_b8 = pSVar5->field_0047 + 2;
        if (g_pathingGrid.sizeX <= local_b8) {
          local_b8 = g_pathingGrid.sizeX + -1;
        }
        local_40 = pSVar5->field_0049 + 2;
        if (g_pathingGrid.sizeY <= local_40) {
          local_40 = g_pathingGrid.sizeY + -1;
        }
        local_6c = pSVar5->field_004B + 2;
        if (g_pathingGrid.sizeZ <= local_6c) {
          local_6c = g_pathingGrid.sizeZ + -1;
        }
        local_2c = (iVar11 - local_74) + 1;
        local_70 = (local_a8 - local_9c) + 1;
        local_68 = (local_30 - local_20) + 1;
        local_64 = local_70 * local_2c;
        local_84 = iVar11;
        *(int *)(&stack0xffffff30 + iVar3) = local_64 * local_68 * 2;
        aGStackY_f8[dVar8 * -3 + 9] = 0x40c329;

        local_54 = Library::DKW::LIB::MemAlloc(*(uint *)(&stack0xffffff30 + iVar3));
        local_8c = iVar9;
        while (local_8c < local_5c) {
          psVar10 = g_pathingGrid.cells +
                    g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
          pvVar12 = (void *)((int)local_54 + (local_8c - local_20) * local_64 * 2);
          local_88 = local_9c;
          while (iVar9 = local_74, local_88 <= local_a8) {
            for (; iVar9 <= iVar11; iVar9 = iVar9 + 1) {
              *(short *)((int)pvVar12 + (iVar9 - local_74) * 2) = psVar10[iVar9];
            }
            psVar10 = psVar10 + g_pathingGrid.sizeX;
            pvVar12 = (void *)((int)pvVar12 + local_2c * 2);
            local_88 = local_88 + 1;
          }
          local_8c = local_8c + 1;
        }
        if (local_8c <= local_6c) {
          do {
            psVar10 = g_pathingGrid.cells +
                      g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
            pvVar12 = (void *)((int)local_54 + (local_8c - local_20) * local_64 * 2);
            local_88 = local_9c;
            while (iVar9 = local_74, local_88 < local_38) {
              for (; iVar9 <= iVar11; iVar9 = iVar9 + 1) {
                *(short *)((int)pvVar12 + (iVar9 - local_74) * 2) = psVar10[iVar9];
              }
              psVar10 = psVar10 + g_pathingGrid.sizeX;
              pvVar12 = (void *)((int)pvVar12 + local_2c * 2);
              local_88 = local_88 + 1;
            }
            if (local_88 <= local_40) {
              do {
                for (; iVar9 < local_ac; iVar9 = iVar9 + 1) {
                  *(short *)((int)pvVar12 + (iVar9 - local_74) * 2) = psVar10[iVar9];
                }
                for (; iVar9 <= local_b8; iVar9 = iVar9 + 1) {
                  if (psVar10[iVar9] == 0) {
                    *(int *)(&stack0xffffff30 + iVar3) = local_8c;
                    aGStackY_f8[dVar8 * -3 + 9] = local_88;
                    aGStackY_f8[dVar8 * -3 + 8] = iVar9;
                    aGStackY_f8[dVar8 * -3 + 7] = (Global_sub_006C8EC0_param_3Enum)pSVar5;
                    aGStackY_f8[dVar8 * -3 + 6] = 0x40c4bf;

                    iVar8 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)
                                               aGStackY_f8[dVar8 * -3 + 7],
                                               aGStackY_f8[dVar8 * -3 + 8],
                                               aGStackY_f8[dVar8 * -3 + 9],
                                               *(int *)(&stack0xffffff30 + iVar3));
                    if (iVar8 != 0) goto LAB_0040c4d0;
                    *(undefined2 *)((int)pvVar12 + (iVar9 - local_74) * 2) = 0xfffd;
                  }
                  else {
LAB_0040c4d0:
                    *(short *)((int)pvVar12 + (iVar9 - local_74) * 2) = psVar10[iVar9];
                  }
                }
                for (; iVar9 <= local_84; iVar9 = iVar9 + 1) {
                  *(short *)((int)pvVar12 + (iVar9 - local_74) * 2) = psVar10[iVar9];
                }
                psVar10 = psVar10 + g_pathingGrid.sizeX;
                pvVar12 = (void *)((int)pvVar12 + local_2c * 2);
                local_88 = local_88 + 1;
                iVar9 = local_74;
                iVar11 = local_84;
              } while (local_88 <= local_40);
            }
            while (iVar9 = local_74, local_88 <= local_a8) {
              for (; iVar9 <= iVar11; iVar9 = iVar9 + 1) {
                *(short *)((int)pvVar12 + (iVar9 - local_74) * 2) = psVar10[iVar9];
              }
              psVar10 = psVar10 + g_pathingGrid.sizeX;
              pvVar12 = (void *)((int)pvVar12 + local_2c * 2);
              local_88 = local_88 + 1;
            }
            local_8c = local_8c + 1;
          } while (local_8c <= local_6c);
        }
        while (local_8c <= local_30) {
          psVar10 = g_pathingGrid.cells +
                    g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
          pvVar12 = (void *)((int)local_54 + (local_8c - local_20) * local_64 * 2);
          local_88 = local_9c;
          while (iVar9 = local_74, local_88 <= local_a8) {
            for (; iVar9 <= iVar11; iVar9 = iVar9 + 1) {
              *(short *)((int)pvVar12 + (iVar9 - local_74) * 2) = psVar10[iVar9];
            }
            psVar10 = psVar10 + g_pathingGrid.sizeX;
            pvVar12 = (void *)((int)pvVar12 + local_2c * 2);
            local_88 = local_88 + 1;
          }
          local_8c = local_8c + 1;
        }
        *(undefined4 *)(&stack0xffffff30 + iVar3) = 0xffffffff;
        aGStackY_f8[dVar8 * -3 + 9] = 0xffffffff;
        aGStackY_f8[dVar8 * -3 + 8] = 0xffffffff;
        aGStackY_f8[dVar8 * -3 + 7] = pSVar5->field_004B - local_20;
        aGStackY_f8[dVar8 * -3 + 6] = pSVar5->field_0049 - local_9c;
        aGStackY_f8[dVar8 * -3 + 5] = pSVar5->field_0047 - local_74;
        aGStackY_f8[dVar8 * -3 + 4] = local_68;
        aGStackY_f8[dVar8 * -3 + 3] = local_70;
        aGStackY_f8[dVar8 * -3 + 2] = local_2c;
        pvVar12 = local_54;
        aGStackY_f8[dVar8 * -3 + 1] = (Global_sub_006C8EC0_param_3Enum)local_54;
        aGStackY_f8[dVar8 * -3] = 0x40c669;

        iVar11 = FUN_006ab090(aGStackY_f8[dVar8 * -3 + 1],aGStackY_f8[dVar8 * -3 + 2],
                              aGStackY_f8[dVar8 * -3 + 3],aGStackY_f8[dVar8 * -3 + 4],
                              aGStackY_f8[dVar8 * -3 + 5],aGStackY_f8[dVar8 * -3 + 6],
                              aGStackY_f8[dVar8 * -3 + 7],aGStackY_f8[dVar8 * -3 + 8],
                              aGStackY_f8[dVar8 * -3 + 9],*(int *)(&stack0xffffff30 + iVar3));
        if (iVar11 == 0) {
          local_34 = 0;
          if (0 < (int)local_80) {
            do {
              piVar1 = (int *)(&stack0xffffff34 + local_34 * 0xc + iVar3);
              local_8c = piVar1[2] - local_20;
              local_88 = piVar1[1] - local_9c;
              local_7c = *piVar1 - local_74;
              psVar10 = (short *)((int)local_54 +
                                 (local_8c * local_64 + local_7c + local_88 * local_2c) * 2);
              local_94 = (int)*psVar10;
              if (local_94 < 0) {
                local_94 = 30000;
                local_a4 = 0;
                do {
                  local_50 = (&SHORT_007ed570)[local_a4 * 4] + local_7c;
                  if ((-1 < local_50) && (local_50 < local_2c)) {
                    iVar9 = (int)(&SHORT_007ed572)[local_a4 * 4];
                    iVar11 = iVar9 + local_88;
                    if ((-1 < iVar11) && (iVar11 < local_70)) {
                      local_60 = (&SHORT_007ed574)[local_a4 * 4] + local_8c;
                      if ((-1 < local_60) && (local_60 < local_68)) {
                        uVar2 = (&SHORT_007ed576)[local_a4 * 4];
                        if ((uVar2 & 1) == 0) {
                          if (((uVar2 & 0x6000) == 0) || ((uVar2 & 0x9fff) == 0xffe)) {
LAB_0040c90d:
                            iVar11 = (int)*(short *)((int)local_54 +
                                                    (iVar11 * local_2c +
                                                    local_50 + local_60 * local_64) * 2);
                            if ((0 < iVar11) &&
                               (iVar11 = iVar11 + (&DAT_007ed640)[local_a4], iVar11 < local_94)) {
                              local_94 = iVar11;
                            }
                          }
                          else if ((psVar10[(&SHORT_007ed574)[local_a4 * 4] * local_64] & 0xc000U)
                                   != 0xc000) {
                            if (iVar9 == 0) {
                              uVar2 = psVar10[(&SHORT_007ed570)[local_a4 * 4]];
                            }
                            else {
                              uVar2 = psVar10[iVar9 * local_2c];
                            }
joined_r0x0040c8f3:
                            if ((uVar2 & 0xc000) != 0xc000) goto LAB_0040c90d;
                          }
                        }
                        else {
                          iVar7 = (int)(&SHORT_007ed570)[local_a4 * 4];
                          if (((psVar10[iVar7] & 0xc000U) != 0xc000) &&
                             (iVar9 = iVar9 * local_2c, (psVar10[iVar9] & 0xc000U) != 0xc000)) {
                            if ((uVar2 & 0x4000) == 0) {
                              if ((uVar2 & 0x2000) == 0) goto LAB_0040c90d;
                              if (((psVar10[local_64] & 0xc000U) != 0xc000) &&
                                 (iVar6 = local_64, (psVar10[local_64 + iVar7] & 0xc000U) != 0xc000)
                                 ) goto LAB_0040c875;
                            }
                            else if (((psVar10[-local_64] & 0xc000U) != 0xc000) &&
                                    ((psVar10[iVar7 - local_64] & 0xc000U) != 0xc000)) {
                              iVar6 = -local_64;
LAB_0040c875:
                              if ((psVar10[iVar9 + iVar6] & 0xc000U) != 0xc000) {
                                uVar2 = psVar10[iVar7 + iVar9];
                                goto joined_r0x0040c8f3;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  local_a4 = local_a4 + 1;
                } while (local_a4 < 0x1a);
              }
              if ((local_94 < 1) || (29999 < local_94)) {
                iVar11 = -4;
              }
              else {
                iVar11 = (local_94 + -1) / 3;
              }
              puVar4[local_34] = iVar11;
              local_34 = local_34 + 1;
              pvVar12 = local_54;
            } while (local_34 < (int)local_80);
          }
          *(void **)(&stack0xffffff30 + iVar3) = pvVar12;
          aGStackY_f8[dVar8 * -3 + 9] = 0x40c9a5;
          FUN_006a5e90(*(short **)(&stack0xffffff30 + iVar3));
        }
        else {
          *(void **)(&stack0xffffff30 + iVar3) = pvVar12;
          aGStackY_f8[dVar8 * -3 + 9] = 0x40c673;
          FUN_006a5e90(*(short **)(&stack0xffffff30 + iVar3));
          *(undefined4 **)(&stack0xffffff30 + iVar3) = puVar4;
          aGStackY_f8[dVar8 * -3 + 9] = 0x40c67f;
          FUN_006a5e90(*(short **)(&stack0xffffff30 + iVar3));
          *(undefined4 *)(&stack0xffffff30 + iVar3) = 0x233;
          aGStackY_f8[dVar8 * -3 + 9] =
               (Global_sub_006C8EC0_param_3Enum)"E:\\__titans\\wlad\\Grpway3d.cpp";
          aGStackY_f8[dVar8 * -3 + 8] = g_overwriteContext_007ED77C;
          aGStackY_f8[dVar8 * -3 + 7] = 0xfffffffe;
          aGStackY_f8[dVar8 * -3 + 6] = 0x40c697;
          RaiseInternalException
                    (aGStackY_f8[dVar8 * -3 + 7],aGStackY_f8[dVar8 * -3 + 8],
                     (char *)aGStackY_f8[dVar8 * -3 + 9],*(int *)(&stack0xffffff30 + iVar3));
          puVar4 = nullptr;
        }
      }
    }
  }
  ExceptionList = local_14;
  return puVar4;
}


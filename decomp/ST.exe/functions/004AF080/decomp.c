#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:8: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=4,
   pointer_dereferences=3, scalar_uses=0; sites=004AFA16 dereference: CMP EAX,dword ptr [EDX + 0x18]
   | 004AFA3E dereference: CMP EAX,dword ptr [EDX + 0x18] | 004AFA84 dereference: MOV EAX,dword ptr
   [EDX + 0x18] */

undefined4 __cdecl
FUN_004af080(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            ,undefined4 param_8,RecoveredRecord_004AF080_5D31BF96 *param_9)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  int iVar10;
  int iVar11;
  int iVar9;
  int iVar12;
  dword dVar13;
  int local_EAX_2874;
  char *pcVar14;
  DArrayTy *pDVar15;
  int iVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  short sVar22;
  int iVar23;
  bool bVar24;
  uint local_50;
  int local_40;
  char *local_3c;
  char *local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  local_50 = 0;
  bVar4 = false;
  bVar5 = false;
  local_40 = -1;
  sVar6 = g_worldGrid.sizeY;
  if (g_worldGrid.sizeY <= g_worldGrid.sizeX) {
    sVar6 = g_worldGrid.sizeX;
  }
  local_28 = 1;
  local_2c = 1;
  if (*(int *)(&DAT_00791d68 + param_2 * 4) == 1) {
    local_28 = 2;
    local_2c = 2;
  }

  psVar8 = Library::DKW::LIB::MemAlloc(g_worldGrid.planeStride * 5);
  local_14 = 0;
  do {
    iVar10 = g_worldGrid.planeStride * local_14;
    local_1c = 0;
    if (0 < g_worldGrid.sizeY) {
      do {
        iVar11 = (int)g_worldGrid.sizeX;
        iVar23 = 0;
        iVar20 = iVar11 * local_1c;
        if (0 < iVar11) {
          do {
            local_10 = (STFishC *)
                       g_worldGrid.cells
                       [iVar11 * local_1c + iVar23 + g_worldGrid.planeStride * local_14].objects[0];
            if (local_10 == nullptr) {
              sVar22 = (short)iVar23;
              if ((((sVar22 < 0) || (g_worldGrid.sizeX <= sVar22)) ||
                  (sVar7 = (short)local_1c, sVar7 < 0)) ||
                 (((g_worldGrid.sizeY <= sVar7 || (sVar17 = (short)local_14, sVar17 < 0)) ||
                  (g_worldGrid.sizeZ <= sVar17)))) {
LAB_004af1d5:
                *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 3;
              }
              else if (STGridAt3D(g_pathingGrid, sVar22, sVar7, sVar17) == 0) {
                *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 0;
              }
              else {
                if (STGridAt3D(g_pathingGrid, sVar22, sVar7, sVar17) == -1) goto LAB_004af1d5;
                *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 1;
              }
            }
            else {
              if (((uint)local_10->field_0024 < 8) &&
                 ((g_playSystem_00802A38 == nullptr ||
                  (g_bulkInitializedRecords_008087C7[local_10->field_0024].field_0022 < 8)))) {
                bVar2 = (byte)local_10->field_0024;
                if (g_app_00806728->field_146F == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_004af2f0:
                    iVar11 = 0;
                  }
                  else {
                    uVar21 = (uint)bVar2;
                    uVar18 = param_1 & 0xff;
                    cVar3 = (&g_app_00806728->field_0x142f)[uVar18 + uVar21 * 8];
                    if ((cVar3 == '\0') &&
                       ((&g_app_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\0')) {
                      iVar11 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            ((&g_app_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\0')) {
                      iVar11 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            ((&g_app_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\x01')) {
                      iVar11 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         ((&g_app_00806728->field_0x142f)[uVar21 + uVar18 * 8] != '\x01'))
                      goto LAB_004af2f0;
                      iVar11 = 2;
                    }
                  }
                  bVar24 = iVar11 < 0;
                }
                else {
                  bVar24 = (&g_app_00806728->field_0x11ca)[(param_1 & 0xff) * 0x51] !=
                           (&g_app_00806728->field_0x11ca)[(uint)bVar2 * 0x51];
                }
                if (bVar24) {
                  *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 4;
                  goto LAB_004af325;
                }
              }
              *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 5;
            }
LAB_004af325:
            iVar23 = iVar23 + 1;
            iVar11 = (int)g_worldGrid.sizeX;
          } while (iVar23 < iVar11);
        }
        local_1c = local_1c + 1;
      } while (local_1c < g_worldGrid.sizeY);
    }
    local_14 = local_14 + 1;
  } while (local_14 < 4);
  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;

    iVar9 = DArrayGetNext(g_array_007FA150,(byte *)&local_10);
    while (-1 < iVar9) {
      if (local_10 != nullptr) {
        /* ST_CALLSITE[004AF38D]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
        *(undefined1 *)
         ((int)psVar8 +
         (int)local_6 +
         (int)local_a * (int)g_worldGrid.planeStride + (int)local_8 * (int)g_worldGrid.sizeX) = 2;
      }

      iVar9 = DArrayGetNext(g_array_007FA150,(byte *)&local_10);
    }
  }
  local_14 = 0;
  do {
    local_1c = 0;
    if (0 < g_worldGrid.sizeY) {
      do {
        local_18 = 0;
        if (0 < g_worldGrid.sizeX) {
          do {
            iVar10 = local_14;
            if (local_14 < local_14 + 1) {
              do {
                if (g_worldGrid.sizeZ <= iVar10) goto cf_common_join_004AFC34;
                if (local_1c < local_28 + local_1c) {
                  iVar20 = g_worldGrid.sizeX * local_1c;
                  iVar11 = local_1c;
                  do {
                    if (g_worldGrid.sizeY <= iVar11) goto cf_common_join_004AFC34;
                    for (iVar23 = local_18; iVar23 < local_2c + local_18; iVar23 = iVar23 + 1) {
                      if ((g_worldGrid.sizeX <= iVar23) ||
                         (*(char *)(iVar20 + iVar23 + g_worldGrid.planeStride * iVar10 + (int)psVar8
                                   ) != '\0')) goto cf_common_join_004AFC34;
                    }
                    iVar20 = iVar20 + g_worldGrid.sizeX;
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < local_28 + local_1c);
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < local_14 + 1);
            }
            if (0 < local_14) {
              if (local_1c < local_1c + local_28) {
                iVar11 = (int)g_worldGrid.sizeX;
                local_30 = (char *)(local_18 +
                                    iVar11 * local_1c +
                                    (local_14 + -1) * (int)g_worldGrid.planeStride + (int)psVar8);
                iVar10 = local_1c;
                do {
                  if (iVar10 < g_worldGrid.sizeY) {
                    pcVar14 = local_30;
                    for (iVar20 = local_18; iVar20 < local_2c + local_18; iVar20 = iVar20 + 1) {
                      if ((iVar20 < iVar11) && (*pcVar14 != '\x03')) goto cf_common_join_004AFC34;
                      pcVar14 = pcVar14 + 1;
                    }
                  }
                  iVar10 = iVar10 + 1;
                  local_30 = local_30 + iVar11;
                } while (iVar10 < local_1c + local_28);
              }
            }
            if (local_14 < 4) {
              if (local_1c < local_28 + local_1c) {
                iVar11 = (int)g_worldGrid.sizeX;
                local_3c = (char *)(iVar11 * local_1c +
                                    (int)g_worldGrid.planeStride * (local_14 + 1) + local_18 +
                                   (int)psVar8);
                iVar10 = local_1c;
                do {
                  if (iVar10 < g_worldGrid.sizeY) {
                    pcVar14 = local_3c;
                    for (iVar20 = local_18; iVar20 < local_18 + local_2c; iVar20 = iVar20 + 1) {
                      if ((iVar20 < iVar11) &&
                         (((cVar3 = *pcVar14, cVar3 == '\x01' || (cVar3 == '\x03')) ||
                          (cVar3 == '\x02')))) goto cf_common_join_004AFC34;
                      pcVar14 = pcVar14 + 1;
                    }
                  }
                  iVar10 = iVar10 + 1;
                  local_3c = local_3c + iVar11;
                } while (iVar10 < local_28 + local_1c);
              }
            }
            if (param_2 != 100) {
              if (param_2 == 0x4d) {
                pDVar15 = g_packedRecords_A62x8[param_1].field1971_0x9e2;
                if (pDVar15 != nullptr) {
                  iVar10 = DAT_00795118 / 0xc9;
                  uVar21 = 0;
                  if (0 < (int)pDVar15->count) {
                    do {

                      DArrayGetElement(pDVar15,uVar21,&local_10);
                      /* ST_CALLSITE[004AF6E9]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                      STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                      uVar18 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar18) - uVar18) <= iVar10) &&
                         (uVar18 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar18) - uVar18) <= iVar10))
                      goto cf_common_join_004AFC34;
                      uVar21 = uVar21 + 1;
                      pDVar15 = g_packedRecords_A62x8[param_1].field1971_0x9e2;
                    } while ((int)uVar21 < (int)pDVar15->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x43) {
                pDVar15 = g_packedRecords_A62x8[param_1].field1974_0x9ee;
                if (pDVar15 != nullptr) {
                  iVar10 = DAT_007950f0 / 0xc9;
                  uVar21 = 0;
                  if (0 < (int)pDVar15->count) {
                    do {

                      DArrayGetElement(pDVar15,uVar21,&local_10);
                      /* ST_CALLSITE[004AF78E]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                      STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                      uVar18 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar18) - uVar18) <= iVar10) &&
                         (uVar18 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar18) - uVar18) <= iVar10))
                      goto cf_common_join_004AFC34;
                      uVar21 = uVar21 + 1;
                      pDVar15 = g_packedRecords_A62x8[param_1].field1974_0x9ee;
                    } while ((int)uVar21 < (int)pDVar15->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x73) {
                pDVar15 = g_packedRecords_A62x8[param_1].field1975_0x9f2;
                if (pDVar15 != nullptr) {
                  iVar10 = DAT_007951b0 / 0xc9;
                  uVar21 = 0;
                  if (0 < (int)pDVar15->count) {
                    do {

                      DArrayGetElement(pDVar15,uVar21,&local_10);
                      /* ST_CALLSITE[004AF833]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                      STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                      uVar18 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar18) - uVar18) <= iVar10) &&
                         (uVar18 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar18) - uVar18) <= iVar10))
                      goto cf_common_join_004AFC34;
                      uVar21 = uVar21 + 1;
                      pDVar15 = g_packedRecords_A62x8[param_1].field1975_0x9f2;
                    } while ((int)uVar21 < (int)pDVar15->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x65) {
                pDVar15 = g_packedRecords_A62x8[param_1].field1972_0x9e6;
                if (pDVar15 != nullptr) {
                  iVar10 = DAT_00795178 / 0xc9;
                  uVar21 = 0;
                  if (0 < (int)pDVar15->count) {
                    do {

                      DArrayGetElement(pDVar15,uVar21,&local_10);
                      /* ST_CALLSITE[004AF8D8]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                      STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                      uVar18 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar18) - uVar18) <= iVar10) &&
                         (uVar18 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar18) - uVar18) <= iVar10))
                      goto cf_common_join_004AFC34;
                      uVar21 = uVar21 + 1;
                      pDVar15 = g_packedRecords_A62x8[param_1].field1972_0x9e6;
                    } while ((int)uVar21 < (int)pDVar15->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (((param_2 < 0x54) || (0x5a < param_2)) ||
                 (param_9 == nullptr)) {
                if (((param_2 == 0x3a) && (g_array_007FA16C != nullptr)) &&
                   (uVar21 = 0, 0 < (int)g_array_007FA16C->count)) {
                  do {

                    DArrayGetElement((DArrayTy *)g_array_007FA16C,uVar21,&local_10);
                    /* ST_CALLSITE[004AFB68]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                    STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                    uVar18 = local_6 - local_18 >> 0x1f;
                    if (((int)((local_6 - local_18 ^ uVar18) - uVar18) < 0xe) &&
                       (uVar18 = local_8 - local_1c >> 0x1f,
                       (int)((local_8 - local_1c ^ uVar18) - uVar18) < 0xe))
                    goto cf_common_join_004AFC34;
                    uVar21 = uVar21 + 1;
                  } while ((int)uVar21 < (int)g_array_007FA16C->count);
                }
                goto cf_common_join_004AFA95;
              }
              iVar20 = (int)g_worldGrid.planeStride;
              iVar10 = local_1c + -1;
              iVar23 = local_1c + local_28;
              bVar4 = false;
              iVar11 = iVar10;
              if (iVar10 < iVar23 + 1) {
                do {
                  if ((-1 < iVar11) && (iVar11 < g_worldGrid.sizeY)) {
                    iVar1 = local_18 + -1;
                    iVar16 = local_18 + local_2c;
                    if (iVar1 < iVar16 + 1) {
                      iVar12 = iVar20 * local_14 + iVar1 + g_worldGrid.sizeX * iVar11;
                      iVar19 = iVar12 * 8;
                      local_3c = (char *)(iVar12 + (int)psVar8);
                      iVar12 = iVar1;
                      do {
                        if (((((-1 < iVar12) && (iVar12 < g_worldGrid.sizeX)) &&
                             ((iVar11 != iVar10 ||
                              ((iVar12 != iVar1 && ((iVar11 != iVar10 || (iVar12 != iVar16))))))))
                            && ((iVar11 != iVar23 ||
                                ((iVar12 != iVar16 && ((iVar11 != iVar23 || (iVar12 != iVar1))))))))
                           && (((*local_3c == '\x05' &&
                                (local_10 = *(STFishC **)
                                             ((int)(g_worldGrid.cells)->objects + iVar19),
                                local_10 != nullptr)) &&
                               /* ST_CALLSITE[004AFA05]: CALL dword ptr [EDX + 0x2c] */
                               (((dVar13 = local_10->vfunc_2C(), dVar13 == 0x53
                                 && (local_10->field_0018 == param_9->field_0018)) ||
                                /* ST_CALLSITE[004AFA1D]: CALL dword ptr [EAX + 0x2c] */
                                ((dVar13 = local_10->vfunc_2C(),
                                 0x53 < (int)dVar13 &&
                                 /* ST_CALLSITE[004AFA2A]: CALL dword ptr [EDX + 0x2c] */
                                 ((dVar13 = local_10->vfunc_2C(),
                                  (int)dVar13 < 0x5b &&
                                  (*(int *)&local_10[2].field_0xfd == param_9->field_0018))))))))))
                        {
                          /* ST_CALLSITE[004AFA73]: CALL dword ptr [EDX + 0x2c] */
                          dVar13 = local_10->vfunc_2C();
                          if ((dVar13 == 0x53) && (local_10->field_0018 == param_9->field_0018)) {
                            bVar4 = true;
                          }
                          goto cf_common_join_004AFA95;
                        }
                        iVar12 = iVar12 + 1;
                        iVar19 = iVar19 + 8;
                        local_3c = local_3c + 1;
                      } while (iVar12 < iVar16 + 1);
                    }
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar23 + 1);
              }
              goto cf_common_join_004AFC34;
            }
            pDVar15 = g_packedRecords_A62x8[param_1].field1968_0x9d6;
            if ((pDVar15 != nullptr) && (uVar21 = 0, 0 < (int)pDVar15->count)) {
              do {

                DArrayGetElement(pDVar15,uVar21,&local_10);
                /* ST_CALLSITE[004AF645]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                uVar18 = local_6 - local_18 >> 0x1f;
                if (((int)((local_6 - local_18 ^ uVar18) - uVar18) < 0x10) &&
                   (uVar18 = local_8 - local_1c >> 0x1f,
                   (int)((local_8 - local_1c ^ uVar18) - uVar18) < 0x10))
                goto cf_common_join_004AFC34;
                pDVar15 = g_packedRecords_A62x8[param_1].field1968_0x9d6;
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < (int)pDVar15->count);
            }
cf_common_join_004AFA95:
            iVar10 = local_1c + -1;
            bVar24 = true;
            if (iVar10 < local_1c + 1 + local_28) {
              do {
                if ((-1 < iVar10) && (iVar10 < g_worldGrid.sizeY)) {
                  iVar11 = local_18 + -1;
                  iVar20 = local_18 + 1 + local_2c;
                  if (iVar11 < iVar20) {
                    pcVar14 = (char *)(iVar10 * g_worldGrid.sizeX + iVar11 +
                                       g_worldGrid.planeStride * local_14 + (int)psVar8);
                    do {
                      if (((-1 < iVar11) && (iVar11 < g_worldGrid.sizeX)) &&
                         ((*pcVar14 == '\x05' || (*pcVar14 == '\x02')))) {
                        bVar24 = false;
                        goto LAB_004afbad;
                      }
                      iVar11 = iVar11 + 1;
                      pcVar14 = pcVar14 + 1;
                    } while (iVar11 < iVar20);
                  }
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < local_1c + 1 + local_28);
            }
LAB_004afbad:

            local_EAX_2874 = FUN_006aced8(local_18,local_1c,param_6,param_7);
            if ((local_40 < 0) || ((((0x53 < param_2 && (param_2 < 0x5b)) && (bVar4)) && (!bVar5))))
            {
LAB_004afc0f:
              *param_3 = local_18;
              *param_4 = local_1c;
              *param_5 = local_14;
              local_50 = 1;
              local_40 = local_EAX_2874;
              bVar5 = bVar4;
            }
            else if (bVar24) {
              if (local_EAX_2874 < local_40) goto LAB_004afc0f;
            }
            else if (local_EAX_2874 / ((int)sVar6 / 3) < local_40 / ((int)sVar6 / 3))
            goto LAB_004afc0f;
cf_common_join_004AFC34:
            local_18 = local_18 + 1;
          } while (local_18 < g_worldGrid.sizeX);
        }
        local_1c = local_1c + 1;
      } while (local_1c < g_worldGrid.sizeY);
    }
    local_14 = local_14 + 1;
    if (3 < local_14) {
      FUN_006a5e90(psVar8);
      return local_50;
    }
  } while( true );
}


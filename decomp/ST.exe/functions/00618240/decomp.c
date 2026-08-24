#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall
FUN_00618240(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  STWorldObject_GetObjectTypeId *pSVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar8;
  DArrayTy *pDVar9;
  int iVar13_mg3;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  byte *puVar17;
  STWorldObject *this_00;
  byte *puVar18;
  bool bVar19;
  uint auStack_bc [4];
  undefined4 uStack_ac;
  short local_84 [2];
  int local_80;
  byte *local_6c;
  int local_64;
  byte *local_60;
  int local_5c;
  int local_58 [2];
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  int local_38;
  int local_34;
  int local_2c;
  int local_24;
  short local_20 [2];
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079cec0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_4c = 0;
  if (param_4 == nullptr) {
    local_4c = 0;
  }
  else {
    local_5c = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
    local_64 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
    iVar6 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
    if (((((-1 < local_5c) && (-1 < local_64)) && (-1 < iVar6)) &&
        ((iVar14 = (int)g_worldGrid.sizeX, local_5c < iVar14 &&
         (iVar12 = (int)g_worldGrid.sizeY, local_64 < iVar12)))) && (iVar6 < 5)) {
      local_2c = local_64 + -5;
      if (local_64 + -5 < 0) {
        local_2c = 0;
      }
      iVar6 = local_2c;
      local_24 = local_5c + -5;
      if (local_5c + -5 < 0) {
        local_24 = 0;
      }
      local_64 = local_64 + 6;
      if (iVar12 < local_64) {
        local_64 = iVar12;
      }
      local_5c = local_5c + 6;
      if (iVar14 < local_5c) {
        local_5c = iVar14;
      }
      iVar14 = (local_5c - local_24) * (local_64 - local_2c);
      iVar12 = 0;
      uStack_ac = 0x6183b0;
      puVar18 = &stack0xffffff58 + iVar14 * -0x1e0;
      local_60 = &stack0xffffff58 + iVar14 * -0x1b8;
      auStack_bc[iVar14 * -0x6e + 4] = 0x6183c9;
      local_1c = &stack0xffffff58 + iVar14 * -0x1e0;
      local_6c = &stack0xffffff58 + iVar14 * -0x1e0;
      local_8 = 0xffffffff;
      local_34 = 0;
      ExceptionList = &local_14;
      do {
        local_38 = iVar6;
        iVar13 = local_34;
        iVar16 = iVar6;
        if (iVar6 < local_64) {
          do {
            local_80 = local_24;
            iVar16 = local_24;
            local_38 = iVar6;
            if (local_24 < local_5c) {
              do {
                sVar15 = (short)iVar16;
                if (((sVar15 < 0) || (g_worldGrid.sizeX <= sVar15)) ||
                   ((sVar10 = (short)iVar6, sVar10 < 0 ||
                    (((g_worldGrid.sizeY <= sVar10 || (sVar11 = (short)iVar13, sVar11 < 0)) ||
                     (g_worldGrid.sizeZ <= sVar11)))))) {
                  this_00 = nullptr;
                }
                else {
                  this_00 = STGridAt3D(g_worldGrid, sVar15, sVar10, sVar11).objects[0];
                  iVar13 = local_34;
                }
                if (this_00 != nullptr) {
                  pcVar4 = this_00->vtable[5].slots_00_28[0];
                  local_80 = iVar16;
                  auStack_bc[iVar14 * -0x78 + 4] = 0x61846b;
                  /* ST_CALLSITE[00618465]: CALL dword ptr [EAX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                  iVar7 = (*pcVar4)(this_00);
                  iVar6 = local_38;
                  iVar13 = local_34;
                  if (((iVar7 != 0) && (this_00[1].vtable < (STWorldObjectVTable *)0x8)) &&
                     ((g_playSystem_00802A38 == nullptr ||
                      (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8))))
                  {
                    bVar1 = *(byte *)&this_00[1].vtable;
                    bVar2 = STField<byte>(this,0x20);
                    if (DAT_00808a8f == '\0') {
                      if (bVar1 == bVar2) {
LAB_0061856a:
                        iVar7 = 0;
                      }
                      else {
                        bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                        if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                          iVar7 = -2;
                        }
                        else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                          iVar7 = -1;
                        }
                        else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                          iVar7 = 1;
                        }
                        else {
                          if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                          goto LAB_0061856a;
                          iVar7 = 2;
                        }
                      }
                      bVar19 = iVar7 < 0;
                    }
                    else {
                      bVar19 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                               g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                      iVar16 = local_80;
                    }
                    if (bVar19) {
                      pcVar4 = this_00->vtable[5].slots_00_28[2];
                      auStack_bc[iVar14 * -0x78 + 4] = 0x618587;
                      /* ST_CALLSITE[00618581]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                      iVar7 = (*pcVar4)(this_00);
                      iVar6 = local_38;
                      iVar13 = local_34;
                      if (iVar7 != 0) {
                        auStack_bc[iVar14 * -0x78 + 4] = (uint)local_20;
                        auStack_bc[iVar14 * -0x78 + 3] = (uint)local_84;
                        auStack_bc[iVar14 * -0x78 + 2] = (uint)local_50;
                        auStack_bc[iVar14 * -0x78 + 1] = 0x6185a2;
                        thunk_FUN_00416270(this_00,(uint *)auStack_bc[iVar14 * -0x78 + 2],
                                           (short *)auStack_bc[iVar14 * -0x78 + 3],
                                           (short *)auStack_bc[iVar14 * -0x78 + 4]);
                        puVar17 = (byte *)(local_60 + iVar12 * 0x2c);
                        *puVar17 = this_00[1].vtable;
                        pSVar5 = this_00->vtable->GetObjectTypeId;
                        auStack_bc[iVar14 * -0x78 + 4] = 0x6185ba;
                        /* ST_CALLSITE[006185B7]: CALL dword ptr [EDX + 0x2c] */
                        iVar6 = (*pSVar5)(this_00);
                        puVar17[1] = iVar6;
                        STField<undefined4>(puVar17,0x26) = *(undefined4 *)&this_00->field_0x18;
                        STField<undefined2>(puVar17,0x2a) = *(undefined2 *)&this_00[1].field_0xe;
                        STField<STWorldObject *>(puVar17,0x1a) = this_00;
                        *(undefined2 *)(puVar17 + 5) = (undefined2)local_80;
                        STField<undefined2>(puVar17,0x16) = (undefined2)local_38;
                        *(undefined2 *)(puVar17 + 6) = (undefined2)local_34;
                        puVar17[2] = (int)local_50[0];
                        puVar17[3] = (int)local_84[0];
                        puVar17[4] = (int)local_20[0];
                        auStack_bc[iVar14 * -0x78 + 4] = (int)local_84[0];
                        auStack_bc[iVar14 * -0x78 + 3] = (int)local_50[0];
                        auStack_bc[iVar14 * -0x78 + 2] = param_2;
                        auStack_bc[iVar14 * -0x78 + 1] = param_1;
                        auStack_bc[iVar14 * -0x78] = 0x618612;
                        iVar8 = FUN_006aced8(auStack_bc[iVar14 * -0x78 + 1],
                                             auStack_bc[iVar14 * -0x78 + 2],
                                             auStack_bc[iVar14 * -0x78 + 3],
                                             auStack_bc[iVar14 * -0x78 + 4]);
                        STField<int>(puVar17,0x1e) = iVar8;
                        iVar12 = iVar12 + 1;
                        iVar6 = local_38;
                        iVar13 = local_34;
                        iVar16 = local_80;
                      }
                    }
                  }
                }
                iVar16 = iVar16 + 1;
                local_80 = iVar16;
              } while (iVar16 < local_5c);
            }
            iVar6 = iVar6 + 1;
            local_38 = iVar6;
            iVar16 = local_2c;
            puVar18 = local_6c;
          } while (iVar6 < local_64);
        }
        local_34 = iVar13 + 1;
        iVar6 = iVar16;
      } while (iVar13 + 1 < 5);
      if (0 < iVar12) {
        iVar6 = 0;
        if (0 < iVar12) {
          do {
            *(int *)(puVar18 + iVar6 * 4) = iVar6;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar12);
        }
        auStack_bc[iVar14 * -0x78 + 4] = iVar12;
        auStack_bc[iVar14 * -0x78 + 3] = (uint)puVar18;
        auStack_bc[iVar14 * -0x78 + 2] = (uint)local_60;
        auStack_bc[iVar14 * -0x78 + 1] = 0x618676;
        thunk_FUN_006189c0(auStack_bc[iVar14 * -0x78 + 2],(int *)auStack_bc[iVar14 * -0x78 + 3],
                           auStack_bc[iVar14 * -0x78 + 4]);
        local_58[0] = 1000;
        iVar6 = 0;
        if (0 < iVar12) {
          do {
            auStack_bc[iVar14 * -0x78 + 4] = (uint)local_58;
            puVar18 = local_6c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            auStack_bc[iVar14 * -0x78 + 3] =
                 *(undefined4 *)(local_60 + *(int *)(local_6c + iVar6 * 4) * 0x2c + 0x26);
            auStack_bc[iVar14 * -0x78 + 2] = 0x6186aa;
            uVar8 = thunk_FUN_00618a50(this,auStack_bc[iVar14 * -0x78 + 3],
                                       (int *)auStack_bc[iVar14 * -0x78 + 4]);
            if ((int)uVar8 < 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_48 = *(undefined4 *)(local_60 + *(int *)(puVar18 + iVar6 * 4) * 0x2c + 0x26);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_44 = (uint)*(ushort *)(local_60 + *(int *)(puVar18 + iVar6 * 4) * 0x2c + 0x2a);
              if (STField<int>(this,0x62) == 0) {
                auStack_bc[iVar14 * -0x78 + 4] = 10;
                auStack_bc[iVar14 * -0x78 + 3] = 8;
                auStack_bc[iVar14 * -0x78 + 2] = 7;
                auStack_bc[iVar14 * -0x78 + 1] = 0;
                auStack_bc[iVar14 * -0x78] = 0x6186f5;
                pDVar9 = Library::DKW::TBL::DArrayCreate
                                   ((DArrayTy *)auStack_bc[iVar14 * -0x78 + 1],
                                    auStack_bc[iVar14 * -0x78 + 2],auStack_bc[iVar14 * -0x78 + 3],
                                    auStack_bc[iVar14 * -0x78 + 4]);
                STField<DArrayTy *>(this,0x62) = pDVar9;
              }
              auStack_bc[iVar14 * -0x78 + 4] = (uint)&local_48;
              auStack_bc[iVar14 * -0x78 + 3] = STField<undefined4>(this,0x62);
              auStack_bc[iVar14 * -0x78 + 2] = 0x618711;
              iVar13_mg3 = Library::DKW::TBL::DArrayAppend
                                     ((DArrayTy *)auStack_bc[iVar14 * -0x78 + 3],
                                      (void *)auStack_bc[iVar14 * -0x78 + 4]);
              local_58[0] = 0;
              if (-1 < iVar13_mg3) goto LAB_0061871c;
            }
            else {
LAB_0061871c:
              if (local_58[0] < 3) {
                puVar17 = (byte *)(local_60 + *(int *)(puVar18 + iVar6 * 4) * 0x2c);
                memmove(param_4, puVar17, 0x2c); /* compiler REP MOVS byte copy */
                ExceptionList = local_14;
                return 1;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar12);
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_4c;
}


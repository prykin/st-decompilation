#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_00618240(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar8;
  uint uVar5;
  DArrayTy *pDVar6;
  short sVar7;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  byte *puVar14;
  int iVar15;
  STWorldObject *this_00;
  int *piVar16;
  bool bVar17;
  short local_84 [2];
  int local_80;
  int *local_6c;
  int local_64;
  undefined1 *local_60;
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
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079cec0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff58;
  piVar16 = (int *)&stack0xffffff58;
  local_4c = 0;
  if (param_4 == nullptr) {
    local_4c = 0;
  }
  else {
    iVar15 = STBiasedDiv16(param_1, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = STBiasedDiv16(param_2, 0xc9); /* exact signed 16-bit grid-index division */
    iVar4 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
    if (((((-1 < iVar15) && (-1 < iVar9)) && (-1 < iVar4)) &&
        ((iVar12 = (int)g_worldGrid.sizeX, iVar15 < iVar12 &&
         (iVar11 = (int)g_worldGrid.sizeY, iVar9 < iVar11)))) && (iVar4 < 5)) {
      local_2c = iVar9 + -5;
      if (local_2c < 0) {
        local_2c = 0;
      }
      iVar4 = local_2c;
      local_24 = iVar15 + -5;
      if (local_24 < 0) {
        local_24 = 0;
      }
      local_64 = iVar9 + 6;
      if (iVar11 < iVar9 + 6) {
        local_64 = iVar11;
      }
      local_5c = iVar15 + 6;
      if (iVar12 < iVar15 + 6) {
        local_5c = iVar12;
      }
      iVar15 = 0;
      local_8 = 0;
      ExceptionList = &local_14;
      Library::MSVCRT::FUN_0072da40();
      local_60 = &stack0xffffff58;
      local_1c = &stack0xffffff58;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_34 = 0;
      local_6c = (int *)&stack0xffffff58;
      local_1c = &stack0xffffff58;
      do {
        iVar9 = local_34;
        iVar12 = iVar4;
        local_38 = iVar4;
        if (iVar4 < local_64) {
          do {
            local_80 = local_24;
            iVar12 = local_24;
            local_38 = iVar4;
            if (local_24 < local_5c) {
              do {
                sVar13 = (short)iVar12;
                if (((sVar13 < 0) || (g_worldGrid.sizeX <= sVar13)) ||
                   ((sVar7 = (short)iVar4, sVar7 < 0 ||
                    (((g_worldGrid.sizeY <= sVar7 || (sVar10 = (short)iVar9, sVar10 < 0)) ||
                     (g_worldGrid.sizeZ <= sVar10)))))) {
                  this_00 = nullptr;
                }
                else {
                  this_00 = STGridAt3D(g_worldGrid, sVar13, sVar7, sVar10).objects[0];
                  iVar9 = local_34;
                }
                if (((this_00 != nullptr) &&
                    (local_80 = iVar12, iVar11 = (*this_00->vtable[5].slots_00_28[0])(),
                    iVar4 = local_38, iVar9 = local_34, iVar11 != 0)) &&
                   ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                    ((g_playSystem_00802A38 == nullptr ||
                     (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8))))))
                {
                  bVar1 = *(byte *)&this_00[1].vtable;
                  bVar2 = STField<byte>(this,0x20);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar2) {
LAB_0061856a:
                      iVar11 = 0;
                    }
                    else {
                      bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                        iVar11 = -2;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                        iVar11 = -1;
                      }
                      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                        iVar11 = 1;
                      }
                      else {
                        if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                        goto LAB_0061856a;
                        iVar11 = 2;
                      }
                    }
                    bVar17 = iVar11 < 0;
                  }
                  else {
                    bVar17 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                    iVar12 = local_80;
                  }
                  if ((bVar17) &&
                     (iVar11 = (*this_00->vtable[5].slots_00_28[2])(), iVar4 = local_38,
                     iVar9 = local_34, iVar11 != 0)) {
                    thunk_FUN_00416270(this_00,(uint *)local_50,(int *)local_84,local_20);
                    puVar14 = (byte *)(local_60 + iVar15 * 0x2c);
                    *puVar14 = this_00[1].vtable;
                    iVar9 = this_00->GetObjectTypeId();
                    puVar14[1] = iVar9;
                    STField<undefined4>(puVar14,0x26) = *(undefined4 *)&this_00->field_0x18;
                    STField<undefined2>(puVar14,0x2a) = *(undefined2 *)&this_00[1].field_0xe;
                    STField<STWorldObject *>(puVar14,0x1a) = this_00;
                    *(undefined2 *)(puVar14 + 5) = (undefined2)local_80;
                    STField<undefined2>(puVar14,0x16) = (undefined2)local_38;
                    *(undefined2 *)(puVar14 + 6) = (undefined2)local_34;
                    puVar14[2] = (int)local_50[0];
                    puVar14[3] = (int)local_84[0];
                    puVar14[4] = (int)local_20[0];
                    iVar8 = FUN_006aced8(param_1,param_2,(int)local_50[0],(int)local_84[0]);
                    STField<int>(puVar14,0x1e) = iVar8;
                    iVar15 = iVar15 + 1;
                    iVar4 = local_38;
                    iVar9 = local_34;
                    iVar12 = local_80;
                  }
                }
                iVar12 = iVar12 + 1;
                local_80 = iVar12;
              } while (iVar12 < local_5c);
            }
            iVar4 = iVar4 + 1;
            iVar12 = local_2c;
            piVar16 = local_6c;
            local_38 = iVar4;
          } while (iVar4 < local_64);
        }
        local_34 = iVar9 + 1;
        iVar4 = iVar12;
      } while (local_34 < 5);
      if (0 < iVar15) {
        iVar9 = 0;
        if (0 < iVar15) {
          do {
            piVar16[iVar9] = iVar9;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar15);
        }
        thunk_FUN_006189c0((int)local_60,piVar16,iVar15);
        local_58[0] = 1000;
        iVar9 = 0;
        if (0 < iVar15) {
          do {
            piVar16 = local_6c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar5 = thunk_FUN_00618a50(this,*(int *)(local_60 + local_6c[iVar9] * 0x2c + 0x26),
                                       local_58);
            if ((int)uVar5 < 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_48 = *(undefined4 *)(local_60 + piVar16[iVar9] * 0x2c + 0x26);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_44 = (uint)*(ushort *)(local_60 + piVar16[iVar9] * 0x2c + 0x2a);
              if (STField<int>(this,0x62) == 0) {
                pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,7,8,10);
                STField<DArrayTy *>(this,0x62) = pDVar6;
              }
              iVar4 = Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0x62),&local_48);
              local_58[0] = 0;
              if (-1 < iVar4) goto LAB_0061871c;
            }
            else {
LAB_0061871c:
              if (local_58[0] < 3) {
                puVar14 = (byte *)(local_60 + piVar16[iVar9] * 0x2c);
                memmove(param_4, puVar14, 0x2c); /* compiler REP MOVS byte copy */
                ExceptionList = local_14;
                return 1;
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar15);
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_4c;
}


#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __thiscall FUN_005feb60(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  void **ppvVar4;
  short sVar5;
  int iVar6;
  int iVar8;
  int iVar7;
  uint uVar9;
  void *pvVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  uint *puVar16;
  STWorldObject *this_00;
  undefined4 *puVar17;
  bool bVar18;
  uint auStack_69c [383];
  undefined4 uStack_a0;
  int local_64;
  int local_60;
  int local_58;
  int local_50;
  int local_44;
  short local_30 [2];
  short local_2c [4];
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079c9a0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  iVar13 = 0;
  local_50 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if (local_50 < 1) {
    iVar13 = 0;
  }
  else {
    sVar14 = STField<short>(this,0x21a);
    local_64 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
    sVar14 = STField<short>(this,0x21c);
    iVar15 = STBiasedDiv16(sVar14, 0xc9); /* exact signed 16-bit grid-index division */
    uStack_a0 = 0x5fec55;
    local_1c = (undefined1 *)auStack_69c;
    local_8 = 0xffffffff;
    local_44 = 0;
    ExceptionList = &local_14;
    ppvVar4 = &local_14;
    puVar16 = auStack_69c;
    if (0 < local_50) {
      do {
        iVar6 = local_50 - local_44;
        iVar12 = iVar15 - iVar6;
        local_24 = local_64 - iVar6;
        local_60 = iVar6 + 1 + iVar15;
        local_58 = iVar6 + 1 + local_64;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        if (local_24 < 0) {
          local_24 = 0;
        }
        if (g_worldGrid.sizeY < local_60) {
          local_60 = (int)g_worldGrid.sizeY;
        }
        if (g_worldGrid.sizeX < local_58) {
          local_58 = (int)g_worldGrid.sizeX;
        }
        for (; iVar6 = local_24, iVar12 < local_60; iVar12 = iVar12 + 1) {
          for (; iVar6 < local_58; iVar6 = iVar6 + 1) {
            sVar14 = (short)iVar6;
            if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                 (sVar5 = (short)iVar12, sVar5 < 0)) ||
                ((g_worldGrid.sizeY <= sVar5 || (sVar11 = (short)local_44, sVar11 < 0)))) ||
               (g_worldGrid.sizeZ <= sVar11)) {
              this_00 = nullptr;
            }
            else {
              this_00 = STGridAt3D(g_worldGrid, sVar14, sVar5, sVar11).objects[0];
            }
            if (((this_00 != nullptr) &&
                /* ST_CALLSITE[005FED55]: CALL dword ptr [EDX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                (iVar8 = (*this_00->vtable[5].slots_00_28[0])(this_00), iVar8 != 0)) &&
               ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                ((g_playSystem_00802A38 == nullptr ||
                 (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))))) {
              bVar1 = *(byte *)&this_00[1].vtable;
              bVar2 = STField<byte>(this,0x24);
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_005fee45:
                  iVar8 = 0;
                }
                else {
                  bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                  if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar8 = -2;
                  }
                  else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar8 = -1;
                  }
                  else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                    iVar8 = 1;
                  }
                  else {
                    if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                    goto LAB_005fee45;
                    iVar8 = 2;
                  }
                }
                bVar18 = iVar8 < 0;
              }
              else {
                bVar18 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar1].field_0023;
              }
              /* ST_CALLSITE[005FEE5C]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
              if ((bVar18) && (iVar8 = (*this_00->vtable[5].slots_00_28[2])(this_00), iVar8 != 0)) {
                thunk_FUN_00416270(this_00,(uint *)local_20,(int *)local_30,local_2c);
                iVar7 = FUN_006acf90(param_1,param_2,(int)local_20[0],(int)local_30[0]);
                iVar8 = thunk_FUN_005fe990(param_3 - local_2c[0],iVar7);
                if (iVar8 != 0) {
                  iVar8 = 0;
                  if (0 < iVar13) {
                    do {
                      if (((uint)*(ushort *)&this_00[1].field_0xe == auStack_69c[iVar8 * 6]) &&
                         (this_00[1].vtable == (STWorldObjectVTable *)auStack_69c[iVar8 * 6 + 2]))
                      goto LAB_005fef0e;
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < iVar13);
                  }
                  auStack_69c[iVar13 * 6 + 2] = (uint)this_00[1].vtable;
                  auStack_69c[iVar13 * 6] = (uint)*(ushort *)&this_00[1].field_0xe;
                  /* ST_CALLSITE[005FEEEF]: CALL dword ptr [EDX + 0x2c] */
                  uVar9 = this_00->GetObjectTypeId();
                  auStack_69c[iVar13 * 6 + 1] = uVar9;
                  auStack_69c[iVar13 * 6 + 3] = *(uint *)&this_00[0xe].field_0x1d;
                  auStack_69c[iVar13 * 6 + 4] = *(uint *)((int)&this_00[0xe].value_20 + 1);
                  iVar13 = iVar13 + 1;
                }
              }
            }
LAB_005fef0e:
          }
        }
        local_44 = local_44 + 1;
        ppvVar4 = ExceptionList;
        puVar16 = (uint *)local_1c;
      } while (local_44 < local_50);
    }
    local_1c = (undefined1 *)puVar16;
    ExceptionList = ppvVar4;
    if (iVar13 != 0) {
      STField<int>(this,0x237) = iVar13;
      pvVar10 = Library::DKW::LIB::MemAlloc(iVar13 * 0x18);
      STField<void *>(this,0x23b) = pvVar10;
      pvVar10 = Library::DKW::LIB::MemAlloc(iVar13 * 4);
      STField<void *>(this,0x23f) = pvVar10;
      puVar16 = auStack_69c;
      puVar17 = STField<undefined4 *>(this,0x23b);
      for (iVar15 = (iVar13 * 3 & 0x1fffffffU) << 1; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      iVar15 = 0;
      if (0 < iVar13) {
        do {
          *(int *)(STField<int>(this,0x23f) + iVar15 * 4) = iVar15;
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar13);
      }
      if (STField<int>(this,0x226) < iVar13) {
        thunk_FUN_005ff150(STField<int>(this,0x23b),STField<int *>(this,0x23f),iVar13);
      }
    }
  }
  ExceptionList = local_14;
  return iVar13;
}


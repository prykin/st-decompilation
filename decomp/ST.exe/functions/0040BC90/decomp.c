#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 371 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __thiscall
FUN_0040bc90(void *this,uint param_1,short *param_2,short *param_3,short *param_4,char param_5)

{
  STGameObjC *pSVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short *psVar7;
  int iVar7;
  int iVar8;
  short *psVar9;
  int local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  short *local_18;
  int local_14;
  int local_10;
  int local_c;
  short *local_8;

  local_28 = this;
  pSVar1 = thunk_FUN_00423e70(this,(ushort)param_1);
  if (pSVar1 != nullptr) {
    local_8 = Library::DKW::LIB::MemAlloc
                        ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                         (int)g_pathingGrid.sizeX * 2);
    uVar4 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar7 = g_pathingGrid.cells;
    psVar9 = local_8;
    for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar9 = *(undefined4 *)psVar7;
      psVar7 = psVar7 + 2;
      psVar9 = psVar9 + 2;
    }
    for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)psVar9 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      psVar9 = (short *)((int)psVar9 + 1);
    }
    local_24 = pSVar1->field_0047 + -2;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_20 = pSVar1->field_0049 + -2;
    if (local_20 < 0) {
      local_20 = 0;
    }
    auto param_1_after_write = (int)pSVar1->field_004B - 2; /* compiler stack-slot lifetime split */
    if ((int)param_1_after_write < 0) {
      param_1_after_write = 0;
    }
    iVar2 = (int)g_pathingGrid.sizeX;
    local_10 = pSVar1->field_0047 + 2;
    if (iVar2 <= local_10) {
      local_10 = iVar2 + -1;
    }
    iVar8 = pSVar1->field_0049 + 2;
    if (g_pathingGrid.sizeY <= iVar8) {
      iVar8 = g_pathingGrid.sizeY + -1;
    }
    local_c = pSVar1->field_004B + 2;
    if (g_pathingGrid.sizeZ <= local_c) {
      local_c = g_pathingGrid.sizeZ + -1;
    }
    iVar7 = local_20;
    local_14 = iVar8;
    if ((int)param_1_after_write <= local_c) {
      do {
        local_18 = local_8 + ((int)g_pathingGrid.sizeY * param_1_after_write + iVar7) * iVar2;
        local_1c = iVar7;
        if (iVar7 <= iVar8) {
          do {
            if (local_24 <= local_10) {
              psVar9 = local_18 + local_24;
              iVar2 = local_24;
              do {
                if ((*psVar9 == 0) &&
                   (iVar8 = thunk_FUN_00497920((RecoveredRecord_STBoatC_0040AE40 *)pSVar1,iVar2,
                                               local_1c,param_1_after_write), iVar8 == 0)) {
                  *psVar9 = -3;
                }
                iVar2 = iVar2 + 1;
                psVar9 = psVar9 + 1;
                iVar8 = local_14;
              } while (iVar2 <= local_10);
            }
            iVar2 = (int)g_pathingGrid.sizeX;
            local_18 = local_18 + iVar2;
            local_1c = local_1c + 1;
            iVar7 = local_20;
          } while (local_1c <= iVar8);
        }
        param_1_after_write = param_1_after_write + 1;
      } while ((int)param_1_after_write <= local_c);
    }
    local_8[(int)pSVar1->field_004B * (int)g_pathingGrid.planeStride +
            (int)pSVar1->field_0049 * (int)g_pathingGrid.sizeX + (int)pSVar1->field_0047] = 0;
    iVar2 = (int)param_2 +
            (int)g_pathingGrid.sizeX * (int)param_3 + (int)g_pathingGrid.planeStride * (int)param_4;
    if (local_8[iVar2] == -3) {
      local_8[iVar2] = 0;
    }
    uVar4 = 0;
    if (param_5 != '\0') {
      uVar4 = 4;
    }
    psVar3 = Library::DKW::WAY::FUN_006a9190
                       ((int)local_8,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                        (int)g_pathingGrid.sizeZ,(short *)(int)pSVar1->field_0047,
                        (short *)(int)pSVar1->field_0049,(short *)(int)pSVar1->field_004B,param_2,
                        param_3,param_4,0,&local_2c,nullptr,nullptr,uVar4);
    psVar9 = local_8;
    if (psVar3 == nullptr) {
      iVar2 = FUN_006ab090((int)local_8,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                           (int)g_pathingGrid.sizeZ,(int)param_2,(int)param_3,(int)param_4,
                           (int)pSVar1->field_0047,(int)pSVar1->field_0049,(int)pSVar1->field_004B);
      if (iVar2 != 0) {
        FUN_006a5e90(psVar9);
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",0x173);
        return -2;
      }
      sVar6 = psVar9[((int)pSVar1->field_004B * (int)g_pathingGrid.sizeY + (int)pSVar1->field_0049)
                     * (int)g_pathingGrid.sizeX + (int)pSVar1->field_0047];
    }
    else {
      sVar6 = psVar3[3] + 1;
      FUN_006a5e90(psVar3);
      psVar9 = local_8;
    }
    FUN_006a5e90(psVar9);
    if (0 < sVar6) {
      return (sVar6 + -1) / 3;
    }
  }
  return -4;
}



/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 371 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __thiscall
FUN_0040bc90(void *this,uint param_1,short *param_2,short *param_3,short *param_4,char param_5)

{
  AnonShape_00497920_894F87D6 *pAVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
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
  pAVar1 = (AnonShape_00497920_894F87D6 *)thunk_FUN_00423e70(this,param_1);
  if (pAVar1 != (AnonShape_00497920_894F87D6 *)0x0) {
    local_8 = (short *)Library::DKW::LIB::FUN_006aac70
                                 ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                                  (int)g_pathingGrid.sizeX * 2);
    uVar4 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar7 = g_pathingGrid.cells;
    psVar3 = local_8;
    for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar3 = *(undefined4 *)psVar7;
      psVar7 = psVar7 + 2;
      psVar3 = psVar3 + 2;
    }
    for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)psVar3 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      psVar3 = (short *)((int)psVar3 + 1);
    }
    local_24 = pAVar1->field_0047 + -2;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_20 = pAVar1->field_0049 + -2;
    if (local_20 < 0) {
      local_20 = 0;
    }
    param_1 = (int)pAVar1->field_004B - 2;
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    iVar2 = (int)g_pathingGrid.sizeX;
    local_10 = pAVar1->field_0047 + 2;
    if (iVar2 <= local_10) {
      local_10 = iVar2 + -1;
    }
    iVar9 = pAVar1->field_0049 + 2;
    if (g_pathingGrid.sizeY <= iVar9) {
      iVar9 = g_pathingGrid.sizeY + -1;
    }
    local_c = pAVar1->field_004B + 2;
    if (g_pathingGrid.sizeZ <= local_c) {
      local_c = g_pathingGrid.sizeZ + -1;
    }
    iVar8 = local_20;
    local_14 = iVar9;
    if ((int)param_1 <= local_c) {
      do {
        local_18 = local_8 + ((int)g_pathingGrid.sizeY * param_1 + iVar8) * iVar2;
        local_1c = iVar8;
        if (iVar8 <= iVar9) {
          do {
            if (local_24 <= local_10) {
              psVar7 = local_18 + local_24;
              iVar2 = local_24;
              do {
                if ((*psVar7 == 0) &&
                   (iVar9 = thunk_FUN_00497920(pAVar1,iVar2,local_1c,param_1), iVar9 == 0)) {
                  *psVar7 = -3;
                }
                iVar2 = iVar2 + 1;
                psVar7 = psVar7 + 1;
                iVar9 = local_14;
              } while (iVar2 <= local_10);
            }
            iVar2 = (int)g_pathingGrid.sizeX;
            local_18 = local_18 + iVar2;
            local_1c = local_1c + 1;
            iVar8 = local_20;
          } while (local_1c <= iVar9);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 <= local_c);
    }
    local_8[(int)pAVar1->field_004B * (int)g_pathingGrid.planeStride +
            (int)pAVar1->field_0049 * (int)g_pathingGrid.sizeX + (int)pAVar1->field_0047] = 0;
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
                        (int)g_pathingGrid.sizeZ,(short *)(int)pAVar1->field_0047,
                        (short *)(int)pAVar1->field_0049,(short *)(int)pAVar1->field_004B,param_2,
                        param_3,param_4,0,&local_2c,(undefined4 *)0x0,(short *)0x0,uVar4);
    psVar7 = local_8;
    if (psVar3 == (short *)0x0) {
      iVar2 = FUN_006ab090((int)local_8,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                           (int)g_pathingGrid.sizeZ,(int)param_2,(int)param_3,(int)param_4,
                           (int)pAVar1->field_0047,(int)pAVar1->field_0049,(int)pAVar1->field_004B);
      if (iVar2 != 0) {
        FUN_006a5e90(psVar7);
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",0x173);
        return -2;
      }
      sVar6 = psVar7[((int)pAVar1->field_004B * (int)g_pathingGrid.sizeY + (int)pAVar1->field_0049)
                     * (int)g_pathingGrid.sizeX + (int)pAVar1->field_0047];
    }
    else {
      sVar6 = psVar3[3] + 1;
      FUN_006a5e90(psVar3);
      psVar7 = local_8;
    }
    FUN_006a5e90(psVar7);
    if (0 < sVar6) {
      return (sVar6 + -1) / 3;
    }
  }
  return -4;
}


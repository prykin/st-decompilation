
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 371 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __thiscall
FUN_0040bc90(void *this,uint param_1,short *param_2,short *param_3,short *param_4,char param_5)

{
  bool bVar1;
  AnonShape_00497920_894F87D6 *pAVar2;
  int iVar3;
  undefined3 extraout_var;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
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
  pAVar2 = (AnonShape_00497920_894F87D6 *)thunk_FUN_00423e70(this,param_1);
  if (pAVar2 != (AnonShape_00497920_894F87D6 *)0x0) {
    local_8 = (short *)Library::DKW::LIB::FUN_006aac70
                                 ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                                  (int)g_pathingGrid.sizeX * 2);
    uVar5 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar8 = g_pathingGrid.cells;
    psVar4 = local_8;
    for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)psVar4 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      psVar4 = psVar4 + 2;
    }
    for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)psVar4 = (char)*psVar8;
      psVar8 = (short *)((int)psVar8 + 1);
      psVar4 = (short *)((int)psVar4 + 1);
    }
    local_24 = pAVar2->field_0047 + -2;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_20 = pAVar2->field_0049 + -2;
    if (local_20 < 0) {
      local_20 = 0;
    }
    param_1 = (int)pAVar2->field_004B - 2;
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    iVar3 = (int)g_pathingGrid.sizeX;
    local_10 = pAVar2->field_0047 + 2;
    if (iVar3 <= local_10) {
      local_10 = iVar3 + -1;
    }
    iVar10 = pAVar2->field_0049 + 2;
    if (g_pathingGrid.sizeY <= iVar10) {
      iVar10 = g_pathingGrid.sizeY + -1;
    }
    local_c = pAVar2->field_004B + 2;
    if (g_pathingGrid.sizeZ <= local_c) {
      local_c = g_pathingGrid.sizeZ + -1;
    }
    iVar9 = local_20;
    local_14 = iVar10;
    if ((int)param_1 <= local_c) {
      do {
        local_18 = local_8 + ((int)g_pathingGrid.sizeY * param_1 + iVar9) * iVar3;
        local_1c = iVar9;
        if (iVar9 <= iVar10) {
          do {
            if (local_24 <= local_10) {
              psVar8 = local_18 + local_24;
              iVar3 = local_24;
              do {
                if ((*psVar8 == 0) &&
                   (bVar1 = thunk_FUN_00497920(pAVar2,iVar3,local_1c,param_1),
                   CONCAT31(extraout_var,bVar1) == 0)) {
                  *psVar8 = -3;
                }
                iVar3 = iVar3 + 1;
                psVar8 = psVar8 + 1;
                iVar10 = local_14;
              } while (iVar3 <= local_10);
            }
            iVar3 = (int)g_pathingGrid.sizeX;
            local_18 = local_18 + iVar3;
            local_1c = local_1c + 1;
            iVar9 = local_20;
          } while (local_1c <= iVar10);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 <= local_c);
    }
    local_8[(int)pAVar2->field_004B * (int)g_pathingGrid.planeStride +
            (int)pAVar2->field_0049 * (int)g_pathingGrid.sizeX + (int)pAVar2->field_0047] = 0;
    iVar3 = (int)param_2 +
            (int)g_pathingGrid.sizeX * (int)param_3 + (int)g_pathingGrid.planeStride * (int)param_4;
    if (local_8[iVar3] == -3) {
      local_8[iVar3] = 0;
    }
    uVar5 = 0;
    if (param_5 != '\0') {
      uVar5 = 4;
    }
    psVar4 = Library::DKW::WAY::FUN_006a9190
                       ((int)local_8,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                        (int)g_pathingGrid.sizeZ,(short *)(int)pAVar2->field_0047,
                        (short *)(int)pAVar2->field_0049,(short *)(int)pAVar2->field_004B,param_2,
                        param_3,param_4,0,&local_2c,(undefined4 *)0x0,(short *)0x0,uVar5);
    psVar8 = local_8;
    if (psVar4 == (short *)0x0) {
      iVar3 = FUN_006ab090((int)local_8,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                           (int)g_pathingGrid.sizeZ,(int)param_2,(int)param_3,(int)param_4,
                           (int)pAVar2->field_0047,(int)pAVar2->field_0049,(int)pAVar2->field_004B);
      if (iVar3 != 0) {
        FUN_006a5e90(psVar8);
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x173);
        return -2;
      }
      sVar7 = psVar8[((int)pAVar2->field_004B * (int)g_pathingGrid.sizeY + (int)pAVar2->field_0049)
                     * (int)g_pathingGrid.sizeX + (int)pAVar2->field_0047];
    }
    else {
      sVar7 = psVar4[3] + 1;
      FUN_006a5e90(psVar4);
      psVar8 = local_8;
    }
    FUN_006a5e90(psVar8);
    if (0 < sVar7) {
      return (sVar7 + -1) / 3;
    }
  }
  return -4;
}



undefined4 __fastcall FUN_00492b20(AnonShape_00492B20_AFE20A9A *param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  STFishC *this;
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  short sVar10;
  short *psVar11;
  int local_10;
  short local_c [2];
  short local_8;
  short local_6;

  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  this = (STFishC *)
         STAllPlayersC::GetObjPtr
                   (g_sTAllPlayers_007FA174,param_1->field_05FC,
                    CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_05FD),CASE_1);
  if ((((((this != (STFishC *)0x0) && (this->field_0018 == param_1->field_05FF)) &&
        (iVar1 = (*this->vtable->vfunc_108)(param_1->field_0024), iVar1 != 0)) &&
       ((STFishC::sub_004162B0(this,&local_8,&local_6,local_c), -1 < local_8 &&
        (local_8 < g_pathingGrid.sizeX)))) && (-1 < local_6)) &&
     (((local_6 < g_pathingGrid.sizeY && (-1 < local_c[0])) &&
      ((int)local_c[0] < g_pathingGrid.sizeZ + -1)))) {
    param_1->field_0609 = local_8;
    param_1->field_060B = local_6;
    param_1->field_060D = local_c[0];
    uVar4 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar8 = g_pathingGrid.cells;
    psVar11 = g_pathingScratchGrid.cells;
    for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      psVar11 = psVar11 + 2;
    }
    for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)psVar11 = (char)*psVar8;
      psVar8 = (short *)((int)psVar8 + 1);
      psVar11 = (short *)((int)psVar11 + 1);
    }
    FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                 (int)g_pathingGrid.sizeZ,(int)param_1->field_005B,(int)param_1->field_005D,
                 (int)param_1->field_005F,(int)local_8,(int)local_6,local_c[0] + 1);
    if (*(int *)&this->field_0x2c == 0) {
      sVar7 = local_c[0] + 1;
      if ((((-1 < local_8) && (local_8 < g_worldGrid.sizeX)) && (-1 < local_6)) &&
         (((local_6 < g_worldGrid.sizeY && (-1 < sVar7)) && (sVar7 < g_worldGrid.sizeZ)))) {
        if ((-1 < g_pathingGrid.cells
                  [(int)sVar7 * (int)g_pathingGrid.planeStride +
                   (int)g_pathingGrid.sizeX * (int)local_6 + (int)local_8]) &&
           (g_pathingScratchGrid.cells
            [(local_c[0] + 1) * (int)g_pathingGrid.planeStride +
             (int)g_pathingGrid.sizeX * (int)local_6 + (int)local_8] != 0)) {
          param_1->field_0603 = local_8;
          param_1->field_0605 = local_6;
          param_1->field_0607 = sVar7;
          return 1;
        }
      }
    }
    else if (*(int *)&this->field_0x2c == 1) {
      local_10 = 10000000;
      param_1->field_0607 = local_c[0] + 1;
      iVar2 = (int)local_8;
      iVar1 = iVar2 + 1;
      if (iVar2 <= iVar1) {
        do {
          iVar6 = (int)local_6;
          if (iVar6 <= local_6 + 1) {
            do {
              sVar7 = (short)iVar2;
              iVar9 = (int)g_pathingScratchGrid.cells
                           [(int)g_pathingGrid.planeStride * (local_c[0] + 1) +
                            iVar2 + g_pathingGrid.sizeX * iVar6];
              if (((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                   (sVar3 = (short)iVar6, -1 < sVar3)) &&
                  (((sVar3 < g_worldGrid.sizeY && (sVar10 = local_c[0] + 1, -1 < sVar10)) &&
                   ((sVar10 < g_worldGrid.sizeZ &&
                    ((-1 < g_pathingGrid.cells
                           [(int)sVar10 * (int)g_pathingGrid.planeStride +
                            (int)sVar3 * (int)g_pathingGrid.sizeX + (int)sVar7] && (iVar9 != 0))))))
                  )) && (iVar9 < local_10)) {
                param_1->field_0603 = sVar7;
                param_1->field_0605 = sVar3;
                local_10 = iVar9;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 <= local_6 + 1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar1);
        if (local_10 != 10000000) {
          return 1;
        }
      }
    }
  }
  return 0;
}


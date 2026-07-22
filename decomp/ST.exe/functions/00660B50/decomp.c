
undefined4 __fastcall
FUN_00660b50(AnonShape_00660620_6BCED4D7 *param_1,undefined4 param_2,short param_3,short param_4,
            undefined4 param_5,int param_6)

{
  STGroupBoatC *pSVar1;
  short local_14;
  short sStack_12;
  short local_10;
  undefined4 local_c;
  short local_8;

  param_1->field_00A7 = 0;
  if (param_6 == 0) {
    local_8 = (short)param_5;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = (AnonShape_00660620_6BCED4D7 *)CONCAT22(param_4,param_3);
    if ((param_1->field_007D != -2) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      pSVar1 = thunk_FUN_0042b760(param_1->field_0024,
                                  CONCAT22((short)((uint)param_2 >> 0x10),param_1->field_007D));
      if (pSVar1 != (STGroupBoatC *)0x0) {
        (*pSVar1->vtable->vfunc_08)(pSVar1,CASE_C,&local_c);
        return 0;
      }
    }
  }
  else if ((((-1 < param_3) && (param_3 < g_worldGrid.sizeX)) && (-1 < param_4)) &&
          (param_4 < g_worldGrid.sizeY)) {
    if ((-1 < (short)param_5) && ((short)param_5 < g_worldGrid.sizeZ)) {
      if (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)(short)param_5 +
           (int)g_worldGrid.sizeX * (int)param_4 + (int)param_3].objects[0] != (STWorldObject *)0x0)
      {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_14 = CONCAT22(param_4,param_3);
        if ((param_1->field_007D != -2) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          local_10 = (short)param_5;
          local_c = param_1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar1 = thunk_FUN_0042b760(param_1->field_0024,
                                      CONCAT22((short)((uint)param_5 >> 0x10),param_1->field_007D));
          if (pSVar1 != (STGroupBoatC *)0x0) {
            (*pSVar1->vtable->vfunc_08)(pSVar1,CASE_12,&local_14);
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00664960 -> 00660B50 @ 00666DA3; MOVSX at 00666D98 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00660C14 TEST AX,AX classifies dword parameter loaded at 00660C11 | 00660C19 CMP
   AX,word ptr [0x007fb244] classifies dword parameter loaded at 00660C11 | 00664960 -> 00660B50 @
   00666DA3; MOVSX at 00666D88 establishes signed source width 2 */

undefined4 __fastcall
FUN_00660b50(AnonShape_00660620_6BCED4D7 *param_1,int param_2,short param_3,short param_4,
            int param_5,int param_6)

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
    if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
      pSVar1 = thunk_FUN_0042b760(param_1->field_0024,param_1->field_007D);
      if (pSVar1 != nullptr) {
        pSVar1->sub_00498D20(0xc,&local_c);
        return 0;
      }
    }
  }
  else if ((((-1 < param_3) && (param_3 < g_worldGrid.sizeX)) && (-1 < param_4)) &&
          (param_4 < g_worldGrid.sizeY)) {
    if ((-1 < (short)param_5) && ((short)param_5 < g_worldGrid.sizeZ)) {
      if (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)(short)param_5 +
           (int)g_worldGrid.sizeX * (int)param_4 + (int)param_3].objects[0] != nullptr)
      {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_14 = CONCAT22(param_4,param_3);
        if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
          local_10 = (short)param_5;
          local_c = param_1;
          pSVar1 = thunk_FUN_0042b760(param_1->field_0024,param_1->field_007D);
          if (pSVar1 != nullptr) {
            pSVar1->sub_00498D20(0x12,&local_14);
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}


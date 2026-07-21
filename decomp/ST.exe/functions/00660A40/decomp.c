
undefined4 __thiscall FUN_00660a40(void *this,short param_1,short param_2,short param_3)

{
  STGroupBoatC *this_00;
  undefined4 local_8;

  *(undefined4 *)((int)this + 0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
      ((param_2 < g_worldGrid.sizeY && (-1 < param_3)))) && (param_3 < g_worldGrid.sizeZ)) {
    if (g_worldGrid.cells
        [(int)g_worldGrid.planeStride * (int)param_3 + (int)g_worldGrid.sizeX * (int)param_2 +
         (int)param_1].objects[0] != (STWorldObject *)0x0) {
      local_8 = *(undefined4 *)
                 &g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)param_3 +
                   (int)g_worldGrid.sizeX * (int)param_2 + (int)param_1].objects[0]->field_0x18;
      if ((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
      {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        this_00 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                     CONCAT22((short)((uint)local_8 >> 0x10),
                                              *(short *)((int)this + 0x7d)));
        if (this_00 != (STGroupBoatC *)0x0) {
          (*this_00->vtable->vfunc_08)(this_00,CASE_B,&local_8);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}


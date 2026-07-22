
undefined4 __thiscall FUN_00660910(void *this,short param_1,short param_2,short param_3)

{
  STWorldObject *pSVar1;
  undefined4 uVar2;
  STGroupBoatC *this_00;
  undefined1 local_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  undefined2 local_8;
  undefined1 local_6;

  *(undefined4 *)((int)this + 0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
      ((param_2 < g_worldGrid.sizeY && (-1 < param_3)))) && (param_3 < g_worldGrid.sizeZ)) {
    pSVar1 = g_worldGrid.cells
             [(int)g_worldGrid.planeStride * (int)param_3 + (int)g_worldGrid.sizeX * (int)param_2 +
              (int)param_1].objects[0];
    if (pSVar1 != (STWorldObject *)0x0) {
      local_c = *(undefined1 *)&pSVar1[1].vtable;
      uStack_b = *(undefined2 *)&pSVar1[1].field_0xe;
      uVar2 = *(undefined4 *)&pSVar1->field_0x18;
      uStack_9 = (undefined1)uVar2;
      local_8 = (undefined2)((uint)uVar2 >> 8);
      local_6 = (undefined1)((uint)uVar2 >> 0x18);
      if ((*(short *)((int)this + 0x7d) != -2) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        this_00 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                     CONCAT22((short)((uint)uVar2 >> 0x10),
                                              *(short *)((int)this + 0x7d)));
        if (this_00 != (STGroupBoatC *)0x0) {
          (*this_00->vtable->SetOrderData)(this_00,GROUP_BOAT_ORDER_0F,&local_c);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}


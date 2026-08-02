
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
    if (pSVar1 != nullptr) {
      local_c = *(undefined1 *)&pSVar1[1].vtable;
      uStack_b = *(undefined2 *)&pSVar1[1].field_0xe;
      uVar2 = *(undefined4 *)&pSVar1->field_0x18;
      uStack_9 = (undefined1)uVar2;
      local_8 = (undefined2)((uint)uVar2 >> 8);
      local_6 = (undefined1)((uint)uVar2 >> 0x18);
      if ((*(ushort *)((int)this + 0x7d) != 0xfffe) &&
         (g_allPlayers_007FA174 != nullptr)) {
        this_00 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),*(ushort *)((int)this + 0x7d));
        if (this_00 != nullptr) {
          this_00->sub_00498D20(0xf,&local_c);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}


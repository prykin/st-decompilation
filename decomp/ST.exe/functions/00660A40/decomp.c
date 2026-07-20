
undefined4 __thiscall FUN_00660a40(void *this,short param_1,short param_2,short param_3)

{
  STGroupBoatC *this_00;
  undefined4 local_8;
  
  *(undefined4 *)((int)this + 0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < SHORT_007fb240)) && (-1 < param_2)) &&
      ((param_2 < SHORT_007fb242 && (-1 < param_3)))) && (param_3 < SHORT_007fb244)) {
    if (g_worldCells
        [(int)SHORT_007fb246 * (int)param_3 + (int)SHORT_007fb240 * (int)param_2 + (int)param_1].
        objects[0] != (STWorldObject *)0x0) {
      local_8 = *(undefined4 *)
                 &g_worldCells
                  [(int)SHORT_007fb246 * (int)param_3 + (int)SHORT_007fb240 * (int)param_2 +
                   (int)param_1].objects[0]->field_0x18;
      if ((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
      {
        this_00 = thunk_FUN_0042b760(CONCAT31((int3)((uint)g_worldCells >> 8),
                                              *(undefined1 *)((int)this + 0x24)),
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


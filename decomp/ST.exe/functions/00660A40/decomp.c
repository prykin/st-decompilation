
undefined4 __thiscall FUN_00660a40(void *this,short param_1,short param_2,short param_3)

{
  int iVar1;
  STGroupBoatC *pSVar2;
  undefined4 local_8;
  
  *(undefined4 *)((int)this + 0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < SHORT_007fb240)) && (-1 < param_2)) &&
      ((param_2 < SHORT_007fb242 && (-1 < param_3)))) && (param_3 < SHORT_007fb244)) {
    iVar1 = *(int *)(DAT_007fb248 +
                    ((int)SHORT_007fb246 * (int)param_3 + (int)SHORT_007fb240 * (int)param_2 +
                    (int)param_1) * 8);
    if (iVar1 != 0) {
      local_8 = *(undefined4 *)(iVar1 + 0x18);
      if ((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
      {
        pSVar2 = thunk_FUN_0042b760(CONCAT31((int3)((uint)DAT_007fb248 >> 8),
                                             *(undefined1 *)((int)this + 0x24)),
                                    CONCAT22((short)((uint)local_8 >> 0x10),
                                             *(short *)((int)this + 0x7d)));
        if (pSVar2 != (STGroupBoatC *)0x0) {
          (*pSVar2->vtable->vfunc_08)(0xb,&local_8);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}


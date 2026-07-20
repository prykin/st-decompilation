
undefined4 __thiscall FUN_00660910(void *this,short param_1,short param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  STGroupBoatC *pSVar3;
  undefined1 local_c;
  undefined2 uStack_b;
  undefined1 uStack_9;
  undefined2 local_8;
  undefined1 local_6;
  
  *(undefined4 *)((int)this + 0xa7) = 0;
  if (((((-1 < param_1) && (param_1 < SHORT_007fb240)) && (-1 < param_2)) &&
      ((param_2 < SHORT_007fb242 && (-1 < param_3)))) && (param_3 < SHORT_007fb244)) {
    iVar1 = *(int *)(DAT_007fb248 +
                    ((int)SHORT_007fb246 * (int)param_3 + (int)SHORT_007fb240 * (int)param_2 +
                    (int)param_1) * 8);
    if (iVar1 != 0) {
      local_c = *(undefined1 *)(iVar1 + 0x24);
      uStack_b = *(undefined2 *)(iVar1 + 0x32);
      uVar2 = *(undefined4 *)(iVar1 + 0x18);
      uStack_9 = (undefined1)uVar2;
      local_8 = (undefined2)((uint)uVar2 >> 8);
      local_6 = (undefined1)((uint)uVar2 >> 0x18);
      if ((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
      {
        pSVar3 = thunk_FUN_0042b760(CONCAT31((int3)(CONCAT22((short)((uint)DAT_007fb248 >> 0x10),
                                                             uStack_b) >> 8),
                                             *(undefined1 *)((int)this + 0x24)),
                                    CONCAT22((short)((uint)uVar2 >> 0x10),
                                             *(short *)((int)this + 0x7d)));
        if (pSVar3 != (STGroupBoatC *)0x0) {
          (*pSVar3->vtable->vfunc_08)(0xf,&local_c);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}


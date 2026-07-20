
undefined4 __fastcall FUN_0065fd00(int param_1,undefined4 param_2)

{
  STGroupBoatC *pSVar1;
  
  if ((*(short *)(param_1 + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    pSVar1 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x24))
                                ,CONCAT22((short)((uint)param_2 >> 0x10),*(short *)(param_1 + 0x7d))
                               );
    if (pSVar1 != (STGroupBoatC *)0x0) {
      (*pSVar1->vtable->vfunc_08)(3,0);
      return 0;
    }
  }
  return 0xffffffff;
}



undefined4 __fastcall
FUN_00660b50(int param_1,undefined4 param_2,short param_3,short param_4,undefined4 param_5,
            int param_6)

{
  undefined3 uVar2;
  STGroupBoatC *pSVar1;
  short local_14;
  short sStack_12;
  short local_10;
  undefined4 local_c;
  short local_8;
  
  *(undefined4 *)(param_1 + 0xa7) = 0;
  uVar2 = (undefined3)((uint)param_1 >> 8);
  if (param_6 == 0) {
    local_8 = (short)param_5;
    local_c = CONCAT22(param_4,param_3);
    if ((*(short *)(param_1 + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      pSVar1 = thunk_FUN_0042b760(CONCAT31(uVar2,*(undefined1 *)(param_1 + 0x24)),
                                  CONCAT22((short)((uint)param_2 >> 0x10),*(short *)(param_1 + 0x7d)
                                          ));
      if (pSVar1 != (STGroupBoatC *)0x0) {
        (*pSVar1->vtable->vfunc_08)(0xc,&local_c);
        return 0;
      }
    }
  }
  else if ((((-1 < param_3) && (param_3 < SHORT_007fb240)) && (-1 < param_4)) &&
          (param_4 < SHORT_007fb242)) {
    if ((-1 < (short)param_5) && ((short)param_5 < SHORT_007fb244)) {
      if (*(int *)(DAT_007fb248 +
                  ((int)SHORT_007fb246 * (int)(short)param_5 + (int)SHORT_007fb240 * (int)param_4 +
                  (int)param_3) * 8) != 0) {
        _local_14 = CONCAT22(param_4,param_3);
        if ((*(short *)(param_1 + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
        {
          local_10 = (short)param_5;
          local_c = param_1;
          pSVar1 = thunk_FUN_0042b760(CONCAT31(uVar2,*(undefined1 *)(param_1 + 0x24)),
                                      CONCAT22((short)((uint)param_5 >> 0x10),
                                               *(short *)(param_1 + 0x7d)));
          if (pSVar1 != (STGroupBoatC *)0x0) {
            (*pSVar1->vtable->vfunc_08)(0x12,&local_14);
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}


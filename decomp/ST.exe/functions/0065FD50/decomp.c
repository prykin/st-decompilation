
undefined4 __thiscall
FUN_0065fd50(void *this,int param_1,int param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  STGroupBoatC *pSVar2;
  undefined4 extraout_EDX;
  short local_10 [3];
  undefined4 uStack_a;
  
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  uStack_a._0_2_ = 0;
  uStack_a._2_2_ = 0;
  *(undefined4 *)((int)this + 0xa7) = 0;
  iVar1 = thunk_FUN_00675950(param_1,param_2,param_3,local_10,local_10 + 1,local_10 + 2,0);
  if (iVar1 != 0) {
    if ((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      uStack_a = param_4;
      pSVar2 = thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                           *(undefined1 *)((int)this + 0x24)),
                                  CONCAT22((short)((uint)iVar1 >> 0x10),*(short *)((int)this + 0x7d)
                                          ));
      if (pSVar2 != (STGroupBoatC *)0x0) {
        (*pSVar2->vtable->vfunc_08)(1,local_10);
        return 0;
      }
    }
  }
  return 0xffffffff;
}


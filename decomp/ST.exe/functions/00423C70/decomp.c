
undefined4 __thiscall FUN_00423c70(void *this,short param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *this_00;
  uint uVar3;
  undefined4 extraout_EDX;
  uint uVar4;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined2 local_14;
  short local_12;
  undefined4 local_10;
  uint local_8;
  
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  uVar2 = 0xffffffff;
  if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
    uVar3 = 0;
    while( true ) {
      FUN_006acc70(*(int *)((int)this + 0x29),uVar3,&local_8);
      if ((short)local_8 == param_1) break;
      uVar4 = uVar4 + 1;
      uVar3 = uVar4 & 0xffff;
      if (uVar1 <= uVar3) {
        return 0xffffffff;
      }
    }
    this_00 = (void *)STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,
                                 CONCAT31((int3)((uint)extraout_EDX >> 8),
                                          *(undefined1 *)((int)this + 0x24)),local_8,CASE_1);
    thunk_FUN_00419c30(this_00,0xffff);
    local_8 = 0xffff;
    Library::DKW::TBL::FUN_006ae140(*(uint **)((int)this + 0x29),uVar4 & 0xffff,&local_8);
    *(short *)((int)this + 0x27) = *(short *)((int)this + 0x27) + -1;
    if (*(undefined4 **)((int)this + 0x1c) != (undefined4 *)0x0) {
      local_18 = 0x5d96;
      local_14 = 1;
      local_12 = param_1;
      local_10 = *(undefined4 *)((int)this_00 + 0x18);
      (**(code **)**(undefined4 **)((int)this + 0x1c))(local_28);
    }
    uVar2 = 0;
  }
  return uVar2;
}


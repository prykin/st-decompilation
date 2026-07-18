
undefined4 __thiscall thunk_FUN_00423c70(void *this,short param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *this_00;
  uint uVar3;
  undefined4 extraout_EDX;
  uint uVar4;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined2 uStack_14;
  short sStack_12;
  undefined4 uStack_10;
  uint uStack_8;
  
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  uVar2 = 0xffffffff;
  if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
    uVar3 = 0;
    while( true ) {
      FUN_006acc70(*(int *)((int)this + 0x29),uVar3,&uStack_8);
      if ((short)uStack_8 == param_1) break;
      uVar4 = uVar4 + 1;
      uVar3 = uVar4 & 0xffff;
      if (uVar1 <= uVar3) {
        return 0xffffffff;
      }
    }
    this_00 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                  *(undefined1 *)((int)this + 0x24)),uStack_8,1);
    thunk_FUN_00419c30(this_00,0xffff);
    uStack_8 = 0xffff;
    FUN_006ae140(*(uint **)((int)this + 0x29),uVar4 & 0xffff,&uStack_8);
    *(short *)((int)this + 0x27) = *(short *)((int)this + 0x27) + -1;
    if (*(undefined4 **)((int)this + 0x1c) != (undefined4 *)0x0) {
      uStack_18 = 0x5d96;
      uStack_14 = 1;
      sStack_12 = param_1;
      uStack_10 = *(undefined4 *)((int)this_00 + 0x18);
      (**(code **)**(undefined4 **)((int)this + 0x1c))(auStack_28);
    }
    uVar2 = 0;
  }
  return uVar2;
}


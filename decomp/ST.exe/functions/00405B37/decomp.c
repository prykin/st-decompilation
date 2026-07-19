
uint __thiscall thunk_FUN_006216e0(void *this,undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  
  uStack_14 = 0;
  uStack_8 = (undefined1)((uint)param_1 >> 0x18);
  iStack_10 = *(int *)(DAT_00802a38 + 0xe4) << 8;
  uStack_c._0_1_ = (undefined1)((uint)*(int *)(DAT_00802a38 + 0xe4) >> 0x18);
  uStack_c = CONCAT31((int3)param_1,(undefined1)uStack_c);
  if (*(int *)((int)this + 0x10a) == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xd,10);
    *(uint **)((int)this + 0x10a) = puVar1;
  }
  if (*(uint **)((int)this + 0x10a) != (uint *)0x0) {
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x10a),&uStack_14);
    return uVar2;
  }
  return 0xffffffff;
}


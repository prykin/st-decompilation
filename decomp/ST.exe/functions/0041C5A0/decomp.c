
void __thiscall sub_0041C5A0(void *this)

{
  undefined4 uVar1;

  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) &&
     ((*(byte *)((int)this + 0x1d1) & 1) == 0)) {
    VisibleClassTy::sub_00559110
              (g_visibleClass_00802A88,(int)*(short *)((int)this + 0x5b),
               (undefined *)(int)*(short *)((int)this + 0x5d),(int)*(short *)((int)this + 0x5f),
               *(uint *)((int)this + 0x24),*(int *)((int)this + 0x101),*(int *)((int)this + 0x18),
               0xffffffff);
    if (*(int *)((int)this + 0x20) == 0x14) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005594A0::thunk_FUN_00559620
                ((AnonReceiver_005594A0 *)g_visibleClass_00802A88,(int)*(short *)((int)this + 0x5b),
                 (int)*(short *)((int)this + 0x5d),(char)*(undefined2 *)((int)this + 0x5f),
                 *(undefined **)((int)this + 0x24),*(int *)((int)this + 0x105),
                 *(undefined4 *)((int)this + 0x18),0xffffffff);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*(int *)this + 0x2c))();
    switch(uVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case 5:
    case 0x11:
    case 0x21:
      (**(code **)(*(int *)this + 0x98))();
      break;
    case 0xb:
    case 0x23:
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00559D60::thunk_FUN_00559d60
                ((AnonReceiver_00559D60 *)g_visibleClass_00802A88,(int)*(short *)((int)this + 0x5b),
                 (int)*(short *)((int)this + 0x5d),(char)*(undefined2 *)((int)this + 0x5f),
                 *(uint *)((int)this + 0x24),*(undefined **)((int)this + 0x10d),
                 *(undefined4 *)((int)this + 0x18));
      return;
    }
  }
  return;
}


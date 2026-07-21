
void __thiscall FUN_0041c3f0(void *this,undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((-1 < (int)param_1) &&
      (*(undefined **)((int)this + 0x101) = param_1,
      g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) &&
     ((*(byte *)((int)this + 0x1d1) & 1) == 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_00558dc0(g_visibleClass_00802A88,(int)*(short *)((int)this + 0x5b),
                       (int)*(short *)((int)this + 0x5d),
                       (undefined *)(int)*(short *)((int)this + 0x5f),*(int **)((int)this + 0x24),
                       (uint)param_1,*(int **)((int)this + 0x18),0xffffffff);
    if (*(int *)((int)this + 0x20) == 0x14) {
      iVar1 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),10);
      if (iVar1 < 1) {
        *(undefined4 *)((int)this + 0x105) = *(undefined4 *)((int)this + 0x101);
      }
      else {
        *(int *)((int)this + 0x105) = *(int *)((int)this + 0x101) << 1;
      }
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::thunk_FUN_005594a0
                ((AnonReceiver_00558C00 *)g_visibleClass_00802A88,(int)*(short *)((int)this + 0x5b),
                 (int)*(short *)((int)this + 0x5d),(char)*(undefined2 *)((int)this + 0x5f),
                 *(undefined **)((int)this + 0x24),*(int *)((int)this + 0x105),
                 *(undefined4 *)((int)this + 0x18),0xffffffff);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*(int *)this + 0x2c))();
    switch(uVar2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case 5:
    case 0x11:
    case 0x21:
      (**(code **)(*(int *)this + 0x94))();
      break;
    case 0xb:
    case 0x23:
      *(int *)((int)this + 0x10d) = *(int *)((int)this + 0x101);
      VisibleClassTy::SetZoneAst
                (g_visibleClass_00802A88,(int)*(short *)((int)this + 0x5b),
                 (int)*(short *)((int)this + 0x5d),(char)*(undefined2 *)((int)this + 0x5f),
                 *(uint *)((int)this + 0x24),*(int *)((int)this + 0x101),
                 *(undefined4 *)((int)this + 0x18),0xffffffff);
      return;
    }
  }
  return;
}


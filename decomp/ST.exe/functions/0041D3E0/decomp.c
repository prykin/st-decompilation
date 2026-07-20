
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041d3e0(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0x111) = param_1;
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    VisibleClassTy::SetZoneTsh
              (g_visibleClass_00802A88,(int)*(short *)((int)this + 0x5b),
               (int)*(short *)((int)this + 0x5d),(char)*(undefined2 *)((int)this + 0x5f),
               *(uint *)((int)this + 0x24),param_1,*(undefined4 *)((int)this + 0x18),0xffffffff);
  }
  iVar1 = (**(code **)(*(int *)this + 8))();
  if ((iVar1 == 1) && (*(uint *)((int)this + 0x24) == (uint)DAT_0080874d)) {
    FUN_006e6710(DAT_00807598,
                 (float)(int)*(short *)((int)this + 0x41) * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                 (uint)((float)*(int *)((int)this + 0x109) * _DAT_007904f8 + _DAT_007904f4),0x22,
                 CONCAT22(CONCAT11(3,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                          *(undefined2 *)((int)this + 0x18)));
  }
  return;
}


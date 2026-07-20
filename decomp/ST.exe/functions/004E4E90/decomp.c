
undefined4 __thiscall FUN_004e4e90(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && (0x27 < *(int *)((int)this + 0x4d4))) {
    iVar1 = thunk_FUN_0055ad00(g_visibleClass_00802A88,param_1,param_2,2,*(uint *)((int)this + 0x24)
                               ,7);
    if (iVar1 == 0) {
      VisibleClassTy::VisHoleCreate
                (g_visibleClass_00802A88,param_1,param_2,(undefined *)0x2,
                 *(uint *)((int)this + 0x24),(undefined *)0x7,500);
      *(undefined4 *)((int)this + 0x4d4) = 0;
      *(undefined4 *)((int)this + 0x4d8) = PTR_00802a38->field_00E4;
    }
  }
  return 0;
}


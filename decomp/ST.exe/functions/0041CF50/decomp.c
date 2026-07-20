
void __fastcall FUN_0041cf50(int *param_1)

{
  int iVar1;
  
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    thunk_FUN_00559620(g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x5b),
                       (int)*(short *)((int)param_1 + 0x5d),
                       (char)*(undefined2 *)((int)param_1 + 0x5f),(undefined *)param_1[9],
                       *(int *)((int)param_1 + 0x105),param_1[6],0xffffffff);
  }
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((iVar1 == 1) && (param_1[9] == (uint)DAT_0080874d)) {
    FUN_006e6780(DAT_00807598,
                 ((uint)param_1[6] >> 0x10 & 0xff) << 0x10 | (uint)*(ushort *)(param_1 + 6));
  }
  *(undefined4 *)((int)param_1 + 0x105) = 0xffffffff;
  return;
}


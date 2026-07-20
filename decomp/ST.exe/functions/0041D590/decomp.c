
void __fastcall FUN_0041d590(int param_1)

{
  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) && ((*(byte *)(param_1 + 0x1d1) & 1) == 0))
  {
    VisibleClassTy::VisHoleCreate
              (g_visibleClass_00802A88,(int)*(short *)(param_1 + 0x5b),
               (int)*(short *)(param_1 + 0x5d),(undefined *)(int)*(short *)(param_1 + 0x5f),
               *(uint *)(param_1 + 0x24),*(undefined **)(param_1 + 0x101),0x19);
  }
  return;
}


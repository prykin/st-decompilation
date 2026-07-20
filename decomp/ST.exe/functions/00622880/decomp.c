
void __fastcall FUN_00622880(int *param_1)

{
  byte bVar1;
  
  thunk_FUN_004ad310((int)param_1 + 0x1d5);
  bVar1 = *(byte *)((int)param_1 + 0x2ad);
  if (bVar1 < 3) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      thunk_FUN_00559110(g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x47),
                         (undefined *)(int)*(short *)((int)param_1 + 0x49),
                         (int)*(short *)((int)param_1 + 0x4b),param_1[9],
                         *(int *)(&DAT_007d02b4 + (uint)bVar1 * 4),param_1[6],0xffffffff);
    }
  }
  else if ((bVar1 == 3) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    thunk_FUN_00559110(g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x47),
                       (undefined *)(int)*(short *)((int)param_1 + 0x49),
                       (int)*(short *)((int)param_1 + 0x4b),param_1[9],DAT_007d02c0,param_1[6],
                       0xffffffff);
    if ((-1 < *(short *)((int)param_1 + 0x5b)) &&
       ((-1 < *(short *)((int)param_1 + 0x5d) && (-1 < *(short *)((int)param_1 + 0x5f))))) {
      thunk_FUN_0041d2b0(param_1);
    }
  }
  if (*(byte **)((int)param_1 + 0x34a) != (byte *)0x0) {
    FUN_006ae110(*(byte **)((int)param_1 + 0x34a));
    *(undefined4 *)((int)param_1 + 0x34a) = 0;
  }
  return;
}


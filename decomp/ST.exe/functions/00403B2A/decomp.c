
void __fastcall thunk_FUN_005718d0(int param_1)

{
  int iVar1;
  void *unaff_ESI;
  undefined4 in_stack_fffffe9c;
  undefined4 *puStack_60;
  undefined4 auStack_5c [16];
  undefined4 auStack_1c [4];
  int iStack_c;
  LPBITMAPINFO ptStack_8;
  
  ptStack_8 = (LPBITMAPINFO)0x0;
  if (*(int *)(param_1 + 0x4efa) == 0) {
    puStack_60 = DAT_00858df8;
    DAT_00858df8 = &puStack_60;
    iStack_c = param_1;
    iVar1 = __setjmp3(auStack_5c,0,unaff_ESI,in_stack_fffffe9c);
    if (iVar1 == 0) {
      FUN_006bd740(DAT_008075a8);
      FUN_006c4630(DAT_0080759c,*(int **)(DAT_0080759c + 0x44),auStack_1c);
      ptStack_8 = FUN_006c4880(DAT_0080759c,0,0,DAT_00806730,DAT_00806734,DAT_00806738);
      FUN_006c44e0(DAT_0080759c,auStack_1c);
      iVar1 = iStack_c;
      if (ptStack_8 != (LPBITMAPINFO)0x0) {
        wsprintfA(&stack0xfffffe9c,s__sscr_03d_bmp_007ca2e8,iStack_c + 0x60,
                  (uint)*(ushort *)(iStack_c + 0x1138));
        FUN_006c4230(&stack0xfffffe9c,ptStack_8,(LPCVOID)0x0);
        *(short *)(iVar1 + 0x1138) = *(short *)(iVar1 + 0x1138) + 1;
        FUN_006ab060(&ptStack_8);
      }
      DAT_00858df8 = puStack_60;
      return;
    }
    DAT_00858df8 = puStack_60;
  }
  return;
}


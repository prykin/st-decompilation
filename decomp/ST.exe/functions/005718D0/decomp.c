
void __fastcall FUN_005718d0(int param_1)

{
  int iVar1;
  void *unaff_ESI;
  undefined4 in_stack_fffffe9c;
  InternalExceptionFrame local_60;
  undefined4 local_1c [4];
  int local_c;
  LPBITMAPINFO local_8;
  
  local_8 = (LPBITMAPINFO)0x0;
  if (*(int *)(param_1 + 0x4efa) == 0) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_c = param_1;
    iVar1 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_ESI,in_stack_fffffe9c);
    if (iVar1 == 0) {
      Library::DKW::DDX::FUN_006bd740(DAT_008075a8);
      Library::DKW::DDX::FUN_006c4630(DAT_0080759c,*(int **)(DAT_0080759c + 0x44),local_1c);
      local_8 = Library::DKW::DDX::FUN_006c4880
                          (DAT_0080759c,0,0,g_nWidth_00806730,DAT_00806734,DAT_00806738);
      Library::DKW::DDX::FUN_006c44e0(DAT_0080759c,local_1c);
      iVar1 = local_c;
      if (local_8 != (LPBITMAPINFO)0x0) {
        wsprintfA(&stack0xfffffe9c,s__sscr_03d_bmp_007ca2e8,local_c + 0x60,
                  (uint)*(ushort *)(local_c + 0x1138));
        Library::DKW::WGR::FUN_006c4230(&stack0xfffffe9c,local_8,(LPCVOID)0x0);
        *(short *)(iVar1 + 0x1138) = *(short *)(iVar1 + 0x1138) + 1;
        FUN_006ab060(&local_8);
      }
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
  }
  return;
}


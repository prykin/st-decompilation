
void __fastcall FUN_005718d0(int param_1)

{
  int iVar1;
  CHAR local_164 [260];
  InternalExceptionFrame local_60;
  undefined4 local_1c [4];
  int local_c;
  LPBITMAPINFO local_8;

  local_8 = (LPBITMAPINFO)0x0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4efa) == 0) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_c = param_1;
    iVar1 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
    if (iVar1 == 0) {
      Library::DKW::DDX::FUN_006bd740((int *)PTR_008075a8);
      Library::DKW::DDX::FUN_006c4630(DAT_0080759c,*(int **)(DAT_0080759c + 0x44),local_1c);
      local_8 = Library::DKW::DDX::FUN_006c4880
                          (DAT_0080759c,0,0,g_nWidth_00806730,DAT_00806734,DAT_00806738);
      Library::DKW::DDX::FUN_006c44e0(DAT_0080759c,local_1c);
      iVar1 = local_c;
      if (local_8 != (LPBITMAPINFO)0x0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        wsprintfA(local_164,"%sscr%03d.bmp",local_c + 0x60,
                  (uint)*(ushort *)(local_c + 0x1138));
        Library::DKW::WGR::FUN_006c4230(local_164,local_8,(LPCVOID)0x0);
        *(short *)(iVar1 + 0x1138) = *(short *)(iVar1 + 0x1138) + 1;
        FreeAndNull(&local_8);
      }
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
  }
  return;
}


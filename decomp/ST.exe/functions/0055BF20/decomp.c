
void __thiscall FUN_0055bf20(void *this,undefined4 param_1)

{
  CFsgsConnection *value;
  CFsgsConnection *pCVar1;
  int iVar2;
  char *pcVar3;
  BITMAPINFO *pBVar4;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  CFsgsConnection *local_c;
  tagBITMAPINFO *local_8;

  *(undefined4 *)((int)this + 0x3c) = param_1;
  local_8 = (tagBITMAPINFO *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar1 = local_c;
  if (iVar2 == 0) {
    pcVar3 = CFsgsConnection::GetIconFilename(local_c);
    if (pcVar3 != (char *)0x0) {
      pcVar3 = CFsgsConnection::GetIconFilename(pCVar1);
      local_8 = (tagBITMAPINFO *)Library::DKW::WGR::FUN_006bc260(pcVar3);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (tagBITMAPINFO *)0x0) {
    g_currentExceptionFrame = &local_94;
    local_94.previous = local_50.previous;
    iVar2 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0);
    pCVar1 = local_c;
    if (iVar2 == 0) {
      value = local_c + 0x40;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(local_c + 0x40) != 0) {
        FreeAndNull((void **)value);
      }
      pBVar4 = Library::DKW::WGR::FUN_006bbfa0
                         (local_8,(undefined4 *)0x0,*(HPALETTE *)(pCVar1 + 0x3c));
      *(BITMAPINFO **)value = pBVar4;
      g_currentExceptionFrame = local_94.previous;
      FreeAndNull(&local_8);
      return;
    }
    g_currentExceptionFrame = local_94.previous;
    FreeAndNull(&local_8);
  }
  return;
}


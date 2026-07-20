
int __cdecl FUN_00552f50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int iVar3;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  LPVOID local_8;
  
  local_8 = (LPVOID)0x0;
  if (param_1 < 0) {
    return 0;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    iVar1 = param_1 * 2 + 1;
    local_8 = (LPVOID)Library::DKW::LIB::FUN_006aac70(iVar1 * iVar1);
    local_10 = 0;
    local_c = 0;
    if (0 < iVar1) {
      do {
        iVar3 = 0;
        do {
          iVar2 = FUN_006aced8(param_1,param_1,iVar3,local_c);
          *(bool *)(local_10 + (int)local_8) = iVar2 <= param_1;
          local_10 = local_10 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
        local_c = local_c + 1;
      } while (local_c < iVar1);
    }
    g_currentExceptionFrame = local_54.previous;
    return (int)local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  if (local_8 == (LPVOID)0x0) {
    FUN_006ab060(&local_8);
  }
  return (int)local_8;
}


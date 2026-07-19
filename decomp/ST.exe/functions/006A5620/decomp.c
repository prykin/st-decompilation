
BOOL __cdecl FUN_006a5620(int param_1)

{
  void *lpMem;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lpMem = (void *)(param_1 + -0x20);
  iVar1 = thunk_FUN_006a55d0(lpMem,0x20,1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = Library::MSVCRT::FUN_00731ae0((int)lpMem);
  if (uVar2 != 0) {
    BVar3 = Library::MSVCRT::FUN_00731b40(uVar2,(int)lpMem);
    return BVar3;
  }
  if ((DAT_00857154 & 0x8000) != 0) {
    return 1;
  }
  BVar3 = HeapValidate(DAT_0085a5c4,0,lpMem);
  return BVar3;
}


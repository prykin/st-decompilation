
undefined4 __cdecl FUN_00761960(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    local_8 = GetLastError();
  }
  else {
    local_8 = 0;
  }
  if (local_8 == 0) {
    uVar2 = 0;
  }
  else {
    Library::MSVCRT::__dosmaperr(local_8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


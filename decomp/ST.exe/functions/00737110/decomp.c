
undefined4 __cdecl FUN_00737110(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  ulong local_8;
  
  if ((DAT_0085a2dc <= param_1) ||
     ((*(byte *)((&DAT_0085a1a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) == 0)) {
    DAT_00857148 = 9;
    DAT_0085714c = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_00740f30(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_00740f30(1);
      iVar2 = FUN_00740f30(2);
      if (iVar1 == iVar2) goto LAB_007371a9;
    }
    hObject = (HANDLE)FUN_00740f30(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_007371bb;
    }
  }
LAB_007371a9:
  local_8 = 0;
LAB_007371bb:
  FUN_00740e60(param_1);
  *(undefined1 *)((&DAT_0085a1a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


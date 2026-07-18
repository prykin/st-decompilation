
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  byte *pbVar3;
  HMODULE pHVar4;
  UINT UVar5;
  undefined4 uVar6;
  uint local_70;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  _EXCEPTION_POINTERS *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_007a0160;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff84;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_00857160 = DVar1 >> 8 & 0xff;
  DAT_0085715c = DVar1 & 0xff;
  _DAT_00857158 = DAT_0085715c * 0x100 + _DAT_00857160;
  DAT_00857154 = DVar1 >> 0x10;
  iVar2 = FUN_00731960(0);
  if (iVar2 == 0) {
    FUN_00733880(0x1c);
  }
  local_8 = 0;
  FUN_0073dc60();
  DAT_0085a594 = GetCommandLineA();
  DAT_008571d8 = FUN_0073da40();
  FUN_0073d530();
  FUN_0073d3e0();
  FUN_0072ef40();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  pbVar3 = FUN_0073d320();
  if ((local_60.dwFlags & 1) == 0) {
    local_70 = 10;
  }
  else {
    local_70 = local_60._48_4_ & 0xffff;
  }
  uVar6 = 0;
  pHVar4 = GetModuleHandleA((LPCSTR)0x0);
  UVar5 = thunk_FUN_00575a10(pHVar4,uVar6,pbVar3,local_70);
  FUN_0072ef80(UVar5);
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


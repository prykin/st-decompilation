
HRESULT FUN_006c3800(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  int iVar3;
  LONG LVar4;
  
  *param_1 = 0;
  puVar1 = FUN_006aac10(0x520);
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  HVar2 = CoInitialize((LPVOID)0x0);
  if (HVar2 < 0) {
    FUN_006a5e90(puVar1);
    FUN_006a5e40(HVar2,DAT_007ed77c,0x7ede80,0x196);
    return HVar2;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x142));
  puVar1[10] = param_2;
  puVar1[0x1e] = param_3;
  puVar1[0x20] = param_4;
  iVar3 = FUN_006c38d0(DAT_008568d0,param_3);
  if (iVar3 == 0) {
    LVar4 = SetWindowLongA((HWND)puVar1[0x1e],-4,0x6c38f0);
  }
  else {
    LVar4 = *(LONG *)(iVar3 + 0x88);
  }
  puVar1[0x22] = LVar4;
  *puVar1 = DAT_008568d0;
  DAT_008568d0 = puVar1;
  *param_1 = puVar1;
  return 0;
}


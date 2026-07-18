
void FUN_006c3aa0(int *param_1)

{
  int iVar1;
  
  FUN_006c3570((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x142));
  FUN_006b98c0((int *)&DAT_008568d0,param_1);
  iVar1 = FUN_006c38d0(DAT_008568d0,param_1[0x1e]);
  if (iVar1 == 0) {
    SetWindowLongA((HWND)param_1[0x1e],-4,param_1[0x22]);
  }
  FUN_006a5e90(param_1);
  CoUninitialize();
  return;
}


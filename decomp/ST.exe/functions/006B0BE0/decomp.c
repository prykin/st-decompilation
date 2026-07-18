
undefined4 FUN_006b0be0(int param_1,tagPALETTEENTRY *param_2,UINT param_3,UINT param_4)

{
  int *piVar1;
  undefined4 uVar2;
  HDC hdc;
  tagPALETTEENTRY local_404 [256];
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x3c), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,param_3,param_4,param_2);
    hdc = GetDC((HWND)0x0);
    GetSystemPaletteEntries(hdc,param_3,param_4,local_404);
    ReleaseDC((HWND)0x0,hdc);
    if (0 < (int)param_4) {
      do {
        if ((param_2->peFlags & 2) != 0) {
          *param_2 = local_404[param_2->peRed];
        }
        param_2 = param_2 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    return uVar2;
  }
  return 0xffffffaf;
}



/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006B0BE0 -> EXTERNAL:000000A8 @ 006B0C25
   
   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006B0BE0 -> EXTERNAL:000000A8 @ 006B0C25 */

undefined4 FUN_006b0be0(int param_1,tagPALETTEENTRY *param_2,UINT iStart,UINT cEntries)

{
  int *piVar1;
  undefined4 uVar2;
  HDC hdc;
  tagPALETTEENTRY *local_404;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x3c), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,iStart,cEntries,param_2);
    hdc = GetDC((HWND)0x0);
    GetSystemPaletteEntries(hdc,iStart,cEntries,(LPPALETTEENTRY)&local_404);
    ReleaseDC((HWND)0x0,hdc);
    if (0 < (int)cEntries) {
      do {
        if ((param_2->peFlags & 2) != 0) {
          *param_2 = *(tagPALETTEENTRY *)(&local_404 + param_2->peRed);
        }
        param_2 = param_2 + 1;
        cEntries = cEntries - 1;
      } while (cEntries != 0);
    }
    return uVar2;
  }
  return 0xffffffaf;
}


#include "../../pseudocode_runtime.h"


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

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x3c), piVar1 != nullptr)) {
    /* ST_CALLSITE[006B0C0B]: CALL dword ptr [ECX + 0x10] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,iStart,cEntries,param_2);
    /* ST_CALLSITE[006B0C13]: CALL dword ptr [0x0085be4c] */
    hdc = GetDC((HWND)0x0);
    /* ST_CALLSITE[006B0C25]: CALL dword ptr [0x0085ba80] */
    GetSystemPaletteEntries(hdc,iStart,cEntries,(LPPALETTEENTRY)&local_404);
    /* ST_CALLSITE[006B0C2E]: CALL dword ptr [0x0085be48] */
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


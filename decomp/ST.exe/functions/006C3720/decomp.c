#include "../../pseudocode_runtime.h"


undefined4 FUN_006c3720(WPARAM param_1)

{
  uint uVar1;
  WPARAM WVar2;
  LPARAM lParam;
  DWORD DVar3;
  int iVar4;
  undefined1 local_c [4];
  LPARAM local_8;

  WVar2 = param_1;
  /* ST_CALLSITE[006C3731]: CALL dword ptr [0x0085bce0] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x74),0xffffffff);
  while (DVar3 == 0) {
    /* ST_CALLSITE[006C3747]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)(WVar2 + 0x508));
    /* ST_CALLSITE[006C3761]: CALL dword ptr [ECX + 0x20] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar4 = (**(code **)(**(int **)(WVar2 + 0x58) + 0x20))
                      (*(int **)(WVar2 + 0x58),&param_1,&local_8,local_c,0);
    lParam = local_8;
    if (iVar4 == 0) {
      uVar1 = *(uint *)(WVar2 + 4);
      if (((int)param_1 < 1) || (3 < (int)param_1)) {
        param_1 = 0;
      }
      else {
        Library::DKW::DV::FUN_006c4110((AnonShape_006C3FC0_72DDFA27 *)WVar2);
        if ((param_1 != 0) && ((uVar1 & 0x20000000) != 0)) {
          /* ST_CALLSITE[006C379C]: CALL dword ptr [0x0085be5c] */
          PostMessageA(*(HWND *)(WVar2 + 0x78),*(UINT *)(WVar2 + 0x80),param_1,lParam);
        }
      }
    }
    /* ST_CALLSITE[006C37A9]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)(WVar2 + 0x508));
    /* ST_CALLSITE[006C37B5]: CALL dword ptr [0x0085bce0] */
    DVar3 = WaitForSingleObject(*(HANDLE *)(WVar2 + 0x74),0xffffffff);
  }
  /* ST_CALLSITE[006C37C7]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)(WVar2 + 0x508));
  *(undefined4 *)(WVar2 + 0x84) = 0;
  /* ST_CALLSITE[006C37D8]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)(WVar2 + 0x508));
  return 0;
}


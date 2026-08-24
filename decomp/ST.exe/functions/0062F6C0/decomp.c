#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0062f6c0(void *this,int param_1)

{
  int *slotStorage;
  int iVar1;
  STT3DSprC *pSVar2;
  uint uVar3;
  uVar3 = 0;
  if ((-1 < param_1) && (param_1 < 5)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
    slotStorage = (int *)((int)this + param_1 * 4 + 0x1e5);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      if ((iVar1 == 3) || (iVar1 == 6)) {
        /* ST_CALLSITE[0062F702]: CALL 0x004050c9; direct=004050C9 STRubbishC::sub_00630260 */
        STRubbishC::sub_00630260(this,param_1,0);
      }
      pSVar2 = *(STT3DSprC **)(*slotStorage + 0x10);
      if (pSVar2 != nullptr) {
        thunk_FUN_004ad310(pSVar2);
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)pSVar2);
        *(undefined4 *)(*slotStorage + 0x10) = 0;
      }
      uVar3 = 1;
      STField<int>(this,0x1e1) = STField<int>(this,0x1e1) + -1;
      FreeAndNull(slotStorage);
      *slotStorage = 0;
    }
    if (STField<int>(this,0x1e1) == 0) {
      STField<undefined4>(this,0x1fa) = 2;
    }
    return uVar3;
  }
  return 0;
}


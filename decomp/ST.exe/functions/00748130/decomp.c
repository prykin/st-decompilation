#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DC74+0x1C

   [STVTableApplier] Virtual slot 0079DE90+0x1C

   [STVTableApplier] Virtual slot 007A14C8+0x1C

   [STVTableApplier] Virtual slot 007A1780+0x1C

   [STVTableApplier] Virtual slot 007A1820+0x1C

   [STVTableApplier] Virtual slot 007A1908+0x1C

   [STVTableApplier] Virtual slot 007A19A8+0x1C */

undefined4 FUN_00748130(int param_1,AnonShape_0074BC89_92881050 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
    /* ST_CALLSITE[00748148]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_0074bb83((undefined4 *)param_2);
      /* ST_CALLSITE[00748176]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0x80040209;
    }
    else {
      FUN_0074bc89(param_2,(undefined4 *)(param_1 + 0x10));
      /* ST_CALLSITE[00748162]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      uVar1 = 0;
    }
  }
  return uVar1;
}


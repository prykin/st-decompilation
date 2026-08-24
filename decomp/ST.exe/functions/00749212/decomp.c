#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DCF8+0x1C

   [STVTableApplier] Virtual slot 007A11A0+0x1C */

undefined4 FUN_00749212(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;

  *param_2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0xc) & param_1 + 4U);
  do {
    /* ST_CALLSITE[0074922D]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x44) == 0) {
      /* ST_CALLSITE[00749270]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      return 0x80040211;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_0074924d:
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x1c);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      if (iVar1 == 0) goto LAB_0074924d;
    }
    /* ST_CALLSITE[00749251]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x44) = 1;
      *param_2 = iVar1;
      return 0;
    }
    if ((param_5 & 4) != 0) {
      return 0x8004022e;
    }
    /* ST_CALLSITE[00749267]: CALL dword ptr [0x0085bce0] */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x24),0xffffffff);
  } while( true );
}


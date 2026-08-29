#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00575A10 -> 006AD190 @ 00575A7C */

undefined4 FUN_006ad190(undefined4 param_1,char *text,int param_3)

{
  int *piVar1;
  char *pcVar2;

  if (DAT_00854a98 == 0) {

    Library::MSVCRT::FUN_0072ece0(0x6ad250);
    DAT_00854a98 = 1;
  }
  DAT_00854eac = param_1;
  if (g_int_00854EB4 != nullptr) {

    Library::MSVCRT::FUN_0072ea90(g_int_00854EB4);
    g_int_00854EB4 = nullptr;
  }
  if ((text != nullptr) && (*text != '\0')) {
    pcVar2 = &DAT_007ed7b0;
    if (param_3 == 0) {
      pcVar2 = &DAT_007ed7ac;
    }
    /* ST_CALLSITE[006AD1F7]: CALL 0x0072ea70; direct=0072EA70 Library::MSVCRT::FUN_0072ea70; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__cdecl;pointer:/int;/winnt.h/LPCSTR;pointer:/char */
    piVar1 = Library::MSVCRT::FUN_0072ea70(text,pcVar2);
    if (piVar1 == nullptr) {
      return DAT_00857148;
    }
    /* ST_CALLSITE[006AD214]: CALL dword ptr [0x0085bbac] */
    GetLocalTime((LPSYSTEMTIME)&DAT_00854a88);
    g_int_00854EB4 = piVar1;
    DAT_007ed79c = 1;
    DAT_00854ebc = 0;
    return 0;
  }
  DAT_00854ebc = 1;
  return 0;
}


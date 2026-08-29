#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00636170(void)

{
  int *piVar1;
  int iVar2;

  /* ST_CALLSITE[00636186]: CALL 0x0072ea70; direct=0072EA70 Library::MSVCRT::FUN_0072ea70; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__cdecl;pointer:/int;/winnt.h/LPCSTR;pointer:/char */
  piVar1 = Library::MSVCRT::FUN_0072ea70("NumbM.dat",&DAT_007d1d98);
  if (piVar1 != nullptr) {

    iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
    if (iVar2 < 1) {

      Library::MSVCRT::FUN_0072ea90(piVar1);
      _DAT_007d1bb0 = 0xffffffff;
      return 0;
    }

    Library::MSVCRT::FUN_0072ea90(piVar1);
    _DAT_007d1bb0 = 0xffffffff;
  }
  return 0;
}


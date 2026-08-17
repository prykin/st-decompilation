#include "../../pseudocode_runtime.h"


void __fastcall FUN_00423e00(void *param_1)

{
  DArrayTy *groupContent;

  /* ST_CALLSITE[00423E04]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent */
  groupContent = (DArrayTy *)STGroupC::GetGroupContent(param_1);
  thunk_FUN_00423d80(param_1,groupContent);
  DArrayDestroy(groupContent);
  return;
}


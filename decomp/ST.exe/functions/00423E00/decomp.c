#include "../../pseudocode_runtime.h"


void __fastcall FUN_00423e00(void *param_1)

{
  DArrayTy *groupContent;

  groupContent = (DArrayTy *)STGroupC::GetGroupContent(param_1);
  thunk_FUN_00423d80(param_1,groupContent);
  DArrayDestroy(groupContent);
  return;
}


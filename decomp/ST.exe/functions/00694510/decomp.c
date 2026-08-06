#include "../../pseudocode_runtime.h"


char * __fastcall FUN_00694510(void *param_1)

{
  char *pcVar1;
  int iVar2;

  STField<undefined4>(param_1,0x199d) = 0xffffffff;
  while( true ) {
    iVar2 = STField<int>(param_1,0x199d) + 1;
    STField<int>(param_1,0x199d) = iVar2;
    while( true ) {
      if (7 < iVar2) {
        return nullptr;
      }
      iVar2 = thunk_FUN_00693e60(param_1,iVar2);
      if (iVar2 != 0) break;
      iVar2 = STField<int>(param_1,0x199d) + 1;
      STField<int>(param_1,0x199d) = iVar2;
    }
    pcVar1 = (char *)thunk_FUN_00693e60(param_1,STField<int>(param_1,0x199d));
    if (pcVar1 == nullptr) break;
    if (*pcVar1 == '\0') {
      return pcVar1;
    }
  }
  return nullptr;
}


#include "../../pseudocode_runtime.h"


int __cdecl FUN_0067fce0(byte *param_1)

{
  uint uVar1;
  RecoveredGlobalRecordView_00848A14 *pRVar2;


  uVar1 = thunk_FUN_0067fc10(param_1);
  if (-1 < (int)uVar1) {
    pRVar2 = thunk_FUN_0067fca0(uVar1);
    return (int)pRVar2;
  }
  return 0;
}


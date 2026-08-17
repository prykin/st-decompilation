#include "../../pseudocode_runtime.h"


int __thiscall FUN_004e3790(void *this,uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  /* ST_CALLSITE[004E37A6]: CALL 0x00405ace; direct=00405ACE TLOBaseTy::sub_004C7860 */
  iVar1 = TLOBaseTy::sub_004C7860(this,2,param_1,1,param_3,1);
  if (iVar1 != 0) {
    iVar2 = thunk_FUN_004e60d0(STField<int>(this,0x24),param_1);
    if (iVar2 != param_2 + -1) {
      return 0;
    }
  }
  return iVar1;
}


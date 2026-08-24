#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall FUN_00636060(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  cVar1 = STField<char>(this,4);
  uVar2 = thunk_FUN_00635bf0(param_1,param_2,param_3);
  STField<char>(this,4) = (char)uVar2;
  switch(STField<undefined4>(this,0x11)) {
  case 0:
  case 1:
  case 2:
  case 4:
    STField<int>(this,0x95) = param_1;
    STField<int>(this,0x99) = param_2;
    STField<int>(this,0x9d) = STField<int>(this,0xad) + param_3;
    break;
  case 3:
    STField<int>(this,0x91) = param_2;
    STField<int>(this,0x8d) = param_1;
    STField<int>(this,0x95) = param_3;
  }
  if ((char)uVar2 == '\0') {
    if (cVar1 != '\0') {
      thunk_FUN_00635f50(this);
    }
    return;
  }
  thunk_FUN_00633770(this,param_4,param_5);
  thunk_FUN_00635a40(this,1);
  return;
}


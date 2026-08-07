#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall FUN_00550430(void *this,int param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  char *pcVar3;

  uVar1 = 0;
  if (DAT_00808aaf != 0) {
    pcVar3 = &CHAR_00h_00808ab0;
    while (*(int *)(pcVar3 + 0x40) != param_1) {
      uVar1 = uVar1 + 1;
      pcVar3 = pcVar3 + 0x9c;
      if (DAT_00808aaf <= uVar1) {
        return;
      }
    }
    DVar2 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620);
    *(DWORD *)(pcVar3 + 0x48) = DVar2;
    if (((param_2 != 0) && (DAT_00808788 != 0)) && (STField<int>(this,0xf4) == param_1)) {
      STField<undefined4>(this,0xf4) = 0;
      DAT_00808788 = 0;
      STField<undefined4>(this,0xd0) = 0xa106;
      AppClassTy::SendMessage((AppClassTy *)&DAT_00807620,3,0x101,(int)this + 0xc0);
    }
  }
  return;
}


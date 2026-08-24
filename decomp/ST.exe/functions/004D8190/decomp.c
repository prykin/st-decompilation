#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_004d8190(void)

{
  int iVar2;
  int iVar3;
  int iVar1;
  longlong lVar4;
  longlong lVar5;

  if (DAT_007fa13c != 0) {
    lVar4 = FUN_006b12cc(DAT_007fa140);
    lVar5 = FUN_006b12cc(DAT_007fa13c);
    iVar2 = FUN_006b12a8((int)lVar4,(int)lVar5);
    iVar3 = FUN_006b1280(iVar2);
    if (iVar3 < 0x1c2) {
      iVar2 = FUN_006b12dc(iVar2,iVar2);
      lVar4 = FUN_006b12cc(0x19);
      iVar2 = FUN_006b12dc((int)lVar4,iVar2);
      iVar1 = FUN_006b1280(iVar2);
      DAT_007fa144 = iVar1 << 1;
      return;
    }
  }
  DAT_007fa144 = 0xfffffff;
  return;
}


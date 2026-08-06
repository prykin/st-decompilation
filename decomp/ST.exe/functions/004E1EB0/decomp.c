#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004E1EB0 returns stored into /STBoatC+0x568 @ 0046F71D | 004E1EB0 returns stored into
   /STBoatC+0x568 @ 0046FB36 | 004E1EB0 returns stored into /STBoatC+0x568 @ 0046FCCD */

int __thiscall FUN_004e1eb0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = -1;
  iVar3 = -1;
  if (STField<int>(this,0x4d0) == 0) {
    iVar2 = 0;
    iVar3 = FUN_006aadd0(param_1,param_2,param_3,(int)STField<short>(this,0x41),
                         STField<short>(this,0x43) + -100,(int)STField<short>(this,0x45));
  }
  if (STField<int>(this,0x4f8) != 0) {
    return iVar2;
  }
  if ((-1 < iVar3) &&
     (iVar1 = FUN_006aadd0(param_1,param_2,param_3,(int)STField<short>(this,0x41),
                           STField<short>(this,0x43) + 100,(int)STField<short>(this,0x45)),
     iVar3 <= iVar1)) {
    return iVar2;
  }
  return 1;
}


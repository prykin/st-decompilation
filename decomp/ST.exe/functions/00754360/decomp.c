#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00751980 @ 007519AB -> unknown:
   terminal before explicit accumulator kill | 00751BA0 @ 00751BCB -> read as EAX on every CFG path
   | 00751BF0 @ 00751C1B -> read as EAX on every CFG path */

int FUN_00754360(int param_1,DWORD param_2,undefined4 *param_3,uint param_4)

{
  DWORD DVar1;


  DVar1 = Library::DKW::FMM::FUN_006d49f0(param_1,param_2,param_3,param_4);
  if (DVar1 != 0) {
    return -1;
  }
  return param_2;
}


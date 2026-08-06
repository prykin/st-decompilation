#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070ABF0 -> 0070A5A0 @ 0070AC05

   [STPrototypeApplier] Propagated return.
   Evidence: 0070ABF0 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AC0E */

ushort * __cdecl FUN_0070abf0(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = Library::Ourlib::MFIMG::mfImgLoad(param_1,4,param_2,param_3,param_4);
  return puVar1;
}


#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070AAB0 -> 0070A5A0 @ 0070AAC5

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AAB0 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AACE */

ushort * __cdecl FUN_0070aab0(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = Library::Ourlib::MFIMG::mfImgLoad(param_1,5,param_2,param_3,param_4);
  return puVar1;
}


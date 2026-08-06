#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056DB80 -> 0070A9F0 @ 0056E061 | 00590B40 -> 0070A9F0 @ 00591000 | 00595E40 ->
   0070A9F0 @ 00595F0F | 005AB300 -> 0070A9F0 @ 005AB56B | 005B2970 -> 0070A9F0 @ 005B2CAD |
   005B9B10 -> 0070A9F0 @ 005B9BD7 | 005C29B0 -> 0070A9F0 @ 005C2B91 | 005E58D0 -> 0070A9F0 @
   005E594A | 005E6770 -> 0070A9F0 @ 005E6838

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056DB80 -> 0070A9F0 @ 0056E061 | 00590B40 -> 0070A9F0 @ 00591000 | 00595E40 ->
   0070A9F0 @ 00595F0F | 005AB300 -> 0070A9F0 @ 005AB56B | 005B2970 -> 0070A9F0 @ 005B2CAD |
   005B9B10 -> 0070A9F0 @ 005B9BD7 | 005BD7A0 -> 0070A9F0 @ 005BD89D | 005C1340 -> 0070A9F0 @
   005C13F4 | 005C29B0 -> 0070A9F0 @ 005C2B91 | 005E58D0 -> 0070A9F0 @ 005E594A | 005E6770 ->
   0070A9F0 @ 005E6838

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   pointer:/ushort; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit:
   used=21, ignored=0, unknown=0 */

ushort * __cdecl FUN_0070a9f0(cMf32 *param_1,char *text,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = Library::Ourlib::MFIMG::mfImgLoad(param_1,1,text,param_3,param_4);
  return puVar1;
}


#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00601500 -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_7 |
   00615FD0 -> 00601D10 @ 0061608F; MOVSX at 0061607F establishes signed source width 2 | 00615FD0
   -> 00601D10 @ 006160D0; MOVSX at 006160C0 establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 005F5700 -> 00601D10 @ 005F5980; unproven partial register write at 005F594A | 00601500
   -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_10 |
   00615FD0 -> 00601D10 @ 0061608F; unproven partial register write at 0061605A | 00615FD0 ->
   00601D10 @ 006160D0; unproven partial register write at 0061609B | 00625730 -> 00601D10 @
   00625A8B; literal 65535 at 00625A76 | 00625730 -> 00601D10 @ 00625DCD; literal 65535 at 00625DB8
   | 0063E700 -> 00601D10 @ 0063E819; unproven partial register write at 0063E7FB | 0063E700 ->
   00601D10 @ 0063E8B6; unproven partial register write at 0063E898 | 0063E9C0 -> 00601D10 @
   0063ED56; unproven partial register write at 0063ED2B | 0063E9C0 -> 00601D10 @ 0063EDDD; unproven
   partial register write at 0063EDB2 | 0063E9C0 -> 00601D10 @ 0063EF70; unproven partial register
   write at 0063EF45

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00601500 -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_8

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00601500 -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_9

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00601500 -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_11 */

void FUN_00601d10(int param_1,int param_2,RecoveredRecord_00601D10_11B39116 *param_3,short param_4,
                 ushort param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  uint local_40 [5];
  int *local_2c;
  int local_20 [3];
  ushort local_14;
  short local_12;

  if (param_3 != nullptr) {
    memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
    local_20[2] = param_1;
    local_20[0] = param_2;
    local_14 = param_5;
    local_12 = param_4;
    local_40[2] = param_3->field_0008;
    local_20[1] = param_6;
    local_2c = local_20;
    local_40[3] = 2;
    local_40[4] = param_7;
    /* ST_CALLSITE[00601D7B]: CALL dword ptr [EDX + 0x18] */
    (*g_playSystem_00802A38->vtable->SendMessage)
              ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_40);
  }
  return;
}


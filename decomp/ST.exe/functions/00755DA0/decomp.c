#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /uint; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=3,
   ignored=0, unknown=0

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755DA0 -> 00753B80 @ 00755DB5 | 00755DA0 -> 00755560 @ 00755DFC | 00755DA0 ->
   00755D40 @ 00755DDA | 00755DA0 -> 007561D0 @ 00755DEB */

uint FUN_00755da0(RecoveredRecordView_00753C80_637B4E8C *param_1,undefined4 *param_2)

{
  uint *puVar1;
  RecoveredRecord_00755D40_97E6B3C8 *pRVar2;
  uint uVar3;

  puVar1 = param_1->field_000C->field_001C;
  pRVar2 = FUN_00753b80((RecoveredRecordView_00750F20_49A60217 *)param_1,
                        *(undefined4 *)(&param_1->field_000C[1].field_0xa + (int)puVar1 * 8),
                        (int)puVar1);
  *param_2 = *(undefined4 *)
              (&pRVar2[1].field_0x6 +
              *(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8)
              );
  FUN_00755d40(param_1,pRVar2,
               *(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8
                       ));
  FUN_007561d0(param_1,*(int *)(&param_1->field_000C[1].field_0xe +
                               (int)param_1->field_000C->field_001C * 8));

  uVar3 = FUN_00755560(param_1,(ushort *)(param_2 + 2),param_2[1],*param_2);
  return uVar3;
}


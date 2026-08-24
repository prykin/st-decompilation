#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /uint; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=3,
   ignored=0, unknown=0

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755DA0 -> 00753B80 @ 00755DB5 | 00755DA0 -> 00755560 @ 00755DFC | 00755DA0 ->
   00755D40 @ 00755DDA | 00755DA0 -> 007561D0 @ 00755DEB */

uint FUN_00755da0(AnonShape_00753C80_4C8E695D *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;

  puVar1 = param_1->field_000C->field_001C;
  iVar2 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,
                       *(undefined4 *)(&param_1->field_000C[1].field_0xa + (int)puVar1 * 8),
                       (int)puVar1);
  *param_2 = *(undefined4 *)
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              (*(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8
                       ) + 0x10 + iVar2);
  FUN_00755d40(param_1,iVar2,
               *(int *)(&param_1->field_000C[1].field_0xe + (int)param_1->field_000C->field_001C * 8
                       ));
  FUN_007561d0(param_1,*(int *)(&param_1->field_000C[1].field_0xe +
                               (int)param_1->field_000C->field_001C * 8));
  uVar3 = FUN_00755560(param_1,(ushort *)(param_2 + 2),param_2[1],*param_2);
  return uVar3;
}


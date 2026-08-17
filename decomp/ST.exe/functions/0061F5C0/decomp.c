#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0061F5F2 MOV AX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0061F5D9 MOV CX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0061F5D1 MOV DX,word ptr
   [EBP + 0x14]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0060C320 -> 0061F5C0 @ 0060C7F1; MOVSX at 0060C7BE establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0060C320 -> 0061F5C0 @ 0060C7F1; MOVSX at 0060C7B9 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0060C320 -> 0061F5C0 @ 0060C7F1; MOVSX at 0060C7B4 establishes signed source width 2 */

void __cdecl
FUN_0061f5c0(undefined4 param_1,ushort param_2,ushort param_3,ushort param_4,short param_5,
            short param_6,short param_7)

{
  undefined4 local_30 [5];
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  short local_16;
  short local_14;
  short local_12;

  memset(local_30, 0, 0x2a); /* compiler bulk-zero initialization */
  local_18 = param_4;
  local_30[2] = 1;
  local_30[3] = 1;
  local_1a = param_3;
  local_12 = param_7;
  local_1c = param_2;
  local_14 = param_6;
  local_30[0] = 0x168;
  local_30[1] = 0xff;
  local_16 = param_5;
  /* ST_CALLSITE[0061F635]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x14c,0,0,(short)local_30,0);
  return;
}


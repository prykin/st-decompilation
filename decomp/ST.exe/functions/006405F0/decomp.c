#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004C4550 -> 006405F0 @ 004C48C0; zero-filled partial register load at 004C48AC |
   004C4550 -> 006405F0 @ 004C49BA; zero-filled partial register load at 004C49A7

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640623 MOV DX,word ptr
   [EBP + 0x18]

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0064064E MOV AX,word ptr
   [EBP + 0x1c]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640643 MOV CX,word ptr
   [EBP + 0x20]

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640632 MOV DX,word ptr
   [EBP + 0x24]

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640664 MOV AX,word ptr
   [EBP + 0x28]

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640659 MOV CX,word ptr
   [EBP + 0x2c] */

void __cdecl
FUN_006405f0(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4,ushort param_5,
            ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10)

{
  undefined4 local_38 [5];
  undefined4 local_24;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  ushort local_8;
  ushort local_6;

  memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
  if (param_1 == 0xa8) {
    local_24 = 1;
  }
  else if (param_1 == 0xbe) {
    local_24 = 2;
  }
  local_1c = param_5;
  local_38[1] = param_2;
  local_10 = param_2;
  local_8 = param_4;
  local_16 = param_8;
  local_c = param_3;
  local_18 = param_7;
  local_1a = param_6;
  local_6 = param_10;
  local_38[0] = 0x78;
  local_14 = param_9;
  local_12 = 0;
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x78,0,0,local_38,0);
  return;
}


#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; MOVSX at 0052B244 establishes signed source width 2 |
   0052B330 -> 006E65C0 @ 0052B55C; MOVSX at 0052B549 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; CPanelTy::sub_0052AFE0 parameter param_2 | 0052B330 ->
   006E65C0 @ 0052B55C; /CPanelTy+0xdd6

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; CPanelTy::sub_0052AFE0 parameter param_3 | 0052B330 ->
   006E65C0 @ 0052B55C; /CPanelTy+0xdda

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 5 at 0052B232 | 0052B330 -> 006E65C0 @
   0052B55C; literal 5 at 0052B52A

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 5 at 0052B230 | 0052B330 -> 006E65C0 @
   0052B55C; literal 5 at 0052B528

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0052AFE0 -> 006E65C0 @ 0052B250; literal 1 at 0052B229 | 0052B330 -> 006E65C0 @
   0052B55C; literal 1 at 0052B520 */

undefined4 __thiscall
FUN_006e65c0(void *this,undefined4 param_1,char param_2,float param_3,float param_4,ushort param_5,
            ushort param_6,ushort param_7)

{
  void *pvVar1;

  pvVar1 = Library::DKW::LIB::MemAllocClear(0x1c);
  if (pvVar1 == nullptr) {
    return 0xfffffffe;
  }
  STField<undefined4>(pvVar1,0x18) = param_1;
  STField<char>(pvVar1,0x17) = param_2;
  STField<float>(pvVar1,4) = param_3;
  STField<float>(pvVar1,8) = param_4;
  STField<ushort>(pvVar1,0xe) = param_5;
  STField<ushort>(pvVar1,0x10) = param_6;
  STField<ushort>(pvVar1,0x12) = param_7;
  FUN_006b9910((undefined4 *)((int)this + 0x442),(int)pvVar1);
  return 0;
}


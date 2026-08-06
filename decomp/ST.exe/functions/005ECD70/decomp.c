#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005EBD80 -> 005ECD70 @ 005EC1F4; MOVSX at 005EC1C5 establishes signed source width 2 |
   005ECFE0 -> 005ECD70 @ 005ED0E7; MOVSX at 005ED0DF establishes signed source width 2 | 005EF4B0
   -> 005ECD70 @ 005EF569; MOVSX at 005EF54F establishes signed source width 2 | 005FC4A0 ->
   005ECD70 @ 005FC94E; MOVSX at 005FC920 establishes signed source width 2 */

undefined4 __thiscall
FUN_005ecd70(void *this,int param_1,int param_2,int param_3,int param_4,char param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;

  STField<undefined4>(this,0x25b) = STField<undefined4>(this,0x277);
  STField<undefined4>(this,0x25f) = STField<undefined4>(this,0x27b);
  STField<undefined4>(this,0x263) = STField<undefined4>(this,0x27f);
  STField<char>(this,0x25a) = param_5;
  STField<int>(this,0x267) = param_1;
  STField<int>(this,0x26b) = param_2;
  STField<int>(this,0x26f) = param_3;
  STField<undefined4>(this,0x283) = 1;
  uVar1 = g_playSystem_00802A38->field_00E4;
  STField<int>(this,0x273) = param_4;
  STField<uint>(this,0x28f) = uVar1;
  thunk_FUN_005eff00((int)this);
  if (STField<int>(this,0x2ba) != param_4) {
    iVar2 = thunk_FUN_005ef950(STField<int>(this,0x2ba) * 0xf,param_4);
    STField<int>(this,0x28b) = iVar2;
  }
  if (param_5 == '\0') {
    if ((param_1 == STField<int>(this,0x277)) && (param_2 == STField<int>(this,0x27b))) {
      STField<undefined4>(this,0x287) = param_6;
      STField<uint>(this,0x31c) = STField<uint>(this,0x31c) | 1;
      return 1;
    }
    STField<undefined1>(this,0x25a) = 1;
  }
  STField<undefined4>(this,0x287) = param_6;
  iVar2 = FUN_006acf0d(STField<int>(this,0x25b),STField<int>(this,0x25f),
                       STField<int>(this,0x263),STField<int>(this,0x267),
                       STField<int>(this,0x26b),STField<int>(this,0x26f));
  if (iVar2 != 0) {
    STField<int>(this,0x297) =
         ((STField<int>(this,0x267) - STField<int>(this,0x25b)) * 10000) / iVar2;
    STField<int>(this,0x29b) =
         ((STField<int>(this,0x26b) - STField<int>(this,0x25f)) * 10000) / iVar2;
    STField<int>(this,0x29f) =
         ((STField<int>(this,0x26f) - STField<int>(this,0x263)) * 10000) / iVar2;
    iVar2 = FUN_006acf0d(STField<int>(this,0x267),STField<int>(this,0x26b),
                         STField<int>(this,0x26f),STField<int>(this,0x25b),
                         STField<int>(this,0x25f),STField<int>(this,0x263));
    STField<int>(this,0x293) = iVar2;
    STField<uint>(this,0x31c) = STField<uint>(this,0x31c) & 0xfffffffe;
    return 1;
  }
  return 0;
}


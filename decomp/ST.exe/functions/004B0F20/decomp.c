#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CDFD0 -> 004B0F20 @ 004CE028; FUN_004cdfd0 parameter param_2 | 0064D270 -> 004B0F20
   @ 0064D6D4; AiEventClassTy::__CreateObjPl parameter param_3; MOVSX at 0064D5DF establishes signed
   source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CDFD0 -> 004B0F20 @ 004CE028; FUN_004cdfd0 parameter param_3 | 0064D270 -> 004B0F20
   @ 0064D6D4; AiEventClassTy::__CreateObjPl parameter param_4; MOVSX at 0064D5E3 establishes signed
   source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064D270 -> 004B0F20 @ 0064D6D4; AiEventClassTy::__CreateObjPl parameter param_5; MOVSX
   at 0064D5E7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 004CDFD0 -> 004B0F20 @ 004CE028; zero-filled partial register load at 004CE011 |
   0064D270 -> 004B0F20 @ 0064D6D4; AiEventClassTy::__CreateObjPl parameter param_6 */

void __cdecl
FUN_004b0f20(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            char *param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar2;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  char local_34 [15];
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_9;

  puVar2 = &local_74;
  memset(puVar2, 0, 0x6f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x6c);
  local_64 = *(undefined4 *)(&DAT_00791d68 + param_2 * 4);
  local_4c = param_2;
  local_48 = param_3;
  local_40 = param_5;
  local_44 = param_4;
  local_68 = 1;
  local_6c = 1;
  local_70 = param_1;
  local_74 = 0x3e9;
  local_9 = 0;
  local_54 = 3;
  local_58 = 1;
  local_5c = param_1;
  local_60 = 1000;
  local_3c = param_6;
  local_38 = param_1;
  if (param_7 != 0xff) {
    local_38 = param_7;
  }
  local_50 = local_64;
  if (param_8 != nullptr) {
    Library::MSVCRT::_strncpy(local_34,param_8,0xe);
  }
  local_25 = param_9;
  local_21 = param_10;
  local_1d = 100;
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x3e9,0,0,&local_74,0);
  return;
}


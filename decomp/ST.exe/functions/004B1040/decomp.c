#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0064D270 -> 004B1040 @ 0064D679; AiEventClassTy::__CreateObjPl parameter param_3; MOVSX
   at 0064D5DF establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0064D270 -> 004B1040 @ 0064D679; AiEventClassTy::__CreateObjPl parameter param_4; MOVSX
   at 0064D5E3 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064D270 -> 004B1040 @ 0064D679; AiEventClassTy::__CreateObjPl parameter param_5; MOVSX
   at 0064D5E7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0064D270 -> 004B1040 @ 0064D679; AiEventClassTy::__CreateObjPl parameter param_6 */

void __cdecl
FUN_004b1040(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            char *param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar2;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  char local_30 [19];
  undefined4 local_1d;
  undefined4 local_15;

  puVar2 = &local_5c;
  memset(puVar2, 0, 0x56); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x54);
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_48 = param_2;
  local_50 = 3;
  local_4c = *(undefined4 *)(&DAT_00791d68 + param_2 * 4);
  local_44 = param_3;
  local_3c = param_5;
  local_40 = param_4;
  local_54 = 1;
  local_58 = param_1;
  local_5c = 1000;
  local_38 = param_6;
  local_34 = param_1;
  if (param_7 != 0xff) {
    local_34 = param_7;
  }
  if (param_8 != (char *)0x0) {
    Library::MSVCRT::_strncpy(local_30,param_8,0xe);
  }
  local_1d = param_9;
  local_15 = param_10;
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,1000,0,0,&local_5c,0);
  return;
}


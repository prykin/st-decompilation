#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0064DB00 -> 005F0EC0 @ 0064DC41; AiEventClassTy::_CreateArt parameter param_1; MOVSX at
   0064DC3A establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0064DB00 -> 005F0EC0 @ 0064DC41; AiEventClassTy::_CreateArt parameter param_2; MOVSX at
   0064DC36 establishes signed source width 2 */

void __cdecl
FUN_005f0ec0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            char *param_6,char *param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar7;
  int local_158 [7];
  int local_13c;
  undefined4 local_138;
  short local_134;
  short local_132;
  short local_130;
  undefined4 local_12e;
  undefined4 local_12a;
  char local_126 [14];
  undefined1 local_118;
  char local_117 [259];
  undefined1 local_14;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  char *pcVar5_mg1;
  char *pcVar5_mg0;
  char *pcVar5_mg4;
  char *pcVar5_mg3;

  memset(local_158, 0, 0x151); /* compiler bulk-zero initialization */
  local_13c = param_1;
  local_158[2] = 1;
  local_158[3] = 1;
  local_138 = param_9;
  local_158[6] = param_2;
  local_13 = param_3;
  local_158[0] = 0x172;
  local_158[1] = 0xff;
  local_158[4] = 0;
  local_158[5] = 0xfd;
  local_12e = 0;
  local_134 = (short)param_3 * 0xc9 + 100;
  local_f = param_4;
  local_12a = param_8;
  local_132 = (short)param_4 * 0xc9 + 100;
  local_b = param_5;
  local_130 = (short)param_5 * 200 + 100;
  if (param_6 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar5_mg0 = param_6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5_mg0;
      pcVar5_mg0 = pcVar5_mg0 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0xf) {
      uVar3 = 0xffffffff;
      do {
        pcVar5_mg1 = param_6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5_mg1 = param_6 + 1;
        cVar1 = *param_6;
        param_6 = pcVar5_mg1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5_mg1 + -uVar3;
      pcVar7 = local_126;
      memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
      uVar4 = 0;
    }
    else {
      Library::MSVCRT::_strncpy(local_126,param_6,0xe);
      local_118 = 0;
    }
  }
  if (param_7 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar5_mg3 = param_7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5_mg3;
      pcVar5_mg3 = pcVar5_mg3 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x104) {
      uVar3 = 0xffffffff;
      do {
        pcVar5_mg4 = param_7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5_mg4 = param_7 + 1;
        cVar1 = *param_7;
        param_7 = pcVar5_mg4;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5_mg4 + -uVar3;
      pcVar7 = local_117;
      memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
    else {
      Library::MSVCRT::_strncpy(local_117,param_7,0x103);
      local_14 = 0;
    }
  }
  g_playSystem_00802A38->vfunc_08(0x14f,0,0,(short)local_158,0);
  return;
}


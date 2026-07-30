#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0064DDA0 -> 006034E0 @ 0064DE5A; AiEventClassTy::_CreateDest parameter param_3; MOVSX
   at 0064DE10 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0060353F MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00603549 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064DDA0 -> 006034E0 @ 0064DE5A; AiEventClassTy::_CreateDest parameter param_2; MOVSX
   at 0064DE51 establishes signed source width 2 */

void __cdecl
FUN_006034e0(short param_1,ushort param_2,ushort param_3,int param_4,int param_5,char *param_6,
            char *param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar3;
  char *pcVar5;
  char *pcVar7;
  uint local_144 [5];
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  short local_120;
  ushort local_11e;
  ushort local_11c;
  char local_11a [14];
  undefined1 local_10c;
  char local_10b [259];
  undefined1 local_8;

  memset(local_144, 0, 0x13d); /* compiler bulk-zero initialization */
  local_144[3] = 1;
  local_144[0] = 0x1b8;
  local_144[1] = 0;
  local_144[2] = 0;
  local_130 = param_4;
  local_144[4] = (uint)(param_4 == 0);
  local_12c = param_5;
  local_120 = param_1;
  local_11e = param_2;
  local_11c = param_3;
  local_124 = param_8;
  uVar3 = 0xffffffff;
  pcVar5 = param_6;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_128 = 0;
  if (~uVar3 - 1 < 0xf) {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_6 + 1;
      cVar1 = *param_6;
      param_6 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar7 = local_11a;
    memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
  }
  else {
    Library::MSVCRT::_strncpy(local_11a,param_6,0xe);
    local_10c = 0;
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_7;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (~uVar3 - 1 < 0x104) {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_7 + 1;
      cVar1 = *param_7;
      param_7 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar7 = local_10b;
    memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
  }
  else {
    Library::MSVCRT::_strncpy(local_10b,param_7,0x103);
    local_8 = 0;
  }
  g_playSystem_00802A38->vfunc_08(0x15a,0,0,local_144,0);
  return;
}


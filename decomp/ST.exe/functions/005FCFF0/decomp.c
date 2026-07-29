#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:9: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=005FD00D MOV ECX,dword ptr [EBP +
   0x2c]; first-use mask

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0064D890 -> 005FCFF0 @ 0064D9D1; zero-filled partial register load at 0064D91D

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0064D890 -> 005FCFF0 @ 0064D9D1; AiEventClassTy::_CreateRCCont parameter param_2; MOVSX
   at 0064D9C6 establishes signed source width 2 */

void __cdecl
FUN_005fcff0(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,char *param_8,undefined4 param_9,ushort param_10)

{
  char cVar1;
  uint uVar3;
  char *pcVar5;
  char *pcVar7;
  uint local_15c [7];
  int local_140;
  int local_13c;
  undefined4 local_138;
  short local_134;
  short local_132;
  short local_130;
  undefined4 local_12e;
  undefined4 local_12a;
  char local_126 [14];
  undefined1 local_118;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;

  _param_10 = (uint)param_10;
  memset(local_15c, 0, 0x155); /* compiler bulk-zero initialization */
  local_15c[1] = param_1;
  local_15c[2] = 1;
  local_15c[3] = 1;
  local_13c = param_3;
  local_138 = param_4;
  local_140 = _param_10 << 0x10;
  local_13 = param_5;
  local_15c[0] = 0x1a4;
  local_15c[4] = 0;
  local_15c[5] = 0xfe;
  local_12e = 0;
  local_134 = (short)param_5 * 0xc9 + 100;
  local_f = param_6;
  local_15c[6] = param_2;
  local_132 = (short)param_6 * 0xc9 + 100;
  local_b = param_7;
  local_12a = param_9;
  local_130 = (short)param_7 * 200 + 100;
  if (param_8 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = param_8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0xf) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_8;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_8 + 1;
        cVar1 = *param_8;
        param_8 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar7 = local_126;
      memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
    else {
      Library::MSVCRT::_strncpy(local_126,param_8,0xe);
      local_118 = 0;
    }
  }
  g_playSystem_00802A38->vfunc_08(0x157,0,0,local_15c,0);
  return;
}


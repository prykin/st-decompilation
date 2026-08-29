#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl
FUN_00627850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,undefined4 param_8,char *param_9,undefined4 param_10)

{
  char cVar1;
  short sVar2;
  uint uVar4;
  short sVar6;
  short sVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_2c [14];
  byte local_1e;
  uint local_1d;
  uint local_19;
  uint local_15;
  uint local_11;
  int local_c;
  int local_8;
  char *pcVar8_mg1;
  char *pcVar8_mg0;

  local_8 = STBiasedDiv16(param_5, 0xc9); /* exact signed 16-bit grid-index division */
  sVar7 = (short)local_8;
  sVar6 = STBiasedDiv16(param_6, 0xc9); /* exact signed 16-bit grid-index division */
  local_c = STBiasedDiv16(param_7, 200); /* exact signed 16-bit grid-index division */
  puVar9 = &local_5c;
  memset(puVar9, 0, 0x4f); /* compiler bulk-zero initialization */
  puVar9 = (undefined4 *)((byte *)puVar9 + 0x4c);
  local_19 = param_3;
  local_54 = 1;
  local_50 = 1;
  local_1d = param_8;
  local_58 = param_2;
  local_15 = param_4;
  local_5c = 0x1ae;
  local_48 = param_1;
  local_11 = param_10;
  if (param_9 != nullptr) {
    uVar4 = 0xffffffff;
    pcVar8_mg0 = param_9;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8_mg0;
      pcVar8_mg0 = pcVar8_mg0 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < 0xf) {
      uVar4 = 0xffffffff;
      do {
        pcVar8_mg1 = param_9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8_mg1 = param_9 + 1;
        cVar1 = *param_9;
        param_9 = pcVar8_mg1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = pcVar8_mg1 + -uVar4;
      pcVar10 = local_2c;
      memmove(pcVar10, pcVar8, uVar4); /* compiler REP MOVS byte copy */
      sVar7 = (short)local_8;
    }
    else {
      Library::MSVCRT::_strncpy(local_2c,param_9,0xe);
      local_1e = 0;
    }
  }
  local_40 = param_6;
  local_44 = param_5;
  local_3c = param_7;
  local_38 = (short)(sVar7 * 0xc9 + 100);
  local_34 = (short)(sVar6 * 0xc9 + 100);
  local_30 = (short)((short)local_c * 200 + 100);
  /* ST_CALLSITE[006279E0]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x158,nullptr,nullptr,(short)&local_5c,0);
  return;
}


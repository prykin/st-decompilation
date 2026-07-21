#include "../../pseudocode_runtime.h"


void __cdecl
FUN_005fcff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,char *param_8,
            undefined4 param_9,int param_10)

{
  char cVar1;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar7;
  undefined4 local_15c [7];
  int local_140;
  undefined4 local_13c;
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

  memset(local_15c, 0, 0x155); /* compiler bulk-zero initialization */
  local_15c[1] = param_1;
  local_15c[2] = 1;
  local_15c[3] = 1;
  local_13c = param_3;
  local_138 = param_4;
  local_140 = param_10 << 0x10;
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
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      Library::MSVCRT::_strncpy(local_126,param_8,0xe);
      local_118 = 0;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0008)(0x157,0,0,local_15c,0);
  return;
}


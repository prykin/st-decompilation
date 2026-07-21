#include "../../pseudocode_runtime.h"


void __cdecl
FUN_00627850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,undefined4 param_8,char *param_9,undefined4 param_10)

{
  char cVar1;
  short sVar2;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_2c [14];
  undefined1 local_1e;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined4 local_11;
  int local_c;
  int local_8;

  sVar7 = (short)(param_5 >> 0x1f);
  if (param_5 < 0) {
    local_8 = (short)(((short)(param_5 / 0xc9) + sVar7) -
                     (short)((longlong)param_5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (int)(short)(((short)(param_5 / 0xc9) + sVar7) -
                          (short)((longlong)param_5 * 0x28c1979 >> 0x3f));
  }
  sVar7 = (short)local_8;
  sVar6 = (short)(param_6 >> 0x1f);
  if (param_6 < 0) {
    sVar6 = (((short)(param_6 / 0xc9) + sVar6) - (short)((longlong)param_6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = ((short)(param_6 / 0xc9) + sVar6) - (short)((longlong)param_6 * 0x28c1979 >> 0x3f);
  }
  sVar2 = (short)(param_7 >> 0x1f);
  if (param_7 < 0) {
    local_c = (short)(((short)(param_7 / 200) + sVar2) -
                     (short)((longlong)param_7 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_c = (int)(short)(((short)(param_7 / 200) + sVar2) -
                          (short)((longlong)param_7 * 0x51eb851f >> 0x3f));
  }
  puVar9 = &local_5c;
  memset(puVar9, 0, 0x4e); /* compiler bulk-zero initialization */
  puVar9 = (undefined4 *)((byte *)puVar9 + 0x4c);
  *(undefined1 *)((int)puVar9 + 2) = 0;
  local_19 = param_3;
  local_54 = 1;
  local_50 = 1;
  local_1d = param_8;
  local_58 = param_2;
  local_15 = param_4;
  local_5c = 0x1ae;
  local_48 = param_1;
  local_11 = param_10;
  if (param_9 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar8 = param_9;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < 0xf) {
      uVar4 = 0xffffffff;
      do {
        pcVar8 = param_9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = param_9 + 1;
        cVar1 = *param_9;
        param_9 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = pcVar8 + -uVar4;
      pcVar10 = local_2c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
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
  local_38 = (int)(short)(sVar7 * 0xc9 + 100);
  local_34 = (int)(short)(sVar6 * 0xc9 + 100);
  local_30 = (int)(short)((short)local_c * 200 + 100);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0008)(0x158,0,0,&local_5c,0);
  return;
}


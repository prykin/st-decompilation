
void __cdecl
FUN_005f0ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,char *param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_158 [7];
  undefined4 local_13c;
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
  
  puVar6 = local_158;
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
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
  if (param_6 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = param_6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
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
      Library::MSVCRT::_strncpy(local_126,param_6,0xe);
      local_118 = 0;
    }
  }
  if (param_7 != (char *)0x0) {
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
      pcVar7 = local_117;
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
      Library::MSVCRT::_strncpy(local_117,param_7,0x103);
      local_14 = 0;
    }
  }
  (*PTR_00802a38->vtable->vfunc_08)(0x14f,0,0,local_158,0);
  return;
}


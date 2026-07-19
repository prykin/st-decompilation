
void __cdecl
FUN_006034e0(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,undefined4 param_5
            ,char *param_6,char *param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  uint local_144 [5];
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  char local_11a [14];
  undefined1 local_10c;
  char local_10b [259];
  undefined1 local_8;
  
  puVar6 = local_144;
  for (iVar2 = 0x4f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
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
    Library::MSVCRT::_strncpy(local_10b,param_7,0x103);
    local_8 = 0;
  }
  (**(code **)(*DAT_00802a38 + 8))(0x15a,0,0,local_144,0);
  return;
}



undefined4 __cdecl
FUN_005fd1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,char *param_11,undefined4 param_12,
            undefined4 param_13)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_160 [7];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined4 local_132;
  undefined4 local_12e;
  char local_12a [14];
  undefined1 local_11c;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  int local_8;
  
  puVar6 = local_160;
  for (iVar2 = 0x55; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
  local_13c = param_4;
  local_160[1] = param_1;
  local_134 = param_7;
  local_160[2] = 1;
  local_160[3] = 1;
  local_140 = param_3;
  local_144 = 1;
  local_f = param_10;
  local_138 = param_5;
  local_136 = param_6;
  local_12e = param_12;
  local_17 = param_8;
  local_13 = param_9;
  local_8 = 0;
  local_160[0] = 0x1a4;
  local_160[4] = 0;
  local_160[5] = 0xfe;
  local_160[6] = param_2;
  local_132 = param_13;
  if (param_11 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = param_11;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0xf) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_11;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_11 + 1;
        cVar1 = *param_11;
        param_11 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar7 = local_12a;
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
      Library::MSVCRT::_strncpy(local_12a,param_11,0xe);
      local_11c = 0;
    }
  }
  (**(code **)(*DAT_00802a38 + 8))(0x157,0,&local_8,local_160,0);
  if (local_8 == 0) {
    return 0;
  }
  return *(undefined4 *)(local_8 + 0x18);
}


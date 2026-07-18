
uint FUN_006b9770(byte *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int local_c;
  uint local_8;
  
  local_c = 0;
  pbVar5 = param_1;
  if (param_2 != (int *)0x0) {
    pbVar5 = param_1 + *param_2;
  }
  while( true ) {
    if (DAT_007f148c < 2) {
      uVar1 = (byte)PTR_DAT_007f1280[(uint)*pbVar5 * 2] & 8;
    }
    else {
      uVar1 = FUN_00730610((uint)*pbVar5,8);
    }
    if (uVar1 == 0) break;
    pbVar5 = pbVar5 + 1;
  }
  uVar1 = 0xffffffff;
  local_8 = 0;
  while( true ) {
    if (DAT_007f148c < 2) {
      uVar2 = (uint)*pbVar5;
      uVar3 = (byte)PTR_DAT_007f1280[uVar2 * 2] & 0x80;
    }
    else {
      uVar2 = (uint)*pbVar5;
      uVar3 = FUN_00730610(uVar2,0x80);
    }
    if (uVar3 == 0) break;
    if (uVar2 < 0x3a) {
      iVar4 = uVar2 - 0x30;
    }
    else {
      iVar4 = (uVar2 & 0xdf) - 0x37;
    }
    if (param_3 <= iVar4) break;
    uVar1 = local_8 * param_3 + iVar4;
    if (uVar1 < local_8) {
      local_c = -0x3c;
    }
    pbVar5 = pbVar5 + 1;
    local_8 = uVar1;
  }
  if (local_8 == uVar1) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)pbVar5 - (int)param_1;
    }
    if (local_c == -0x3c) {
      local_8 = 0xffffffff;
    }
    else if (local_c == 0) {
      return local_8;
    }
  }
  else {
    local_c = -4;
  }
  FUN_006a5e40(local_c,DAT_007ed77c,0x7edc30,0x34);
  return local_8;
}


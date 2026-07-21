#include "../../pseudocode_runtime.h"


void __cdecl FUN_004f4c70(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar7;
  undefined4 local_a0 [5];
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  BYTE local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  char local_84 [32];
  byte local_64 [88];
  byte local_c [8];

  memset(local_a0, 0, 0x3c); /* compiler bulk-zero initialization */
  local_89 = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "System";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_a0[0] = 0xfffffff3;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 700;
  local_8c = 0;
  local_8b = 0;
  local_8a = 0;
  local_88 = 1;
  local_87 = 2;
  local_86 = 1;
  local_85 = 0x22;
  local_c[0] = 0xff;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = local_84;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  local_c[1] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_c[2] = 0xac;
  local_c[3] = 0xad;
  local_c[4] = 0xae;
  local_64[0] = 0x20;
  local_64[1] = 0x21;
  local_64[2] = 0x22;
  local_64[3] = 0x23;
  local_64[4] = 0x25;
  local_64[5] = 0x26;
  local_64[6] = 0x27;
  local_64[7] = 0x28;
  local_64[8] = 0x29;
  local_64[9] = 0x2c;
  local_64[10] = 0x2d;
  local_64[0xb] = 0x2e;
  local_64[0xc] = 0x2f;
  local_64[0xd] = 0x30;
  local_64[0xe] = 0x31;
  local_64[0xf] = 0x32;
  local_64[0x10] = 0x33;
  local_64[0x11] = 0x34;
  local_64[0x12] = 0x35;
  local_64[0x13] = 0x36;
  local_64[0x14] = 0x37;
  local_64[0x15] = 0x38;
  local_64[0x16] = 0x39;
  local_64[0x17] = 0x3a;
  local_64[0x18] = 0x3d;
  local_64[0x19] = 0x3e;
  local_64[0x1a] = 0x3f;
  local_64[0x1b] = 0x41;
  local_64[0x1c] = 0x42;
  local_64[0x1d] = 0x43;
  local_64[0x1e] = 0x44;
  local_64[0x1f] = 0x45;
  local_64[0x20] = 0xd;
  local_64[0x21] = 10;
  local_64[0x22] = 0x46;
  local_64[0x23] = 0x47;
  local_64[0x24] = 0x48;
  local_64[0x42] = 0xd;
  local_64[0x43] = 10;
  local_64[0x25] = 0x49;
  local_64[0x26] = 0x4a;
  local_64[0x27] = 0x4b;
  local_64[0x28] = 0x4c;
  local_64[0x29] = 0x4d;
  local_64[0x2a] = 0x4e;
  local_64[0x2b] = 0x4f;
  local_64[0x2c] = 0x50;
  local_64[0x2d] = 0x51;
  local_64[0x2e] = 0x52;
  local_64[0x2f] = 0x53;
  local_64[0x30] = 0x54;
  local_64[0x31] = 0x55;
  local_64[0x32] = 0x56;
  local_64[0x33] = 0x57;
  local_64[0x34] = 0x58;
  local_64[0x35] = 0x59;
  local_64[0x36] = 0x5a;
  local_64[0x37] = 0x5c;
  local_64[0x38] = 0x5f;
  local_64[0x39] = 0x61;
  local_64[0x3a] = 0x62;
  local_64[0x3b] = 99;
  local_64[0x3c] = 100;
  local_64[0x3d] = 0x65;
  local_64[0x3e] = 0x66;
  local_64[0x3f] = 0x67;
  local_64[0x40] = 0x68;
  local_64[0x41] = 0x69;
  local_64[0x44] = 0x6a;
  local_64[0x45] = 0x6b;
  local_64[0x46] = 0x6c;
  local_64[0x47] = 0x6d;
  local_64[0x48] = 0x6e;
  local_64[0x49] = 0x6f;
  local_64[0x4a] = 0x70;
  local_64[0x4b] = 0x71;
  local_64[0x4c] = 0x72;
  local_64[0x4d] = 0x73;
  local_64[0x4e] = 0x74;
  local_64[0x4f] = 0x75;
  local_64[0x50] = 0x76;
  local_64[0x51] = 0x77;
  local_64[0x52] = 0x78;
  local_64[0x53] = 0x79;
  local_64[0x54] = 0x7a;
  local_64[0x55] = 0x7c;
  local_64[0x56] = 0x7e;
  ccFntTy::operator((ccFntTy *)local_a0,0x19d,(LOGFONTA *)local_a0,(uint *)0x0,local_64,param_1,
                    local_c,1,4,1,1,0x20081c,param_2);
  return;
}



void __cdecl FUN_005defe0(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 local_98 [5];
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  BYTE local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  char local_7c [32];
  byte local_5c [76];
  byte local_10 [12];

  puVar6 = local_98;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_81 = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Verdana";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_98[0] = 0xfffffff0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 400;
  local_84 = 0;
  local_83 = 0;
  local_82 = 0;
  local_80 = 3;
  local_7f = 2;
  local_7e = 1;
  local_7d = 0x22;
  local_10[0] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = local_7c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  local_10[1] = 0x1b;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_10[2] = 0x17;
  local_10[3] = 0x18;
  local_10[4] = 0x16;
  local_10[5] = 0x2f;
  local_10[6] = 0x2b;
  local_10[7] = 0x2c;
  local_10[8] = 0x2a;
  local_10[9] = 0xb;
  local_10[10] = 0xc;
  local_5c[0] = 0x22;
  local_5c[1] = 0x27;
  local_5c[2] = 0x28;
  local_5c[3] = 0x29;
  local_5c[4] = 0x2c;
  local_5c[5] = 0x2d;
  local_5c[6] = 0x2e;
  local_5c[7] = 0x30;
  local_5c[8] = 0x31;
  local_5c[9] = 0x32;
  local_5c[10] = 0x33;
  local_5c[0xb] = 0x34;
  local_5c[0xc] = 0x35;
  local_5c[0xd] = 0x36;
  local_5c[0xe] = 0x37;
  local_5c[0xf] = 0x38;
  local_5c[0x10] = 0x39;
  local_5c[0x11] = 0x41;
  local_5c[0x12] = 0x42;
  local_5c[0x13] = 0x43;
  local_5c[0x14] = 0x44;
  local_5c[0x15] = 0x45;
  local_5c[0x16] = 0x46;
  local_5c[0x17] = 0x47;
  local_5c[0x18] = 0x48;
  local_5c[0x19] = 0x49;
  local_5c[0x1a] = 0x4a;
  local_5c[0x1b] = 0x4b;
  local_5c[0x1c] = 0x4c;
  local_5c[0x1d] = 0x4d;
  local_5c[0x1e] = 0x4e;
  local_5c[0x1f] = 0x4f;
  local_5c[0x20] = 0xd;
  local_5c[0x42] = 0xd;
  local_5c[0x21] = 10;
  local_5c[0x43] = 10;
  local_5c[0x22] = 0x50;
  local_5c[0x23] = 0x51;
  local_5c[0x24] = 0x52;
  local_5c[0x25] = 0x53;
  local_5c[0x26] = 0x54;
  local_5c[0x27] = 0x55;
  local_5c[0x28] = 0x56;
  local_5c[0x29] = 0x57;
  local_5c[0x2a] = 0x58;
  local_5c[0x2b] = 0x59;
  local_5c[0x2c] = 0x5a;
  local_5c[0x2d] = 0x61;
  local_5c[0x2e] = 0x62;
  local_5c[0x2f] = 99;
  local_5c[0x30] = 100;
  local_5c[0x31] = 0x65;
  local_5c[0x32] = 0x66;
  local_5c[0x33] = 0x67;
  local_5c[0x34] = 0x68;
  local_5c[0x35] = 0x69;
  local_5c[0x36] = 0x6a;
  local_5c[0x37] = 0x6b;
  local_5c[0x38] = 0x6c;
  local_5c[0x39] = 0x6d;
  local_5c[0x3a] = 0x6e;
  local_5c[0x3b] = 0x6f;
  local_5c[0x3c] = 0x70;
  local_5c[0x3d] = 0x71;
  local_5c[0x3e] = 0x72;
  local_5c[0x3f] = 0x73;
  local_5c[0x40] = 0x74;
  local_5c[0x41] = 0x75;
  local_5c[0x44] = 0x76;
  local_5c[0x45] = 0x77;
  local_5c[0x46] = 0x78;
  local_5c[0x47] = 0x79;
  local_5c[0x48] = 0x7a;
  ccFntTy::operator((ccFntTy *)local_98,0x19d,(LOGFONTA *)local_98,(uint *)0x0,local_5c,param_1,
                    local_10,5,2,1,1,0x40011c,param_2);
  return;
}


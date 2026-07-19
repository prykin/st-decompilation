
void __cdecl thunk_FUN_005df290(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 auStack_98 [5];
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  BYTE BStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  char acStack_7c [32];
  byte abStack_5c [76];
  byte abStack_10 [12];
  
  puVar6 = auStack_98;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  BStack_81 = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = s_Verdana_007c1bc4;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  auStack_98[0] = 0xfffffff4;
  auStack_98[1] = 0;
  auStack_98[2] = 0;
  auStack_98[3] = 0;
  auStack_98[4] = 400;
  uStack_84 = 0;
  uStack_83 = 0;
  uStack_82 = 0;
  uStack_80 = 3;
  uStack_7f = 2;
  uStack_7e = 1;
  uStack_7d = 0x22;
  abStack_10[0] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = acStack_7c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  abStack_10[1] = 0x1b;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  abStack_10[2] = 0x17;
  abStack_10[3] = 0x18;
  abStack_10[4] = 0x16;
  abStack_10[5] = 0x2f;
  abStack_10[6] = 0x2b;
  abStack_10[7] = 0x2c;
  abStack_10[8] = 0x2a;
  abStack_10[9] = 0xb;
  abStack_10[10] = 0xc;
  abStack_5c[0] = 0x22;
  abStack_5c[1] = 0x27;
  abStack_5c[2] = 0x28;
  abStack_5c[3] = 0x29;
  abStack_5c[4] = 0x2c;
  abStack_5c[5] = 0x2d;
  abStack_5c[6] = 0x2e;
  abStack_5c[7] = 0x30;
  abStack_5c[8] = 0x31;
  abStack_5c[9] = 0x32;
  abStack_5c[10] = 0x33;
  abStack_5c[0xb] = 0x34;
  abStack_5c[0xc] = 0x35;
  abStack_5c[0xd] = 0x36;
  abStack_5c[0xe] = 0x37;
  abStack_5c[0xf] = 0x38;
  abStack_5c[0x10] = 0x39;
  abStack_5c[0x11] = 0x41;
  abStack_5c[0x12] = 0x42;
  abStack_5c[0x13] = 0x43;
  abStack_5c[0x14] = 0x44;
  abStack_5c[0x15] = 0x45;
  abStack_5c[0x16] = 0x46;
  abStack_5c[0x17] = 0x47;
  abStack_5c[0x18] = 0x48;
  abStack_5c[0x19] = 0x49;
  abStack_5c[0x1a] = 0x4a;
  abStack_5c[0x1b] = 0x4b;
  abStack_5c[0x1c] = 0x4c;
  abStack_5c[0x1d] = 0x4d;
  abStack_5c[0x1e] = 0x4e;
  abStack_5c[0x1f] = 0x4f;
  abStack_5c[0x20] = 0xd;
  abStack_5c[0x42] = 0xd;
  abStack_5c[0x21] = 10;
  abStack_5c[0x43] = 10;
  abStack_5c[0x22] = 0x50;
  abStack_5c[0x23] = 0x51;
  abStack_5c[0x24] = 0x52;
  abStack_5c[0x25] = 0x53;
  abStack_5c[0x26] = 0x54;
  abStack_5c[0x27] = 0x55;
  abStack_5c[0x28] = 0x56;
  abStack_5c[0x29] = 0x57;
  abStack_5c[0x2a] = 0x58;
  abStack_5c[0x2b] = 0x59;
  abStack_5c[0x2c] = 0x5a;
  abStack_5c[0x2d] = 0x61;
  abStack_5c[0x2e] = 0x62;
  abStack_5c[0x2f] = 99;
  abStack_5c[0x30] = 100;
  abStack_5c[0x31] = 0x65;
  abStack_5c[0x32] = 0x66;
  abStack_5c[0x33] = 0x67;
  abStack_5c[0x34] = 0x68;
  abStack_5c[0x35] = 0x69;
  abStack_5c[0x36] = 0x6a;
  abStack_5c[0x37] = 0x6b;
  abStack_5c[0x38] = 0x6c;
  abStack_5c[0x39] = 0x6d;
  abStack_5c[0x3a] = 0x6e;
  abStack_5c[0x3b] = 0x6f;
  abStack_5c[0x3c] = 0x70;
  abStack_5c[0x3d] = 0x71;
  abStack_5c[0x3e] = 0x72;
  abStack_5c[0x3f] = 0x73;
  abStack_5c[0x40] = 0x74;
  abStack_5c[0x41] = 0x75;
  abStack_5c[0x44] = 0x76;
  abStack_5c[0x45] = 0x77;
  abStack_5c[0x46] = 0x78;
  abStack_5c[0x47] = 0x79;
  abStack_5c[0x48] = 0x7a;
  ccFntTy::operator((ccFntTy *)auStack_98,0x19d,(LOGFONTA *)auStack_98,(uint *)0x0,abStack_5c,
                    param_1,abStack_10,5,2,1,0,0x40011c,param_2);
  return;
}


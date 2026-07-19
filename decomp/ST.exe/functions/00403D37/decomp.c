
void __cdecl thunk_FUN_00541cf0(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 auStack_90 [5];
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  BYTE BStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  char acStack_74 [32];
  byte abStack_54 [60];
  byte abStack_18 [20];
  
  puVar6 = auStack_90;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  BStack_79 = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = s_Small_Fonts_007c1bb4;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  auStack_90[0] = 0xfffffff8;
  auStack_90[1] = 0;
  auStack_90[2] = 0;
  auStack_90[3] = 0;
  auStack_90[4] = 400;
  uStack_7c = 0;
  uStack_7b = 0;
  uStack_7a = 0;
  uStack_78 = 1;
  uStack_77 = 2;
  uStack_76 = 1;
  uStack_75 = 0x22;
  abStack_18[0] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = acStack_74;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  abStack_18[2] = 0x10;
  abStack_18[3] = 0x10;
  abStack_18[4] = 0x10;
  abStack_18[5] = 0x10;
  abStack_18[6] = 0x10;
  abStack_18[8] = 0x10;
  abStack_18[9] = 0x10;
  abStack_18[10] = 0x10;
  abStack_18[0xb] = 0x10;
  abStack_18[0xc] = 0x10;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  abStack_18[1] = 0x13;
  abStack_18[7] = 0x12;
  abStack_18[0xd] = 0xcf;
  abStack_18[0xe] = 0x5f;
  abStack_18[0xf] = 0x5f;
  abStack_18[0x10] = 0x5f;
  abStack_18[0x11] = 0x5f;
  abStack_18[0x12] = 0x5f;
  abStack_54[0] = 0x20;
  abStack_54[1] = 0x21;
  abStack_54[2] = 0x22;
  abStack_54[3] = 0x23;
  abStack_54[4] = 0x25;
  abStack_54[5] = 0x26;
  abStack_54[6] = 0x27;
  abStack_54[7] = 0x28;
  abStack_54[8] = 0x29;
  abStack_54[9] = 0x2c;
  abStack_54[10] = 0x2d;
  abStack_54[0xb] = 0x2e;
  abStack_54[0xc] = 0x2f;
  abStack_54[0xd] = 0x30;
  abStack_54[0xe] = 0x31;
  abStack_54[0xf] = 0x32;
  abStack_54[0x10] = 0x33;
  abStack_54[0x11] = 0x34;
  abStack_54[0x12] = 0x35;
  abStack_54[0x13] = 0x36;
  abStack_54[0x14] = 0x37;
  abStack_54[0x15] = 0x38;
  abStack_54[0x16] = 0x39;
  abStack_54[0x17] = 0x3a;
  abStack_54[0x18] = 0x3d;
  abStack_54[0x19] = 0x3e;
  abStack_54[0x1a] = 0x3f;
  abStack_54[0x1b] = 0x41;
  abStack_54[0x1c] = 0x42;
  abStack_54[0x1d] = 0x43;
  abStack_54[0x1e] = 0x44;
  abStack_54[0x1f] = 0x45;
  abStack_54[0x20] = 0xd;
  abStack_54[0x21] = 10;
  abStack_54[0x22] = 0x46;
  abStack_54[0x23] = 0x47;
  abStack_54[0x24] = 0x48;
  abStack_54[0x25] = 0x49;
  abStack_54[0x26] = 0x4a;
  abStack_54[0x27] = 0x4b;
  abStack_54[0x28] = 0x4c;
  abStack_54[0x29] = 0x4d;
  abStack_54[0x2a] = 0x4e;
  abStack_54[0x2b] = 0x4f;
  abStack_54[0x2c] = 0x50;
  abStack_54[0x2d] = 0x51;
  abStack_54[0x2e] = 0x52;
  abStack_54[0x2f] = 0x53;
  abStack_54[0x30] = 0x54;
  abStack_54[0x31] = 0x55;
  abStack_54[0x32] = 0x56;
  abStack_54[0x33] = 0x57;
  abStack_54[0x34] = 0x58;
  abStack_54[0x35] = 0x59;
  abStack_54[0x36] = 0x5a;
  abStack_54[0x37] = 0x5c;
  abStack_54[0x38] = 0x7c;
  abStack_54[0x39] = 0x7e;
  abStack_54[0x3a] = 0x2a;
  ccFntTy::operator((ccFntTy *)auStack_90,0x19d,(LOGFONTA *)auStack_90,(uint *)0x0,abStack_54,
                    param_1,abStack_18,3,6,1,0,0x10021c,param_2);
  return;
}


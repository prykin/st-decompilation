
void __cdecl thunk_FUN_005da130(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 auStack_78 [5];
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  BYTE BStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  char acStack_5c [32];
  byte abStack_3c [56];
  
  puVar6 = auStack_78;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  BStack_61 = param_3;
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
  auStack_78[0] = 0xfffffff0;
  auStack_78[1] = 0;
  auStack_78[2] = 0;
  auStack_78[3] = 0;
  auStack_78[4] = 400;
  uStack_64 = 0;
  uStack_63 = 0;
  uStack_62 = 0;
  uStack_60 = 3;
  uStack_5f = 2;
  uStack_5e = 1;
  uStack_5d = 0x22;
  abStack_3c[0x20] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = acStack_5c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  abStack_3c[0x25] = 0xfa;
  abStack_3c[0x28] = 0xfa;
  abStack_3c[0x29] = 0xfa;
  abStack_3c[0x2b] = 0xfb;
  abStack_3c[0x2c] = 0xfb;
  abStack_3c[0x2e] = 6;
  abStack_3c[0x2f] = 6;
  abStack_3c[0x21] = 0x13;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  abStack_3c[0x22] = 2;
  abStack_3c[0x23] = 2;
  abStack_3c[0x24] = 0x14;
  abStack_3c[0x26] = 0x16;
  abStack_3c[0x27] = 0x15;
  abStack_3c[0x2a] = 0x10;
  abStack_3c[0x2d] = 0x33;
  abStack_3c[0x30] = 0xd;
  abStack_3c[0x31] = 0xfe;
  abStack_3c[0x32] = 0xfe;
  abStack_3c[0x33] = 0xe;
  abStack_3c[0x34] = 0xfe;
  abStack_3c[0x35] = 0xfe;
  abStack_3c[0] = 0x27;
  abStack_3c[1] = 0x28;
  abStack_3c[2] = 0x29;
  abStack_3c[3] = 0x2c;
  abStack_3c[4] = 0x2d;
  abStack_3c[5] = 0x2e;
  abStack_3c[6] = 0x41;
  abStack_3c[7] = 0x42;
  abStack_3c[8] = 0x43;
  abStack_3c[9] = 0x44;
  abStack_3c[10] = 0x45;
  abStack_3c[0xb] = 0x46;
  abStack_3c[0xc] = 0x47;
  abStack_3c[0xd] = 0x48;
  abStack_3c[0xe] = 0x49;
  abStack_3c[0xf] = 0x4a;
  abStack_3c[0x10] = 0x4b;
  abStack_3c[0x11] = 0x4c;
  abStack_3c[0x12] = 0x4d;
  abStack_3c[0x13] = 0x4e;
  abStack_3c[0x14] = 0x4f;
  abStack_3c[0x15] = 0x50;
  abStack_3c[0x16] = 0x51;
  abStack_3c[0x17] = 0x52;
  abStack_3c[0x18] = 0x53;
  abStack_3c[0x19] = 0x54;
  abStack_3c[0x1a] = 0x55;
  abStack_3c[0x1b] = 0x56;
  abStack_3c[0x1c] = 0x57;
  abStack_3c[0x1d] = 0x58;
  abStack_3c[0x1e] = 0x59;
  abStack_3c[0x1f] = 0x5a;
  ccFntTy::operator((ccFntTy *)auStack_78,0x19d,(LOGFONTA *)auStack_78,(uint *)0x0,abStack_3c,
                    param_1,abStack_3c + 0x20,7,3,1,1,0x100011c,param_2);
  return;
}


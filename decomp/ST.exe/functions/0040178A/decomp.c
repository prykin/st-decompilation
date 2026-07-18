
void __cdecl thunk_FUN_005421d0(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA LStack_90;
  byte abStack_54 [60];
  byte abStack_18 [20];
  
  pLVar6 = &LStack_90;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  LStack_90.lfCharSet = param_3;
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
  LStack_90.lfHeight = -8;
  LStack_90.lfWidth = 0;
  LStack_90.lfEscapement = 0;
  LStack_90.lfOrientation = 0;
  LStack_90.lfWeight = 400;
  LStack_90.lfItalic = '\0';
  LStack_90.lfUnderline = '\0';
  LStack_90.lfStrikeOut = '\0';
  LStack_90.lfOutPrecision = '\x01';
  LStack_90.lfClipPrecision = '\x02';
  LStack_90.lfQuality = '\x01';
  LStack_90.lfPitchAndFamily = '\"';
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = LStack_90.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  abStack_18[0] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  abStack_18[2] = 0x46;
  abStack_18[1] = 0x3f;
  abStack_18[3] = 0x28;
  abStack_18[4] = 0x29;
  abStack_18[5] = 0x43;
  abStack_18[6] = 0x43;
  abStack_18[7] = 0x45;
  abStack_18[8] = 0x47;
  abStack_18[9] = 0x28;
  abStack_18[10] = 0x28;
  abStack_18[0xb] = 0x28;
  abStack_18[0xc] = 0x28;
  abStack_18[0xd] = 0x3d;
  abStack_18[0xe] = 0x41;
  abStack_18[0xf] = 0x3f;
  abStack_18[0x10] = 0x3f;
  abStack_18[0x11] = 0x74;
  abStack_18[0x12] = 0x74;
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
  abStack_54[0x1a] = 0x3f;
  abStack_54[0x16] = 0x39;
  abStack_54[0x17] = 0x3a;
  abStack_54[0x18] = 0x3d;
  abStack_54[0x19] = 0x3e;
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
  FUN_0070d1f0(0x19d,&LStack_90,(uint *)0x0,abStack_54,param_1,abStack_18,3,6,1,0,0x10021c,param_2);
  return;
}


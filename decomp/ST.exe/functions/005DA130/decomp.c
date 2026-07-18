
void __cdecl FUN_005da130(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_78;
  byte local_3c [56];
  
  pLVar6 = &local_78;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_78.lfCharSet = param_3;
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
  local_78.lfHeight = -0x10;
  local_78.lfWidth = 0;
  local_78.lfEscapement = 0;
  local_78.lfOrientation = 0;
  local_78.lfWeight = 400;
  local_78.lfItalic = '\0';
  local_78.lfUnderline = '\0';
  local_78.lfStrikeOut = '\0';
  local_78.lfOutPrecision = '\x03';
  local_78.lfClipPrecision = '\x02';
  local_78.lfQuality = '\x01';
  local_78.lfPitchAndFamily = '\"';
  local_3c[0x20] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_78.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_3c[0x25] = 0xfa;
  local_3c[0x28] = 0xfa;
  local_3c[0x29] = 0xfa;
  local_3c[0x2b] = 0xfb;
  local_3c[0x2c] = 0xfb;
  local_3c[0x2e] = 6;
  local_3c[0x2f] = 6;
  local_3c[0x21] = 0x13;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_3c[0x22] = 2;
  local_3c[0x23] = 2;
  local_3c[0x24] = 0x14;
  local_3c[0x26] = 0x16;
  local_3c[0x27] = 0x15;
  local_3c[0x2a] = 0x10;
  local_3c[0x2d] = 0x33;
  local_3c[0x30] = 0xd;
  local_3c[0x31] = 0xfe;
  local_3c[0x32] = 0xfe;
  local_3c[0x33] = 0xe;
  local_3c[0x34] = 0xfe;
  local_3c[0x35] = 0xfe;
  local_3c[0] = 0x27;
  local_3c[1] = 0x28;
  local_3c[2] = 0x29;
  local_3c[3] = 0x2c;
  local_3c[4] = 0x2d;
  local_3c[5] = 0x2e;
  local_3c[6] = 0x41;
  local_3c[7] = 0x42;
  local_3c[8] = 0x43;
  local_3c[9] = 0x44;
  local_3c[10] = 0x45;
  local_3c[0xb] = 0x46;
  local_3c[0xc] = 0x47;
  local_3c[0xd] = 0x48;
  local_3c[0xe] = 0x49;
  local_3c[0xf] = 0x4a;
  local_3c[0x10] = 0x4b;
  local_3c[0x11] = 0x4c;
  local_3c[0x12] = 0x4d;
  local_3c[0x13] = 0x4e;
  local_3c[0x14] = 0x4f;
  local_3c[0x15] = 0x50;
  local_3c[0x16] = 0x51;
  local_3c[0x17] = 0x52;
  local_3c[0x18] = 0x53;
  local_3c[0x19] = 0x54;
  local_3c[0x1a] = 0x55;
  local_3c[0x1b] = 0x56;
  local_3c[0x1c] = 0x57;
  local_3c[0x1d] = 0x58;
  local_3c[0x1e] = 0x59;
  local_3c[0x1f] = 0x5a;
  FUN_0070d1f0(0x19d,&local_78,(uint *)0x0,local_3c,param_1,local_3c + 0x20,7,3,1,1,0x100011c,
               param_2);
  return;
}


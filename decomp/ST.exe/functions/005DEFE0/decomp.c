#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /WinDef.h/HDC; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=4,
   ignored=0, unknown=0 */

HDC __cdecl FUN_005defe0(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  LOGFONTA *pLVar7;
  char *pcVar8;
  CHAR *pCVar9;
  LOGFONTA local_98;
  byte local_5c [76];
  byte local_10 [12];

  pLVar7 = &local_98;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  local_98.lfCharSet = param_3;
  uVar4 = 0xffffffff;
  pcVar6 = "Verdana";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_98.lfHeight = -0x10;
  local_98.lfWidth = 0;
  local_98.lfEscapement = 0;
  local_98.lfOrientation = 0;
  local_98.lfWeight = 400;
  local_98.lfItalic = '\0';
  local_98.lfUnderline = '\0';
  local_98.lfStrikeOut = '\0';
  local_98.lfOutPrecision = '\x03';
  local_98.lfClipPrecision = '\x02';
  local_98.lfQuality = '\x01';
  local_98.lfPitchAndFamily = '\"';
  local_10[0] = 0;
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_98.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_10[1] = 0x1b;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
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
  pHVar2 = ccFntTy::operator_new
                     (0x19d,&local_98,nullptr,local_5c,param_1,local_10,5,2,1,1,0x40011c,param_2
                     );
  return pHVar2;
}


#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HDC __cdecl FUN_005419e0(int param_1,undefined *param_2,BYTE param_3)

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
  LOGFONTA local_a4;
  byte local_68 [88];
  byte local_10 [12];

  pLVar7 = &local_a4;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  local_a4.lfCharSet = param_3;
  uVar4 = 0xffffffff;
  pcVar6 = "System";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_a4.lfHeight = -0xd;
  local_a4.lfWidth = 0;
  local_a4.lfEscapement = 0;
  local_a4.lfOrientation = 0;
  local_a4.lfWeight = 700;
  local_a4.lfItalic = '\0';
  local_a4.lfUnderline = '\0';
  local_a4.lfStrikeOut = '\0';
  local_a4.lfOutPrecision = '\x01';
  local_a4.lfClipPrecision = '\x02';
  local_a4.lfQuality = '\x01';
  local_a4.lfPitchAndFamily = '\"';
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_a4.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_10[7] = 0x8e;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
  }
  local_10[8] = 0x8e;
  local_10[0] = 0;
  local_10[1] = 0x75;
  local_10[2] = 0x28;
  local_10[3] = 0x45;
  local_10[4] = 0x44;
  local_10[5] = 0x43;
  local_10[6] = 0x20;
  local_10[9] = 0x30;
  local_10[10] = 0x31;
  local_68[0] = 0x20;
  local_68[1] = 0x21;
  local_68[2] = 0x22;
  local_68[3] = 0x23;
  local_68[4] = 0x25;
  local_68[5] = 0x26;
  local_68[6] = 0x27;
  local_68[7] = 0x28;
  local_68[8] = 0x29;
  local_68[9] = 0x2c;
  local_68[10] = 0x2d;
  local_68[0xb] = 0x2e;
  local_68[0xc] = 0x2f;
  local_68[0xd] = 0x30;
  local_68[0xe] = 0x31;
  local_68[0xf] = 0x32;
  local_68[0x10] = 0x33;
  local_68[0x11] = 0x34;
  local_68[0x12] = 0x35;
  local_68[0x13] = 0x36;
  local_68[0x14] = 0x37;
  local_68[0x15] = 0x38;
  local_68[0x16] = 0x39;
  local_68[0x17] = 0x3a;
  local_68[0x18] = 0x3d;
  local_68[0x19] = 0x3e;
  local_68[0x1a] = 0x3f;
  local_68[0x1b] = 0x41;
  local_68[0x1c] = 0x42;
  local_68[0x20] = 0xd;
  local_68[0x42] = 0xd;
  local_68[0x21] = 10;
  local_68[0x43] = 10;
  local_68[0x1d] = 0x43;
  local_68[0x1e] = 0x44;
  local_68[0x1f] = 0x45;
  local_68[0x22] = 0x46;
  local_68[0x23] = 0x47;
  local_68[0x24] = 0x48;
  local_68[0x25] = 0x49;
  local_68[0x26] = 0x4a;
  local_68[0x27] = 0x4b;
  local_68[0x28] = 0x4c;
  local_68[0x29] = 0x4d;
  local_68[0x2a] = 0x4e;
  local_68[0x2b] = 0x4f;
  local_68[0x2c] = 0x50;
  local_68[0x2d] = 0x51;
  local_68[0x2e] = 0x52;
  local_68[0x2f] = 0x53;
  local_68[0x30] = 0x54;
  local_68[0x31] = 0x55;
  local_68[0x32] = 0x56;
  local_68[0x33] = 0x57;
  local_68[0x34] = 0x58;
  local_68[0x35] = 0x59;
  local_68[0x36] = 0x5a;
  local_68[0x37] = 0x5c;
  local_68[0x38] = 0x5f;
  local_68[0x39] = 0x61;
  local_68[0x3a] = 0x62;
  local_68[0x3b] = 99;
  local_68[0x3c] = 100;
  local_68[0x3d] = 0x65;
  local_68[0x3e] = 0x66;
  local_68[0x3f] = 0x67;
  local_68[0x40] = 0x68;
  local_68[0x41] = 0x69;
  local_68[0x44] = 0x6a;
  local_68[0x45] = 0x6b;
  local_68[0x46] = 0x6c;
  local_68[0x47] = 0x6d;
  local_68[0x48] = 0x6e;
  local_68[0x49] = 0x6f;
  local_68[0x4a] = 0x70;
  local_68[0x4b] = 0x71;
  local_68[0x4c] = 0x72;
  local_68[0x4d] = 0x73;
  local_68[0x4e] = 0x74;
  local_68[0x4f] = 0x75;
  local_68[0x50] = 0x76;
  local_68[0x51] = 0x77;
  local_68[0x52] = 0x78;
  local_68[0x53] = 0x79;
  local_68[0x54] = 0x7a;
  local_68[0x55] = 0x7c;
  local_68[0x56] = 0x7e;
  /* ST_CALLSITE[00541C32]: CALL 0x0070d1f0; direct=0070D1F0 ccFntTy::operator_new */
  pHVar2 = ccFntTy::operator_new
                     (0x19d,&local_a4,nullptr,local_68,param_1,local_10,2,5,1,0,0x100021c,
                      param_2);
  return pHVar2;
}


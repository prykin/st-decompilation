#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0052DD20 -> 0052CCE0 @ 0052DD7E; data at 0080679C

   [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HDC __cdecl FUN_0052cce0(ushort *param_1,undefined *param_2,BYTE param_3)

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
  LOGFONTA local_b0;
  byte local_74 [88];
  byte local_1c [24];

  pLVar7 = &local_b0;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  local_b0.lfCharSet = param_3;
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
  local_b0.lfHeight = -0xf;
  local_b0.lfWidth = 0;
  local_b0.lfEscapement = 0;
  local_b0.lfOrientation = 0;
  local_b0.lfWeight = 700;
  local_b0.lfItalic = '\0';
  local_b0.lfUnderline = '\0';
  local_b0.lfStrikeOut = '\0';
  local_b0.lfOutPrecision = '\x03';
  local_b0.lfClipPrecision = '\x02';
  local_b0.lfQuality = '\x01';
  local_b0.lfPitchAndFamily = '\"';
  local_1c[0] = 0;
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_b0.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_1c[1] = 0xa6;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
  }
  local_1c[3] = 0xa6;
  local_1c[2] = 10;
  local_1c[4] = 0x10;
  local_1c[5] = 0xa6;
  local_1c[6] = 0x16;
  local_1c[7] = 0xa6;
  local_1c[8] = 0x1c;
  local_1c[9] = 0xa6;
  local_1c[10] = 0x22;
  local_1c[0xb] = 0xa6;
  local_1c[0xc] = 0x28;
  local_1c[0xd] = 0xa6;
  local_1c[0xe] = 0x2e;
  local_1c[0xf] = 0xa6;
  local_1c[0x10] = 0x35;
  local_1c[0x11] = 0xa6;
  local_1c[0x12] = 0xac;
  local_1c[0x13] = 0xa6;
  local_1c[0x14] = 0x8e;
  local_74[0] = 0x20;
  local_74[1] = 0x21;
  local_74[2] = 0x22;
  local_74[3] = 0x23;
  local_74[4] = 0x25;
  local_74[5] = 0x26;
  local_74[6] = 0x27;
  local_74[7] = 0x28;
  local_74[8] = 0x29;
  local_74[9] = 0x2c;
  local_74[10] = 0x2d;
  local_74[0xb] = 0x2e;
  local_74[0xc] = 0x2f;
  local_74[0xd] = 0x30;
  local_74[0xe] = 0x31;
  local_74[0xf] = 0x32;
  local_74[0x10] = 0x33;
  local_74[0x11] = 0x34;
  local_74[0x12] = 0x35;
  local_74[0x13] = 0x36;
  local_74[0x14] = 0x37;
  local_74[0x21] = 10;
  local_74[0x20] = 0xd;
  local_74[0x42] = 0xd;
  local_74[0x43] = 10;
  local_74[0x15] = 0x38;
  local_74[0x16] = 0x39;
  local_74[0x17] = 0x3a;
  local_74[0x18] = 0x3d;
  local_74[0x19] = 0x3e;
  local_74[0x1a] = 0x3f;
  local_74[0x1b] = 0x41;
  local_74[0x1c] = 0x42;
  local_74[0x1d] = 0x43;
  local_74[0x1e] = 0x44;
  local_74[0x1f] = 0x45;
  local_74[0x22] = 0x46;
  local_74[0x23] = 0x47;
  local_74[0x24] = 0x48;
  local_74[0x25] = 0x49;
  local_74[0x26] = 0x4a;
  local_74[0x27] = 0x4b;
  local_74[0x28] = 0x4c;
  local_74[0x29] = 0x4d;
  local_74[0x2a] = 0x4e;
  local_74[0x2b] = 0x4f;
  local_74[0x2c] = 0x50;
  local_74[0x2d] = 0x51;
  local_74[0x2e] = 0x52;
  local_74[0x2f] = 0x53;
  local_74[0x30] = 0x54;
  local_74[0x31] = 0x55;
  local_74[0x32] = 0x56;
  local_74[0x33] = 0x57;
  local_74[0x34] = 0x58;
  local_74[0x35] = 0x59;
  local_74[0x36] = 0x5a;
  local_74[0x37] = 0x5c;
  local_74[0x38] = 0x5f;
  local_74[0x39] = 0x61;
  local_74[0x3a] = 0x62;
  local_74[0x3b] = 99;
  local_74[0x3c] = 100;
  local_74[0x3d] = 0x65;
  local_74[0x3e] = 0x66;
  local_74[0x3f] = 0x67;
  local_74[0x40] = 0x68;
  local_74[0x41] = 0x69;
  local_74[0x44] = 0x6a;
  local_74[0x45] = 0x6b;
  local_74[0x46] = 0x6c;
  local_74[0x47] = 0x6d;
  local_74[0x48] = 0x6e;
  local_74[0x49] = 0x6f;
  local_74[0x4a] = 0x70;
  local_74[0x4b] = 0x71;
  local_74[0x4c] = 0x72;
  local_74[0x4d] = 0x73;
  local_74[0x4e] = 0x74;
  local_74[0x4f] = 0x75;
  local_74[0x50] = 0x76;
  local_74[0x51] = 0x77;
  local_74[0x52] = 0x78;
  local_74[0x53] = 0x79;
  local_74[0x54] = 0x7a;
  local_74[0x55] = 0x7c;
  local_74[0x56] = 0x7e;
  /* ST_CALLSITE[0052CF57]: CALL 0x0070d1f0; direct=0070D1F0 ccFntTy::operator_new */
  pHVar2 = ccFntTy::operator_new
                     (0x19d,&local_b0,nullptr,local_74,(int)param_1,local_1c,10,2,2,1,0x10001c,
                      param_2);
  return pHVar2;
}


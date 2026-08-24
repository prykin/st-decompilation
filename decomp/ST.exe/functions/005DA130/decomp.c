#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DB4F0 -> 005DA130 @ 005DB713

   [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HDC __cdecl FUN_005da130(ushort *param_1,undefined *param_2,BYTE param_3)

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
  LOGFONTA local_78;
  byte local_3c [56];

  pLVar7 = &local_78;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  local_78.lfCharSet = param_3;
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
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_78.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_3c[0x25] = 0xfa;
  local_3c[0x28] = 0xfa;
  local_3c[0x29] = 0xfa;
  local_3c[0x2b] = 0xfb;
  local_3c[0x2c] = 0xfb;
  local_3c[0x2e] = 6;
  local_3c[0x2f] = 6;
  local_3c[0x21] = 0x13;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
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
  /* ST_CALLSITE[005DA2A0]: CALL 0x0070d1f0; direct=0070D1F0 ccFntTy::operator_new */
  pHVar2 = ccFntTy::operator_new
                     (0x19d,&local_78,nullptr,local_3c,(int)param_1,local_3c + 0x20,7,3,1,1,
                      0x100011c,param_2);
  return pHVar2;
}


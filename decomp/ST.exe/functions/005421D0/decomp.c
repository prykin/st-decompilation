#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005424A0 -> 005421D0 @ 00542500; data at 0080679C

   [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HDC __cdecl FUN_005421d0(ushort *param_1,undefined *param_2,BYTE param_3)

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
  LOGFONTA local_90;
  byte local_54 [60];
  byte local_18 [20];

  pLVar7 = &local_90;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  local_90.lfCharSet = param_3;
  uVar4 = 0xffffffff;
  pcVar6 = "Small Fonts";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_90.lfHeight = -8;
  local_90.lfWidth = 0;
  local_90.lfEscapement = 0;
  local_90.lfOrientation = 0;
  local_90.lfWeight = 400;
  local_90.lfItalic = '\0';
  local_90.lfUnderline = '\0';
  local_90.lfStrikeOut = '\0';
  local_90.lfOutPrecision = '\x01';
  local_90.lfClipPrecision = '\x02';
  local_90.lfQuality = '\x01';
  local_90.lfPitchAndFamily = '\"';
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_90.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_18[0] = 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
  }
  local_18[2] = 0x46;
  local_18[1] = 0x3f;
  local_18[3] = 0x28;
  local_18[4] = 0x29;
  local_18[5] = 0x43;
  local_18[6] = 0x43;
  local_18[7] = 0x45;
  local_18[8] = 0x47;
  local_18[9] = 0x28;
  local_18[10] = 0x28;
  local_18[0xb] = 0x28;
  local_18[0xc] = 0x28;
  local_18[0xd] = 0x3d;
  local_18[0xe] = 0x41;
  local_18[0xf] = 0x3f;
  local_18[0x10] = 0x3f;
  local_18[0x11] = 0x74;
  local_18[0x12] = 0x74;
  local_54[0] = 0x20;
  local_54[1] = 0x21;
  local_54[2] = 0x22;
  local_54[3] = 0x23;
  local_54[4] = 0x25;
  local_54[5] = 0x26;
  local_54[6] = 0x27;
  local_54[7] = 0x28;
  local_54[8] = 0x29;
  local_54[9] = 0x2c;
  local_54[10] = 0x2d;
  local_54[0xb] = 0x2e;
  local_54[0xc] = 0x2f;
  local_54[0xd] = 0x30;
  local_54[0xe] = 0x31;
  local_54[0xf] = 0x32;
  local_54[0x10] = 0x33;
  local_54[0x11] = 0x34;
  local_54[0x12] = 0x35;
  local_54[0x13] = 0x36;
  local_54[0x14] = 0x37;
  local_54[0x15] = 0x38;
  local_54[0x1a] = 0x3f;
  local_54[0x16] = 0x39;
  local_54[0x17] = 0x3a;
  local_54[0x18] = 0x3d;
  local_54[0x19] = 0x3e;
  local_54[0x1b] = 0x41;
  local_54[0x1c] = 0x42;
  local_54[0x1d] = 0x43;
  local_54[0x1e] = 0x44;
  local_54[0x1f] = 0x45;
  local_54[0x20] = 0xd;
  local_54[0x21] = 10;
  local_54[0x22] = 0x46;
  local_54[0x23] = 0x47;
  local_54[0x24] = 0x48;
  local_54[0x25] = 0x49;
  local_54[0x26] = 0x4a;
  local_54[0x27] = 0x4b;
  local_54[0x28] = 0x4c;
  local_54[0x29] = 0x4d;
  local_54[0x2a] = 0x4e;
  local_54[0x2b] = 0x4f;
  local_54[0x2c] = 0x50;
  local_54[0x2d] = 0x51;
  local_54[0x2e] = 0x52;
  local_54[0x2f] = 0x53;
  local_54[0x30] = 0x54;
  local_54[0x31] = 0x55;
  local_54[0x32] = 0x56;
  local_54[0x33] = 0x57;
  local_54[0x34] = 0x58;
  local_54[0x35] = 0x59;
  local_54[0x36] = 0x5a;
  local_54[0x37] = 0x5c;
  local_54[0x38] = 0x7c;
  local_54[0x39] = 0x7e;
  local_54[0x3a] = 0x2a;
  /* ST_CALLSITE[005423AA]: CALL 0x0070d1f0; direct=0070D1F0 ccFntTy::operator_new */
  pHVar2 = ccFntTy::operator_new
                     (0x19d,&local_90,nullptr,local_54,(int)param_1,local_18,3,6,1,0,0x10021c,
                      param_2);
  return pHVar2;
}


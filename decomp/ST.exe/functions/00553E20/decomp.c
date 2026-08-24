#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

HDC __cdecl FUN_00553e20(int param_1,undefined *param_2,byte param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  uint uVar4;
  char *pcVar6;
  LOGFONTA *pLVar7;
  char *pcVar8;
  CHAR *pCVar9;
  LOGFONTA local_98;
  byte local_5c [88];

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
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_98.lfFaceName;
  memmove(pCVar9, pcVar6, uVar4); /* compiler REP MOVS byte copy */
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_3 = 0xe4fae200;
  local_5c[0] = 0x20;
  local_5c[1] = 0x21;
  local_5c[2] = 0x22;
  local_5c[3] = 0x23;
  local_5c[4] = 0x25;
  local_5c[5] = 0x26;
  local_5c[6] = 0x27;
  local_5c[7] = 0x28;
  local_5c[8] = 0x29;
  local_5c[9] = 0x2c;
  local_5c[10] = 0x2d;
  local_5c[0xb] = 0x2e;
  local_5c[0xc] = 0x2f;
  local_5c[0xd] = 0x30;
  local_5c[0xe] = 0x31;
  local_5c[0xf] = 0x32;
  local_5c[0x10] = 0x33;
  local_5c[0x11] = 0x34;
  local_5c[0x12] = 0x35;
  local_5c[0x13] = 0x36;
  local_5c[0x14] = 0x37;
  local_5c[0x15] = 0x38;
  local_5c[0x16] = 0x39;
  local_5c[0x17] = 0x3a;
  local_5c[0x18] = 0x3d;
  local_5c[0x19] = 0x3e;
  local_5c[0x1a] = 0x3f;
  local_5c[0x1b] = 0x41;
  local_5c[0x1c] = 0x42;
  local_5c[0x1d] = 0x43;
  local_5c[0x1e] = 0x44;
  local_5c[0x1f] = 0x45;
  local_5c[0x20] = 0xd;
  local_5c[0x21] = 10;
  local_5c[0x22] = 0x46;
  local_5c[0x23] = 0x47;
  local_5c[0x24] = 0x48;
  local_5c[0x25] = 0x49;
  local_5c[0x42] = 0xd;
  local_5c[0x43] = 10;
  local_5c[0x26] = 0x4a;
  local_5c[0x27] = 0x4b;
  local_5c[0x28] = 0x4c;
  local_5c[0x29] = 0x4d;
  local_5c[0x2a] = 0x4e;
  local_5c[0x2b] = 0x4f;
  local_5c[0x2c] = 0x50;
  local_5c[0x2d] = 0x51;
  local_5c[0x2e] = 0x52;
  local_5c[0x2f] = 0x53;
  local_5c[0x30] = 0x54;
  local_5c[0x31] = 0x55;
  local_5c[0x32] = 0x56;
  local_5c[0x33] = 0x57;
  local_5c[0x34] = 0x58;
  local_5c[0x35] = 0x59;
  local_5c[0x36] = 0x5a;
  local_5c[0x37] = 0x5c;
  local_5c[0x38] = 0x5f;
  local_5c[0x39] = 0x61;
  local_5c[0x3a] = 0x62;
  local_5c[0x3b] = 99;
  local_5c[0x3c] = 100;
  local_5c[0x3d] = 0x65;
  local_5c[0x3e] = 0x66;
  local_5c[0x3f] = 0x67;
  local_5c[0x40] = 0x68;
  local_5c[0x41] = 0x69;
  local_5c[0x44] = 0x6a;
  local_5c[0x45] = 0x6b;
  local_5c[0x46] = 0x6c;
  local_5c[0x47] = 0x6d;
  local_5c[0x48] = 0x6e;
  local_5c[0x49] = 0x6f;
  local_5c[0x4a] = 0x70;
  local_5c[0x4b] = 0x71;
  local_5c[0x4c] = 0x72;
  local_5c[0x4d] = 0x73;
  local_5c[0x4e] = 0x74;
  local_5c[0x4f] = 0x75;
  local_5c[0x50] = 0x76;
  local_5c[0x51] = 0x77;
  local_5c[0x52] = 0x78;
  local_5c[0x53] = 0x79;
  local_5c[0x54] = 0x7a;
  local_5c[0x55] = 0x7c;
  local_5c[0x56] = 0x7e;
  /* ST_CALLSITE[0055403F]: CALL 0x0070d1f0; direct=0070D1F0 ccFntTy::operator_new */
  pHVar2 = ccFntTy::operator_new
                     (0x19d,&local_98,nullptr,local_5c,param_1,&param_3,1,3,1,1,0x40021c,param_2
                     );
  return pHVar2;
}


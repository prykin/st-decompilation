#include "../../pseudocode_runtime.h"


int __fastcall FUN_0071f340(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  iVar3 = param_1[0x4f];
  if (iVar3 < param_1[0x81]) {
    do {
      /* ST_CALLSITE[0071F36A]: CALL dword ptr [EDX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4 */
      iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x8, iVar3, iVar3 == param_1[0x4e]);
      if (param_1[0xc] < iVar1 + iVar2) break;
      iVar2 = iVar2 + param_1[0x82] + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x81]);
  }
  return iVar3 - param_1[0x4f];
}


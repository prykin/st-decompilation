#include "../../pseudocode_runtime.h"


void __fastcall FUN_006e5740(AnonShape_006E5740_EEA77B11 *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  byte local_24 [16];
  uint local_14;
  iVar3 = param_1->field_0010;
  if (iVar3 != 0) {
    iVar1 = STField<int>(iVar3,0xC);
    while (iVar1 != 0) {
      local_14 = 3;
      if (STField<int>(iVar3,0xC) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = STField<int>(iVar3,0x1C);
      }
      puVar2 = *(undefined4 **)(iVar3 + 4);
      /* ST_CALLSITE[006E5778]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
      STStructuralVirtualCall<void>(puVar2, 0x0, local_24);
      AppClassTy::DeleteObject(param_1->field_0018,puVar2[2]);
      DArrayRemoveAt((DArrayTy *)param_1->field_0010,0);
      iVar3 = param_1->field_0010;
      iVar1 = STField<int>(iVar3,0xC);
    }
    param_1->field_000C = 0;
  }
  return;
}


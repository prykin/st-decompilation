#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0068FC70 returns forwarded through return of FUN_00679f00 @ 00679F57

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0068FC70 -> 00662240 @ 0068FCB8 */

int __thiscall FUN_0068fc70(void *this,AnonShape_0068FD00_A5257008 *aiMess,short param_2)

{
  AiFltClassTy *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;

  uVar2 = 0;
  iVar1 = STField<int>(this,0xa5);
  if (0 < STField<int>(iVar1,0xC)) {
    bVar3 = STField<int>(iVar1,0xC) != 0;
    do {
      if ((((bVar3) && (iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C), iVar1 != 0))
          && (this_00 = *(AiFltClassTy **)(iVar1 + 4), this_00 != nullptr)) &&
         ((uint)(ushort)this_00->field_007D == (int)param_2)) {
        /* ST_CALLSITE[0068FCB8]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
        AiFltClassTy::GetAiMess(this_00,(uint *)aiMess);
      }
      iVar1 = STField<int>(this,0xa5);
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < STField<uint>(iVar1,0xC);
    } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
    return 0;
  }
  return 0;
}


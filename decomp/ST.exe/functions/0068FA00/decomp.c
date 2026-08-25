#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006618E0 -> 0068FA00 @ 00661B54 */

void __thiscall FUN_0068fa00(void *this,uint *param_1)

{
  AiFltClassTy *this_00;
  int iVar1;
  uint uVar2;
  bool bVar4;
  uint local_38 [2];
  char local_30;
  undefined1 local_2f;
  uint *local_2e;

  uVar2 = 0;
  iVar1 = STField<int>(this,0xa5);
  if (0 < STField<int>(iVar1,0xC)) {
    bVar4 = STField<int>(iVar1,0xC) != 0;
    do {
      if (bVar4) {
        iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C);
      }
      else {
        iVar1 = 0;
      }
      this_00 = *(AiFltClassTy **)(iVar1 + 4);
      if ((this_00 != nullptr) && (this_00->field_007B == -0x8000)) {
        memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
        local_38[1] = STField<undefined4>(this,300);
        local_2e = param_1;
        local_38[0] = 0x75;
        local_2f = 1;
        /* ST_CALLSITE[0068FA68]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
        AiFltClassTy::GetAiMess(this_00,local_38);
        if ('\0' < local_30) {
          return;
        }
      }
      iVar1 = STField<int>(this,0xa5);
      uVar2 = uVar2 + 1;
      bVar4 = uVar2 < STField<uint>(iVar1,0xC);
    } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
  }
  return;
}


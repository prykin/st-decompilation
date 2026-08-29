#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl FUN_0065d030(RecoveredRecordView_0065D030_884B498B *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  if (param_1->field_0005 != '\0') {
    iVar1 = param_1->field_0462;
    uVar2 = 0;
    if (0 < STField<int>(iVar1,0xC)) {
      bVar3 = STField<int>(iVar1,0xC) != 0;
      do {
        if (bVar3) {
          iVar1 = STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C);
        }
        else {
          iVar1 = 0;
        }
        if (*(DArrayTy **)(iVar1 + 0xf) != nullptr) {
          DArrayDestroy(*(DArrayTy **)(iVar1 + 0xf));
          STField<undefined4>(iVar1,0xF) = 0;
        }
        iVar1 = param_1->field_0462;
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < STField<uint>(iVar1,0xC);
      } while ((int)uVar2 < (int)STField<uint>(iVar1,0xC));
    }
    DArrayDestroy((DArrayTy *)param_1->field_0462);
    param_1->field_0462 = 0;
    FUN_006b5570((DArrayTy *)param_1->field_0456);
    param_1->field_0456 = 0;
    thunk_FUN_0064a7c0((undefined4 *)&param_1[1].field_0x6);
  }
  return;
}


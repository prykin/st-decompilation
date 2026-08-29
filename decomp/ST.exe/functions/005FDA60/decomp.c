#include "../../pseudocode_runtime.h"


void __fastcall FUN_005fda60(RecoveredRecordView_005FDA60_59035400 *param_1)

{
  int *slotStorage;
  STT3DSprC *pSVar1;
  int iVar2;
  int local_8;

  slotStorage = &param_1->field_0233;
  iVar2 = 0;
  if (param_1->field_0233 != 0) {
    if ((param_1->field_0226 != 0) && (local_8 = 0, 0 < param_1->field_0226)) {
      do {
        if (*(int *)(iVar2 + 0x4e + *slotStorage) != 0) {
          FreeAndNull((void *)(iVar2 + 0x4e + *slotStorage));
        }
        pSVar1 = *(STT3DSprC **)(iVar2 + 0x42 + *slotStorage);
        if (pSVar1 != nullptr) {
          thunk_FUN_004ad310(pSVar1);
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(iVar2 + 0x42 + *slotStorage));
          *(undefined4 *)(iVar2 + 0x42 + *slotStorage) = 0;
        }
        local_8 = local_8 + 1;
        iVar2 = iVar2 + 0x52;
      } while (local_8 < param_1->field_0226);
    }
    FreeAndNull(slotStorage);
  }
  if (param_1->field_023B != 0) {
    FreeAndNull(&param_1->field_023B);
  }
  if (param_1->field_023F != 0) {
    FreeAndNull(&param_1->field_023F);
  }
  return;
}


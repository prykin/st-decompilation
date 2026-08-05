#include "../../pseudocode_runtime.h"


void __fastcall FUN_005557b0(AnonShape_005557B0_28260162 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  void *pvVar3;

  if (param_1->field_0024 != nullptr) {
    param_1->field_0024->iteratorIndex = 0;
    while( true ) {
      pDVar1 = param_1->field_0024;
      uVar2 = pDVar1->iteratorIndex;
      if (pDVar1->count <= uVar2) break;
      pvVar3 = DArrayAt<void>(pDVar1, uVar2);
      pDVar1->iteratorIndex = uVar2 + 1;
      if (pvVar3 == nullptr) break;
      if (-1 < (int)*(uint *)((int)pvVar3 + 0x32)) {
        Library::Ourlib::ST3DSMAP::SprClose
                  (g_sT3DSMAPContext_00807598,*(uint *)((int)pvVar3 + 0x32));
        *(undefined4 *)((int)pvVar3 + 0x32) = 0xffffffff;
      }
    }
    DArrayDestroy(param_1->field_0024);
    param_1->field_0024 = nullptr;
  }
  return;
}


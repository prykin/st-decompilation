#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall FUN_006366d0(AnonShape_006366D0_80B1100F *param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;

  if (param_1->field_002C != nullptr) {
    dVar1 = param_1->field_002C->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = param_1->field_002C;
        if (((uVar5 < pDVar2->count) &&
            (pvVar4 = DArrayAt<void>(pDVar2, uVar5),
            pvVar4 != nullptr)) && (uVar3 = STField<uint>(pvVar4,4), -1 < (int)uVar3)) {
          Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,uVar3);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
    }
    DArrayDestroy(param_1->field_002C);
    param_1->field_002C = nullptr;
  }
  return;
}


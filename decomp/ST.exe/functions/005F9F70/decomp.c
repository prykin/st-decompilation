#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005FA030 -> 005F9F70 @ 005FA033; STColl3C::sub_005FA030 this */

void __fastcall FUN_005f9f70(STColl3C *param_1)

{
  STT3DSprC *pSVar1;
  ushort *puVar2;

  if (param_1->field_02E6 != nullptr) {
    pSVar1 = *(STT3DSprC **)param_1->field_02E6;
    if (pSVar1 != nullptr) {
      thunk_FUN_004ad310(pSVar1);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)param_1->field_02E6);
      puVar2 = param_1->field_02E6;
      puVar2[0] = 0;
      puVar2[1] = 0;
    }
    if (-1 < (int)*(uint *)(param_1->field_02E6 + 2)) {
      Library::Ourlib::ST3DSMAP::SprClose(param_1->field_0211,*(uint *)(param_1->field_02E6 + 2));
      puVar2 = param_1->field_02E6;
      puVar2[2] = 0xffff;
      puVar2[3] = 0xffff;
    }
  }
  return;
}


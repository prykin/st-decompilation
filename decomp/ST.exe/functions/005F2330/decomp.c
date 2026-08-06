#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManBasisC::sub_005F2330(STManBasisC *this)

{
  dword dVar1;
  DArrayTy *pDVar2;
  void *pvVar3;
  uint uVar4;

  uVar4 = 0;
  if (this->field_0038 != nullptr) {
    DArrayDestroy((DArrayTy *)this->field_0038);
    this->field_0038 = nullptr;
  }
  if (this->field_003C != nullptr) {
    dVar1 = this->field_003C->count;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_003C;
        if (uVar4 < pDVar2->count) {
          pvVar3 = DArrayAt<void>(pDVar2, uVar4);
        }
        else {
          pvVar3 = nullptr;
        }
        if (-1 < (int)STField<uint>(pvVar3,0x18)) {
          Library::Ourlib::ST3DSMAP::SprClose
                    (g_sT3DSMAPContext_00807598,STField<uint>(pvVar3,0x18));
          STField<undefined4>(pvVar3,0x18) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)dVar1);
    }
    DArrayDestroy(this->field_003C);
    this->field_003C = nullptr;
  }
  return;
}


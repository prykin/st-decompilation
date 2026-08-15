#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006DBCF0 -> 006DBAB0 @ 006DBCF3; ST3DSMAPContext::sub_006DBCF0 this

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DBAB0(ST3DSMAPContext *this)

{
  uint uVar1;
  int iVar2;

  do {
    iVar2 = 0;
    if (this->field_0000 != nullptr) {
      this->field_0000[0x8b] = 0;
    }
    FUN_006b9890((int *)&this->field_044A);
    FUN_006b9890((int *)&this->field_044E);
    FUN_006b9890((int *)&this->field_0452);
    FreeAndNull(&this->field_0420);
    this->field_0428 = 0;
    this->field_042C = 0;
    this->field_0430 = 0;
    this->field_0434 = 0;
    this->field_04A2 = 0;
    this->field_04A6 = 0;
    this->field_04AA = 0;
    this->field_04AE = 0;
    this->field_04BA = 0;
    this->field_043E = 0;
    this->field_04C6 = 0;
    this->field_04CA = 0;
    this->field_04D6 = 0;
    this->field_04DA = 0;
    FreeAndNull(&this->field_0x388);
    if (this->field_031C != nullptr) {
      uVar1 = 0;
      if (0 < (int)this->field_0310) {
        do {
          if ((*(uint *)(this->field_031C + iVar2) & 0x8000) != 0) {
            Library::Ourlib::ST3DSMAP::SprClose(this,uVar1);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006a5e90(*(short **)(this->field_031C + iVar2 + 0xec));
          uVar1 = uVar1 + 1;
          iVar2 = iVar2 + 0x114;
        } while ((int)uVar1 < (int)this->field_0310);
      }
      FreeAndNull(&this->field_031C);
      FreeAndNull(&this->field_0x330);
    }
    this->field_02E0 = 0;
    this->field_0000 = nullptr;
    this->field_0310 = 0;
    this->field_0318 = 0;
    this->field_0328 = 0;
    this->field_032C = 0;
    this->field_02DC = 0;
    this->field_02A8 = 0;
    FreeAndNull(&this->field_0008);
    FreeAndNull(&this->field_0010);
    FreeAndNull(&this->field_0018);
    FreeAndNull(&this->field_0x158);
    FreeAndNull(&this->field_0154);
    FreeAndNull(&this->field_001C);
    FreeAndNull(&this->field_0350);
    FreeAndNull(&this->field_0354);
    FreeAndNull(&this->field_02B0);
    FUN_006b9890((int *)&this->field_0x294);
    FUN_006e6620((int)this);
    this->field_0014 = nullptr;
    this->field_0004 = nullptr;
    this->field_0280 = nullptr;
    this->field_0290 = 0;
    this->field_029C = 0;
    this->field_0140 = nullptr;
    this->field_028C = 0;
    this->field_013C = 0;
    this->field_0124 = 0;
    this = (ST3DSMAPContext *)this->field_0358;
  } while (this != nullptr);
  return;
}


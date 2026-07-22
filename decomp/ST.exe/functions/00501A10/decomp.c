#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=2; incoming_this_accesses=31;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_14=20;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37
    */

void __thiscall CPanelTy::sub_00501A10(CPanelTy *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;

  puVar1 = &this->field_0434;
  memset(puVar1, 0, 0x118); /* compiler bulk-zero initialization */
  if (this->field_0B9E == CASE_1) {
    if (DAT_0080874e == '\x03') {
      if (this->field_0B99 == CASE_1A) {
        *puVar1 = this->field_0048 + 0x3c;
        this->field_0438 = this->field_00A0 + 0x84;
        this->field_043C = 0x55;
        this->field_0440 = 0xe;
        this->field_044C = 0x2ef3;
      }
      this->field_0450 = this->field_0048 + 4;
      this->field_0454 = this->field_00A0 + 8;
      this->field_0458 = 100;
      this->field_045C = 0x3c;
      uVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_077C,0);
      this->field_0460 = uVar2;
      this->field_0464 = this->field_0458;
      this->field_0468 = 0x4e87;
      this->field_046C = this->field_0048 + 2;
      this->field_0470 = this->field_00A0 + 6;
      this->field_0474 = 0x20;
      this->field_0478 = 0x35;
      uVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_077C,2);
      this->field_047C = uVar2;
      this->field_0484 = 0x2ef0;
      this->field_0480 = this->field_0474;
      return;
    }
    switch(this->field_0B99) {
    case CASE_8:
    case CASE_14:
    case CASE_16:
    case CASE_17:
    case CASE_25:
      iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_02B2,0);
      this->field_043C = *(undefined4 *)(iVar3 + 4);
      iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_02B2,0);
      this->field_0440 = *(undefined4 *)(iVar3 + 8);
      *puVar1 = (*(int *)(this->field_018C + 4) - this->field_043C) / 2 + this->field_0048;
      this->field_0438 = this->field_00A0 + 0x50;
    }
    switch(this->field_0B99) {
    case CASE_8:
    case CASE_14:
      this->field_044C = 0x2ef3;
      break;
    case CASE_16:
    case CASE_17:
      this->field_044C = 0x2ef0;
    }
    this->field_0450 = this->field_0044;
    this->field_0454 = this->field_009C;
    this->field_0458 = this->field_0070;
    this->field_045C = this->field_00C8;
    this->field_0468 = 0x4e87;
  }
  return;
}


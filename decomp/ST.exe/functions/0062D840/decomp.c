#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STManRub3C::sub_0062D840(STManRub3C *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int *piVar5;
  byte *puVar6;
  DArrayTy **ppDVar7;

  puVar1 = param_1;
  if (this == nullptr) {
    puVar6 = nullptr;
  }
  else {
    puVar6 = (byte *)(&this->field_001C);
  }
  auto param_1_after_write = (undefined4 *)0x98; /* compiler stack-slot lifetime split */
  puVar4 = (byte *)(puVar1);
  memmove(puVar6, puVar4, 0x98); /* compiler REP MOVS byte copy */
  piVar5 = puVar1 + 0x26;
  this->field_00B4 = this->field_00B0;
  iVar3 = 0;
  do {
    iVar2 = 0;
    switch(iVar3) {
    case 0:
      ppDVar7 = (DArrayTy **)this->field_0030;
      break;
    case 1:
      ppDVar7 = &this->field_0050;
      break;
    case 2:
      ppDVar7 = &this->field_0070;
      break;
    case 3:
      ppDVar7 = (DArrayTy **)&this->field_0x90;
      break;
    default:
      goto switchD_0062d881_default;
    }
    iVar2 = thunk_FUN_0062d7d0((int *)ppDVar7,piVar5);
switchD_0062d881_default:
    piVar5 = (int *)((int)piVar5 + iVar2);
    param_1_after_write = (undefined4 *)((int)param_1_after_write + iVar2);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return (int)param_1_after_write;
    }
  } while( true );
}


#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0062D670 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0062CD19

   [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall STManRub3C::sub_0062D670(STManRub3C *this,uint *param_1)

{
  uint *puVar1;
  DArrayTy **ppDVar2;
  uint uVar4;
  byte *puVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *local_14;
  byte *local_10;
  uint local_c;
  STManRub3C *local_8;

  puVar1 = param_1;
  local_c = 0;
  this->field_00B0 = this->field_00B4;
  local_8 = this;
  local_10 = Library::DKW::LIB::MemAlloc(0x98);
  this->field_0028 = 2;
  if (this == nullptr) {
    puVar5 = nullptr;
  }
  else {
    puVar5 = (byte *)(&this->field_001C);
  }
  pbVar7 = local_10;
  memmove(pbVar7, puVar5, 0x98); /* compiler REP MOVS byte copy */
  *param_1 = 0x98;
  uint * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
  do {
    switch(static_cast<uint32_t>(STRawWord(param_1_after_write))) {
    case 0:
      ppDVar2 = (DArrayTy **)local_8->field_0030;
      break;
    case 0x1:
      ppDVar2 = &local_8->field_0050;
      break;
    case 0x2:
      ppDVar2 = &local_8->field_0070;
      break;
    case 0x3:
      ppDVar2 = (DArrayTy **)&local_8->field_0x90;
      break;
    default:
      goto switchD_0062d6cc_default;
    }
    if ((ppDVar2 != nullptr) &&
       (local_14 = thunk_FUN_0062d550((int *)ppDVar2,(int *)&local_c), local_c != 0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + local_c;
      local_10 = Library::DKW::LIB::MemRealloc(local_10,uVar4 + local_c);
      puVar6 = local_14;
      puVar8 = (uint *)(local_10 + (*puVar1 - local_c));
      memmove(puVar8, puVar6, local_c); /* compiler REP MOVS byte copy */
      FreeAndNull(&local_14);
    }
switchD_0062d6cc_default:
    param_1_after_write = (uint *)((int)param_1_after_write + 1);
    if (3 < (int)param_1_after_write) {
      return local_10;
    }
  } while( true );
}


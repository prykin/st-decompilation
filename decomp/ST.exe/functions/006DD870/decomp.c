#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006DD790 -> 006DD870 @ 006DD7E3; ST3DSMAPContext::sub_006DD790 this; stable alias ESI |
   006DD800 -> 006DD870 @ 006DD853; ST3DSMAPContext::sub_006DD800 this; stable alias ESI | 006DDAE0
   -> 006DD870 @ 006DDB57; ST3DSMAPContext::sub_006DDAE0 this; stable alias EBX

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=4; incoming_this_accesses=34;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=4;
   incoming_ecx_receiver_callers=4; attributed_named_callers=4; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DD870(ST3DSMAPContext *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  byte *puVar7;
  longlong lVar8;
  int local_14;
  int local_10;
  int local_c;

  if (((*(int *)&this->field_0x148 < 1) || (*(int *)&this->field_0x154 == 0)) ||
     (*(double *)&this->field_0x164 <= *(double *)&this->field_0x15c)) {
    FreeAndNull((void **)&this->field_0x158);
  }
  else {
    if (*(int *)&this->field_0x158 == 0) {
      iVar1 = Library::DKW::LIB::FUN_006aac70(0xc000);
      *(int *)&this->field_0x158 = iVar1;
    }
    lVar8 = Library::MSVCRT::__ftol();
    uVar5 = (uint)lVar8 & 0x7f00;
    *(uint *)&this->field_0x16c = uVar5;
    lVar8 = Library::MSVCRT::__ftol();
    *(uint *)&this->field_0x170 = (uint)lVar8 & 0x7f00;
    local_c = 0;
    iVar1 = (int)uVar5 >> 8;
    if (iVar1 != 0) {
      iVar4 = 0;
      iVar2 = iVar1;
      do {
        puVar7 = (byte *)(*(int *)&this->field_0x158 + iVar4);
        iVar4 = iVar4 + 0x100;
        iVar2 = iVar2 + -1;
        puVar6 = (byte *)(*(undefined4 **)&this->field_0x154);
        memmove(puVar7, puVar6, 0x100); /* compiler REP MOVS byte copy */
        local_c = iVar1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)&this->field_0x170 - *(int *)&this->field_0x16c;
    iVar1 = *(int *)&this->field_0x148;
    iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8;
    iVar2 = 0;
    if (0 < iVar4) {
      local_10 = local_c << 8;
      iVar3 = iVar4 / 2;
      local_14 = iVar4;
      do {
        puVar7 = (byte *)(*(int *)&this->field_0x158 + local_10);
        local_10 = local_10 + 0x100;
        puVar6 = (byte *)((iVar3 / iVar4 + 1) * 0x100 + *(int *)&this->field_0x154);
        memmove(puVar7, puVar6, 0x100); /* compiler REP MOVS byte copy */
        iVar3 = iVar3 + iVar1;
        local_14 = local_14 + -1;
        iVar2 = iVar4;
      } while (local_14 != 0);
    }
    if (local_c + iVar2 < 0xc0) {
      iVar1 = (local_c + iVar2) * 0x100;
      do {
        puVar7 = (byte *)(*(int *)&this->field_0x158 + iVar1);
        iVar1 = iVar1 + 0x100;
        puVar6 = (byte *)(*(int *)&this->field_0x148 * 0x100 + *(int *)&this->field_0x154);
        memmove(puVar7, puVar6, 0x100); /* compiler REP MOVS byte copy */
      } while (iVar1 < 0xc000);
    }
    lVar8 = Library::MSVCRT::__ftol();
    iVar1 = (int)lVar8;
    this->field_0174 = iVar1;
    if (((this->field_0144 != 0) && (0 < iVar1)) && (iVar1 < *(int *)&this->field_0x2c)) {
      iVar1 = Library::DKW::LIB::FUN_006acf50(this->field_001C,this->field_0028 * iVar1);
      this->field_001C = iVar1;
      return;
    }
  }
  return;
}


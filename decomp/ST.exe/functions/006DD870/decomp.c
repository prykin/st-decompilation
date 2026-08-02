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
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *puVar8;
  longlong lVar9;
  int local_14;
  int local_10;
  int local_c;

  if (((this->field_0148 < 1) || (this->field_0154 == nullptr)) ||
     (this->field_0164 <= this->field_015C)) {
    FreeAndNull(&this->field_0158);
  }
  else {
    if (this->field_0158 == nullptr) {
      pvVar1 = Library::DKW::LIB::MemAlloc(0xc000);
      this->field_0158 = pvVar1;
    }
    lVar9 = Library::MSVCRT::__ftol();
    uVar6 = (uint)lVar9 & 0x7f00;
    this->field_016C = uVar6;
    lVar9 = Library::MSVCRT::__ftol();
    this->field_0170 = (uint)lVar9 & 0x7f00;
    local_c = 0;
    iVar2 = (int)uVar6 >> 8;
    if (iVar2 != 0) {
      iVar5 = 0;
      iVar3 = iVar2;
      do {
        puVar8 = (byte *)((int)this->field_0158 + iVar5);
        iVar5 = iVar5 + 0x100;
        iVar3 = iVar3 + -1;
        pbVar7 = this->field_0154;
        memmove(puVar8, pbVar7, 0x100); /* compiler REP MOVS byte copy */
        local_c = iVar2;
      } while (iVar3 != 0);
    }
    iVar3 = this->field_0170 - this->field_016C;
    iVar2 = this->field_0148;
    iVar5 = (int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8;
    iVar3 = 0;
    if (0 < iVar5) {
      local_10 = local_c << 8;
      iVar4 = iVar5 / 2;
      local_14 = iVar5;
      do {
        puVar8 = (byte *)((int)this->field_0158 + local_10);
        local_10 = local_10 + 0x100;
        pbVar7 = this->field_0154 + (iVar4 / iVar5 + 1) * 0x100;
        memmove(puVar8, pbVar7, 0x100); /* compiler REP MOVS byte copy */
        iVar4 = iVar4 + iVar2;
        local_14 = local_14 + -1;
        iVar3 = iVar5;
      } while (local_14 != 0);
    }
    if (local_c + iVar3 < 0xc0) {
      iVar2 = (local_c + iVar3) * 0x100;
      do {
        puVar8 = (byte *)((int)this->field_0158 + iVar2);
        iVar2 = iVar2 + 0x100;
        pbVar7 = this->field_0154 + this->field_0148 * 0x100;
        memmove(puVar8, pbVar7, 0x100); /* compiler REP MOVS byte copy */
      } while (iVar2 < 0xc000);
    }
    lVar9 = Library::MSVCRT::__ftol();
    iVar2 = (int)lVar9;
    this->field_0174 = iVar2;
    if (((this->field_0144 != 0) && (0 < iVar2)) && (iVar2 < this->field_002C)) {
      pvVar1 = Library::DKW::LIB::MemRealloc(this->field_001C,this->field_0028 * iVar2);
      this->field_001C = pvVar1;
      return;
    }
  }
  return;
}


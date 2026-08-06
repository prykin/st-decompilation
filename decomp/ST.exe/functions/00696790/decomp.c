#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00696790(CGenerate *this)

{
  uint uVar2;
  uint uVar1;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;

  iVar4 = 0;
  if (0 < (int)this->field_582F) {
    do {
      uVar1 = Library::MSVCRT::FUN_0072e6c0();
      iVar5 = iVar4 + 1;
      this->field_584B[iVar4] = (byte)((int)uVar1 % this->field_583B);
      iVar4 = iVar5;
    } while (iVar5 < (int)this->field_582F);
  }
  uVar2 = this->field_582F;
  puVar6 = this->field_584F;
  for (uVar3 = (uVar2 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar6[0] = 0xffff;
    puVar6[1] = 0xffff;
    puVar6 = puVar6 + 2;
  }
  for (iVar4 = (uVar2 & 1) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (ushort *)((int)puVar6 + 1);
  }
  return;
}


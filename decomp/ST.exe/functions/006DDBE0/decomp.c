#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004A8920 -> 006DDBE0 @ 004A89ED

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=13, used=0), and
   decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=20;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=9;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DDBE0(ST3DSMAPContext *this)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ushort *local_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079dfd8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  if (((this->field_0004 == nullptr) ||
      ((this->field_0004->field_000C & 0x1100) != 0x100)) &&
     ((this->field_02DC == 0 || (this->field_02D8 != 0)))) {
    uVar4 = this->field_0038 - this->field_0030;
    iVar3 = this->field_003C - this->field_0034;
    ExceptionList = &local_14;
    FUN_006b01d0(this->field_000C,this->field_0028,this->field_0030,this->field_0034,uVar4,iVar3,
                 (byte)this->field_0128);
    if (this->field_0124 == 1) {
      puVar2 = (undefined4 *)
               ((int)this->field_0014 + this->field_0030 + this->field_0028 * this->field_0034);
      while (iVar3 != 0) {
        puVar5 = puVar2;
        for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar5 = 0x40404040;
          puVar5 = puVar5 + 1;
        }
        for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar5 = 0x40;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        puVar2 = (undefined4 *)((int)puVar2 + this->field_0028);
        iVar3 = iVar3 + -1;
      }
    }
    else {
      local_2c = this->field_0014 + this->field_0028 * this->field_0034 + this->field_0030;
      local_8 = 1;
      while (iVar3 != 0) {
        FUN_006ce6c0(local_2c,uVar4,30000);
        local_2c = local_2c + this->field_0028;
        iVar3 = iVar3 + -1;
      }
    }
  }
  ExceptionList = local_14;
  return;
}


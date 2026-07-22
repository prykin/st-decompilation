#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=8; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004F1610(CPanelTy *this,char param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar6;
  undefined4 local_9c [19];
  undefined1 local_50 [16];
  undefined4 local_40;
  int local_3c;
  uint local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 *local_1c;
  undefined2 local_18;
  uint local_10;
  int local_c;
  uint local_8;

  local_10 = (uint)(param_1 == '\0');
  if ((&this->field_02FE)[local_10] != 0) {
    local_40 = 0x5b;
    SystemClassTy::SendMessage
              ((SystemClassTy *)this->field_000C,2,(&this->field_02FE)[local_10],(int)local_50);
    local_c = local_3c;
    local_8 = local_8 & 0xffffff00;
    if (local_38 != 0) {
      do {
        uVar4 = local_8;
        iVar6 = local_c;
        memset(local_30, 0, 0x20); /* compiler bulk-zero initialization */
        iVar2 = 0;
        if (param_1 == '\0') {
          cVar1 = this->field_0BFD;
        }
        else {
          cVar1 = this->field_0BA1;
        }
        if (cVar1 == '\0') {
          local_20 = 0x50;
          iVar6 = *(int *)(iVar6 + (uVar4 & 0xff) * 4);
        }
        else {
          uVar4 = uVar4 & 0xff;
          memset(local_9c, 0, 0x4c); /* compiler bulk-zero initialization */
          local_9c[0] = 8;
          local_20 = 0x5a;
          local_9c[1] = *(undefined4 *)
                         (&DAT_00807e66 +
                         *(int *)(&this->field_0x789 + (uVar4 + local_10 * 6) * 0x27) * 4);
          local_1c = local_9c;
          SystemClassTy::SendMessage
                    ((SystemClassTy *)this->field_000C,2,*(int *)(iVar6 + uVar4 * 4),(int)local_30);
          local_20 = 0x51;
          iVar6 = *(int *)(local_c + uVar4 * 4);
        }
        local_18 = 1;
        SystemClassTy::SendMessage((SystemClassTy *)this->field_000C,2,iVar6,(int)local_30);
        bVar3 = (char)local_8 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,bVar3);
      } while (bVar3 < local_38);
    }
  }
  return;
}


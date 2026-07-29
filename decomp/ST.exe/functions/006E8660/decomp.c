#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=31; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; direct_non_thunk_callers=34;
   incoming_ecx_receiver_callers=3; attributed_named_callers=25; owner_evidence_coverage=adequate */

undefined4 __thiscall
ST3DSMAPContext::sub_006E8660
          (ST3DSMAPContext *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  undefined4 *puVar2;
  AnonShape_006E8840_CF3FA5BA *pAVar4;
  AnonShape_006E8840_CF3FA5BA *pAVar5;
  int local_8;

  *param_1 = -1;
  pAVar5 = *(AnonShape_006E8840_CF3FA5BA **)&this->field_0x2e8;
  pAVar4 = (AnonShape_006E8840_CF3FA5BA *)0x0;
  if (pAVar5 == (AnonShape_006E8840_CF3FA5BA *)0x0) {
    local_8 = *(int *)&this->field_0x314;
  }
  else {
    *(undefined4 *)&this->field_0x2e8 = *(undefined4 *)&pAVar5->field_0x8;
    if (pAVar5 == *(AnonShape_006E8840_CF3FA5BA **)&this->field_0x2ec) {
      *(undefined4 *)&this->field_0x2ec = 0;
      *(undefined4 *)&this->field_0x2e8 = 0;
    }
    local_8 = ((int)pAVar5 - *(int *)&this->field_0x31c) / 0x114;
    pAVar4 = pAVar5;
  }
  if (local_8 < *(int *)&this->field_0x314) {
    pAVar5 = pAVar4;
    for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pAVar5 = 0;
      pAVar5 = (AnonShape_006E8840_CF3FA5BA *)&pAVar5->field_0x4;
    }
  }
  else {
    if (*(int *)&this->field_0x318 <= *(int *)&this->field_0x314) {
      iVar1 = Library::DKW::LIB::FUN_006acf50
                        (*(int *)&this->field_0x31c,(*(int *)&this->field_0x318 + 10) * 0x114);
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
      *(int *)&this->field_0x31c = iVar1;
      memset((void *)(iVar1 + *(int *)&this->field_0x314 * 0x114), 0, 0xac8); /* compiler bulk-zero initialization */
      *(int *)&this->field_0x318 = *(int *)&this->field_0x318 + 10;
    }
    local_8 = *(int *)&this->field_0x314;
    *(int *)&this->field_0x314 = local_8 + 1;
    pAVar4 = (AnonShape_006E8840_CF3FA5BA *)(*(int *)&this->field_0x31c + local_8 * 0x114);
  }
  if (*(int *)&this->field_0x310 <= local_8) {
    *(int *)&this->field_0x310 = local_8 + 1;
  }
  *(uint *)&pAVar4->field_0x84 = param_6;
  *(uint *)&pAVar4->field_0x88 = param_7;
  *(undefined **)pAVar4 = &DAT_00818000;
  *(undefined4 *)&pAVar4->field_0x8 = 1;
  pAVar4->field_0034 = param_4;
  pAVar4->field_0038 = param_5;
  pAVar4->field_0094 = param_2;
  pAVar4->field_00A0 = (int *)param_3;
  *(uint *)&pAVar4->field_0x18 = param_8;
  *(undefined4 *)&pAVar4->field_0x8c = 0xffffffff;
  if (0 < (int)param_2) {
    puVar2 = Library::DKW::LIB::FUN_006aac10(param_2 << 2);
    *(undefined4 **)(pAVar4 + 1) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0xfffffffe;
    }
  }
  if ((0 < (int)param_4) && (0 < (int)param_5)) {
    *(uint *)pAVar4 = *(uint *)pAVar4 | 0x1000;
    *param_1 = local_8;
    return 0;
  }
  FUN_006e8840(pAVar4);
  *param_1 = local_8;
  return 0;
}


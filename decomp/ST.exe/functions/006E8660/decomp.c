#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=31; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; direct_non_thunk_callers=34;
   incoming_ecx_receiver_callers=3; attributed_named_callers=25; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=3, ignored=38, unknown=0 */

int __thiscall
ST3DSMAPContext::sub_006E8660
          (ST3DSMAPContext *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,uint param_7,uint param_8)

{
  byte *pbVar1;
  void *pvVar2;
  int iVar3;
  AnonShape_006E8840_CF3FA5BA *pAVar4;
  AnonShape_006E8840_CF3FA5BA *pAVar5;
  int local_8;

  *param_1 = -1;
  pAVar5 = (AnonShape_006E8840_CF3FA5BA *)this->field_02E8;
  pAVar4 = nullptr;
  if (pAVar5 == nullptr) {
    local_8 = this->field_0314;
  }
  else {
    this->field_02E8 = *(int *)&pAVar5->field_0x8;
    if (pAVar5 == (AnonShape_006E8840_CF3FA5BA *)this->field_02EC) {
      this->field_02EC = 0;
      this->field_02E8 = 0;
    }
    local_8 = ((int)pAVar5 - (int)this->field_031C) / 0x114;
    pAVar4 = pAVar5;
  }
  if (local_8 < this->field_0314) {
    pAVar5 = pAVar4;
    for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar5 = 0;
      pAVar5 = (AnonShape_006E8840_CF3FA5BA *)&pAVar5->field_0x4;
    }
  }
  else {
    if (this->field_0318 <= this->field_0314) {
      pbVar1 = Library::DKW::LIB::MemRealloc(this->field_031C,(this->field_0318 + 10) * 0x114);
      if (pbVar1 == nullptr) {
        return -2;
      }
      this->field_031C = pbVar1;
      pbVar1 = pbVar1 + this->field_0314 * 0x114;
      for (iVar3 = 0x2b2; iVar3 != 0; iVar3 = iVar3 + -1) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1 = pbVar1 + 4;
      }
      this->field_0318 = this->field_0318 + 10;
    }
    local_8 = this->field_0314;
    this->field_0314 = local_8 + 1;
    pAVar4 = (AnonShape_006E8840_CF3FA5BA *)(this->field_031C + local_8 * 0x114);
  }
  if ((int)this->field_0310 <= local_8) {
    this->field_0310 = local_8 + 1;
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
    pvVar2 = Library::DKW::LIB::MemAllocClear(param_2 << 2);
    *(void **)(pAVar4 + 1) = pvVar2;
    if (pvVar2 == nullptr) {
      return -2;
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


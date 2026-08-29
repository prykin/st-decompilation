#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=7; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=11; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

undefined4 __thiscall
ST3DSMAPContext::sub_006E1DD0
          (ST3DSMAPContext *this,int param_1,int param_2,float *param_3,float *param_4,
          float *param_5)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  float local_10;
  float local_c;
  float local_8;


  iVar2 = sub_006E2D00(this,param_1,param_2);
  if (30000 < iVar2) {
    return 0;
  }
  Library::Ourlib::STREND::FUN_006e29d0(this,&local_10,param_1,param_2,iVar2);
  dVar1 = this->field_00C8 * _DAT_0079b168;
  if ((((local_10 < _DAT_0079034c) ||
       ((double)(int)*STField<short *>(this,0x280) * this->field_00C8 - dVar1 <= (double)local_10)) ||
      (local_c < _DAT_0079034c)) ||
     ((double)(int)*(short *)&this->field_0280->field_0x2 * this->field_00C8 - dVar1 <=
      (double)local_c)) {
    local_10 = -(float)this->field_00C8;
    local_8 = -(float)this->field_00D0;
    uVar3 = 0;
    local_c = local_10;
  }
  else {
    uVar3 = 1;
  }
  if (param_3 != nullptr) {
    *param_3 = local_10;
  }
  if (param_4 != nullptr) {
    *param_4 = local_c;
  }
  if (param_5 == nullptr) {
    return uVar3;
  }
  *param_5 = local_8;
  return uVar3;
}


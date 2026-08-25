#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall TLOEmbryoTy::sub_0041C3F0(TLOEmbryoTy *this,undefined *param_1)

{
  int iVar1;
  uint uVar2;
  if (((-1 < (int)param_1) &&
      (this->field_0101 = param_1, g_visibleClass_00802A88 != nullptr)) &&
     ((this->field_01D1 & 1) == 0)) {
    /* ST_CALLSITE[0041C43C]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
    VisibleClassTy::sub_00558DC0
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (undefined *)(int)this->field_005F,(int *)this->field_0024,(uint)param_1,
               (int *)this->field_0018,0xffffffff);
    if (this->field_0020 == 0x14) {
      iVar1 = thunk_FUN_004e60d0(this->field_0024,10);
      if (iVar1 < 1) {
        this->field_0105 = (int)this->field_0101;
      }
      else {
        this->field_0105 = (int)this->field_0101 << 1;
      }
      /* ST_CALLSITE[0041C49E]: CALL 0x00402c2a; direct=00402C2A VisibleClassTy::sub_005594A0 */
      VisibleClassTy::sub_005594A0
                (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
                 (char)this->field_005F,(undefined *)this->field_0024,this->field_0105,
                 this->field_0018,0xffffffff);
    }
    /* ST_CALLSITE[0041C4A7]: CALL dword ptr [EAX + 0x2c] */
    uVar2 = this->vfunc_2C();
    switch(uVar2) {
    case 5:
    case 0x11:
    case 0x21:
      /* ST_CALLSITE[0041C4FB]: CALL dword ptr [EDX + 0x94] */
      this->vfunc_94();
      break;
    case 0xb:
    case 0x23:
      this->field_010D = (int)this->field_0101;
      /* ST_CALLSITE[0041C4ED]: CALL 0x0040141f; direct=0040141F VisibleClassTy::SetZoneAst */
      VisibleClassTy::SetZoneAst
                (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
                 (char)this->field_005F,this->field_0024,(int)this->field_0101,this->field_0018,
                 0xffffffff);
      return;
    }
  }
  return;
}


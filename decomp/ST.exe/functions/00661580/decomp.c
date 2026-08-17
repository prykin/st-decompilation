#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiFltClassTy::sub_00661580(AiFltClassTy *this)

{
  ushort *this_00;
  int iVar2;
  int iVar1;
  DArrayTy *pDVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;

  this_00 = this->field_0284;
  if (this_00 == nullptr) {
    return;
  }
  if (this->field_020B == nullptr) {
    return;
  }
  if ((this->field_01FB != 0) && (this->field_0280 < this->field_01FF + this->field_01FB)) {
    return;
  }
  this->field_01FF = this->field_0280;
  if ((this->field_00FF != '\0') && (this->field_007B == 2)) {
    iVar2 = *(int *)(this_00 + 0x9c);
    if (this->field_0039 != 3) {
      if (iVar2 != 0) goto LAB_006615ff;
      iVar2 = *(int *)(this_00 + 0x9a);
    }
    if (iVar2 == 0) {
      return;
    }
  }
LAB_006615ff:
  iVar1 = thunk_FUN_0068e800(this_00,this->field_007D);
  if (iVar1 < (int)(3 - (uint)(this->field_007B != 1))) {
    pDVar3 = this->field_020B;
    uVar4 = 0;
    if (0 < (int)pDVar3->count) {
      bVar6 = pDVar3->count != 0;
      do {
        if (bVar6) {
          puVar5 = DArrayAt<uint>(pDVar3, uVar4);
        }
        else {
          puVar5 = nullptr;
        }
        if (((puVar5[10] == 0) && (puVar5[9] == 0)) &&
           /* ST_CALLSITE[0066164F]: CALL 0x00402dc9; direct=00402DC9 AiFltClassTy::sub_00660F70 */
           (sub_00660F70(this,puVar5,(short)uVar4), puVar5[9] != 0)) {
          return;
        }
        pDVar3 = this->field_020B;
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < pDVar3->count;
      } while ((int)uVar4 < (int)pDVar3->count);
    }
  }
  return;
}


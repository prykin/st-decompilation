#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=9; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall VisibleClassTy::sub_0055B7F0(VisibleClassTy *this,int param_1,undefined *param_2)

{
  VisibleClassTy_field_0110Element *element_0110;
  VisibleClassTy_field_0110DArray *pVVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;

  if ((((this->field_0114 != 0) && (param_2 < (undefined *)0x8)) &&
      ((g_playSystem_00802A38 == nullptr ||
       (g_bulkInitializedRecords_008087C7[(int)param_2].field_0022 < 8)))) &&
     (param_2 != (undefined *)(uint)DAT_0080874d)) {
    if (param_1 == 0) {
      if ((param_2 + 0xfc)[(int)this] == '\0') {
        return;
      }
    }
    else {
      if ((param_2 + 0xfc)[(int)this] == '\x01') {
        return;
      }
      (param_2 + 0xfc)[(int)this] = 1;
    }
    pVVar2 = this->field_0110;
    uVar4 = 0;
    if (0 < (int)pVVar2->count) {
      bVar5 = pVVar2->count != 0;
      do {
        if (bVar5) {
          element_0110 = DArrayAt<VisibleClassTy_field_0110Element>(pVVar2, uVar4);
        }
        else {
          element_0110 = nullptr;
        }
        piVar3 = (int *)(uint)(byte)element_0110->field_0001;
        if (piVar3 == (int *)param_2) {
          if (element_0110->field_0000 == '\0') {
            if (param_1 == 0) {
              /* ST_CALLSITE[0055B949]: CALL 0x004018f2; direct=004018F2 VisibleClassTy::sub_00559110 */
              sub_00559110(this,(int)element_0110->field_0002,(undefined *)(int)element_0110->field_0004
                           ,(int)element_0110->field_0006,(uint)piVar3,(uint)(byte)element_0110->field_0007,element_0110->field_0008,
                           0x4001);
            }
            else {
              /* ST_CALLSITE[0055B921]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
              sub_00558DC0(this,(int)element_0110->field_0002,(int)element_0110->field_0004,
                           (undefined *)(int)element_0110->field_0006,piVar3,(uint)(byte)element_0110->field_0007,
                           element_0110->field_0008,0x6009);
            }
          }
          else if (element_0110->field_0000 == '\x01') {
            if (param_1 == 0) {
              /* ST_CALLSITE[0055B8F2]: CALL 0x00402018; direct=00402018 VisibleClassTy::sub_00559620 */
              sub_00559620(this,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                           (undefined *)piVar3,(uint)(byte)element_0110->field_0007,element_0110->field_0008,2);
            }
            else {
              /* ST_CALLSITE[0055B8D3]: CALL 0x00402c2a; direct=00402C2A VisibleClassTy::sub_005594A0 */
              sub_005594A0(this,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                           (undefined *)piVar3,(uint)(byte)element_0110->field_0007,element_0110->field_0008,2);
            }
          }
        }
        pVVar2 = this->field_0110;
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < pVVar2->count;
      } while ((int)uVar4 < (int)pVVar2->count);
    }
    if (param_1 == 0) {
      (param_2 + 0xfc)[(int)this] = 0;
    }
  }
  return;
}


#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TraksClassTy.
   Evidence: this_call_owners=[TraksClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall TraksClassTy::sub_00555D90(TraksClassTy *this,undefined4 *param_1)

{
  TraksClassTy_field_0024DArray *pTVar1;
  uint uVar2;
  short *psVar3;
  TraksClassTy_field_0024Element *element_0024;
  TraksClassTy_field_0024Element *element_0024_2;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  bool bVar7;

  iVar4 = this->field_0828;
  if (-1 < iVar4) {
    uVar2 = (uint)*(short *)(&this->field_0x28 + iVar4 * 2);
    this->field_0828 = iVar4 + -1;
    if (-1 < (int)uVar2) {
      pTVar1 = this->field_0024;
      if (uVar2 < pTVar1->count) {
        element_0024 = DArrayAt<TraksClassTy_field_0024Element>(pTVar1, uVar2);
        for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)psVar3 = *param_1;
          param_1 = param_1 + 1;
          psVar3 = psVar3 + 2;
        }
        return 0;
      }
LAB_00555e34:
      puVar6 = (byte *)0x0;
      memmove(puVar6, param_1, 0x3c); /* compiler REP MOVS byte copy */
      return 0;
    }
  }
  pTVar1 = this->field_0024;
  uVar5 = 0;
  uVar2 = pTVar1->count;
  if (0 < (int)uVar2) {
    bVar7 = uVar2 != 0;
    do {
      if (bVar7) {
        element_0024_2 = DArrayAt<TraksClassTy_field_0024Element>(pTVar1, uVar5);
      }
      else {
        element_0024_2 = (TraksClassTy_field_0024Element *)0x0;
      }
      if ((int)element_0024_2->spriteHandle < 0) {
        if (-1 < (int)uVar5) {
          if (uVar5 < uVar2) {
            element_0024_2 = DArrayAt<TraksClassTy_field_0024Element>(pTVar1, uVar5);
            for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)psVar3 = *param_1;
              param_1 = param_1 + 1;
              psVar3 = psVar3 + 2;
            }
            return 0;
          }
          goto LAB_00555e34;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      bVar7 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  uVar2 = Library::DKW::TBL::FUN_006ae1c0(&pTVar1->flags,param_1);
  return uVar2;
}


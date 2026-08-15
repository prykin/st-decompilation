#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/TraksClassTy.cpp

// 005556D0 TraksClassTy::TraksClassTy
#line 4 "decomp/ST.exe/functions/005556D0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AEC0 (store 005556D9)
   Evidence: final_vptr=0079AEC0; returns_this=true; calls_before=1; field_writes_after=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005556D0 returns TraksClassTy::TraksClassTy this @ 00555706 */

TraksClassTy * __thiscall st::fn_005556D0(TraksClassTy *this)

{

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079AEC0;
  g_traksClass_00802A7C = this;
  this->field_0024 = nullptr;
  this->field_0828 = -1;
  memset(&this->field_0x28, 0, 0x800); /* compiler bulk-zero initialization */
  return this;
}

// 00555D90 TraksClassTy::sub_00555D90
#line 4 "decomp/ST.exe/functions/00555D90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TraksClassTy.
   Evidence: this_call_owners=[TraksClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall st::fn_00555D90(TraksClassTy *this,undefined4 *param_1)

{
  TraksClassTy_field_0024DArray *pTVar1;
  uint uVar3;
  short *psVar4;
  TraksClassTy_field_0024Element *element_0024;
  TraksClassTy_field_0024Element *element_0024_2;
  int uVar2;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  bool bVar8;

  iVar5 = this->field_0828;
  if (-1 < iVar5) {
    uVar3 = (uint)*(short *)(&this->field_0x28 + iVar5 * 2);
    this->field_0828 = iVar5 + -1;
    if (-1 < (int)uVar3) {
      pTVar1 = this->field_0024;
      if (uVar3 < pTVar1->count) {
        element_0024 = DArrayAt<TraksClassTy_field_0024Element>(pTVar1, uVar3);
        for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)element_0024 = *param_1;
          param_1 = param_1 + 1;
          psVar4 = psVar4 + 2;
        }
        return 0;
      }
LAB_00555e34:
      puVar7 = nullptr;
      memmove(puVar7, param_1, 0x3c); /* compiler REP MOVS byte copy */
      return 0;
    }
  }
  pTVar1 = this->field_0024;
  uVar6 = 0;
  uVar3 = pTVar1->count;
  if (0 < (int)uVar3) {
    bVar8 = uVar3 != 0;
    do {
      if (bVar8) {
        element_0024_2 = DArrayAt<TraksClassTy_field_0024Element>(pTVar1, uVar6);
      }
      else {
        element_0024_2 = nullptr;
      }
      if ((int)element_0024_2->spriteHandle < 0) {
        if (-1 < (int)uVar6) {
          if (uVar6 < uVar3) {
            element_0024_2 = DArrayAt<TraksClassTy_field_0024Element>(pTVar1, uVar6);
            for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)element_0024_2 = *param_1;
              param_1 = param_1 + 1;
              psVar4 = psVar4 + 2;
            }
            return 0;
          }
          goto LAB_00555e34;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      bVar8 = uVar6 < uVar3;
    } while ((int)uVar6 < (int)uVar3);
  }
  uVar2 = st::fn_006AE1C0((DArrayTy *)pTVar1,param_1);
  return uVar2;
}


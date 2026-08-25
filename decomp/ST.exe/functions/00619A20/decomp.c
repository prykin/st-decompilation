#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STJumpMineC::sub_00619A20(STJumpMineC *this)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;

  if (this->field_0097 < 0) {
    /* ST_CALLSITE[00619A3C]: CALL 0x004056eb; direct=004056EB STJumpMineC::LoadImagJMine */
    LoadImagJMine(this,this->field_008F);
  }
  pVVar1 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == nullptr) {
    if (this->field_00C4 == '\0') {
      return;
    }
    uVar3 = this->field_0097;
  }
  else {
    iVar2 = (int)this->field_00CD;
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          /* ST_CALLSITE[00619A8A]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                      (int)this->field_00C9,(int)this->field_00CB,&local_8,&local_c), iVar2 < 0)) ||
         ((4 < iVar2 || (local_8 < 0)))) ||
        ((pVVar1->field_0030 <= local_8 ||
         ((local_c = g_centeredOffsets5[iVar2] + local_c, local_c < 0 ||
          (pVVar1->field_0034 <= local_c)))))) ||
       ((pVVar1->field_004C == nullptr ||
        (pVVar1->field_004C[local_8 + local_c * pVVar1->field_0030] != 0)))) {
      iVar2 = this->field_00AB + 1;
      this->field_00AB = iVar2;
      if (this->field_00AF <= iVar2) {
        this->field_00AB = 0;
      }
      Library::Ourlib::ST3DSMAP::SprMove
                (g_sT3DSMAPContext_00807598,this->field_0097,
                 (float)this->field_009F * _DAT_007904f8 * _DAT_007904f0,
                 (float)this->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
                 (float)this->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,this->field_0097,0,this->field_00AB);
      Library::Ourlib::ST3DSMAP::FUN_006e96d0(g_sT3DSMAPContext_00807598,this->field_0097);
      if (this->field_00C4 != '\0') {
        return;
      }
      Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,this->field_0097,0);
      this->field_00C4 = 1;
      return;
    }
    if (this->field_00C4 == '\0') {
      return;
    }
    uVar3 = this->field_0097;
  }
  Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,uVar3);
  this->field_00C4 = 0;
  return;
}


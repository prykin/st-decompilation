#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=33;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STBHEShellC::sub_005F4680(STBHEShellC *this)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;

  if ((int)this->field_008F < 0) {
    /* ST_CALLSITE[005F469C]: CALL 0x004055ba; direct=004055BA STBHEShellC::sub_005F35F0 */
    sub_005F35F0(this,this->field_0087);
  }
  pVVar2 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 != nullptr) {
    iVar5 = this->field_009B;
    local_8 = STBiasedDiv16(iVar5, 200); /* exact signed 16-bit grid-index division */
    iVar5 = this->field_0097;
    iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
    iVar3 = this->field_0093;
    iVar3 = STBiasedDiv16(iVar3, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          /* ST_CALLSITE[005F4767]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,iVar5,
                      &local_c,&local_10), -1 < local_8)) && ((local_8 < 5 && (-1 < local_c)))) &&
        ((local_c < pVVar2->field_0030 &&
         ((local_10 = g_centeredOffsets5[local_8] + local_10, -1 < local_10 &&
          (local_10 < pVVar2->field_0034)))))) &&
       ((pVVar2->field_004C != nullptr &&
        (pVVar2->field_004C[local_c + local_10 * pVVar2->field_0030] == 0)))) {
      if (this->field_00C4 == '\0') {
        return;
      }
      Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,this->field_008F);
      this->field_00C4 = 0;
      return;
    }
    iVar5 = this->field_00AB + 1;
    this->field_00AB = iVar5;
    if (this->field_00AF <= iVar5) {
      this->field_00AB = 0;
    }
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,this->field_008F,
               (float)this->field_0093 * _DAT_007904f8 * _DAT_007904f0,
               (float)this->field_0097 * _DAT_007904f8 * _DAT_007904f0,
               (float)this->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,this->field_008F,0,this->field_00AB);
    local_8 = FUN_006acf0d(this->field_009F,this->field_00A3,this->field_00A7,this->field_0093,
                           this->field_0097,this->field_009B);
    if (local_8 == 0) {
      iVar5 = this->field_0093;
      iVar3 = this->field_0097;
      iVar4 = this->field_009B;
    }
    else {
      iVar5 = ((this->field_009F - this->field_0093) * 0x28) / local_8 + this->field_0093;
      iVar3 = ((this->field_00A3 - this->field_0097) * 0x28) / local_8 + this->field_0097;
      iVar4 = ((this->field_00A7 - this->field_009B) * 0x28) / local_8 + this->field_009B;
    }
    /* ST_CALLSITE[005F490F]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
    TraksClassTy::TraksCreate(g_traksClass_00802A7C,1,1,0,iVar5,iVar3,iVar4,0,0,0,0,0,0,-1,0,0);
    if (this->field_00C4 == '\0') {
      Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,this->field_008F,0);
      this->field_00C4 = 1;
      return;
    }
  }
  return;
}


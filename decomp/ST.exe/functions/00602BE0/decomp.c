#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=2; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_036E uses
   /SubmarineTitans/Recovered/Enums/STDestC_field_036EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_4=4;CASE_6=6

   [STSwitchEnumApplier] Switch target field_036E uses
   /SubmarineTitans/Recovered/Enums/STDestC_field_036EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_6=6 */

void __thiscall STDestC::sub_00602BE0(STDestC *this)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;

  if ((this->field_039B < 0) && (iVar2 = thunk_FUN_006029c0(), iVar2 == 0)) {
    return;
  }
  if (this->field_036E == CASE_2) {
    if (this->field_037A == '\x01') {
      Library::Ourlib::ST3DSMAP::SprSetMask
                (this->field_0211,this->field_01ED,PTR_00806724->entries[this->field_0397],
                 (int)PTR_00806724->field_002C);
    }
    if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
      this->field_0397 = this->field_0397 + (int)this->field_039F;
    }
    if (this->field_039F < '\x01') {
      if (this->field_0397 < 0) {
        Library::Ourlib::ST3DSMAP::SprSetMask(this->field_0211,this->field_01ED,0,0);
        this->field_036E = CASE_1;
      }
    }
    else if (((int)PTR_00806724->entryCount <= this->field_0397) &&
            (this->field_036E = CASE_0, this->field_037A == '\x01')) {
      thunk_FUN_004ad430((STT3DSprC *)&this->field_01D5);
      this->field_037A = 0;
    }
  }
  else if (this->field_036E != CASE_4) {
    puVar3 = sub_00602E90(this);
    this->field_03AB = puVar3;
    if (puVar3 != nullptr) {
      thunk_FUN_004ad310((STT3DSprC *)&this->field_01D5);
      this->field_039B = -1;
      this->field_036E = CASE_4;
    }
  }
  pVVar1 = g_visibleClass_00802A88;
  if ((g_visibleClass_00802A88 != nullptr) && (-1 < this->field_039B)) {
    iVar2 = (int)this->field_0259;
    if (((DAT_0080874d != -1) &&
        ((((g_visibleClass_00802A88->field_00F8 != 0 &&
           (VisibleClassTy::sub_00558C00
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       (int)this->field_0255,(int)this->field_0257,&local_8,&local_c), -1 < iVar2))
          && (iVar2 < 5)) && ((-1 < local_8 && (local_8 < (int)pVVar1->field_0030)))))) &&
       ((local_c = g_centeredOffsets5[iVar2] + local_c, -1 < local_c &&
        (((local_c < pVVar1->field_0034 && (pVVar1->field_004C != nullptr)) &&
         (pVVar1->field_004C[local_8 + local_c * pVVar1->field_0030] == 0)))))) {
      if (this->field_037A == '\0') {
        return;
      }
      thunk_FUN_004ad430((STT3DSprC *)&this->field_01D5);
      this->field_037A = 0;
      return;
    }
    this->vfunc_D8();
    if (this->field_037A == '\0') {
      thunk_FUN_004ad460(&this->field_01D5,0);
      this->field_037A = 1;
      return;
    }
  }
  return;
}


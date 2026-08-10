#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA984>0040442B

   [STObjectFactoryApplier] Central object factory for 0x0143 (ST_OBJECT_SND_UNDER_ATT_MENEG).
   Evidence: registry[76] at 007CA980 stores type 0x0143 and executable pointer 0040442B; allocation
   size 270 uniquely matches /SndUnderAttMenegC */

SndUnderAttMenegC * __cdecl CreateSndUnderAttMeneg(void)

{
  SndUnderAttMenegC *this;

  this = (SndUnderAttMenegC *)FUN_006b04d0(0x10e);
  if (this != nullptr) {
    sub_006E60E0(this);
    this->field_0000 = &VTable_0079CED8;
    DAT_00811798 = this;
    thunk_FUN_0061fdb0();
    return DAT_00811798;
  }
  DAT_00811798 = nullptr;
  return nullptr;
}


#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA84C>004043AE

   [STObjectFactoryApplier] Central object factory for 0x014B (ST_OBJECT_HELP_STRING).
   Evidence: registry[37] at 007CA848 stores type 0x014B and executable pointer 004043AE; allocation
   size 306 uniquely matches /HelpStringTy */

HelpStringTy * __cdecl CreateHelpString(void)

{
  HelpStringTy *this;

  this = (HelpStringTy *)FUN_006b04d0(0x132);
  if (this != (HelpStringTy *)0x0) {
    sub_006E5FB0(this);
    *(undefined ***)this = &PTR_GetMessage_0079ac6c;
    this->field_011D = 0;
    this->field_011C = 0;
    this->field_0126 = 0;
    this->field_0122 = 0;
    this->field_011E = (ccFntTy *)0x0;
    this->field_012A = (ushort *)0x0;
    this->field_012E = 0;
    memset(&this->field_0018, 0, 0x104); /* compiler bulk-zero initialization */
    return this;
  }
  return (HelpStringTy *)0x0;
}


#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA894>0040423C

   [STObjectFactoryApplier] Central object factory for 0x0308 (ST_OBJECT_M_ADV).
   Evidence: registry[46] at 007CA890 stores type 0x0308 and executable pointer 0040423C; allocation
   size 98 uniquely matches /MAdvTy */

MAdvTy * __cdecl CreateMAdv(void)

{
  MAdvTy *this;
  int iVar1;

  this = (MAdvTy *)FUN_006b04d0(0x62);
  if (this != (MAdvTy *)0x0) {
    sub_006E5FB0(this);
    *(undefined4 *)this = 0x79bfe4;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x38, 0, 0x20); /* compiler bulk-zero initialization */
    this->field_005E = 0;
    this->field_005D = 0;
    this->field_0x5c = 2;
    return this;
  }
  return (MAdvTy *)0x0;
}


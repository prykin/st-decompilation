#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8AC>004045D4

   [STObjectFactoryApplier] Central object factory for 0x030C (ST_OBJECT_TYPE_030C).
   Evidence: registry[49] at 007CA8A8 stores type 0x030C and executable pointer 004045D4; allocation
   size 180 has no unique current class-layout match */

MTestTy * __cdecl CreateMTest(void)

{
  MTestTy *this;
  int iVar1;


  this = STPointerBoundaryCast<MTestTy *>(FUN_006b04d0(0xb4));
  if (this != nullptr) {

    sub_006E5FB0(this);
    this->field_0018 = 0;
    this->field_005D = nullptr;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this->vtable = &MTestTyVTable;
    memset(&this->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x81, 0, 0x20); /* compiler bulk-zero initialization */
    this->field_00A5 = 2;
    this->field_00AF = 300;
    this->field_00AB = 300;
    this->field_00A6 = 0;
    this->field_00A7 = 0xffffffff;
    this->field_00B3 = 0;
    return this;
  }
  return nullptr;
}


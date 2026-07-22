#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8AC>004045D4

   [STObjectFactoryApplier] Central object factory for 0x030C (ST_OBJECT_TYPE_030C).
   Evidence: registry[49] at 007CA8A8 stores type 0x030C and executable pointer 004045D4; allocation
   size 180 has no unique current class-layout match */

void * __cdecl FUN_005e6570(void)

{
  undefined4 *this;
  int iVar1;

  this = FUN_006b04d0(0xb4);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    this[6] = 0;
    *(undefined4 *)((int)this + 0x5d) = 0;
    memset((void *)((int)this + 0x1d), 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset((void *)((int)this + 0x3d), 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    *this = &UNK_0079c23c;
    memset((void *)((int)this + 0x61), 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset((void *)((int)this + 0x81), 0, 0x20); /* compiler bulk-zero initialization */
    *(undefined1 *)((int)this + 0xa5) = 2;
    *(undefined4 *)((int)this + 0xaf) = 300;
    *(undefined4 *)((int)this + 0xab) = 300;
    *(undefined1 *)((int)this + 0xa6) = 0;
    *(undefined4 *)((int)this + 0xa7) = 0xffffffff;
    *(undefined1 *)((int)this + 0xb3) = 0;
    return this;
  }
  return (void *)0x0;
}


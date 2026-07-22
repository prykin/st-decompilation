#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA90C>004018B1

   [STObjectFactoryApplier] Central object factory for 0x0154 (ST_OBJECT_TYPE_0154).
   Evidence: registry[61] at 007CA908 stores type 0x0154 and executable pointer 004018B1; allocation
   size 481 has no unique current class-layout match */

void * __cdecl FUN_00539aa0(void)

{
  undefined4 *this;

  this = FUN_006b04d0(0x1e1);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    this[0x17] = 0;
    this[0x11] = 0;
    this[0xf] = 0;
    this[0x18] = 0xffffffff;
    this[0x19] = 4;
    this[0x1a] = 0;
    *(undefined2 *)((int)this + 0x172) = 2;
    this[0x5e] = 0;
    *this = &PTR_GetMessage_0079ad48;
    this[0x10] = 0x1d0;
    this[0x12] = 0xdc;
    *(undefined1 *)(this + 0x60) = 0;
    *(undefined4 *)((int)this + 0x1cd) = 0;
    *(undefined4 *)((int)this + 0x1dd) = 0;
    *(undefined4 *)((int)this + 0x1d9) = 0;
    *(undefined4 *)((int)this + 0x1d5) = 0;
    *(undefined4 *)((int)this + 0x1d1) = 0;
    *(undefined4 *)((int)this + 0x1c1) = 0;
    *(undefined4 *)((int)this + 0x1c5) = 0;
    this[0x5f] = 0;
    memset((void *)((int)this + 0x181), 0, 0x40); /* compiler bulk-zero initialization */
    *(undefined4 *)((int)this + 0x1c9) = 0;
    return this;
  }
  return (void *)0x0;
}


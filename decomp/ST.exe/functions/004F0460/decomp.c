#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8EC>004054A2

   [STObjectFactoryApplier] Central object factory for 0x012A (ST_OBJECT_TYPE_012A).
   Evidence: registry[57] at 007CA8E8 stores type 0x012A and executable pointer 004054A2; allocation
   size 662 has no unique current class-layout match */

void * __cdecl FUN_004f0460(void)

{
  undefined4 *this;
  undefined4 *puVar2;

  this = FUN_006b04d0(0x296);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    this[0x17] = 0;
    this[0x18] = 0xffffffff;
    this[0x19] = 4;
    this[0x1a] = 0;
    *(undefined2 *)((int)this + 0x172) = 2;
    this[0x5e] = 0;
    this[0x5f] = 0;
    this[0x61] = 0;
    this[100] = 0;
    this[0x62] = 0;
    *(undefined4 *)((int)this + 0x19d) = 0;
    this[0x60] = 0;
    *(undefined4 *)((int)this + 0x1a1) = 0;
    *(undefined4 *)((int)this + 0x1a5) = 0;
    *(undefined4 *)((int)this + 0x1a9) = 0;
    *(undefined4 *)((int)this + 0x1ad) = 0;
    *(undefined4 *)((int)this + 0x1b1) = 0;
    puVar2 = (undefined4 *)((int)this + 0x1b5);
    memset(puVar2, 0, 0xc2); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0xc0);
    *(undefined1 *)((int)puVar2 + 2) = 0;
    *(undefined4 *)((int)this + 0x199) = 0;
    *(undefined1 *)((int)this + 0x279) = 1;
    *(undefined1 *)(this + 0x9e) = 0;
    *this = &PTR_GetMessage_0079abf0;
    this[0xf] = 0xc;
    this[0x11] = 0;
    this[0x10] = 0x13d;
    this[0x12] = 0x78;
    *(undefined1 *)(this + 0x65) = 0;
    *(undefined4 *)((int)this + 0x195) = 1;
    *(undefined4 *)((int)this + 0x27a) = 0;
    *(undefined4 *)((int)this + 0x292) = 0;
    *(undefined4 *)((int)this + 0x27e) = 0;
    *(undefined4 *)((int)this + 0x282) = 0;
    *(undefined4 *)((int)this + 0x286) = 0;
    *(undefined4 *)((int)this + 0x28a) = 0;
    *(undefined4 *)((int)this + 0x28e) = 0;
    return this;
  }
  return (void *)0x0;
}


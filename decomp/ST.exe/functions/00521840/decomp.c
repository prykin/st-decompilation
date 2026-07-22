
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8FC>00405457

   [STObjectFactoryApplier] Central object factory for 0x012B (ST_OBJECT_TYPE_012B).
   Evidence: registry[59] at 007CA8F8 stores type 0x012B and executable pointer 00405457; allocation
   size 421 has no unique current class-layout match */

void * __cdecl FUN_00521840(void)

{
  undefined4 *this;

  this = FUN_006b04d0(0x1a5);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    this[0x17] = 0;
    this[0x18] = 0xffffffff;
    this[0x19] = 4;
    this[0x1a] = 0;
    *(undefined2 *)((int)this + 0x172) = 2;
    this[0x5e] = 0;
    *this = &PTR_GetMessage_0079ac9c;
    this[0xf] = 0xc;
    this[0x11] = 0;
    this[0x10] = 0x2f8;
    this[0x12] = 0x1e;
    this[0x60] = 0;
    this[0x61] = 0;
    this[0x67] = 0;
    this[0x68] = 0;
    this[0x66] = 0;
    *(undefined1 *)(this + 0x69) = 0;
    this[0x5f] = 0;
    return this;
  }
  return (void *)0x0;
}


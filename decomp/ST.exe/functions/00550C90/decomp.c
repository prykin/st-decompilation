
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA83C>00401C99

   [STObjectFactoryApplier] Central object factory for 0x0149 (ST_OBJECT_TYPE_0149).
   Evidence: registry[35] at 007CA838 stores type 0x0149 and executable pointer 00401C99; allocation
   size 481 has no unique current class-layout match */

void * __cdecl FUN_00550c90(void)

{
  undefined4 *this;

  this = FUN_006b04d0(0x1e1);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    *(undefined2 *)((int)this + 0x1be) = 100;
    *(undefined2 *)(this + 0x6f) = 100;
    this[0x17] = 0;
    this[0x18] = 0xffffffff;
    this[0x19] = 4;
    this[0x1a] = 0;
    *(undefined2 *)((int)this + 0x172) = 2;
    this[0x5e] = 0;
    this[0x5f] = 0;
    *(undefined4 *)((int)this + 0x185) = 0;
    *(undefined4 *)((int)this + 0x189) = 0;
    *this = &PTR_GetMessage_0079ae64;
    this[0xf] = 0x1c7;
    this[0x11] = 0;
    this[0x10] = 0x13d;
    this[0x12] = 0x8c;
    this[0x60] = 0;
    *(undefined1 *)(this + 0x61) = 0;
    *(undefined1 *)((int)this + 0x1bb) = 2;
    this[0x73] = 0;
    this[0x72] = 0;
    this[0x71] = 0;
    this[0x70] = 0;
    *(undefined1 *)(this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x1d9) = 0;
    *(undefined4 *)((int)this + 0x1d5) = 0;
    *(undefined4 *)((int)this + 0x1d1) = 0;
    *(undefined4 *)((int)this + 0x1dd) = 0;
    return this;
  }
  return (void *)0x0;
}


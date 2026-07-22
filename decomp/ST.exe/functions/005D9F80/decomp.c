#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA89C>0040181B

   [STObjectFactoryApplier] Central object factory for 0x0309 (ST_OBJECT_TYPE_0309).
   Evidence: registry[47] at 007CA898 stores type 0x0309 and executable pointer 0040181B; allocation
   size 7640 has no unique current class-layout match */

void * __cdecl FUN_005d9f80(void)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar4;

  this = FUN_006b04d0(0x1dd8);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    *this = &VTable_0079C018;
    this[6] = 0;
    *(undefined4 *)((int)this + 0x5d) = 0;
    memset((void *)((int)this + 0x1d), 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset((void *)((int)this + 0x3d), 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)(this + 0x5d);
    iVar1 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this_00 + -1);
      SpriteClassTy::SpriteClassTy(this_00);
      SpriteClassTy::SpriteClassTy(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *this = &MMObjTyVTable;
    *(undefined1 *)((int)this + 0x65) = 2;
    *(undefined1 *)((int)this + 0x9a) = 0;
    memset((void *)((int)this + 0x66), 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    puVar3 = this + 0x2f;
    do {
      puVar4 = puVar3;
      memset(puVar4, 0, 0x26); /* compiler bulk-zero initialization */
      puVar4 = (undefined4 *)((byte *)puVar4 + 0x24);
      iVar1 = iVar1 + -1;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(this + 0x698));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1b01));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1b92));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1c23));
    *this = &UNK_0079c1ac;
    *(undefined1 *)((int)this + 0x1a5f) = 0;
    *(undefined4 *)((int)this + 0x1af1) = 0;
    *(undefined4 *)((int)this + 0x1af5) = 0;
    *(undefined4 *)((int)this + 0x1af9) = 0;
    *(undefined4 *)((int)this + 0x1afd) = 0;
    this[0x72e] = 0;
    this[0x731] = 0;
    this[0x733] = 0;
    this[0x734] = 0;
    this[0x732] = 0;
    this[0x730] = 0;
    this[0x72f] = 0;
    this[0x72d] = 0xffffffff;
    return this;
  }
  return (void *)0x0;
}


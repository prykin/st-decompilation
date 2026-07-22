#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA88C>00402AA9

   [STObjectFactoryApplier] Central object factory for 0x0303 (ST_OBJECT_TYPE_0303).
   Evidence: registry[45] at 007CA888 stores type 0x0303 and executable pointer 00402AA9; allocation
   size 7850 has no unique current class-layout match */

void * __cdecl FUN_005b95b0(void)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar4;

  this = FUN_006b04d0(0x1eaa);
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
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1cf7));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)(this + 0x762));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)this + 0x1e19));
    *this = &UNK_0079c0a8;
    *(undefined1 *)((int)this + 0x1a5f) = 0;
    *(undefined1 *)((int)this + 0x1caa) = 0;
    *(undefined1 *)((int)this + 0x1ca9) = 0;
    *(undefined4 *)((int)this + 0x1cab) = 0;
    memset((void *)((int)this + 0x1c82), 0, 0x1a); /* compiler bulk-zero initialization */
    this[0x727] = 0x1010101;
    this[0x728] = 0x1010101;
    this[0x729] = 0x1010101;
    *(undefined1 *)(this + 0x72a) = 1;
    return this;
  }
  return (void *)0x0;
}


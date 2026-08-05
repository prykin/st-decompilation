#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8EC>004054A2

   [STObjectFactoryApplier] Central object factory for 0x012A (ST_OBJECT_TYPE_012A).
   Evidence: registry[57] at 007CA8E8 stores type 0x012A and executable pointer 004054A2; allocation
   size 662 has no unique current class-layout match */

BldObjPanelTy * __cdecl CreateBldObjPanel(void)

{
  BldObjPanelTy *this;
  undefined4 *puVar2;

  this = (BldObjPanelTy *)FUN_006b04d0(0x296);
  if (this != nullptr) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0068 = 0;
    *(undefined2 *)&this->field_0x172 = 2;
    *(undefined4 *)&this->field_0x178 = 0;
    *(undefined4 *)&this->field_0x17c = 0;
    this->field_0184 = nullptr;
    this->field_0190 = nullptr;
    this->field_0188 = nullptr;
    *(undefined4 *)&this->field_0x19d = 0;
    *(undefined4 *)&this->field_0x180 = 0;
    this->field_01A1 = 0;
    *(undefined4 *)&this->field_0x1a5 = 0;
    *(undefined4 *)&this->field_0x1a9 = 0;
    *(undefined4 *)&this->field_0x1ad = 0;
    *(undefined4 *)&this->field_0x1b1 = 0;
    puVar2 = (undefined4 *)&this->field_01B5;
    memset(puVar2, 0, 0xc3); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0xc0);
    this->field_0199 = 0;
    this->field_0279 = 1;
    this->field_0278 = 0;
    this->vtable = &BldObjPanelTyVTable;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    *(undefined4 *)&this->field_0x40 = 0x13d;
    *(undefined4 *)&this->field_0x48 = 0x78;
    this->field_0x194 = 0;
    *(undefined4 *)&this->field_0x195 = 1;
    this->field_027A = nullptr;
    *(undefined4 *)&this[1].field_0x10 = 0;
    this->field_027E = 0;
    this[1].vtable = nullptr;
    *(undefined4 *)&this[1].field_0x4 = 0;
    this[1].field_0008 = 0;
    this[1].field_000C = 0;
    return this;
  }
  return nullptr;
}


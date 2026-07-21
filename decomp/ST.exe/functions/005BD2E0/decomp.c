
undefined4 * FUN_005bd2e0(void)

{
  STGroupBoatC *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;

  this = (STGroupBoatC *)FUN_006b04d0(0x1c9e);
  if (this != (STGroupBoatC *)0x0) {
    STGroupBoatC::sub_006E5FB0(this);
    this->vtable = (STGroupBoatCVTable *)&VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
    puVar2 = (undefined4 *)((int)&this->field_001C + 1);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &this->field_003D;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)&this->field_0174;
    local_8 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this_00 + -1);
      SpriteClassTy::SpriteClassTy(this_00);
      SpriteClassTy::SpriteClassTy(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->vtable = (STGroupBoatCVTable *)&MMObjTyVTable;
    *(undefined1 *)&this->field_0065 = 2;
    this->field_0x9a = 0;
    puVar2 = (undefined4 *)((int)&this->field_0065 + 1);
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_8 = 0xd;
    puVar2 = (undefined4 *)&this->field_0xbc;
    do {
      puVar3 = puVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      local_8 = local_8 + -1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x1fb);
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)&this[8].field_01E6 + 1));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this[8].field_0278);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)&this[8].field_0308 + 1));
    this->vtable = (STGroupBoatCVTable *)&PrividerTyVTable;
    *(undefined4 *)((int)&this[8].field_01D2 + 3) = 1;
    *(undefined4 *)&this[8].field_0x1e3 = 0;
    *(undefined4 *)((int)&this[8].field_01CE + 3) = 0;
    *(undefined1 *)((int)&this[8].field_01DE + 3) = 0;
    *(undefined4 *)((int)&this[8].field_01D6 + 3) = 0;
    *(undefined4 *)((int)&this[8].field_01DA + 3) = 0;
    this[8].field_0x1e2 = 0;
    puVar2 = (undefined4 *)&this[9].field_0x88;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)&this[9].field_00E7 + 1) = 0xffffffff;
    *(undefined4 *)((int)&this[9].field_00DF + 1) = 0;
    *(undefined4 *)&this[9].field_0xe4 = 0;
    *(undefined4 *)((int)&this[9].field_00EB + 1) = 0;
    *(undefined4 *)((int)&this[9].field_00EF + 1) = 0;
    *(undefined4 *)((int)&this[9].field_00F7 + 1) = 0;
    *(undefined4 *)((int)&this[9].field_00F3 + 1) = 0;
    return &this->vtable;
  }
  return (undefined4 *)0x0;
}


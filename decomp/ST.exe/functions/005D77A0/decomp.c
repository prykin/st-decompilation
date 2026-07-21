
undefined4 * FUN_005d77a0(void)

{
  STGroupBoatC *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;
  
  this = (STGroupBoatC *)FUN_006b04d0(0x21fc);
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
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this[9].field_0xc9);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this[9].field_015A);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this[9].field_0x1eb);
    *(undefined4 *)&this[9].field_0xbd = 0;
    *(undefined4 *)&this[9].field_0xc1 = 0;
    *(undefined4 *)((int)&this[9].field_0284 + 1) = 0;
    *(undefined4 *)((int)&this[9].field_0288 + 1) = 0;
    *(undefined4 *)((int)&this[0xb].field_0018 + 3) = 0;
    *(undefined2 *)((int)&this[0xb].field_001C + 3) = 0;
    *(undefined1 *)((int)&this[0xb].field_0020 + 1) = 0;
    puVar2 = (undefined4 *)&this[10].field_0x2ad;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)&this[9].field_028C + 1) = 0;
    *(undefined4 *)&this[10].field_0x8f = 0;
    *(undefined4 *)&this[10].field_0x8b = 0;
    *(undefined4 *)&this[10].field_0x9b = 0;
    *(undefined4 *)&this[10].field_0x97 = 0;
    *(undefined4 *)&this[10].field_0xd0 = 0;
    puVar2 = (undefined4 *)&this[10].field_0xd8;
    for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)((int)&this[10].field_0266 + 3) = 0;
    *(undefined4 *)&this[10].field_0xd4 = 0;
    puVar2 = (undefined4 *)((int)&this[10].field_0216 + 2);
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    puVar2 = (undefined4 *)((int)&this[10].field_023E + 2);
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this[9].field_027C = 0;
    this[9].field_0280 = 0xffffffff;
    puVar2 = (undefined4 *)((int)&this[10].field_0270 + 1);
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)&this[10].field_0x2a9 = 0;
    *(undefined4 *)((int)&this[0xb].field_0031 + 1) = 0;
    *(undefined4 *)((int)&this[0xb].field_002D + 1) = 0;
    *(undefined4 *)((int)&this[0xb].field_0029 + 1) = 0;
    *(undefined4 *)&this[0xb].field_0x26 = 0;
    *(undefined4 *)((int)&this[0xb].field_0020 + 2) = 0;
    *(undefined4 *)&this[10].field_0xcc = 0xffffffff;
    *(undefined4 *)&this[9].field_0xc5 = 0;
    *(undefined4 *)&this[10].field_0x93 = 0;
    *(undefined4 *)&this[10].field_0xc8 = 0;
    puVar2 = (undefined4 *)&this[10].field_0xac;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)&this[10].field_0xa4 = 0;
    this[10].field_0xa3 = 1;
    this[10].field_0xa9 = 1;
    this[10].field_0xaa = 1;
    this[10].field_0xab = 1;
    this[10].field_0xa8 = 4;
    this->vtable = (STGroupBoatCVTable *)&VTable_0079C160;
    return &this->vtable;
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_005aa2c0(void)

{
  STGroupBoatC *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;
  
  this = (STGroupBoatC *)FUN_006b04d0(0x20c3);
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
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)&this[8].field_0297 + 1));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)&this[9].field_0014 + 3));
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this[9].field_0xa8);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this[9].field_0139);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this[9].field_01CA);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)((int)&this[9].field_025A + 1));
    this->vtable = (STGroupBoatCVTable *)&VTable_0079C02C;
    *(undefined4 *)((int)&this[8].field_01DA + 1) = 1;
    *(undefined1 *)&this->field_0065 = 1;
    *(undefined1 *)((int)&this[8].field_01CE + 3) = 0;
    *(undefined1 *)((int)&this[8].field_01CE + 1) = 0;
    *(undefined1 *)((int)&this[8].field_01CE + 2) = 0;
    *(undefined1 *)&this[8].field_01D2 = 1;
    *(undefined4 *)&this[10].field_0x7b = 0;
    *(undefined4 *)&this[10].field_0x6f = 0;
    *(undefined4 *)&this[10].field_0x73 = 0;
    *(undefined4 *)&this[10].field_0x77 = 0;
    *(undefined4 *)((int)&this[8].field_01D6 + 1) = 0;
    *(undefined4 *)&this[8].field_0x1ef = 0;
    *(undefined4 *)&this[8].field_0x1eb = 0;
    *(undefined4 *)((int)&this[8].field_01E6 + 1) = 0;
    *(undefined4 *)&this[8].field_0x1e3 = 0;
    *(undefined4 *)((int)&this[8].field_01DE + 1) = 0;
    *(undefined4 *)&this[8].field_0x1fb = 0;
    *(undefined4 *)&this[8].field_0x1f7 = 0;
    *(undefined4 *)&this[8].field_0x1f3 = 0;
    *(undefined4 *)&this[8].field_0x1ff = 0xffffffff;
    *(undefined4 *)&this[8].field_0x203 = 9;
    *(undefined4 *)&this[8].field_0x207 = 0;
    *(undefined4 *)((int)&this[8].field_021A + 1) = 0;
    *(undefined4 *)((int)&this[8].field_0222 + 1) = 0;
    *(undefined4 *)((int)&this[8].field_020A + 1) = 0;
    *(undefined4 *)((int)&this[8].field_020E + 1) = 0;
    *(undefined4 *)((int)&this[8].field_0212 + 1) = 0;
    *(undefined4 *)((int)&this[8].field_0226 + 1) = 0;
    *(undefined4 *)((int)&this[8].field_022A + 2) = 0xffffffff;
    *(undefined4 *)((int)&this[8].field_022E + 2) = 0;
    *(undefined1 *)((int)&this[8].field_022A + 1) = 0;
    this[8].field_0254 = 0;
    this[8].field_0256 = 0;
    *(undefined4 *)((int)&this[8].field_024E + 2) = 0;
    *(undefined4 *)((int)&this[8].field_024A + 2) = 0;
    *(undefined4 *)((int)&this[8].field_0246 + 2) = 0;
    *(undefined4 *)((int)&this[8].field_023E + 2) = 0;
    *(undefined4 *)((int)&this[8].field_0242 + 2) = 0;
    *(undefined4 *)((int)&this[8].field_023A + 2) = 0;
    *(undefined4 *)((int)&this[8].field_0236 + 2) = 0;
    *(undefined4 *)((int)&this[8].field_0232 + 2) = 0;
    this[8].field_0274 = 0;
    this[8].field_0276 = 0;
    this[8].field_0270 = 0;
    this[8].field_0272 = 0;
    this[8].field_026C = 0;
    this[8].field_026E = 0;
    *(undefined4 *)((int)&this[8].field_0266 + 2) = 0;
    *(undefined4 *)((int)&this[8].field_0262 + 2) = 0;
    *(undefined4 *)((int)&this[8].field_025E + 2) = 0;
    *(undefined4 *)&this[8].field_025C = 0;
    this[8].field_0258 = 0;
    this[8].field_025A = 0;
    this[8].field_0278 = 0;
    this[8].field_027A = 0;
    this[8].field_027C = 0;
    *(undefined4 *)&this[9].field_0x2f8 = 0;
    *(undefined4 *)&this[9].field_0x2f4 = 0;
    *(undefined4 *)&this[9].field_02F0 = 0;
    *(undefined4 *)&this[9].field_02EC = 0;
    *(undefined4 *)((int)&this[8].field_0293 + 1) = 0;
    *(undefined4 *)&this[8].field_0290 = 0;
    this[8].field_028C = 0;
    this[8].field_0288 = 0;
    this[8].field_0284 = 0;
    this[8].field_0280 = 0;
    *(undefined4 *)&this[9].field_0x300 = 0;
    *(undefined4 *)&this[9].field_0x2fc = 0;
    this[9].field_0308 = 0;
    this[9].field_0304 = 0;
    *(undefined4 *)&this[9].field_030C = 0;
    *(undefined4 *)((int)&this[10].field_0020 + 3) = 0;
    *(undefined4 *)((int)&this[10].field_001C + 3) = 0;
    *(undefined4 *)((int)&this[10].field_0004 + 2) = 0;
    *(undefined4 *)((int)&this[10].vtable + 2) = 0;
    *(undefined4 *)((int)&this[10].field_0008 + 2) = 0;
    *(undefined4 *)((int)&this[10].field_000C + 2) = 0x100;
    *(undefined4 *)((int)&this[10].field_0018 + 2) = 0;
    *(undefined4 *)&this[10].field_0027 = 0;
    *(undefined4 *)((int)&this[10].field_002D + 2) = 0;
    *(undefined4 *)((int)&this[10].field_0029 + 2) = 0;
    puVar2 = (undefined4 *)((int)&this[10].field_0031 + 2);
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this[10].field_00FF = 0;
    return &this->vtable;
  }
  return (undefined4 *)0x0;
}



void __thiscall FUN_00722070(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_70 [5];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0x1c) = 1;
    *(undefined4 *)((int)this + 0x180) = 1;
    if (*(int *)((int)this + 0x17c) != 0) {
      iVar2 = FUN_006e6020(this,(undefined4 *)((int)this + 0x16c));
      if (iVar2 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1c4);
      }
    }
  }
  if (*(int *)((int)this + 0x1d0) == 0) {
    local_1c = 1;
    local_18 = 3;
    if ((*(byte *)((int)this + 0x20) & 8) != 0) {
      local_14 = 0x18;
      iVar2 = FUN_006e5fe0(this,local_24);
      if (iVar2 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1cb);
      }
    }
    local_10 = local_70;
    uVar1 = *(undefined4 *)((int)this + 0x1cc);
    local_14 = 0x10;
    puVar3 = local_70;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_5c = *(undefined4 *)((int)this + 8);
    local_70[0] = 0xb;
    local_58 = 2;
    local_70[2] = uVar1;
    if ((*(byte *)((int)this + 0x20) & 4) == 0) {
      local_70[1] = 1;
      local_54 = 0x35;
      iVar2 = FUN_006e5fe0(this,local_24);
      if (iVar2 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d1);
      }
    }
    local_70[1] = 200;
    local_54 = 0x3a;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d2);
    }
    local_70[1] = 0xd0;
    local_54 = 0x3b;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d3);
    }
    local_70[1] = 0xcd;
    local_54 = 0x3c;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d4);
    }
    local_70[1] = 0xcb;
    local_54 = 0x3d;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d5);
    }
    local_70[1] = 199;
    local_54 = 0x3e;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d6);
    }
    local_70[1] = 0xcf;
    local_54 = 0x3f;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d7);
    }
    if ((*(byte *)((int)this + 0x20) & 4) == 0) {
      local_70[1] = 0x1c;
      local_54 = 0x39;
      iVar2 = FUN_006e5fe0(this,local_24);
      if (iVar2 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d8);
      }
    }
    local_70[1] = 0xd2;
    local_54 = 0x38;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1d9);
    }
    local_70[1] = 0xe;
    local_54 = 0x36;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1da);
    }
    local_70[1] = 0xd3;
    local_54 = 0x37;
    iVar2 = FUN_006e5fe0(this,local_24);
    if (iVar2 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1db);
    }
    if (*(int *)((int)this + 0x1bc) != 0) {
      local_70[1] = 0xf;
      local_54 = 0x40;
      iVar2 = FUN_006e5fe0(this,local_24);
      if (iVar2 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1dd);
      }
      local_70[1] = 0x100000f;
      local_54 = 0x41;
      iVar2 = FUN_006e5fe0(this,local_24);
      if (iVar2 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1de);
      }
    }
  }
  return;
}


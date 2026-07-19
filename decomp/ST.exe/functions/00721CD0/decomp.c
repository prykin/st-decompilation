
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\_sedit.cpp
   Diagnostic line evidence: 416 | 423 | 424 | 425 | 426 | 427 | 428 | 429 | 430 | 431 | 432 | 433 |
   435 | 436 | 440 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __thiscall FUN_00721cd0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
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
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x180) = 0;
    if (*(int *)((int)this + 0x17c) != 0) {
      iVar1 = FUN_006e6020(this,(undefined4 *)((int)this + 0x16c));
      if (iVar1 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1a0);
      }
    }
  }
  if (*(int *)((int)this + 0x1d0) == 0) {
    local_10 = local_70;
    puVar2 = local_70;
    for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_5c = *(undefined4 *)((int)this + 8);
    local_70[2] = *(undefined4 *)((int)this + 0x1cc);
    local_1c = 1;
    local_18 = 3;
    local_14 = 0x11;
    local_70[0] = 0xb;
    local_58 = 2;
    if ((*(byte *)((int)this + 0x20) & 4) == 0) {
      local_70[1] = 1;
      local_54 = 0x35;
      iVar1 = FUN_006e5fe0(this,local_24);
      if (iVar1 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1a7);
      }
    }
    local_70[1] = 200;
    local_54 = 0x3a;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1a8);
    }
    local_70[1] = 0xd0;
    local_54 = 0x3b;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1a9);
    }
    local_70[1] = 0xcd;
    local_54 = 0x3c;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1aa);
    }
    local_70[1] = 0xcb;
    local_54 = 0x3d;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1ab);
    }
    local_70[1] = 199;
    local_54 = 0x3e;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1ac);
    }
    local_70[1] = 0xcf;
    local_54 = 0x3f;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1ad);
    }
    if ((*(byte *)((int)this + 0x20) & 4) == 0) {
      local_70[1] = 0x1c;
      local_54 = 0x39;
      iVar1 = FUN_006e5fe0(this,local_24);
      if (iVar1 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1ae);
      }
    }
    local_70[1] = 0xd2;
    local_54 = 0x38;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1af);
    }
    local_70[1] = 0xe;
    local_54 = 0x36;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1b0);
    }
    local_70[1] = 0xd3;
    local_54 = 0x37;
    iVar1 = FUN_006e5fe0(this,local_24);
    if (iVar1 != 0) {
      RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1b1);
    }
    if (*(int *)((int)this + 0x1bc) != 0) {
      local_70[1] = 0xf;
      local_54 = 0x40;
      iVar1 = FUN_006e5fe0(this,local_24);
      if (iVar1 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1b3);
      }
      local_70[1] = 0x100000f;
      local_54 = 0x41;
      iVar1 = FUN_006e5fe0(this,local_24);
      if (iVar1 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1b4);
      }
    }
    if ((*(byte *)((int)this + 0x20) & 8) != 0) {
      local_14 = 0x19;
      iVar1 = FUN_006e5fe0(this,local_24);
      if (iVar1 != 0) {
        RaiseInternalException(0,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x1b8);
      }
    }
  }
  return;
}


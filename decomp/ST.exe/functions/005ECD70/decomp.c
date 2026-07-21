
undefined4 __thiscall
FUN_005ecd70(void *this,int param_1,int param_2,undefined4 param_3,int param_4,char param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  *(undefined4 *)((int)this + 0x25b) = *(undefined4 *)((int)this + 0x277);
  *(undefined4 *)((int)this + 0x25f) = *(undefined4 *)((int)this + 0x27b);
  *(undefined4 *)((int)this + 0x263) = *(undefined4 *)((int)this + 0x27f);
  *(char *)((int)this + 0x25a) = param_5;
  *(int *)((int)this + 0x267) = param_1;
  *(int *)((int)this + 0x26b) = param_2;
  *(undefined4 *)((int)this + 0x26f) = param_3;
  *(undefined4 *)((int)this + 0x283) = 1;
  uVar1 = PTR_00802a38->field_00E4;
  *(int *)((int)this + 0x273) = param_4;
  *(uint *)((int)this + 0x28f) = uVar1;
  thunk_FUN_005eff00((int)this);
  if (*(int *)((int)this + 0x2ba) != param_4) {
    iVar2 = thunk_FUN_005ef950(*(int *)((int)this + 0x2ba) * 0xf,param_4);
    *(int *)((int)this + 0x28b) = iVar2;
  }
  if (param_5 == '\0') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((param_1 == *(int *)((int)this + 0x277)) && (param_2 == *(int *)((int)this + 0x27b))) {
      *(undefined4 *)((int)this + 0x287) = param_6;
      *(uint *)((int)this + 0x31c) = *(uint *)((int)this + 0x31c) | 1;
      return 1;
    }
    *(undefined1 *)((int)this + 0x25a) = 1;
  }
  *(undefined4 *)((int)this + 0x287) = param_6;
  iVar2 = FUN_006acf0d(*(int *)((int)this + 0x25b),*(int *)((int)this + 0x25f),
                       *(int *)((int)this + 0x263),*(int *)((int)this + 0x267),
                       *(int *)((int)this + 0x26b),*(int *)((int)this + 0x26f));
  if (iVar2 != 0) {
    *(int *)((int)this + 0x297) =
         ((*(int *)((int)this + 0x267) - *(int *)((int)this + 0x25b)) * 10000) / iVar2;
    *(int *)((int)this + 0x29b) =
         ((*(int *)((int)this + 0x26b) - *(int *)((int)this + 0x25f)) * 10000) / iVar2;
    *(int *)((int)this + 0x29f) =
         ((*(int *)((int)this + 0x26f) - *(int *)((int)this + 0x263)) * 10000) / iVar2;
    uVar3 = FUN_006acf0d(*(int *)((int)this + 0x267),*(int *)((int)this + 0x26b),
                         *(int *)((int)this + 0x26f),*(int *)((int)this + 0x25b),
                         *(int *)((int)this + 0x25f),*(int *)((int)this + 0x263));
    *(undefined4 *)((int)this + 0x293) = uVar3;
    *(uint *)((int)this + 0x31c) = *(uint *)((int)this + 0x31c) & 0xfffffffe;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_004eb6d0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_4 == 0) {
    return 0;
  }
  iVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  if ((char)iVar1 == '\x03') {
    if (param_2 == 0xdd) {
      if (param_1 == 2) {
        iVar1 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24));
        if (iVar1 < param_3 * param_4) {
          return 0;
        }
        thunk_FUN_004d88f0(*(char *)((int)this + 0x24),param_3);
        thunk_FUN_004e4330(*(int *)((int)this + 0x24),param_3 * param_4);
      }
      else {
        if (param_1 != 3) {
          return 0;
        }
        iVar1 = thunk_FUN_004d89b0(*(char *)((int)this + 0x24));
        if (iVar1 < param_3) {
          return 0;
        }
        thunk_FUN_004d8940(*(char *)((int)this + 0x24),param_3);
        thunk_FUN_004e4230(*(int *)((int)this + 0x24),param_3 * param_4);
      }
    }
    else {
      if (param_2 != 0xde) {
        return 0;
      }
      if (param_1 == 2) {
        iVar1 = thunk_FUN_004e41c0(*(int *)((int)this + 0x24));
        if (iVar1 < param_3 / param_4) {
          return 0;
        }
        thunk_FUN_004e4380(*(int *)((int)this + 0x24),param_3);
        thunk_FUN_004e4330(*(int *)((int)this + 0x24),param_3 / param_4);
      }
      else {
        if (param_1 != 3) {
          return 0;
        }
        iVar1 = thunk_FUN_004e4410(*(int *)((int)this + 0x24));
        if (iVar1 < param_3) {
          return 0;
        }
        thunk_FUN_004e43c0(*(int *)((int)this + 0x24),param_3);
        thunk_FUN_004e4230(*(int *)((int)this + 0x24),param_3 / param_4);
      }
    }
    goto cf_common_exit_004EB94E;
  }
  if (param_2 == 0xdd) {
    if (param_1 == 2) {
      iVar1 = thunk_FUN_004d8870(*(char *)((int)this + 0x24));
      if (iVar1 < param_3 / param_4) {
        return 0;
      }
      thunk_FUN_004d88f0(*(char *)((int)this + 0x24),param_3);
      goto LAB_004eb93e;
    }
    if (param_1 != 3) {
      return 0;
    }
    iVar1 = thunk_FUN_004d89b0(*(char *)((int)this + 0x24));
    if (iVar1 < param_3) {
      return 0;
    }
    thunk_FUN_004d8940(*(char *)((int)this + 0x24),param_3);
  }
  else {
    if (param_2 != 0xde) {
      return 0;
    }
    if (param_1 == 2) {
      iVar1 = thunk_FUN_004d8870(*(char *)((int)this + 0x24));
      if (iVar1 < param_3 / param_4) {
        return 0;
      }
      thunk_FUN_004d8a30(*(char *)((int)this + 0x24),param_3);
LAB_004eb93e:
      thunk_FUN_004d8800(*(char *)((int)this + 0x24),param_3 / param_4);
      goto cf_common_exit_004EB94E;
    }
    if (param_1 != 3) {
      return 0;
    }
    iVar1 = thunk_FUN_004d8af0(*(char *)((int)this + 0x24));
    if (iVar1 < param_3) {
      return 0;
    }
    thunk_FUN_004d8a80(*(char *)((int)this + 0x24),param_3);
  }
  thunk_FUN_004d87b0(*(char *)((int)this + 0x24),param_3 / param_4);
cf_common_exit_004EB94E:
  thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
  if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
    uVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 1) {
      (**(code **)(*(int *)this + 0x90))(6,0x6e);
    }
    else {
      if (uVar2 == 2) {
        (**(code **)(*(int *)this + 0x90))(6,0x6f);
        return 0;
      }
      if (uVar2 == 3) {
        (**(code **)(*(int *)this + 0x90))(6,0x70);
        return 0;
      }
    }
  }
  return 0;
}


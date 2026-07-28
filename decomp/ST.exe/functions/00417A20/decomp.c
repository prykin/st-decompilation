
undefined4 __thiscall FUN_00417a20(void *this,short param_1,short param_2,short param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;

  if (*(int *)((int)this + 0x2c) == 0) {
    if (param_4 == 1) {
      thunk_FUN_00495ff0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                         *(short *)((int)this + 0x5f),*(byte *)((int)this + 0x8e),this);
    }
    *(short *)((int)this + 0x47) = param_1;
    *(short *)((int)this + 0x4b) = param_3;
    *(short *)((int)this + 0x41) = param_1 * 0xc9 + 100;
    *(short *)((int)this + 0x49) = param_2;
    *(short *)((int)this + 0x43) = param_2 * 0xc9 + 100;
    *(short *)((int)this + 0x45) = param_3 * 200 + 100;
    if (param_4 == 1) {
      uVar1 = DumpClassC::WritePtr(param_1,param_2,param_3,*(byte *)((int)this + 0x8e),this);
      return uVar1;
    }
  }
  else {
    if (param_4 == 1) {
      thunk_FUN_00495ff0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                         *(short *)((int)this + 0x5f),*(byte *)((int)this + 0x8e),this);
      thunk_FUN_00495ff0(*(short *)((int)this + 0x5b) + 1,*(short *)((int)this + 0x5d),
                         *(short *)((int)this + 0x5f),*(byte *)((int)this + 0x8e),this);
      thunk_FUN_00495ff0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d) + 1,
                         *(short *)((int)this + 0x5f),*(byte *)((int)this + 0x8e),this);
      thunk_FUN_00495ff0(*(short *)((int)this + 0x5b) + 1,*(short *)((int)this + 0x5d) + 1,
                         *(short *)((int)this + 0x5f),*(byte *)((int)this + 0x8e),this);
    }
    *(short *)((int)this + 0x47) = param_1;
    *(short *)((int)this + 0x4b) = param_3;
    *(short *)((int)this + 0x41) = param_1 * 0xc9 + 100;
    *(short *)((int)this + 0x49) = param_2;
    *(short *)((int)this + 0x43) = param_2 * 0xc9 + 100;
    *(short *)((int)this + 0x45) = param_3 * 200 + 100;
    if (param_4 == 1) {
      iVar2 = DumpClassC::WritePtr(param_1,param_2,param_3,*(byte *)((int)this + 0x8e),this);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = DumpClassC::WritePtr
                        (*(short *)((int)this + 0x47) + 1,*(short *)((int)this + 0x49),
                         *(short *)((int)this + 0x4b),*(byte *)((int)this + 0x8e),this);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = DumpClassC::WritePtr
                        (*(short *)((int)this + 0x47),*(short *)((int)this + 0x49) + 1,
                         *(short *)((int)this + 0x4b),*(byte *)((int)this + 0x8e),this);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      uVar1 = DumpClassC::WritePtr
                        (*(short *)((int)this + 0x47) + 1,*(short *)((int)this + 0x49) + 1,
                         *(short *)((int)this + 0x4b),*(byte *)((int)this + 0x8e),this);
      return uVar1;
    }
  }
  return 0;
}


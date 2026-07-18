
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_0045ff50(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    this_00 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)this >> 8),
                                                  *(undefined1 *)((int)this + 0x24)),
                                         (uint)*(ushort *)((int)this + 0x30));
    if (this_00 != (void *)0x0) {
      thunk_FUN_0040ae40(this_00,(uint)*(ushort *)((int)this + 0x32),'\0');
      iVar1 = thunk_FUN_0040d540(this_00,(uint)*(ushort *)((int)this + 0x32));
      switch(iVar1) {
      case 0:
        *(undefined4 *)((int)this + 0xfd) = 1;
        thunk_FUN_0040cdb0(this_00,(uint)*(ushort *)((int)this + 0x32));
        break;
      case 1:
        *(undefined2 *)((int)this + 0xfa) = 0;
        thunk_FUN_0045f6c0(this);
        return 2;
      case -6:
      case 2:
        *(short *)((int)this + 0xfa) = *(short *)((int)this + 0xfa) + 1;
        return 2;
      default:
        return 2;
      }
switchD_00460024_caseD_1:
      return 0;
    }
  }
  else {
    uVar2 = (**(code **)(*(int *)this + 0x1c))();
    iVar1 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar1 == 0) {
      switch(uVar2) {
      case 0:
        if ((*(int *)((int)this + 0x6f7) != 0xb) && (*(int *)((int)this + 0x6f7) != 0x23)) {
          return 2;
        }
        if (*(int *)((int)this + 0x21d) != 1) {
          return 2;
        }
        if (*(uint *)((int)this + 0x24) != (uint)DAT_0080874d) {
          return 2;
        }
        FUN_006e6780(*(void **)((int)this + 0x211),
                     CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                              *(undefined2 *)((int)this + 0x18)));
        FUN_006e6710(*(void **)((int)this + 0x211),
                     (float)(int)*(short *)((int)this + 0x41) * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)((int)this + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)((int)this + 0x10d) * _DAT_007904f8 + _DAT_007904f4,0x28,
                     CONCAT22(CONCAT11(2,(char)((uint)*(undefined4 *)((int)this + 0x18) >> 0x10)),
                              *(undefined2 *)((int)this + 0x18)));
        return 2;
      case 1:
        goto switchD_00460024_caseD_1;
      case 2:
        (**(code **)(*(int *)this + 0x20))();
        return 3;
      }
    }
  }
  return 0xffffffff;
}


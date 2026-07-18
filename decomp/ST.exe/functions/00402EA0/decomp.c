
undefined4 __thiscall
thunk_FUN_0054b9a0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 0xb;
  iVar2 = param_1 + -0xc + param_3;
  iVar1 = param_2 + 5;
  iVar3 = param_2 + -6 + param_4;
  if ((((param_5 <= iVar4) || (iVar2 <= param_5)) || (param_6 <= iVar1)) || (iVar3 <= param_6)) {
    if (((DAT_00808784 == 0) && (DAT_00808788 == 0)) && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))
       ) {
      if (param_5 <= iVar4) {
        if (param_6 <= iVar1) {
          iVar4 = thunk_FUN_004ab070(DAT_007fb2a0,5,1.4013e-45,(uint)*(byte *)((int)this + 0xd1),0);
          if (param_7 != 0) {
            thunk_FUN_0054bf40((-(ushort)(iVar4 != -2) & 0xfff6) + 0x40,
                               *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
          }
          *(undefined1 *)((int)this + 0xd1) = 0;
          return 1;
        }
        if (iVar3 <= param_6) {
          iVar4 = thunk_FUN_004ab070(DAT_007fb2a0,6,1.4013e-45,(uint)*(byte *)((int)this + 0xd1),0);
          if (param_7 != 0) {
            thunk_FUN_0054bf40((-(ushort)(iVar4 != -2) & 0xfff6) + 0x42,
                               *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
          }
          *(undefined1 *)((int)this + 0xd1) = 0;
          return 1;
        }
      }
      if (iVar2 <= param_5) {
        if (param_6 <= iVar1) {
          iVar4 = thunk_FUN_004ab070(DAT_007fb2a0,7,1.4013e-45,(uint)*(byte *)((int)this + 0xd1),0);
          if (param_7 != 0) {
            thunk_FUN_0054bf40((-(ushort)(iVar4 != -2) & 0xfff6) + 0x41,
                               *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
          }
          *(undefined1 *)((int)this + 0xd1) = 0;
          return 1;
        }
        if (iVar3 <= param_6) {
          iVar4 = thunk_FUN_004ab070(DAT_007fb2a0,8,1.4013e-45,(uint)*(byte *)((int)this + 0xd1),0);
          if (param_7 != 0) {
            thunk_FUN_0054bf40((-(ushort)(iVar4 != -2) & 0xfff6) + 0x43,
                               *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
          }
          *(undefined1 *)((int)this + 0xd1) = 0;
          return 1;
        }
      }
      if (param_5 <= iVar4) {
        iVar4 = thunk_FUN_004ab070(DAT_007fb2a0,1,1.4013e-45,(uint)*(byte *)((int)this + 0xd1),0);
        if (param_7 != 0) {
          thunk_FUN_0054bf40((-(ushort)(iVar4 != -2) & 0xfff6) + 0x3f,
                             *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
        }
        *(undefined1 *)((int)this + 0xd1) = 0;
        return 1;
      }
      if (iVar2 <= param_5) {
        iVar4 = thunk_FUN_004ab070(DAT_007fb2a0,2,1.4013e-45,(uint)*(byte *)((int)this + 0xd1),0);
        if (param_7 != 0) {
          thunk_FUN_0054bf40((-(ushort)(iVar4 != -2) & 0xfff6) + 0x3e,
                             *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
        }
        *(undefined1 *)((int)this + 0xd1) = 0;
        return 1;
      }
      if (param_6 <= iVar1) {
        iVar4 = thunk_FUN_004ab070(DAT_007fb2a0,3,1.4013e-45,(uint)*(byte *)((int)this + 0xd1),0);
        if (param_7 != 0) {
          thunk_FUN_0054bf40((-(ushort)(iVar4 != -2) & 0xfff6) + 0x3c,
                             *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
        }
        *(undefined1 *)((int)this + 0xd1) = 0;
        return 1;
      }
      if (iVar3 <= param_6) {
        iVar4 = thunk_FUN_004ab070(DAT_007fb2a0,4,1.4013e-45,(uint)*(byte *)((int)this + 0xd1),0);
        if (param_7 != 0) {
          thunk_FUN_0054bf40((-(ushort)(iVar4 != -2) & 0xfff6) + 0x3d,
                             *(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
        }
        *(undefined1 *)((int)this + 0xd1) = 0;
        return 1;
      }
      *(undefined1 *)((int)this + 0xd1) = 1;
      return 1;
    }
    goto LAB_0054ba0c;
  }
  if (*(int *)((int)this + 0x496) != 0) {
    if (*(char *)((int)this + 0xde) == '\0') goto LAB_0054ba0c;
    iVar4 = FUN_00405687((int)this);
    if (iVar4 != 0) goto LAB_0054ba0c;
  }
  thunk_FUN_0054bf40(0,*(undefined4 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x38));
LAB_0054ba0c:
  *(undefined1 *)((int)this + 0xd1) = 1;
  return 0;
}


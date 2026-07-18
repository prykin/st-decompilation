
undefined4 __thiscall
thunk_FUN_00624570(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    *(undefined1 *)((int)this + 0x61) = 0;
    *(undefined1 *)((int)this + 0x62) = 0;
    *(undefined4 *)((int)this + 0x30f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    return 1;
  case 1:
    break;
  case 2:
    iVar2 = FUN_006acf0d(*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                         *(int *)((int)this + 0x2ca),param_2,param_3,param_4);
    *(undefined4 *)((int)this + 0x306) = 3;
    if (iVar2 < 1) {
      uVar1 = 2;
    }
    else {
      *(int *)((int)this + 0x2f6) = iVar2;
      *(undefined2 *)((int)this + 0x3c) = (undefined2)param_3;
      *(short *)((int)this + 0x3e) = (short)param_4;
      *(int *)((int)this + 0x2fa) = ((param_2 - *(int *)((int)this + 0x2c2)) * 10000) / iVar2;
      *(int *)((int)this + 0x2fe) = ((param_3 - *(int *)((int)this + 0x2c6)) * 10000) / iVar2;
      *(undefined2 *)((int)this + 0x34) = *(undefined2 *)((int)this + 0x2c2);
      *(undefined2 *)((int)this + 0x38) = *(undefined2 *)((int)this + 0x2ca);
      *(undefined2 *)((int)this + 0x3a) = (undefined2)param_2;
      *(int *)((int)this + 0x302) = ((param_4 - *(int *)((int)this + 0x2ca)) * 10000) / iVar2;
      *(undefined2 *)((int)this + 0x36) = *(undefined2 *)((int)this + 0x2c6);
      uVar1 = 1;
      *(undefined4 *)((int)this + 0x30f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    }
    *(undefined4 *)((int)this + 0x30f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    return uVar1;
  case 3:
    if (param_4 < 0) {
      iVar2 = (short)(param_4 / 200) + -1;
    }
    else {
      iVar2 = (int)(short)(param_4 / 200);
    }
    if (iVar2 == *(short *)((int)this + 0x4b)) {
      uVar1 = 2;
    }
    else {
      *(short *)((int)this + 0x3e) = (short)param_4;
      uVar3 = *(int *)((int)this + 0x2ca) - param_4;
      *(undefined2 *)((int)this + 0x36) = *(undefined2 *)((int)this + 0x2c6);
      *(undefined4 *)((int)this + 0x2fa) = 0;
      uVar4 = (int)uVar3 >> 0x1f;
      *(undefined4 *)((int)this + 0x2fe) = 0;
      *(uint *)((int)this + 0x2f6) = (uVar3 ^ uVar4) - uVar4;
      *(undefined2 *)((int)this + 0x3a) = (undefined2)param_2;
      *(undefined2 *)((int)this + 0x3c) = (undefined2)param_3;
      *(undefined2 *)((int)this + 0x34) = *(undefined2 *)((int)this + 0x2c2);
      *(undefined2 *)((int)this + 0x38) = *(undefined2 *)((int)this + 0x2ca);
      *(uint *)((int)this + 0x302) = ((*(short *)((int)this + 0x4b) <= iVar2) - 1 & 0xfffffffe) + 1;
      *(undefined4 *)((int)this + 0x306) = 3;
      uVar1 = 1;
    }
    *(undefined4 *)((int)this + 0x30f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  default:
    return uVar1;
  }
  iVar2 = (uint)*(byte *)((int)this + 0x2ad) * 4;
  if (*(int *)(&DAT_007d0398 + iVar2) == 0) {
    *(undefined1 *)((int)this + 0x62) = 0;
    *(undefined4 *)((int)this + 0x30f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    return 1;
  }
  if (*(int *)((int)this + 0x302) == 0) {
    *(undefined4 *)((int)this + 0x302) = 1;
  }
  else {
    *(uint *)((int)this + 0x302) = -(((*(int *)((int)this + 0x302) < 1) - 1 & 2) - 1);
  }
  iVar2 = *(int *)(&DAT_007d0388 + iVar2);
  uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  *(char *)((int)this + 0x62) =
       (&DAT_007d0388)[(uint)*(byte *)((int)this + 0x2ad) * 4] -
       (char)((uVar3 >> 0x10) % (iVar2 / 3 + 1U));
  uVar1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  *(undefined2 *)((int)this + 0x34) = *(undefined2 *)((int)this + 0x2ca);
  *(undefined4 *)((int)this + 0x30f) = uVar1;
  return 1;
}


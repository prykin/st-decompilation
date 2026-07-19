
void __thiscall FUN_0052b760(void *this,int param_1)

{
  ushort uVar1;
  
  switch(*(undefined1 *)((int)this + 0x68)) {
  case 1:
    *(undefined2 *)(param_1 + 0x14) = 3;
    goto cf_common_exit_0052B7B9;
  case 2:
    *(undefined2 *)(param_1 + 0x14) = 2;
    goto cf_common_exit_0052B7B9;
  case 3:
    uVar1 = (-(ushort)(DAT_0080874e != '\x03') & 0xfffd) + 4;
    break;
  default:
    uVar1 = (DAT_0080874e != '\x03') - 1 & 5;
  }
  *(ushort *)(param_1 + 0x14) = uVar1;
cf_common_exit_0052B7B9:
  *(undefined2 *)(param_1 + 0x16) = 2;
  switch(*(undefined1 *)((int)this + 0x68)) {
  case 1:
    *(undefined4 *)(param_1 + 0x18) = 0x271c;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x18) = 0x271d;
    return;
  case 3:
    *(uint *)(param_1 + 0x18) = (-(uint)(DAT_0080874e != '\x03') & 0xffffffed) + 0x2731;
    return;
  case 4:
    *(uint *)(param_1 + 0x18) = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff0) + 0x2730;
    return;
  default:
    *(uint *)(param_1 + 0x18) = (DAT_00808a97 == -1) + 0x2748;
    return;
  }
}



void __thiscall FUN_0052b760(void *this,AnonShape_0052B760_30F4E0D5 *param_1)

{
  ushort uVar1;

  switch(*(undefined1 *)((int)this + 0x68)) {
  case 1:
    param_1->field_0014 = 3;
    goto cf_common_exit_0052B7B9;
  case 2:
    param_1->field_0014 = 2;
    goto cf_common_exit_0052B7B9;
  case 3:
    uVar1 = (-(ushort)(DAT_0080874e != '\x03') & 0xfffd) + 4;
    break;
  default:
    uVar1 = (DAT_0080874e != '\x03') - 1 & 5;
  }
  param_1->field_0014 = uVar1;
cf_common_exit_0052B7B9:
  param_1->field_0016 = 2;
  switch(*(undefined1 *)((int)this + 0x68)) {
  case 1:
    param_1->field_0018 = 0x271c;
    return;
  case 2:
    param_1->field_0018 = 0x271d;
    return;
  case 3:
    param_1->field_0018 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffed) + 0x2731;
    return;
  case 4:
    param_1->field_0018 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff0) + 0x2730;
    return;
  default:
    param_1->field_0018 = (DAT_00808a97 == -1) + 0x2748;
    return;
  }
}


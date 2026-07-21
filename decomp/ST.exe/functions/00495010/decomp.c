
void __thiscall FUN_00495010(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;

  if (*(int *)((int)this + 0x73a) == 0) {
    iVar1 = *(int *)((int)this + 0x45d);
    if (iVar1 == 3) {
      *(undefined4 *)((int)this + 0x73a) = param_1;
      return;
    }
    if (iVar1 != 0x14) {
      if (iVar1 == 0xb) goto LAB_00495071;
      local_8 = PTR_00802a38->field_00E4;
      STBoatC::CmdToObj(this,CASE_3,&local_8);
    }
    *(undefined4 *)((int)this + 0x73a) = param_1;
    return;
  }
LAB_00495071:
  *(undefined4 *)((int)this + 0x73a) = param_1;
  return;
}



void __thiscall thunk_FUN_00495010(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  if (*(int *)((int)this + 0x73a) == 0) {
    iVar1 = *(int *)((int)this + 0x45d);
    if (iVar1 == 3) {
      *(undefined4 *)((int)this + 0x73a) = param_1;
      return;
    }
    if (iVar1 != 0x14) {
      if (iVar1 == 0xb) goto LAB_00495071;
      uStack_8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      thunk_FUN_0045ef00(this,3,&uStack_8);
    }
    *(undefined4 *)((int)this + 0x73a) = param_1;
    return;
  }
LAB_00495071:
  *(undefined4 *)((int)this + 0x73a) = param_1;
  return;
}


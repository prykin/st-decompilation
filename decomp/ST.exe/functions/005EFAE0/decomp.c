
undefined4 __thiscall FUN_005efae0(void *this,int param_1)

{
  int iVar1;
  
  if ((*(char *)((int)this + 0x24f) == '\0') &&
     (iVar1 = FUN_006e62d0(DAT_00802a38,param_1,&param_1), iVar1 != -4)) {
    *(undefined4 *)((int)this + 0x2a7) = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)((int)this + 0x2ab) = *(undefined2 *)(param_1 + 0x32);
    *(undefined4 *)((int)this + 0x2a3) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)((int)this + 0x24f) = 1;
    if (*(char *)((int)this + 800) == '\0') {
      return 1;
    }
    *(undefined1 *)((int)this + 800) = 0;
    return 1;
  }
  return 0;
}


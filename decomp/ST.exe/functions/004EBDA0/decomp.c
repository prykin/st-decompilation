
void __thiscall
FUN_004ebda0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x508) == param_1) && (*(int *)((int)this + 0x4d0) == 3)) {
    iVar1 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\x0e');
    if (iVar1 == *(int *)(*(int *)((int)this + 0x1f5) + 0x20c)) {
      if (param_2 == 0xdc) {
        thunk_FUN_004d87b0(*(char *)((int)this + 0x24),param_3);
      }
      else if (param_2 == 0xdd) {
        thunk_FUN_004d88f0(*(char *)((int)this + 0x24),param_3);
      }
      else if (param_2 == 0xde) {
        thunk_FUN_004d8a30(*(char *)((int)this + 0x24),param_3);
      }
      thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
      if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
        thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
      }
      *(undefined4 *)((int)this + 0x4fc) = param_4;
      *(undefined4 *)((int)this + 0x500) = param_5;
      *(undefined4 *)((int)this + 0x504) = param_6;
      *(undefined4 *)((int)this + 0x4d0) = 6;
      *(undefined4 *)((int)this + 0x510) = 0;
      *(undefined4 *)((int)this + 0x514) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      thunk_FUN_004ec0f0((int)this);
      thunk_FUN_004cabb0(0);
    }
  }
  return;
}


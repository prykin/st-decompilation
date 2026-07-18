
undefined4 __thiscall
FUN_005ee010(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *(undefined4 *)((int)this + 0x27b) = param_2;
  *(undefined4 *)((int)this + 0x277) = param_1;
  *(undefined4 *)((int)this + 0x27f) = param_3;
  if (*(byte *)((int)this + 0x251) != param_4) {
    *(char *)((int)this + 0x251) = (char)param_4;
    thunk_FUN_005ef5f0((int)this);
  }
  return *(undefined4 *)((int)this + 0x23a);
}


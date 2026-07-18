
void __thiscall FUN_004f0af0(void *this,int param_1)

{
  short sVar1;
  
  if (param_1 != *(int *)((int)this + 0x5c)) {
    thunk_FUN_0053f780(this,param_1);
    sVar1 = (short)*(undefined4 *)((int)this + 0x174);
    *(undefined4 *)((int)this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar1 = -sVar1;
    }
    *(short *)((int)this + 0x2e) = sVar1;
    if (*(int *)((int)this + 0x292) != 0) {
      FUN_006e6080(this,2,*(int *)((int)this + 0x292),(undefined4 *)((int)this + 0x18));
    }
  }
  return;
}



bool __thiscall thunk_FUN_004e1690(void *this,int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)((int)this + 0x4d8) == param_1;
  if (bVar1) {
    *(undefined4 *)((int)this + 0x4d8) = 0xffffffff;
  }
  return bVar1;
}


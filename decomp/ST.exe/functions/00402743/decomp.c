
bool __thiscall thunk_FUN_004b7d50(void *this,int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)((int)this + 0x4d4) == *(int *)(param_1 + 0x18);
  if (bVar1) {
    *(undefined4 *)((int)this + 0x4d4) = 0;
  }
  return bVar1;
}


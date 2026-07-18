
void __thiscall FUN_004c2840(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x18);
  param_1[1] = *(undefined4 *)((int)this + 0x5ac);
  iVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  *(char *)(param_1 + 2) = (char)iVar1;
  _strncpy((char *)((int)param_1 + 9),(char *)((int)this + 0x5c4),0xe);
  return;
}


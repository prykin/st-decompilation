
bool __thiscall FUN_0074a2ab(void *this,int param_1)

{
  int iVar1;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x58))(param_1,&local_c,local_14);
    if (-1 < iVar1) {
      if (iVar1 == 0) {
        SetEvent(*(HANDLE *)((int)this + 0x54));
        return true;
      }
      iVar1 = (**(code **)(**(int **)((int)this + 0x18) + 0x10))
                        (*(int **)((int)this + 0x18),*(undefined4 *)((int)this + 0x20),
                         *(undefined4 *)((int)this + 0x24),local_c,local_8,
                         *(undefined4 *)((int)this + 0x54),(int)this + 0x68);
      return -1 < iVar1;
    }
  }
  return false;
}


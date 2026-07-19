
void __thiscall FUN_00724e20(void *this,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)((int)this + 0x13c);
  if (*(int *)((int)this + 0x20) != 1) {
    if (param_1 <= iVar1 / 2) {
      *(undefined4 *)((int)this + 400) = 0;
      return;
    }
    if ((*(int *)((int)this + 0x2c) - iVar1) + iVar1 / 2 <= param_1) {
      *(int *)((int)this + 400) = *(int *)((int)this + 0x18c) + -1;
      return;
    }
    lVar2 = Library::MSVCRT::__ftol();
    *(int *)((int)this + 400) = (int)lVar2;
    return;
  }
  if (param_2 <= iVar1 / 2) {
    *(undefined4 *)((int)this + 400) = 0;
    return;
  }
  if ((*(int *)((int)this + 0x30) - iVar1) + iVar1 / 2 <= param_2) {
    *(int *)((int)this + 400) = *(int *)((int)this + 0x18c) + -1;
    return;
  }
  lVar2 = Library::MSVCRT::__ftol();
  *(int *)((int)this + 400) = (int)lVar2;
  return;
}


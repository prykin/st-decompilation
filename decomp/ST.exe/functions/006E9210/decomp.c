
void __thiscall FUN_006e9210(void *this,uint param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_1 < *(uint *)((int)this + 0x310)) {
    puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    uVar2 = *(uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114);
    if ((uVar2 & 0x8000) != 0) {
      puVar1[1] = puVar1[1] | 2;
      *puVar1 = uVar2 & 0xff87ffff | 0xc;
      lVar3 = Library::MSVCRT::__ftol();
      puVar1[0xb] = (uint)lVar3;
      lVar3 = Library::MSVCRT::__ftol();
      puVar1[0xc] = (uint)lVar3;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}


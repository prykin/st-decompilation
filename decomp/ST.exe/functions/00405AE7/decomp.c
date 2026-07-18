
bool __thiscall thunk_FUN_0041d350(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00802a88 == 0) {
    return false;
  }
  iVar2 = (int)*(short *)((int)this + 0x5b);
  iVar3 = (int)*(short *)((int)this + 0x5d);
  if ((((-1 < iVar2) && (iVar2 < *(int *)(DAT_00802a88 + 0x20))) && (-1 < iVar3)) &&
     (((iVar3 < *(int *)(DAT_00802a88 + 0x24) && (param_1 < 8)) &&
      (iVar1 = *(int *)(DAT_00802a88 + 0x74 + param_1 * 4), iVar1 != 0)))) {
    return *(char *)(*(int *)(DAT_00802a88 + 0x20) * iVar3 + iVar1 + iVar2) != '\0';
  }
  return false;
}


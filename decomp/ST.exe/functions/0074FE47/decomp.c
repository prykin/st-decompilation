
int FUN_0074fe47(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iStack0000000c;
  
  lVar2 = Library::MSVCRT::__ftol();
  iStack0000000c = (int)((ulonglong)lVar2 >> 0x20);
  iVar1 = FUN_0074fea4(*(void **)(param_1 + 4),(uint)lVar2,iStack0000000c,*(int *)(param_1 + 0x24));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(param_1 + -0xc);
    if (-1 < iVar1) {
      *(uint *)(param_1 + 0xc) = (uint)lVar2;
      *(int *)(param_1 + 0x10) = iStack0000000c;
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
    }
  }
  else {
    iVar1 = -0x7ffbfdcd;
  }
  return iVar1;
}


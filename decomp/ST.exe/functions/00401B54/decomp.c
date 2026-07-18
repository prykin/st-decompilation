
int __cdecl thunk_FUN_006a3ae0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_007dfaf0;
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x7dfb30);
  return -1;
}


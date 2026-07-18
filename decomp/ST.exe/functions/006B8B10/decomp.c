
int FUN_006b8b10(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if ((*(uint *)(iVar1 + 0xc) & 0x100) == 0) {
    if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    if (((param_1[1] & 0x8000U) != 0) &&
       (((param_1[1] & 0x4000U) == 0 || (iVar2 = FUN_006b8e30(param_1), iVar2 == 0)))) {
      param_1[1] = param_1[1] & 0xffff6fff;
      iVar2 = FUN_006b92b0(param_1,param_1 + 4);
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (iVar2 == 0) {
      return 0;
    }
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7edc18,0xef);
    return iVar2;
  }
  return 0;
}



int FUN_006b8a60(byte *param_1)

{
  int iVar1;
  int iVar2;
  int local_14 [4];
  
  iVar2 = 0;
  if ((param_1 != (byte *)0x0) && (iVar1 = *(int *)param_1, (*(uint *)(iVar1 + 0xc) & 0x100) == 0))
  {
    if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
      iVar2 = FUN_006b8f10(param_1,local_14);
      if (iVar2 == 0) {
        iVar2 = FUN_006b92b0((int *)param_1,local_14);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffdfff | 0x8000;
      }
    }
    if ((*(uint *)(*(int *)param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)param_1 + 0x4f0));
    }
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7edc18,0xd3);
      return iVar2;
    }
  }
  return 0;
}


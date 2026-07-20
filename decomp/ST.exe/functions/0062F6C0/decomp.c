
undefined4 __thiscall FUN_0062f6c0(void *this,int param_1)

{
  LPVOID *ppvVar1;
  int iVar2;
  STT3DSprC *pSVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((-1 < param_1) && (param_1 < 5)) {
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x1e5);
    ppvVar1 = (LPVOID *)((int)this + param_1 * 4 + 0x1e5);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 4);
      if ((iVar2 == 3) || (iVar2 == 6)) {
        thunk_FUN_00630260(this,param_1,0);
      }
      pSVar3 = *(STT3DSprC **)((int)*ppvVar1 + 0x10);
      if (pSVar3 != (STT3DSprC *)0x0) {
        thunk_FUN_004ad310(pSVar3);
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)pSVar3);
        *(undefined4 *)((int)*ppvVar1 + 0x10) = 0;
      }
      uVar4 = 1;
      *(int *)((int)this + 0x1e1) = *(int *)((int)this + 0x1e1) + -1;
      FUN_006ab060(ppvVar1);
      *ppvVar1 = (LPVOID)0x0;
    }
    if (*(int *)((int)this + 0x1e1) == 0) {
      *(undefined4 *)((int)this + 0x1fa) = 2;
    }
    return uVar4;
  }
  return 0;
}


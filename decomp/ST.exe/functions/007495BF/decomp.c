
uint __fastcall FUN_007495bf(uint param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  void *this;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(-(uint)(param_1 != 0) & param_1 + 0x10);
  local_8 = param_1;
  EnterCriticalSection(lpCriticalSection);
  uVar1 = FUN_00749415(param_1);
  local_8 = uVar1;
  if ((int)uVar1 < 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    if (uVar1 != 1) {
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_007496a1(param_1);
      }
      pvVar2 = VirtualAlloc((LPVOID)0x0,
                            (*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48)) *
                            *(int *)(param_1 + 0x38),0x1000,4);
      *(LPVOID *)(param_1 + 0x58) = pvVar2;
      if (pvVar2 == (LPVOID)0x0) {
LAB_00749680:
        LeaveCriticalSection(lpCriticalSection);
        return 0x8007000e;
      }
      iVar3 = *(int *)(param_1 + 0x3c);
      while (iVar3 < *(int *)(param_1 + 0x38)) {
        this = (void *)FUN_0072e530(0x48);
        if (this == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00748a83(this,0,param_1,&local_8,(int)pvVar2 + *(int *)(param_1 + 0x48),
                               *(undefined4 *)(param_1 + 0x40));
        }
        if (iVar3 == 0) goto LAB_00749680;
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x28);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        *(int *)(param_1 + 0x28) = iVar3;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        pvVar2 = (LPVOID)((int)pvVar2 + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48));
        iVar3 = *(int *)(param_1 + 0x3c);
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0;
  }
  return uVar1;
}


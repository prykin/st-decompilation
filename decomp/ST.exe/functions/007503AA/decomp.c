
undefined4 __thiscall FUN_007503aa(void *this,int *param_1,DWORD param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  while( true ) {
    EnterCriticalSection(lpCriticalSection);
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      iVar4 = FUN_0074ded7(*(int *)((int)this + 0x20));
    }
    if ((*(int *)((int)this + 100) != 0) && (0 < *(int *)((int)this + 0x40))) {
      iVar1 = FUN_0074ded7(*(int *)((int)this + 0x38));
      iVar3 = *(int *)((int)this + 0x6c) + *(int *)(iVar1 + 0x1c) +
              (uint)CARRY4(*(uint *)((int)this + 0x68),*(uint *)(iVar1 + 0x18));
      if ((iVar4 == 0) ||
         ((iVar3 <= *(int *)(iVar4 + 0x1c) &&
          ((iVar3 < *(int *)(iVar4 + 0x1c) ||
           (*(uint *)((int)this + 0x68) + *(uint *)(iVar1 + 0x18) < *(uint *)(iVar4 + 0x18))))))) {
        iVar4 = iVar1;
      }
    }
    if ((iVar4 != 0) &&
       (iVar1 = FUN_0074fea4(this,*(uint *)(iVar4 + 0x18),*(int *)(iVar4 + 0x1c),
                             *(int *)(iVar4 + 0x30)), iVar1 != 0)) break;
    LeaveCriticalSection(lpCriticalSection);
    DVar2 = WaitForSingleObject(*(HANDLE *)((int)this + 0x50),param_2);
    if (DVar2 != 0) {
      return 0x80004004;
    }
  }
  (**(code **)(*(int *)(iVar4 + 0xc) + 4))(iVar4 + 0xc);
  *param_1 = iVar4;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


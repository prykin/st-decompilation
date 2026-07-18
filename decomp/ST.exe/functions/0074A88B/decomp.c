
void __fastcall FUN_0074a88b(void *param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x94));
  if ((((*(int *)((int)param_1 + 0x60) == 0) &&
       (iVar1 = *(int *)((int)param_1 + 0x78), *(int *)(iVar1 + 0x18) != 0)) &&
      (*(char *)(iVar1 + 0xa1) == '\0')) &&
     ((*(int *)((int)param_1 + 0x70) == 0 && (*(int *)((int)param_1 + 0xb0) == 1)))) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 0xc;
    }
    FUN_00747406(param_1,5,iVar1,0);
    FUN_0074a81d(param_1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x94));
  return;
}


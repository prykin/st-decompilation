
/* [STVTableApplier] Virtual slot 0079DDB0+0x10 */

int FUN_0074c1f9(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = *(int **)(param_1 + 0x80);
    if (((piVar1 != (int *)0x0) && (piVar1[6] != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x84) + 0x18) != 0)) {
      (**(code **)(*piVar1 + 0x18))();
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      (**(code **)(**(int **)(param_1 + 0x84) + 0x18))();
      iVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x3c))();
      if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      LeaveCriticalSection(lpCriticalSection);
      return iVar2;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


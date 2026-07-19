
/* [STVTableApplier] Virtual slot 0079DDB0+0x14 */

int FUN_0074c28a(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + 8);
  param_1 = 0;
  if (*piVar1 != 1) {
    if ((*(int *)(iVar2 + 0x80) == 0) || (*(int *)(*(int *)(iVar2 + 0x80) + 0x18) == 0)) {
      if ((*(int **)(iVar2 + 0x84) != (int *)0x0) && (*(int *)(iVar2 + 0x44) == 0)) {
        (**(code **)(**(int **)(iVar2 + 0x84) + 0x4c))();
        *(undefined4 *)(iVar2 + 0x44) = 1;
      }
    }
    else if (*(int *)(*(int *)(iVar2 + 0x84) + 0x18) != 0) {
      if (*piVar1 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x68));
        param_1 = (**(code **)(*(int *)(iVar2 + -0xc) + 0x38))();
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x68));
      }
      if (-1 < param_1) {
        param_1 = FUN_007470e5(iVar2);
      }
      goto LAB_0074c313;
    }
    *(undefined4 *)(iVar2 + 8) = 1;
  }
LAB_0074c313:
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return param_1;
}


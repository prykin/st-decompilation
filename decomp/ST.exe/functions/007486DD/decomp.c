
/* [STVTableApplier] Virtual slot 0079DC74+0x14
   
   [STVTableApplier] Virtual slot 0079DE90+0x14
   
   [STVTableApplier] Virtual slot 007A14C8+0x14
   
   [STVTableApplier] Virtual slot 007A1780+0x14
   
   [STVTableApplier] Virtual slot 007A1908+0x14 */

int FUN_007486dd(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = FUN_007480a5(param_1);
  if (iVar2 == 0) {
    piVar1 = *(int **)(param_1 + 0x90);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}


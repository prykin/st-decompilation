
/* [STVTableApplier] Virtual slot 007A1868+0x34
   
   [STVTableApplier] Virtual slot 007A19F0+0x34 */

undefined4 __thiscall FUN_0074c858(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + 0xa0) + 0x5c);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((*(int **)(param_1 + 0xa0))[0x23] + 0x18) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x40103;
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x34))(param_2,param_3);
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}


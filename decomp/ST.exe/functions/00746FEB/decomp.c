
/* [STVTableApplier] Virtual slot 0079DB3C+0x20
   
   [STVTableApplier] Virtual slot 0079DDB0+0x20
   
   [STVTableApplier] Virtual slot 007A1390+0x20
   
   [STVTableApplier] Virtual slot 007A15A8+0x20 */

undefined4 FUN_00746feb(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  EnterCriticalSection(lpCriticalSection);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0xc) = param_2;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


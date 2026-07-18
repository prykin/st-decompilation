
undefined4 FUN_00749e34(int param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x6c) + 0x18) == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      FUN_0074706a(param_1);
      piVar1 = *(int **)(*(int *)(param_1 + 0x6c) + 0x9c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x18))(piVar1);
      }
      piVar1 = (int *)(param_1 + -0xc);
      FUN_0074a81d(piVar1,1);
      (**(code **)(*piVar1 + 0x80))();
      (**(code **)(*piVar1 + 0x28))(0);
      (**(code **)(*piVar1 + 100))();
      (**(code **)(*piVar1 + 0x6c))();
      SetEvent(*(HANDLE *)(param_1 + 0x50));
      FUN_00749d5f((int)piVar1);
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return 0;
}



undefined4 FUN_0074b52e(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x4c));
    if ((*(int *)(param_1 + -0xb0) == 0) || (*(int *)(param_1 + 0x44) < 2)) {
      *param_2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x44) - 1;
      uVar3 = Library::MSVCRT::__alldiv
                        (*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x4c),uVar2,
                         (int)uVar2 >> 0x1f);
      *param_2 = (int)uVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x4c));
    uVar1 = 0;
  }
  return uVar1;
}


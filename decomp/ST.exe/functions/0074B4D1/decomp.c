
undefined4 FUN_0074b4d1(int param_1,int *param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;

  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x4c));
    if (*(int *)(param_1 + -100) == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)(param_1 + 0x78);
    }
    else {
      DVar2 = timeGetTime();
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = DVar2 - *(int *)(param_1 + 0x78);
    }
    if (iVar3 < 1) {
      *param_2 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = MulDiv(100000,*(int *)(param_1 + 0x44),iVar3);
      *param_2 = iVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x4c));
    uVar1 = 0;
  }
  return uVar1;
}


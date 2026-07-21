
undefined4 __fastcall FUN_004e2040(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  piVar2 = (int *)((int)param_1 + 0x4e4);
  do {
    iVar1 = thunk_FUN_004e22f0(param_1,iVar3);
    if (iVar1 != 0) {
      local_8 = local_8 + ((*piVar2 - piVar2[-1]) * *(int *)(&DAT_007e085c + piVar2[-3] * 4)) /
                          *piVar2;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 10;
  } while (iVar3 < 2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_004d76e0(*(char *)((int)param_1 + 0x24),4,*(int *)((int)param_1 + 0x18),0,0,local_8,0);
  return 0;
}


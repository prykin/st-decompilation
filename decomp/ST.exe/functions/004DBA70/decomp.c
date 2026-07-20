
undefined4 __fastcall FUN_004dba70(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  piVar3 = (int *)(param_1 + 0x4d0);
  local_8 = 2;
  do {
    if ((*piVar3 != 0) && (piVar3[6] != 0)) {
      iVar2 = FUN_006e62d0(DAT_00802a38,*piVar3,&local_c);
      iVar1 = local_c;
      if (iVar2 == 0) {
        *(undefined4 *)(local_c + 0x4c0) = 0;
        if (*(int **)(local_c + 0x61f) != (int *)0x0) {
          thunk_FUN_00635fd0(*(int **)(local_c + 0x61f));
          Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)(iVar1 + 0x61f));
          *(undefined4 *)(iVar1 + 0x61f) = 0;
        }
      }
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}



undefined4 __fastcall FUN_004dba70(int param_1)

{
  AnonShape_004DBA70_007C3C4C *pAVar1;
  int iVar2;
  int *piVar3;
  AnonShape_004DBA70_007C3C4C *local_c;
  int local_8;
  
  piVar3 = (int *)(param_1 + 0x4d0);
  local_8 = 2;
  do {
    if ((*piVar3 != 0) && (piVar3[6] != 0)) {
      iVar2 = FUN_006e62d0(PTR_00802a38,*piVar3,(int *)&local_c);
      pAVar1 = local_c;
      if (iVar2 == 0) {
        local_c->field_04C0 = 0;
        if (local_c->field_061F != (int *)0x0) {
          thunk_FUN_00635fd0(local_c->field_061F);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)pAVar1->field_061F);
          pAVar1->field_061F = (int *)0x0;
        }
      }
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}


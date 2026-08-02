
undefined4 __fastcall FUN_004dba70(int param_1)

{
  AnonShape_004DBA70_007C3C4C *pAVar1;
  int iVar2;
  undefined4 *puVar3;
  AnonShape_004DBA70_007C3C4C *local_c;
  int local_8;

  puVar3 = (undefined4 *)(param_1 + 0x4d0);
  local_8 = 2;
  do {
    if (((AnonShape_005EFAE0_B406B78B *)*puVar3 != nullptr) &&
       (puVar3[6] != 0)) {
      iVar2 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar3,
                         (int *)&local_c);
      pAVar1 = local_c;
      if (iVar2 == 0) {
        local_c->field_04C0 = 0;
        if (local_c->field_061F != nullptr) {
          thunk_FUN_00635fd0(local_c->field_061F);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)pAVar1->field_061F);
          pAVar1->field_061F = nullptr;
        }
      }
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}


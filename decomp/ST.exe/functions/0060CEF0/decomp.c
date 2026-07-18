
undefined4 __fastcall FUN_0060cef0(void *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)((int)param_1 + 0x23c);
  local_c = 0;
  local_10 = 0;
  if (0 < iVar1) {
    local_8 = 0;
    do {
      iVar3 = FUN_006aff50(local_8);
      iVar4 = FUN_006aff5b(local_8);
      iVar5 = (*(int *)((int)param_1 + 0x1fd) * iVar3) / 10000 + *(int *)((int)param_1 + 0x1e9);
      iVar6 = (*(int *)((int)param_1 + 0x1fd) * iVar4) / 10000 + *(int *)((int)param_1 + 0x1ed);
      bVar2 = thunk_FUN_0060ccf0(param_1,local_10,iVar5,iVar6,*(int *)((int)param_1 + 0x1f1),
                                 (*(int *)((int)param_1 + 0x1f9) * iVar3) / 10000 + iVar5,
                                 (*(int *)((int)param_1 + 0x1f9) * iVar4) / 10000 + iVar6,
                                 *(int *)((int)param_1 + 0x1f1));
      if (CONCAT31(extraout_var,bVar2) != 0) {
        local_c = local_c + 1;
      }
      local_8 = local_8 + (int)(0x168 / (longlong)iVar1);
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)((int)param_1 + 0x23c));
  }
  if (local_c != *(int *)((int)param_1 + 0x23c)) {
    return 0;
  }
  return 1;
}


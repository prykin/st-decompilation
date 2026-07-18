
void __fastcall FUN_004e8d40(int *param_1)

{
  int iVar1;
  int *local_8;
  
  if (param_1[0x16b] == 0x6c) {
    local_8 = param_1;
    if ((param_1[0x13e] == 0) && (*(int *)((int)param_1 + 0x5d3) != 0)) {
      thunk_FUN_004e8dc0(param_1);
    }
    if ((param_1[0x13e] != 0) && (*(int *)((int)param_1 + 0x61b) == 0)) {
      iVar1 = FUN_006e62d0(DAT_00802a38,param_1[0x13e],(int *)&local_8);
      if (iVar1 == 0) {
        *(int **)((int)param_1 + 0x61b) = local_8;
      }
    }
  }
  return;
}


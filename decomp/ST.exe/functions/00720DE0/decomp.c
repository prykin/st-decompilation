
int __fastcall FUN_00720de0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if ((*(int *)(param_1 + 0x138) == 0) || (*(int *)(*(int *)(param_1 + 0x138) + 8) == 0)) {
    local_8 = 0;
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x214);
      if (*(int *)(iVar1 + 0xa0) != 0) {
        FUN_00710790(iVar1);
      }
      if (*(int *)(param_1 + 0x2c) < *(int *)(iVar1 + 0x86) + iVar2) break;
      iVar1 = *(int *)(param_1 + 0x214);
      if (*(int *)(iVar1 + 0xa0) != 0) {
        FUN_00710790(iVar1);
      }
      iVar2 = iVar2 + *(int *)(iVar1 + 0x86) + *(int *)(*(int *)(param_1 + 0x214) + 0x58);
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}


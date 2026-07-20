
int __fastcall FUN_00720de0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if ((*(int *)(param_1 + 0x138) == 0) || (*(int *)(*(int *)(param_1 + 0x138) + 8) == 0)) {
    local_8 = 0;
    while( true ) {
      puVar1 = *(uint **)(param_1 + 0x214);
      if (puVar1[0x28] != 0) {
        FUN_00710790(puVar1);
      }
      if (*(int *)(param_1 + 0x2c) < *(int *)((int)puVar1 + 0x86) + iVar2) break;
      puVar1 = *(uint **)(param_1 + 0x214);
      if (puVar1[0x28] != 0) {
        FUN_00710790(puVar1);
      }
      iVar2 = iVar2 + *(int *)((int)puVar1 + 0x86) + *(int *)(*(int *)(param_1 + 0x214) + 0x58);
      local_8 = local_8 + 1;
    }
  }
  return local_8;
}


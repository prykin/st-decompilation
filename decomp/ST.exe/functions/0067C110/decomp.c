
void __fastcall FUN_0067c110(void *param_1)

{
  int iVar1;
  uint *puVar2;
  uint local_38 [2];
  undefined1 local_30;
  
  puVar2 = local_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_38[1] = *(undefined4 *)((int)param_1 + 0x6fe);
  *(undefined4 *)((int)param_1 + 0x689) = 0;
  local_38[0] = 0x67;
  local_30 = 1;
  thunk_FUN_0067a020(param_1,local_38,-1);
  return;
}


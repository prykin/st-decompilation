
void __fastcall FUN_0067c110(void *param_1)

{
  int iVar1;
  AnonShape_0068FD00_A5257008 **ppAVar2;
  AnonShape_0068FD00_A5257008 *local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  ppAVar2 = &local_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppAVar2 = (AnonShape_0068FD00_A5257008 *)0x0;
    ppAVar2 = ppAVar2 + 1;
  }
  local_34 = *(undefined4 *)((int)param_1 + 0x6fe);
  *(undefined4 *)((int)param_1 + 0x689) = 0;
  local_38 = (AnonShape_0068FD00_A5257008 *)0x67;
  local_30 = 1;
  thunk_FUN_0067a020(param_1,(AnonShape_0068FD00_A5257008 *)&local_38,-1);
  return;
}


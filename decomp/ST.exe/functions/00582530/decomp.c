
void __fastcall FUN_00582530(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  puVar2 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = *(undefined4 *)((int)param_1 + 8);
  local_14 = 0x124;
  FUN_006e6080(param_1,4,*(undefined4 *)((int)param_1 + 0x286),local_24);
  return;
}



void __fastcall FUN_0058efe0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [8];

  puVar2 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_24[3] = 0;
  local_24[5] = *(undefined4 *)((int)param_1 + 8);
  local_24[4] = 10;
  sub_006E60A0(param_1,local_24);
  return;
}



void __fastcall FUN_0058efe0(STJellyGunC *param_1)

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
  local_24[5] = param_1->field_0008;
  local_24[4] = 10;
  STJellyGunC::sub_006E60A0(param_1,local_24);
  return;
}


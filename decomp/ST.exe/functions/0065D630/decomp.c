
void __fastcall FUN_0065d630(STJellyGunC *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_24 [8];
  
  thunk_FUN_0065e6c0((AnonShape_0065DA10_8B0AA883 *)param_1,param_2);
  thunk_FUN_0065d600((int)param_1);
  uVar1 = param_1->field_0008;
  piVar3 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_24[2] = param_1->field_000C->systemId;
  local_24[3] = 0;
  local_24[4] = 10;
  local_24[5] = uVar1;
  STJellyGunC::sub_006E60A0(param_1,local_24);
  return;
}


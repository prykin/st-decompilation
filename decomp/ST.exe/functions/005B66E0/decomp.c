
void __fastcall FUN_005b66e0(STJellyGunC *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)&param_1->field_0x1d;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(int *)&param_1->field_0x25 = param_1->field_000C->systemId;
  *(undefined4 *)&param_1->field_0x29 = 0;
  *(undefined4 *)&param_1->field_0x2d = 10;
  *(undefined4 *)&param_1->field_0x31 = param_1->field_0008;
  STJellyGunC::sub_006E60A0(param_1,(undefined4 *)&param_1->field_0x1d);
  return;
}


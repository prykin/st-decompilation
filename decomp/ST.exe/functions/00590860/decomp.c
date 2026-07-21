
void __fastcall FUN_00590860(STJellyGunC *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &param_1->field_0018;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(int *)&param_1->field_0x20 = param_1->field_000C->systemId;
  *(undefined4 *)&param_1->field_0x24 = 0;
  *(undefined4 *)&param_1->field_0x28 = 10;
  *(undefined4 *)&param_1->field_0x2c = param_1->field_0008;
  STJellyGunC::sub_006E60A0(param_1,&param_1->field_0018);
  return;
}


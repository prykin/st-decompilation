
void __fastcall FUN_005e5f60(STJellyGunC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;

  puVar3 = (undefined4 *)&param_1->field_0x61;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = param_1->field_0008;
  *(int *)((int)&param_1->field_0068 + 1) = param_1->field_000C->systemId;
  *(undefined4 *)&param_1->field_0x6d = 0;
  *(undefined4 *)&param_1->field_0x71 = 10;
  *(undefined4 *)&param_1->field_0x75 = uVar1;
  STJellyGunC::sub_006E60A0(param_1,(undefined4 *)&param_1->field_0x61);
  return;
}


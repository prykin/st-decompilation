
undefined4 FUN_006b5480(AnonShape_006B5480_2C1D4FBF *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;

  iVar1 = Library::DKW::LIB::FUN_006acf50
                    (param_1->field_0014,(param_1->field_000C + param_1->field_0010) * 4);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  puVar4 = (undefined4 *)(iVar1 + param_1->field_000C * 4);
  for (uVar2 = param_1->field_0010 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  param_1->field_0014 = iVar1;
  param_1->field_000C = param_1->field_000C + param_1->field_0010;
  return 0;
}


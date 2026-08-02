
undefined4 FUN_006b5480(AnonShape_006B5480_2C1D4FBF *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;

  pvVar1 = Library::DKW::LIB::MemRealloc
                     ((void *)param_1->field_0014,(param_1->field_000C + param_1->field_0010) * 4);
  if (pvVar1 == nullptr) {
    return 0xfffffffe;
  }
  puVar4 = (undefined4 *)((int)pvVar1 + param_1->field_000C * 4);
  for (uVar2 = param_1->field_0010 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  param_1->field_0014 = (int)pvVar1;
  param_1->field_000C = param_1->field_000C + param_1->field_0010;
  return 0;
}


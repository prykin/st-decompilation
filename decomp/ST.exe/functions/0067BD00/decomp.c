
ushort * __cdecl FUN_0067bd00(AnonShape_00413AF0_B6B4EE9A *param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  uVar1 = param_1->field_000C;
  if (0 < (int)uVar1) {
    bVar4 = uVar1 != 0;
    do {
      if (((bVar4) &&
          (puVar2 = (ushort *)(param_1->field_0008 * uVar3 + param_1->field_001C),
          puVar2 != (ushort *)0x0)) && (*puVar2 == param_2)) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < uVar1;
    } while ((int)uVar3 < (int)uVar1);
  }
  return (ushort *)0x0;
}


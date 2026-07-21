
int __cdecl FUN_0067bd50(AnonShape_00413AF0_B6B4EE9A *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  iVar2 = 0;
  uVar1 = param_1->field_000C;
  uVar4 = 0;
  if (0 < (int)uVar1) {
    bVar5 = uVar1 != 0;
    do {
      if ((bVar5) && (iVar3 = param_1->field_0008 * uVar4 + param_1->field_001C, iVar3 != 0)) {
        iVar2 = iVar2 + *(short *)(iVar3 + 0x1a);
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar1;
    } while ((int)uVar4 < (int)uVar1);
  }
  return iVar2;
}


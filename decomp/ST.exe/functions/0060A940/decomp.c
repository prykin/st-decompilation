
void __fastcall FUN_0060a940(AnonShape_0060A940_933574B2 *param_1)

{
  AnonNested_0060A940_0234_EAD23A7B *pAVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar2 = 0;
  if (param_1->field_0234 != (AnonNested_0060A940_0234_EAD23A7B *)0x0) {
    iVar2 = param_1->field_0234->field_000C;
  }
  uVar4 = 0;
  if (0 < iVar2) {
    do {
      pAVar1 = param_1->field_0234;
      if (((uVar4 < (uint)pAVar1->field_000C) &&
          (iVar3 = pAVar1->field_0008 * uVar4 + pAVar1->field_001C, iVar3 != 0)) &&
         (-1 < (int)*(uint *)(iVar3 + 0x3c))) {
        FUN_006e8ba0(PTR_00807598,*(uint *)(iVar3 + 0x3c));
        *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  }
  return;
}


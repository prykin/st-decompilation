
void __fastcall FUN_0063e660(AnonShape_0063E660_4D42AB87 *param_1)

{
  int iVar1;
  AnonNested_0063E660_0336_9C5AD80D *pAVar2;
  int iVar3;
  uint uVar4;

  if (param_1->field_0336 != (AnonNested_0063E660_0336_9C5AD80D *)0x0) {
    iVar1 = param_1->field_0336->field_000C;
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        pAVar2 = param_1->field_0336;
        if (((uVar4 < (uint)pAVar2->field_000C) &&
            (iVar3 = pAVar2->field_0008 * uVar4 + pAVar2->field_001C, iVar3 != 0)) &&
           (-1 < (int)*(uint *)(iVar3 + 0x38))) {
          FUN_006e8ba0(param_1->field_0211,*(uint *)(iVar3 + 0x38));
          *(undefined4 *)(iVar3 + 0x38) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
    DArrayDestroy((DArrayTy *)param_1->field_0336);
    param_1->field_0336 = (AnonNested_0063E660_0336_9C5AD80D *)0x0;
  }
  return;
}


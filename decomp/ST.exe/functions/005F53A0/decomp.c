
void __fastcall FUN_005f53a0(AnonShape_005F53A0_843EB0E7 *param_1)

{
  int iVar1;
  AnonNested_005F53A0_0169_99CDD61C *pAVar2;
  int iVar3;
  uint uVar4;

  if (param_1->field_0169 != (AnonNested_005F53A0_0169_99CDD61C *)0x0) {
    iVar1 = param_1->field_0169->field_000C;
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        pAVar2 = param_1->field_0169;
        if (((uVar4 < (uint)pAVar2->field_000C) &&
            (iVar3 = pAVar2->field_0008 * uVar4 + *(int *)&pAVar2->field_0x1c, iVar3 != 0)) &&
           (-1 < (int)*(uint *)(iVar3 + 0x1f))) {
          FUN_006e8ba0(PTR_00807598,*(uint *)(iVar3 + 0x1f));
          *(undefined4 *)(iVar3 + 0x1f) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
    DArrayDestroy((DArrayTy *)param_1->field_0169);
    param_1->field_0169 = (AnonNested_005F53A0_0169_99CDD61C *)0x0;
  }
  return;
}


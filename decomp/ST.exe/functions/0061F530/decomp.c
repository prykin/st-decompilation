
void __fastcall FUN_0061f530(AnonShape_0061F530_4582158C *param_1)

{
  AnonNested_0061F530_00A3_F5EAE8C3 *pAVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  pAVar1 = param_1->field_00A3;
  if (pAVar1 != (AnonNested_0061F530_00A3_F5EAE8C3 *)0x0) {
    uVar3 = 0;
    if (0 < (int)pAVar1->field_000C) {
      bVar4 = pAVar1->field_000C != 0;
      do {
        if (bVar4) {
          iVar2 = pAVar1->field_0008 * uVar3 + pAVar1->field_001C;
        }
        else {
          iVar2 = 0;
        }
        if (-1 < (int)*(uint *)(iVar2 + 0x26)) {
          FUN_006e8ba0(PTR_00807598,*(uint *)(iVar2 + 0x26));
          *(undefined4 *)(iVar2 + 0x26) = 0xffffffff;
        }
        pAVar1 = param_1->field_00A3;
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < (uint)pAVar1->field_000C;
      } while ((int)uVar3 < (int)pAVar1->field_000C);
    }
    DArrayDestroy((DArrayTy *)param_1->field_00A3);
    param_1->field_00A3 = (AnonNested_0061F530_00A3_F5EAE8C3 *)0x0;
  }
  return;
}



void __fastcall FUN_00618ad0(AnonShape_00618AD0_F1827B9B *param_1)

{
  int iVar1;
  AnonNested_00618AD0_005E_B3F50575 *pAVar2;
  uint uVar3;
  bool bVar4;
  
  pAVar2 = param_1->field_005E;
  if (pAVar2 != (AnonNested_00618AD0_005E_B3F50575 *)0x0) {
    uVar3 = 0;
    if (0 < (int)pAVar2->field_000C) {
      bVar4 = pAVar2->field_000C != 0;
      do {
        if (((bVar4) && (iVar1 = pAVar2->field_0008 * uVar3 + pAVar2->field_001C, iVar1 != 0)) &&
           (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
          *(undefined4 *)(iVar1 + 0x7d) = 0;
          *(undefined4 *)(iVar1 + 0x8b) = 0;
          *(undefined4 *)(iVar1 + 0x79) = 0;
        }
        pAVar2 = param_1->field_005E;
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < (uint)pAVar2->field_000C;
      } while ((int)uVar3 < (int)pAVar2->field_000C);
    }
  }
  return;
}



void __fastcall FUN_0063d410(AnonShape_0063D410_5C8A60D7 *param_1)

{
  int iVar1;
  AnonNested_0063D410_0336_B4CDA572 *pAVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1->field_0336 != (AnonNested_0063D410_0336_B4CDA572 *)0x0) {
    iVar1 = param_1->field_0336->field_000C;
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        pAVar2 = param_1->field_0336;
        if ((uVar4 < (uint)pAVar2->field_000C) &&
           (iVar3 = pAVar2->field_0008 * uVar4 + pAVar2->field_001C, iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x38) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}


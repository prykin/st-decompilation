
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void FUN_006e3680(AnonShape_006E3450_BC2FF034 *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1->field_0004 = 0;
  while( true ) {
    uVar1 = param_1->field_0004;
    if (param_1->field_000C <= uVar1) {
      return;
    }
    iVar2 = param_1->field_0008 * uVar1 + param_1->field_001C;
    param_1->field_0004 = uVar1 + 1;
    if (iVar2 == 0) break;
    if (*(AnonShape_006E3450_BC2FF034 **)(iVar2 + 8) != (AnonShape_006E3450_BC2FF034 *)0x0) {
      FUN_006e3680(*(AnonShape_006E3450_BC2FF034 **)(iVar2 + 8));
      DArrayDestroy(*(DArrayTy **)(iVar2 + 8));
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
  return;
}


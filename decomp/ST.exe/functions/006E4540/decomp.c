
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

int FUN_006e4540(AnonShape_006E3450_BC2FF034 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  param_1->field_0004 = 0;
  do {
    uVar1 = param_1->field_0004;
    if (param_1->field_000C <= uVar1) {
      return iVar2;
    }
    iVar3 = param_1->field_0008 * uVar1 + param_1->field_001C;
    param_1->field_0004 = uVar1 + 1;
    if (iVar3 == 0) {
      return iVar2;
    }
    if (*(int *)(*(int *)(iVar3 + 4) + 0x14) == param_2) {
      return iVar3;
    }
  } while ((*(AnonShape_006E3450_BC2FF034 **)(iVar3 + 8) == (AnonShape_006E3450_BC2FF034 *)0x0) ||
          (iVar2 = FUN_006e4540(*(AnonShape_006E3450_BC2FF034 **)(iVar3 + 8),param_2), iVar2 == 0));
  return iVar2;
}


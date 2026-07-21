
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

undefined4 FUN_006b0cd0(AnonShape_00413AF0_B6B4EE9A *param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_2 < param_1->field_000C) && (param_3 < param_1->field_000C)) {
    iVar2 = param_1->field_0008;
    if (iVar2 == 4) {
      iVar2 = param_1->field_001C;
      uVar3 = *(undefined4 *)(iVar2 + param_2 * 4);
      *(undefined4 *)(iVar2 + param_2 * 4) = *(undefined4 *)(iVar2 + param_3 * 4);
      *(undefined4 *)(param_1->field_001C + param_3 * 4) = uVar3;
      return 0;
    }
    iVar5 = iVar2 * param_2;
    iVar6 = iVar2 * param_3;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar4 = param_1->field_001C;
      iVar5 = iVar5 + 1;
      uVar1 = *(undefined1 *)(iVar4 + -1 + iVar5);
      *(undefined1 *)(iVar4 + -1 + iVar5) = *(undefined1 *)(iVar4 + iVar6);
      *(undefined1 *)(param_1->field_001C + iVar6) = uVar1;
      iVar6 = iVar6 + 1;
    }
    return 0;
  }
  return 0xfffffffc;
}


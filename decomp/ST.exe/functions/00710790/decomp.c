
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007140E0 -> 00710790 @ 00714523 */

void __cdecl FUN_00710790(AnonShape_00710790_4CBB90D4 *param_1)

{
  AnonShape_00710790_4CBB90D4 *pAVar1;
  AnonShape_00710790_4CBB90D4 *pAVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  if (((param_1 != (AnonShape_00710790_4CBB90D4 *)0x0) && (*(int *)(param_1 + 1) != 0)) &&
     (iVar3 = *(int *)&param_1[1].field_0x8, iVar3 != 0)) {
    iVar6 = 0;
    param_1->field_009A = *(undefined4 *)(iVar3 + 0x9a);
    if (0 < **(short **)(iVar3 + 0x9a)) {
      iVar5 = 4;
      do {
        if ((iVar5 < 4) || (0x43 < iVar5)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + iVar3);
        }
        *(undefined4 *)(&param_1->field_0x0 + iVar5) = uVar4;
        iVar3 = *(int *)&param_1[1].field_0x8;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < **(short **)(iVar3 + 0x9a));
    }
    pAVar1 = *(AnonShape_00710790_4CBB90D4 **)&param_1[1].field_0x8;
    if (*(int *)(pAVar1 + 1) != 0) {
      FUN_00710790(pAVar1);
    }
    pAVar2 = *(AnonShape_00710790_4CBB90D4 **)&param_1[1].field_0x8;
    param_1->field_008A = pAVar1->field_008A;
    if (*(int *)(pAVar2 + 1) != 0) {
      FUN_00710790(pAVar2);
    }
    pAVar1 = *(AnonShape_00710790_4CBB90D4 **)&param_1[1].field_0x8;
    param_1->field_0086 = pAVar2->field_0086;
    if (*(int *)(pAVar1 + 1) != 0) {
      FUN_00710790(pAVar1);
    }
    pAVar2 = *(AnonShape_00710790_4CBB90D4 **)&param_1[1].field_0x8;
    param_1->field_0092 = pAVar1->field_0092;
    if (*(int *)(pAVar2 + 1) != 0) {
      FUN_00710790(pAVar2);
    }
    iVar3 = *(int *)&param_1[1].field_0x8;
    param_1->field_008E = pAVar2->field_008E;
    *(undefined4 *)&param_1[1].field_0xc = *(undefined4 *)(iVar3 + 0xac);
  }
  return;
}



/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070C860 -> 006B4FA0 @ 0070C8C9; FUN_0070c860 parameter param_1 | 0070CB20 -> 006B4FA0
   @ 0070CB96; FUN_0070cb20 parameter param_3 */

int FUN_006b4fa0(RecoveredRecord_006B4FA0_DAC3A217 *param_1)

{
  ushort uVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 == 0) {
    uVar1 = param_1->field_000E;
    if (uVar1 != 0) {
      if (uVar1 < 9) {
        return (int)(&param_1[2].field_0x8 + (1 << ((byte)uVar1 & 0x1f)) * 4);
      }
      if (*(int *)(param_1 + 1) == 3) {
        iVar2 = 3;
      }
    }
  }
  return (int)(&param_1[2].field_0x8 + iVar2 * 4);
}


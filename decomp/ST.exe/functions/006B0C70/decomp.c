
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00496E40 -> 006B0C70 @ 00496E9C | 004D2760 -> 006B0C70 @ 004D28A9 | 004D2760 ->
   006B0C70 @ 004D2C21 | 004D8530 -> 006B0C70 @ 004D8583 | 004D9700 -> 006B0C70 @ 004D9741 |
   0054D640 -> 006B0C70 @ 0054D803 */

undefined4 FUN_006b0c70(DArrayTy *groupContent,uint param_2)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;

  if (groupContent != (DArrayTy *)0x0) {
    if (param_2 < groupContent->count) {
      dVar1 = groupContent->elementSize;
      puVar5 = (undefined4 *)(dVar1 * param_2 + (int)groupContent->data);
      uVar2 = ((groupContent->count - param_2) + -1) * dVar1;
      puVar4 = (undefined4 *)(dVar1 + (int)puVar5);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      groupContent->count = groupContent->count - 1;
      if (param_2 < groupContent->iteratorIndex) {
        groupContent->iteratorIndex = groupContent->iteratorIndex - 1;
      }
      return 0;
    }
  }
  return 0xfffffffc;
}


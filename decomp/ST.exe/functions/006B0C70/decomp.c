
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00446F80 -> 006B0C70 @ 004476A1 | 0044E260 -> 006B0C70 @ 0044E2F9 | 004A7490 ->
   006B0C70 @ 004A76D5 | 0067B520 -> 006B0C70 @ 0067B813 */

undefined4 FUN_006b0c70(AnonShape_006B0C70_7C4FE646 *groupContent,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (groupContent != (AnonShape_006B0C70_7C4FE646 *)0x0) {
    if (param_2 < (uint)groupContent->field_000C) {
      iVar1 = groupContent->field_0008;
      puVar5 = (undefined4 *)(iVar1 * param_2 + groupContent->field_001C);
      uVar2 = ((groupContent->field_000C - param_2) + -1) * iVar1;
      puVar4 = (undefined4 *)(iVar1 + (int)puVar5);
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
      groupContent->field_000C = groupContent->field_000C + -1;
      if (param_2 < groupContent->field_0004) {
        groupContent->field_0004 = groupContent->field_0004 - 1;
      }
      return 0;
    }
  }
  return 0xfffffffc;
}


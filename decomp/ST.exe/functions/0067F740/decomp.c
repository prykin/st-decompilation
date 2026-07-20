
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 0067F740 @ 00683EAB | 00683C70 -> 0067F740 @ 00683EDB | 00683C70 ->
   0067F740 @ 00683F0B | 0068CEC0 -> 0067F740 @ 0068D084 | 0068CEC0 -> 0067F740 @ 0068D0B3 |
   0068CEC0 -> 0067F740 @ 0068D0E3 */

uint __cdecl FUN_0067f740(char *text,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = thunk_FUN_0067f5e0((byte *)text);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((uVar1 < PTR_00848a28->field_000C) &&
     (puVar2 = (undefined4 *)(PTR_00848a28->field_0008 * uVar1 + PTR_00848a28->field_001C),
     puVar2 != (undefined4 *)0x0)) {
    *puVar2 = param_2;
    return uVar1;
  }
  return 0xfffffffc;
}


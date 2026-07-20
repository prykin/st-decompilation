
uint __cdecl FUN_0067fab0(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = thunk_FUN_0067f950(param_1);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((uVar1 < PTR_00848a30->field_000C) &&
     (puVar2 = (undefined4 *)(PTR_00848a30->field_0008 * uVar1 + PTR_00848a30->field_001C),
     puVar2 != (undefined4 *)0x0)) {
    *puVar2 = param_2;
    return uVar1;
  }
  return 0xfffffffc;
}


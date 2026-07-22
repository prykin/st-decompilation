
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067BFD0 -> 0067BEF0 @ 0067C078 */

int __fastcall FUN_0067bef0(AiPlrClassTy *param_1)

{
  int iVar1;

  iVar1 = *(int *)&param_1->field_0x68d + 1;
  *(int *)&param_1->field_0x68d = iVar1;
  if ((0xff < iVar1) && (iVar1 < 0x401)) {
    return iVar1;
  }
  *(undefined4 *)&param_1->field_0x68d = 0x100;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT22((short)((uint)iVar1 >> 0x10),0x100);
}


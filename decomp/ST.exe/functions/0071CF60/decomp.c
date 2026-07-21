
/* [STVTableApplier] Virtual slot 0079E284+0x8 */

undefined4 __fastcall FUN_0071cf60(int *param_1)

{
  undefined4 uVar1;

  if ((param_1[7] & 0xf0000000U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0071cf6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  }
  return 0;
}


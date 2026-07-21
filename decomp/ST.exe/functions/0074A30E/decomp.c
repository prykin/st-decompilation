
/* [STVTableApplier] Virtual slot 0079DB78+0xA8

   [STVTableApplier] Virtual slot 007A13D0+0xA8

   [STVTableApplier] Virtual slot 007A15E8+0xA8 */

undefined4 __thiscall FUN_0074a30e(int *param_1,int param_2)

{
  undefined4 uVar1;

  if ((param_2 == 0) || (param_1[0x19] == 0)) {
    uVar1 = 1;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x38))(param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0xac))(param_2);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x3c))(param_2);
    uVar1 = 0;
  }
  return uVar1;
}


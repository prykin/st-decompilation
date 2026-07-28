
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=00747972 @ 0074798C
   -> CMP CMP EAX,0x1 | 007479CD @ 007479EC -> CMP CMP EAX,0x1 | 00747AA5 @ 00747AB1 -> CMP CMP
   EAX,0x1

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 007479CD -> 00747F3B @ 007479EC; FUN_007479cd parameter param_1 | 00747AA5 -> 00747F3B
   @ 00747AB1; FUN_00747aa5 parameter param_1 */

int __fastcall FUN_00747f3b(AnonShape_00747AA5_87CB4B56 *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1->field_0008 + 0x10))();
  return (uint)(iVar1 != *(int *)(param_1 + 1));
}


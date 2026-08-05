
/* [STPrototypeApplier] Propagated return.
   Evidence: 00752E10 returns return of Library::DKW::DDX::FUN_006c53b0 @ 00752E33 */

int FUN_00752e10(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *in_stack_00000020;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = Library::DKW::DDX::FUN_006c53b0
                    (param_1,in_stack_00000020[1],in_stack_00000020[2],in_stack_00000020[3],
                     in_stack_00000020[4],*in_stack_00000020);
  return iVar1;
}


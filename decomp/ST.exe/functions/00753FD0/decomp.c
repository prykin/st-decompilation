
/* WARNING: Unknown calling convention */
/* [STAbiConsistencyApplier] ebp_context_register target=function:-1: prototype=int
   FUN_00753fd0(void * context) previous_return_type=/undefined8 Evidence: incoming EBP is
   dereferenced before any EBP definition; all current explicit parameters are generic ECX/EDX
   words; ECX/EDX are overwritten or preserved without semantic incoming use; return=/int;
   caller_return_uses=2, ignored=0 */

int FUN_00753fd0(AnonShape_00753FD0_4E1BB8DD *context)

{
  int iVar1;

  context->field_0018 = context->field_0004;
  iVar1 = 0;
  if (((context->field_003F & 0x80) == 0) && (*(int *)context != 0)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)context)();
  }
  context->field_0020 = iVar1 + 1;
  return iVar1;
}


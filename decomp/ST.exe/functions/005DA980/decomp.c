
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=2, ignored=0, unknown=0 */

int FUN_005da980(int param_1)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    thunk_FUN_005daa60();
    FUN_006b6150((uint)DAT_00807362);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::DKW::DDX::FUN_006b6350
              ((int *)&g_int_00811764,(char *)(*(int *)(local_8 + 0x68a) + 0xc + param_1 * 0x14),
               (int *)&DAT_007cd6f0);
    FUN_006b6500(g_int_00811764,DAT_0080733c);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_005daa60();
  return -6;
}


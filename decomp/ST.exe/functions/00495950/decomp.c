
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA784>0040374C

   [STObjectFactoryApplier] Central object factory for 0x0102 (ST_OBJECT_TYPE_0102).
   Evidence: registry[12] at 007CA780 stores type 0x0102 and executable pointer 0040374C; allocation
   size 24 has no unique current class-layout match */

void * __cdecl FUN_00495950(void)

{
  DumpClassC *this;

  this = (DumpClassC *)FUN_006b04d0(0x18);
  if (this != (DumpClassC *)0x0) {
    g_dumpClass_007FB284 = DumpClassC::DumpClassC(this);
    return g_dumpClass_007FB284;
  }
  g_dumpClass_007FB284 = (DumpClassC *)0x0;
  return (void *)0x0;
}


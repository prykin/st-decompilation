
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA774>00401C5D

   [STObjectFactoryApplier] Central object factory for 0x0100 (ST_OBJECT_TYPE_0100).
   Evidence: registry[10] at 007CA770 stores type 0x0100 and executable pointer 00401C5D; allocation
   size 32 has no unique current class-layout match */

OpticClassC * __cdecl CreateOpticClass(void)

{
  OpticClassC *this;

  this = (OpticClassC *)FUN_006b04d0(0x20);
  if (this != nullptr) {
    g_opticClass_007FB2A0 = OpticClassC::OpticClassC(this);
    return g_opticClass_007FB2A0;
  }
  g_opticClass_007FB2A0 = nullptr;
  return nullptr;
}


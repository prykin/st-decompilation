
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA1C>0040258B

   [STObjectFactoryApplier] Central object factory for 0x015B (ST_OBJECT_ST_MAN_BASIS).
   Evidence: registry[95] at 007CAA18 stores type 0x015B and executable pointer 0040258B; allocation
   size 72 uniquely matches /STManBasisC; calls named constructor STManBasisC::STManBasisC */

STManBasisC * __cdecl CreateSTManBasis(void)

{
  STManBasisC *this;

  this = (STManBasisC *)FUN_006b04d0(0x48);
  if (this != (STManBasisC *)0x0) {
    g_manBasis_00811784 = STManBasisC::STManBasisC(this);
    return g_manBasis_00811784;
  }
  g_manBasis_00811784 = (STManBasisC *)0x0;
  return (STManBasisC *)0x0;
}


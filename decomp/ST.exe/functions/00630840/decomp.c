
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA99C>00402AEF

   [STObjectFactoryApplier] Central object factory for 0x0146 (ST_OBJECT_ST_MAN_RUIN).
   Evidence: registry[79] at 007CA998 stores type 0x0146 and executable pointer 00402AEF; allocation
   size 117 uniquely matches /STManRuinC; calls named constructor STManRuinC::STManRuinC */

STManRuinC * __cdecl CreateSTManRuin(void)

{
  STManRuinC *this;

  this = (STManRuinC *)FUN_006b04d0(0x75);
  if (this != (STManRuinC *)0x0) {
    g_manRuin_008117B0 = STManRuinC::STManRuinC(this);
    return g_manRuin_008117B0;
  }
  g_manRuin_008117B0 = (STManRuinC *)0x0;
  return (STManRuinC *)0x0;
}


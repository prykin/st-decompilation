
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA994>004046DD

   [STObjectFactoryApplier] Central object factory for 0x0145 (ST_OBJECT_ST_MAN_RUB3).
   Evidence: registry[78] at 007CA990 stores type 0x0145 and executable pointer 004046DD; allocation
   size 184 uniquely matches /STManRub3C; calls named constructor STManRub3C::STManRub3C */

STManRub3C * __cdecl CreateSTManRub3(void)

{
  STManRub3C *this;

  this = (STManRub3C *)FUN_006b04d0(0xb8);
  if (this != (STManRub3C *)0x0) {
    g_manRub3_008117A4 = STManRub3C::STManRub3C(this);
    return g_manRub3_008117A4;
  }
  g_manRub3_008117A4 = (STManRub3C *)0x0;
  return (STManRub3C *)0x0;
}


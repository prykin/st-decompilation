
/* [STPrototypeApplier] Propagated return.
   Evidence: 00555840 returns used as parameter 1 of Library::Ourlib::MFTSPR::mfTSprGetNumFas @
   005570C3 */

char * __cdecl FUN_00555840(undefined4 param_1)

{
  wsprintfA(&DAT_00802a5c,"TRAKS%02d",param_1);
  return &DAT_00802a5c;
}


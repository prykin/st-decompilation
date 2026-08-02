
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00674C40 -> 0072E730 @ 00674C73 | 00674C40 -> 0072F110 @ 00674C96

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __cdecl FUN_00674c40(byte *_Drive)

{
  char local_308 [260];
  byte local_204 [256];
  byte local_104 [256];

  if ((DAT_0081196c != 0) && (DAT_00811970 == 0)) {
    Library::MSVCRT::FUN_0072e730(_Drive,(byte *)&_Drive,local_104,local_204,nullptr);
    Library::MSVCRT::__makepath
              (local_308,(char *)&_Drive,(char *)local_104,(char *)local_204,&DAT_007d2d48);
    DAT_00811970 = Library::MSVCRT::FUN_0072ea70(local_308,&DAT_007c8ff0);
  }
  return;
}



/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00674E10 -> 0072E730 @ 00674E43 | 00674E10 -> 0072F110 @ 00674E66 */

void __cdecl FUN_00674e10(byte *_Drive)

{
  char local_308 [260];
  byte local_204 [256];
  byte local_104 [256];

  if ((DAT_00811974 != 0) && (DAT_00811978 == 0)) {
    Library::MSVCRT::FUN_0072e730(_Drive,(byte *)&_Drive,local_104,local_204,(byte *)0x0);
    Library::MSVCRT::__makepath
              (local_308,(char *)&_Drive,(char *)local_104,(char *)local_204,&DAT_007d2d50);
    DAT_00811978 = Library::MSVCRT::FUN_0072ea70(local_308,&DAT_007c8ff0);
  }
  return;
}


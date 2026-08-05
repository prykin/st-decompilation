
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005BD7A0 -> 0070AA50 @ 005BD910

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005BD7A0 -> 0070AA50 @ 005BD910

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AA50 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AA6E */

ushort * __cdecl FUN_0070aa50(cMf32 *param_1,char *text,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = Library::Ourlib::MFIMG::mfImgLoad(param_1,6,text,param_3,param_4);
  return puVar1;
}



/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070AD40 -> 0070A5A0 @ 0070AD55

   [STPrototypeApplier] Propagated return.
   Evidence: 0070AD40 returns return of Library::Ourlib::MFIMG::mfImgLoad @ 0070AD5E */

ushort * __cdecl FUN_0070ad40(cMf32 *param_1,char *param_2,byte param_3,int param_4)

{
  ushort *puVar1;

  puVar1 = Library::Ourlib::MFIMG::mfImgLoad(param_1,0x1a,param_2,param_3,param_4);
  return puVar1;
}


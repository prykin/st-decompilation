
/* [STPrototypeApplier] Propagated return.
   Evidence: 00691650 returns used as parameter 1 of Library::Ourlib::MFSPR::mfSSprLoad @ 00691741 |
   00691650 returns used as parameter 1 of Library::Ourlib::MFSPR::mfSSprLoad @ 006920A0 */

char * FUN_00691650(undefined4 param_1,undefined4 param_2)

{
  wsprintfA(&DAT_00853a68,"%s%u",param_1,param_2);
  return &DAT_00853a68;
}


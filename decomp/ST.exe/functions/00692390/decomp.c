
/* [STPrototypeApplier] Propagated return.
   Evidence: 00692390 returns used as parameter 2 of cMf32::RecChk @ 00691857 */

char * FUN_00692390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;

  puVar1 = thunk_FUN_00691650("CONTUR",param_4);
  wsprintfA(&DAT_00853b6c,"%s%u%u%u",puVar1,param_1,param_2,param_3);
  return &DAT_00853b6c;
}


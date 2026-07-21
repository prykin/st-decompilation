
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0062B420 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00424e10 @ 0062B46A */

int FUN_0062b420(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                AnonShape_0062B420_FA3E468B *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4->field_00CA + 0x29);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + param_4->field_00B2 * 4), iVar1 != 0)) {
    iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::thunk_FUN_00424e10
                      (param_1,iVar1,param_4->field_006A - _DAT_007907a8,
                       param_4->field_006E - _DAT_007907a8,param_4->field_0072,0x20,0x20,param_3);
    return iVar1;
  }
  return -4;
}


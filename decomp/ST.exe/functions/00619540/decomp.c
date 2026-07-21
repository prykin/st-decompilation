
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00619540 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00424e10 @ 006195AB */

int FUN_00619540(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                AnonShape_00619540_3F564CD2 *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4->field_004E + 0x29);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + param_4->field_005E * 4), iVar1 != 0)) {
    iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::thunk_FUN_00424e10
                      (param_1,iVar1,
                       (float)param_4->field_0052 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_0056 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_005A * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3)
    ;
    return iVar1;
  }
  return -4;
}


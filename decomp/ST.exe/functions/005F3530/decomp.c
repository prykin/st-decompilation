
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005F3530 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 005F35AA */

int FUN_005f3530(AnonReceiver_00424E10 *param_1,undefined4 param_2,int *param_3,
                AnonShape_005F3530_93A949A7 *param_4)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_4->field_0171 + 0x29);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + param_4->field_00AB * 4), iVar1 != 0)) {
    iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::thunk_FUN_00424e10
                      (param_1,iVar1,
                       (float)param_4->field_0093 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_0097 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_009B * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3)
    ;
    return iVar1;
  }
  return -4;
}


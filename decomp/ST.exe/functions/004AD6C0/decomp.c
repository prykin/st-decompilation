
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004AD6C0 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 004AD70E */

int FUN_004ad6c0(AnonReceiver_00424E10 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(*(int *)(*(int *)(param_4 + 0x20) + *(char *)(param_4 + 0x13) * 0x24) + 0x29);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + *(int *)(param_4 + 0x30) * 4), iVar1 != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::thunk_FUN_00424e10
                      (param_1,iVar1,*(float *)(param_4 + 0x24) - _DAT_007907a8,
                       *(float *)(param_4 + 0x28) - _DAT_007907a8,*(float *)(param_4 + 0x2c),0x20,
                       0x20,param_3);
    return iVar1;
  }
  return -4;
}


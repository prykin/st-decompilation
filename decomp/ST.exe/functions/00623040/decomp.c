
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00623040 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 006230BC | 00623040
   parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 0062311E */

int FUN_00623040(AnonReceiver_00424E10 *param_1,undefined4 param_2,int *param_3,
                AnonShape_00623040_D312340A *param_4)

{
  int iVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_4->field_0060 + 0x29);
  if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + param_4->field_0070 * 4), iVar1 != 0)) {
    if (param_4->field_004F != '\0') {
      iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::thunk_FUN_00424e10
                        ((AnonReceiver_004248D0 *)param_1,iVar1,
                         (float)param_4->field_0064 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                         (float)param_4->field_0068 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                         (float)param_4->field_006C * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,
                         param_3);
      return iVar2;
    }
    iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::thunk_FUN_00424e10
                      ((AnonReceiver_004248D0 *)param_1,
                       *(int *)(iVar2 + (uint)param_4->field_0078 * 4),
                       (float)param_4->field_0064 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_0068 * _DAT_007904f8 * _DAT_007904f0 - _DAT_007907a8,
                       (float)param_4->field_006C * _DAT_007904f8 * _DAT_007904f0,0x20,0x20,param_3)
    ;
    return iVar2;
  }
  return -4;
}



void __fastcall FUN_004ad550(uint param_1)

{
  int iVar1;

  *(undefined1 *)(param_1 + 0x11) = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(char *)(param_1 + 0x10) == '\0') &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x20) + *(char *)(param_1 + 0x13) * 0x24), iVar1 != 0))
     && (*(int *)(iVar1 + 0x29) != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              (*(AnonReceiver_004248D0 **)(param_1 + 0x3c),*(uint *)(param_1 + 0x18),
               *(uint *)(param_1 + 0x34),0x404999,param_1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(int *)(param_1 + 0x38) != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              (*(AnonReceiver_004248D0 **)(param_1 + 0x3c),*(uint *)(param_1 + 0x18),
               *(uint *)(param_1 + 0x34),0x405b64,param_1);
  }
  return;
}



void __fastcall FUN_004924a0(void *param_1)

{
  int iVar1;
  STBoatC *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)((int)param_1 + 0x45d) == 0x14) && (*(int *)((int)param_1 + 0x5a2) != 0)) &&
     (*(int *)((int)param_1 + 0x5c0) != 3)) {
    local_8 = param_1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = FUN_006e62d0(PTR_00802a38,*(int *)((int)param_1 + 0x5a2),(int *)&local_8);
    if (iVar1 != -4) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STBoatC::CancelLoading(local_8,*(int *)((int)param_1 + 0x18));
    }
  }
  return;
}


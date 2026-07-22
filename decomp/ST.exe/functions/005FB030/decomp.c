
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0062E3A0 -> 005FB030 @ 0062E405 */

void __fastcall FUN_005fb030(int *param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)((int)param_1 + 0x2dd)) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
    *(undefined4 *)((int)param_1 + 0x2ea) = 1;
    *(undefined1 *)((int)param_1 + 0x2ee) = 0;
    return;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 3:
  case 6:
  case 0xc:
    *(undefined4 *)((int)param_1 + 0x2ef) = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 2:
  case 4:
    *(undefined4 *)((int)param_1 + 0x2ea) = 1;
    *(undefined1 *)((int)param_1 + 0x2ee) = 1;
    return;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 5:
    *(undefined4 *)((int)param_1 + 0x2ea) = 1;
    *(undefined1 *)((int)param_1 + 0x2ee) = 1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 8:
  case 9:
  case 10:
  case 0xb:
    *(undefined4 *)((int)param_1 + 0x2ea) = 1;
    *(undefined1 *)((int)param_1 + 0x2ee) = 1;
    return;
  default:
    return;
  }
}


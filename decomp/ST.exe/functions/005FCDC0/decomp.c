
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C848>004042FF | P:0079C848>004042FF */

undefined4 __fastcall FUN_005fcdc0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x346)) {
  case 0xdc:
    return 2;
  default:
    return 0;
  case 0xde:
    return 1;
  case 0xe0:
    return 4;
  case 0xe2:
    return 3;
  }
}


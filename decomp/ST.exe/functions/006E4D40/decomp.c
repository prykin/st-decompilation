
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E4D40 returns literal 65535 at 006E4D59 @ 006E4D5F */

uint __thiscall FUN_006e4d40(void *this,int param_1)

{
  uint *puVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar1 = (uint *)FUN_006e45a0(this,*(int *)(param_1 + 0x14));
  if (puVar1 != nullptr) {
    return *puVar1;
  }
  return 0xffff;
}


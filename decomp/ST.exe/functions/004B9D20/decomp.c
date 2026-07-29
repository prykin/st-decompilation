
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0047FAD0 -> 004B9D20 @ 0047FCC0; STBoatC::BackDismant this; stable alias ESI */

undefined4 __thiscall FUN_004b9d20(void *this,STBoatC *param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)((int)this + 0x4b4) != 0) && (*(int *)((int)this + 0x4b0) == param_1->field_0018))
     && (*(int *)((int)this + 0x245) != 6)) {
    *(undefined4 *)((int)this + 0x4b4) = 0;
    return 1;
  }
  return 0;
}


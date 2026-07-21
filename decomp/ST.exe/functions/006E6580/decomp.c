
void __thiscall FUN_006e6580(void *this,int *param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    FUN_006b98c0((int *)((int)this + 0x446),param_1);
    FUN_006a5e90((short *)param_1);
    return;
  }
  FUN_006b98c0((int *)((int)this + 0x44a),param_1);
  FUN_006a5e90((short *)param_1);
  return;
}


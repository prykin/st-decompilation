
uint __thiscall FUN_006a06d0(void *this,int param_1,int param_2)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return ((uint)*(byte *)(*(int *)((int)this + 0x5703) * param_2 + *(int *)((int)this + 0x56ff) +
                         param_1) * 500) / 0xff;
}



bool __thiscall FUN_00724f00(void *this,int param_1,int param_2)

{
  int iVar1;

  if (*(int *)((int)this + 0x20) == 1) {
    if ((param_2 < *(int *)((int)this + 0x28) + *(int *)((int)this + 0x198)) ||
       (*(int *)((int)this + 0x13c) + *(int *)((int)this + 0x28) + *(int *)((int)this + 0x198) <
        param_2)) {
      return false;
    }
  }
  else {
    if (param_1 < *(int *)((int)this + 0x24) + *(int *)((int)this + 0x194)) {
      return false;
    }
    if (*(int *)((int)this + 0x13c) + *(int *)((int)this + 0x24) + *(int *)((int)this + 0x194) <
        param_1) {
      return false;
    }
  }
  if (*(int *)((int)this + 0x140) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = FUN_006b55c0(*(int *)((int)this + 0x140),*(int *)((int)this + 0x144),
                         (param_1 - *(int *)((int)this + 0x194)) - *(int *)((int)this + 0x24),
                         (param_2 - *(int *)((int)this + 0x198)) - *(int *)((int)this + 0x28));
    return SUB41(iVar1,0);
  }
  return true;
}


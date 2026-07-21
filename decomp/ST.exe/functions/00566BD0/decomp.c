
void __thiscall FUN_00566bd0(void *this,int param_1)

{
  uint uVar1;

  if ((param_1 != 0) && (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = FUN_006eb310(PTR_00807598,*(uint *)(param_1 + 0x1ed));
    if (uVar1 != 0) {
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x1c);
    }
  }
  return;
}


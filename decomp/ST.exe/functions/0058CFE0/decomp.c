
undefined4 __cdecl FUN_0058cfe0(int param_1)

{
  DAT_00811720 = DAT_00811720 + 1;
  PTR_00811718 = Library::DKW::LIB::MemRealloc(PTR_00811718,DAT_00811720 * 4);
  PTR_0081171c = Library::DKW::LIB::MemRealloc(PTR_0081171c,DAT_00811720 * 4);
  if ((PTR_00811718 != (AnonPointee_TLOBaseTy_0607 *)0x0) &&
     (PTR_0081171c != (AnonPointee_TLOBaseTy_0607 *)0x0)) {
    *(undefined4 *)((int)PTR_00811718 + DAT_00811720 * 4 + -4) = *(undefined4 *)(param_1 + 0x18);
    *(int *)((int)PTR_0081171c + DAT_00811720 * 4 + -4) = param_1;
    return 1;
  }
  return 0;
}


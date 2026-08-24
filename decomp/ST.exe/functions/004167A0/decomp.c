#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=16, used=0), and
   decompilation contains no value return */

void __thiscall sub_004167A0(void *this)

{
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_007901d0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (STField<int>(this,0x97) != 0) {
    ExceptionList = &local_14;
    FreeAndNull((int *)((int)this + 0x97));
    STField<undefined4>(this,0x9b) = 0;
    STField<undefined4>(this,0xd3) = 0;
    STField<undefined1>(this,0xe3) = 0;
  }
  ExceptionList = local_14;
  return;
}


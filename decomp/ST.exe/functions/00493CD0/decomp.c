
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042D770 -> 00493CD0 @ 0042D80F | 0043BEB0 -> 00493CD0 @ 0043C1CB */

undefined4 __fastcall FUN_00493cd0(STGameObjC *objPtr)

{
  if (((((*(byte *)&objPtr->field_01D1 & 4) == 0) && (objPtr->field_0736 == 0)) &&
      (objPtr->field_073A == 0)) && (objPtr->field_05C0 != 3)) {
    return 0;
  }
  return 1;
}



/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00423E00 -> 006AE110 @ 00423E14 | 00436F20 -> 006AE110 @ 00437574 | 00436F20 ->
   006AE110 @ 0043777E | 00436F20 -> 006AE110 @ 00437F09 | 00436F20 -> 006AE110 @ 00437FFD |
   00436F20 -> 006AE110 @ 00438163 | 0044EE30 -> 006AE110 @ 004505D5 | 0044EE30 -> 006AE110 @
   00450668 | 004899A0 -> 006AE110 @ 0048A2F6 | 00490F60 -> 006AE110 @ 00491007 | 004999C0 ->
   006AE110 @ 00499AAE | 0049A620 -> 006AE110 @ 0049A6D3 | 00675EA0 -> 006AE110 @ 00675F3D

   [STUtilityFunctionApplier] darray_destroy: releases DArray storage and the descriptor when the
   ownership flag is set
   Evidence: body pattern verified */

void DArrayDestroy(DArrayTy *array)

{
  if (array != (DArrayTy *)0x0) {
    FUN_006a5e90(array->data);
    if ((array->flags & 8) != 0) {
      FUN_006a5e90((short *)array);
    }
  }
  return;
}


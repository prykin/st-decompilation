#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_0067b260(int param_1)

{
  uint index;
  DArrayTy *array;
  char *pcVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(char *)(param_1 + 0x662) == '\x01') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    index = *(uint *)(*(int *)(param_1 + 0x6a1) + 0xc);
    while (index = index - 1, -1 < (int)index) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      array = *(DArrayTy **)(param_1 + 0x6a1);
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime stride) */
      if ((((index < array->count) &&
           (pcVar1 = (char *)(array->elementSize * index + (int)array->data), pcVar1 != nullptr)
           ) && ((short)*pcVar1 == *(short *)(param_1 + 0x660))) && (pcVar1[7] == '\0')) {
        DArrayRemoveAt(array,index);
      }
    }
    *(undefined1 *)(param_1 + 0x662) = 0;
  }
  return;
}


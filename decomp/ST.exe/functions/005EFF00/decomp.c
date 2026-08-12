#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall FUN_005eff00(int param_1)

{
  int iVar1;
  short sVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x277);
  sVar2 = STBiasedDiv16(iVar1, 0xc9); /* exact signed 16-bit grid-index division */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x27b);
  *(short *)(param_1 + 0x47) = sVar2;
  sVar2 = STBiasedDiv16(iVar1, 0xc9); /* exact signed 16-bit grid-index division */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x27f);
  *(short *)(param_1 + 0x49) = sVar2;
  sVar2 = STBiasedDiv16(iVar1, 200); /* exact signed 16-bit grid-index division */
  *(short *)(param_1 + 0x4b) = sVar2;
  *(undefined2 *)(param_1 + 0x41) = *(undefined2 *)(param_1 + 0x277);
  *(undefined2 *)(param_1 + 0x45) = *(undefined2 *)(param_1 + 0x27f);
  *(undefined2 *)(param_1 + 0x5d) = *(undefined2 *)(param_1 + 0x244);
  *(undefined2 *)(param_1 + 0x43) = *(undefined2 *)(param_1 + 0x27b);
  *(undefined2 *)(param_1 + 0x5b) = *(undefined2 *)(param_1 + 0x242);
  *(undefined2 *)(param_1 + 0x5f) = *(undefined2 *)(param_1 + 0x246);
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x2ba) * 0xf;
  return;
}


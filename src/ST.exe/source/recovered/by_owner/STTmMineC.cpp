#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STTmMineC.cpp

// 0063DDB0 STTmMineC::FUN_0063ddb0
#line 4 "decomp/ST.exe/functions/0063DDB0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0063DDB0(STTmMineC *this,int param_1)

{
  dword dVar1;
  STTmMineC_field_0336DArray *pSVar2;
  uint uVar3;

  if (this->field_0336 != nullptr) {
    dVar1 = st::storage_bit_cast<dword>(this->field_0336->count);
    uVar3 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = st::pointer_boundary_cast<STTmMineC_field_0336DArray *>(this->field_0336);
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((uVar3 < pSVar2->count) &&
           (&pSVar2->data->field_0000 + pSVar2->elementSize * uVar3 != 0)) {
          /* ST_CALLSITE[0063DDEC]: CALL 0x00403274; direct=00403274 STTmMineC::LoadImagSpr */
          st::fn_00403274(this,uVar3,param_1);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)dVar1);
    }
  }
  return;
}

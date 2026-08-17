#include "../../pseudocode_runtime.h"


void __thiscall STTmMineC::FUN_0063ddb0(STTmMineC *this,int param_1)

{
  dword dVar1;
  STTmMineC_field_0336DArray *pSVar2;
  uint uVar3;

  if (this->field_0336 != nullptr) {
    dVar1 = this->field_0336->count;
    uVar3 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0336;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((uVar3 < pSVar2->count) &&
           (&pSVar2->data->field_0000 + pSVar2->elementSize * uVar3 != nullptr)) {
          /* ST_CALLSITE[0063DDEC]: CALL 0x00403274; direct=00403274 STTmMineC::LoadImagSpr */
          LoadImagSpr(this,uVar3,param_1);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)dVar1);
    }
  }
  return;
}


#include "../../pseudocode_runtime.h"


int __thiscall STFieldC::FUN_0060c1a0(STFieldC *this,undefined4 *param_1)

{
  int iVar1;
  STFieldC_field_0234DArray *pSVar2;
  STFieldC_field_0234Element *element_0234;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  byte *puVar8;
  bool bVar9;

  iVar1 = 0;
  if (param_1 != nullptr) {
    if (this == nullptr) {
      puVar8 = nullptr;
    }
    else {
      puVar8 = (byte *)&this->field_0x1d5;
    }
    puVar7 = (byte *)(param_1);
    memmove(puVar8, puVar7, 0x83); /* compiler REP MOVS byte copy */
    iVar1 = 0x83;
    if (this->field_0234 == nullptr) {
      piVar4 = (int *)((int)param_1 + 0x83);
    }
    else {
      pSVar2 = (STFieldC_field_0234DArray *)FUN_006b0060(nullptr,(uint *)((int)param_1 + 0x87));
      this->field_0234 = pSVar2;
      if ((this->field_0225 != '\0') || (pSVar2 != nullptr)) {
        uVar6 = 0;
        if (0 < (int)pSVar2->count) {
          bVar9 = pSVar2->count != 0;
          do {
            if (bVar9) {
              element_0234 = DArrayAt<STFieldC_field_0234Element>(pSVar2, uVar6);
            }
            else {
              element_0234 = nullptr;
            }
            element_0234->field_003C = 0xffffffff;
            pSVar2 = this->field_0234;
            uVar6 = uVar6 + 1;
            bVar9 = uVar6 < pSVar2->count;
          } while ((int)uVar6 < (int)pSVar2->count);
        }
        if (this->field_0225 != '\0') {
          /* ST_CALLSITE[0060C246]: CALL 0x004010f5; direct=004010F5 STFieldC::sub_00609CD0 */
          sub_00609CD0(this);
        }
      }
      iVar1 = 0x10a;
      piVar4 = (int *)((int)param_1 + STField<int>(param_1,0x83) + 0x8b);
    }
    if ((this->field_023C != 0) && (this->field_0244 != nullptr)) {
      /* ST_CALLSITE[0060C27B]: CALL 0x0040234c; direct=0040234C STFieldC::sub_0060D660 */
      iVar5 = sub_0060D660(this,piVar4);
      iVar1 = iVar1 + iVar5;
    }
  }
  return iVar1;
}


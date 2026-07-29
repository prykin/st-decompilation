#include "../../pseudocode_runtime.h"


int __thiscall STFieldC::FUN_0060c1a0(STFieldC *this,undefined4 *param_1)

{
  int iVar1;
  STFieldC_field_0234DArray *pSVar2;
  STFieldC_field_0234Element *element_0234;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;

  iVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (this == (STFieldC *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)&this->field_0x1d5;
    }
    puVar6 = param_1;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
    *(undefined1 *)((int)puVar7 + 2) = *(undefined1 *)((int)puVar6 + 2);
    iVar1 = 0x83;
    if (this->field_0234 == (STFieldC_field_0234DArray *)0x0) {
      piVar3 = (int *)((int)param_1 + 0x83);
    }
    else {
      pSVar2 = (STFieldC_field_0234DArray *)FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x87));
      this->field_0234 = pSVar2;
      if ((this->field_0225 != '\0') || (pSVar2 != (STFieldC_field_0234DArray *)0x0)) {
        uVar5 = 0;
        if (0 < (int)pSVar2->count) {
          bVar8 = pSVar2->count != 0;
          do {
            if (bVar8) {
              element_0234 = DArrayAt<STFieldC_field_0234Element>(pSVar2, uVar5);
            }
            else {
              element_0234 = (STFieldC_field_0234Element *)0x0;
            }
            element_0234->field_003C = 0xffffffff;
            pSVar2 = this->field_0234;
            uVar5 = uVar5 + 1;
            bVar8 = uVar5 < pSVar2->count;
          } while ((int)uVar5 < (int)pSVar2->count);
        }
        if (this->field_0225 != '\0') {
          sub_00609CD0(this);
        }
      }
      iVar1 = 0x10a;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar3 = (int *)((int)param_1 + *(int *)((int)param_1 + 0x83) + 0x8b);
    }
    if ((this->field_023C != 0) && (this->field_0244 != 0)) {
      iVar4 = sub_0060D660(this,piVar3);
      iVar1 = iVar1 + iVar4;
    }
  }
  return iVar1;
}


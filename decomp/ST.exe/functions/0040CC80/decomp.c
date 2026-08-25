#include "../../pseudocode_runtime.h"


int __thiscall FUN_0040cc80(void *this,uint param_1)

{
  STGameObjC *pSVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int local_8;

  pSVar1 = thunk_FUN_00423e70(this,(ushort)param_1);
  if ((pSVar1 == nullptr) || (pSVar1->field_009F == nullptr)) {
    return -4;
  }
  local_8 = pSVar1->field_00A7;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = 0;
  if (-1 < local_8) {
    psVar4 = pSVar1->field_009F + local_8 * 0x24;
    while (-2 < (int)param_1) {
      iVar3 = 0;
      psVar2 = psVar4;
      do {
        if (((*psVar2 == pSVar1->field_0047) && (psVar2[1] == pSVar1->field_0049)) &&
           (psVar2[2] == pSVar1->field_004B)) goto LAB_0040cd0a;
        iVar3 = iVar3 + 1;
        psVar2 = psVar2 + 4;
      } while (iVar3 < 9);
      param_1 = param_1 - 1;
      psVar4 = psVar4 + -0x24;
      local_8 = local_8 + -1;
      if (local_8 < 0) break;
    }
  }
  param_1 = 0;
LAB_0040cd0a:
  iVar5 = 0;
  iVar3 = param_1 + 1 + pSVar1->field_00A7;
  psVar4 = pSVar1->field_009F + iVar3 * 0x24;
  if (iVar3 < pSVar1->field_00A3) {
    iVar3 = pSVar1->field_00A3 - iVar3;
    do {
      if (((*psVar4 != psVar4[-0x24]) || (psVar4[1] != psVar4[-0x23])) ||
         (psVar4[2] != psVar4[-0x22])) {
        iVar5 = iVar5 + 1;
      }
      psVar4 = psVar4 + 0x24;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar5;
}


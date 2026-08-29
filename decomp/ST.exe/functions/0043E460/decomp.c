#include "../../pseudocode_runtime.h"


short FUN_0043e460(char param_1)

{
  DArrayOf_STGameObjCPtr *pDVar1;
  dword dVar2;
  STGameObjC *this;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;

  iVar6 = 0;
  sVar4 = 0;
  pDVar1 = g_packedRecords_A62x8[param_1].field3_0x9;
  dVar2 = pDVar1->count;
  sVar3 = 0;
  if (0 < (int)dVar2) {
    do {
      sVar4 = sVar3;
      this = pDVar1->data[iVar6];
      /* ST_CALLSITE[0043E499]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      if ((this != nullptr) && (iVar5 = (*this->vtable[1].vfunc_24)(this), iVar5 == 1)) {
        sVar4 = sVar4 + 1;
      }
      iVar6 = iVar6 + 1;
      sVar3 = sVar4;
    } while (iVar6 < (int)dVar2);
  }
  return sVar4;
}


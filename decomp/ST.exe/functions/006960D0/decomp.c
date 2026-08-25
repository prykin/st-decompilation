#include "../../pseudocode_runtime.h"


uint __thiscall FUN_006960d0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  DArrayTy *pDVar2;
  uint uVar4;
  int local_EAX_121;
  int uVar3;
  int *piVar5;
  int iVar6;
  bool bVar7;

  iVar6 = STField<int>(this,0x5853);
  if (iVar6 != 0) {
    if (param_1 < STField<uint>(iVar6,0xC)) {
      iVar6 = STField<int>(iVar6,0x8) * param_1 + STField<int>(iVar6,0x1C);
    }
    else {
      iVar6 = 0;
    }
    if (STField<int>(iVar6,0x19) == 0) {
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
      *(DArrayTy **)(iVar6 + 0x19) = pDVar2;
    }
    pDVar2 = *(DArrayTy **)(iVar6 + 0x19);
    if (pDVar2 != nullptr) {
      uVar1 = pDVar2->count;
      uVar4 = 0;
      if (0 < (int)uVar1) {
        bVar7 = uVar1 != 0;
        while (((!bVar7 ||
                (piVar5 = DArrayAt<int>(pDVar2, uVar4),
                piVar5 == nullptr)) || (*piVar5 != param_2))) {
          uVar4 = uVar4 + 1;
          bVar7 = uVar4 < uVar1;
          if ((int)uVar1 <= (int)uVar4) {
            local_EAX_121 = Library::DKW::TBL::DArrayAppend(pDVar2,&param_2);
            return local_EAX_121;
          }
        }
        if (-1 < (int)uVar4) {
          return uVar4;
        }
      }
      uVar3 = Library::DKW::TBL::DArrayAppend(pDVar2,&param_2);
      return uVar3;
    }
  }
  return 0xffffffff;
}


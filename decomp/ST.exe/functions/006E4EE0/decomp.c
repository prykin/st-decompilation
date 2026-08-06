#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x006e4efb) */

int __fastcall FUN_006e4ee0(int *param_1)

{
  int iVar3;
  int local_EAX_32;
  int iVar1;
  int iVar2;
  int iVar4;
  bool bVar5;

  iVar4 = param_1[0xb];
  iVar3 = *(int *)(iVar4 + 0xc);
  do {
    if (iVar3 == 0) {
LAB_006e4f26:
      iVar1 = AppClassTy::LifeToAllSystem((AppClassTy *)param_1,param_1[4]);
      if (iVar1 != 0) {
        param_1[7] = 1;
        return iVar1;
      }
      iVar4 = param_1[10];
      bVar5 = *(int *)(iVar4 + 0xc) == 0;
      if (!bVar5) {
        do {
          if (bVar5) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 0x1c);
          }
          iVar2 = FUN_006e3db0(iVar4);
          if (iVar2 == 0xffff) {
            param_1[7] = 1;
            return 0xffff;
          }
          DArrayRemoveAt((DArrayTy *)param_1[10],0);
          iVar4 = param_1[10];
          bVar5 = *(int *)(iVar4 + 0xc) == 0;
        } while (!bVar5);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*param_1 + 0x14))();
      if (iVar4 != 0) {
        param_1[7] = 1;
        return iVar4;
      }
      return 0;
    }
    local_EAX_32 = FUN_006e3db0(*(int *)(iVar4 + 0x1c));
    if (local_EAX_32 == 0xffff) {
      param_1[7] = 1;
      goto LAB_006e4f26;
    }
    DArrayRemoveAt((DArrayTy *)param_1[0xb],0);
    iVar4 = param_1[0xb];
    iVar3 = *(int *)(iVar4 + 0xc);
  } while( true );
}


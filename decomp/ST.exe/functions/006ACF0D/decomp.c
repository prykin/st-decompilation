#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006ACF0D returns stored into /STOctopusC+0x239 @ 0058AFD0 */

int __cdecl FUN_006acf0d(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint highWord;
  int iVar9;

  lVar1 = (longlong)(param_1 - param_4) * (longlong)(param_1 - param_4);
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  if (-1 < lVar1) {
    lVar2 = (longlong)(param_2 - param_5) * (longlong)(param_2 - param_5);
    iVar7 = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = (uint)lVar2;
    uVar5 = (uint)lVar1 + uVar3;
    uVar3 = (uint)CARRY4((uint)lVar1,uVar3);
    iVar8 = iVar6 + iVar7;
    iVar9 = iVar8 + uVar3;
    if ((SCARRY4(iVar6,iVar7) != SCARRY4(iVar8,uVar3)) == iVar9 < 0) {
      lVar1 = (longlong)(param_3 - param_6) * (longlong)(param_3 - param_6);
      iVar8 = (int)((ulonglong)lVar1 >> 0x20);
      uVar4 = (uint)lVar1;
      uVar3 = (uint)CARRY4(uVar4,uVar5);
      iVar6 = iVar8 + iVar9;
      highWord = iVar6 + uVar3;
      if ((SCARRY4(iVar8,iVar9) != SCARRY4(iVar6,uVar3)) == (int)highWord < 0) {

        iVar6 = FUN_006ace70(uVar4 + uVar5,highWord);
        return iVar6;
      }
    }
  }
  return 0x7fffffff;
}


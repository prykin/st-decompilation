#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006ACED8 returns stored into /STBHEShellC+0xef @ 005F3D78 */

int __cdecl FUN_006aced8(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint highWord;

  lVar3 = (longlong)(param_1 - param_3) * (longlong)(param_1 - param_3);
  iVar6 = (int)((ulonglong)lVar3 >> 0x20);
  if (-1 < lVar3) {
    lVar4 = (longlong)(param_2 - param_4) * (longlong)(param_2 - param_4);
    iVar7 = (int)((ulonglong)lVar4 >> 0x20);
    uVar5 = (uint)lVar4;
    uVar1 = (uint)CARRY4(uVar5,(uint)lVar3);
    iVar2 = iVar7 + iVar6;
    highWord = iVar2 + uVar1;
    if ((SCARRY4(iVar7,iVar6) != SCARRY4(iVar2,uVar1)) == (int)highWord < 0) {

      iVar6 = FUN_006ace70(uVar5 + (uint)lVar3,highWord);
      return iVar6;
    }
  }
  return 0x7fffffff;
}


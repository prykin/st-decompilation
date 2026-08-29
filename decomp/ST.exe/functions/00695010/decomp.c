#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_00695010(void *this,int param_1,int param_2,RecoveredRecord_00695010_96BA53C4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong local_14;
  int local_c;
  uint local_8;
  iVar1 = param_3->field_0004;
  local_8 = 0xffffffff;
  local_c = 0;
  do {
    iVar1 = iVar1 + -1;
    iVar2 = local_c;
    if (iVar1 < 0) break;

    iVar3 = thunk_FUN_006a20e0(STField<int *>(this,8),param_1,param_2,iVar1,0xff);
    iVar2 = iVar1;
  } while (iVar3 == 0);
  local_c = iVar2;

  thunk_FUN_006a1370(STField<int *>(this,8),param_1,param_2,local_c,
                     (RecoveredRecord_006A1370_30F34641 *)&local_14);
  if (((STPiece<4,4>(local_14) & 0x2000) != 0) || (uVar4 = 6, (short)STPiece<4,4>(local_14) == 0x1100)) {
    uVar4 = local_8;
  }
  if ((STPiece<4,4>(local_14) & 0x4000) != 0) {
    uVar4 = 0x7110;
  }
  if (local_c == 0) {
    uVar4 = 1;
  }
  else if ((0 < local_c) && (local_c < 5)) {
    return 9;
  }
  return uVar4;
}


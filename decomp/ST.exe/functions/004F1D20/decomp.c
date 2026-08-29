#include "../../pseudocode_runtime.h"


void FUN_004f1d20(RecoveredRecord_004F1D20_D68BC0B9 *param_1)

{
  int iVar1;
  RecoveredRecord_00526100_020D84E3 *pRVar2;
  RecoveredRecord_00526100_020D84E3 local_3c;
  byte local_35;
  uint local_34;
  pRVar2 = &local_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pRVar2 = 0;
    pRVar2 = (RecoveredRecord_00526100_020D84E3 *)((int)&pRVar2->field_0003 + 1);
  }
  *(undefined2 *)pRVar2 = 0;
  STPiece<1,1>(local_3c) = 1;
  STPiece<0,1>(local_3c) = *(undefined1 *)param_1;
  STPiece<2,1>(local_3c) = param_1->field_0x1;
  local_3c.field_0003 = param_1->field_0002;
  local_35 = param_1->field_0x6;
  local_34 = param_1->field_0007;
  thunk_FUN_00526100(&local_3c,0);
  return;
}


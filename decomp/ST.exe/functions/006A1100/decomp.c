#include "../../pseudocode_runtime.h"


bool __cdecl
FUN_006a1100(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  uint3 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  byte local_c [2];
  byte bStack_a;
  byte bStack_8;

  iVar4 = param_3;
  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    iVar3 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5);
    if (iVar3 == 0) {
      return false;
    }
    iVar3 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(int)local_c);
    if (param_5 == 0xff) {
      STPiece<3,1>(param_3) = bStack_8;
    }
    else if (param_5 == 1) {
      STPiece<3,1>(param_3) = bStack_a;
    }
    else {
      STPiece<3,1>(param_3) = local_c[0];
    }
    uVar2 = thunk_FUN_006a0ef0(param_1,param_2,iVar4,param_4,param_5,param_6);
    if (uVar2 == 0xffff) {
      return false;
    }
    if (STPiece<3,1>(param_3) == 0) {
      return uVar2 == 0;
    }
    if ((short)iVar3 != param_4) {
      return false;
    }
    iVar4 = thunk_FUN_006a10c0(uVar2);
    uVar2 = (ushort)iVar4;
    if (uVar2 == 0xffff) {
      return false;
    }
    if (param_5 == 0xff) {
      if (uVar2 != (bStack_8 & 0xf)) {
        return false;
      }
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar1 = CONCAT12(bStack_8,(ushort)bStack_a);
      if (param_5 != 1) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar1 = CONCAT12(bStack_a,(ushort)local_c[0]);
      }
      if ((int)(short)uVar2 != (uVar1 & 0xf)) {
        return false;
      }
    }
  }
  return true;
}


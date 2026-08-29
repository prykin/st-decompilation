#include "../../pseudocode_runtime.h"


bool __cdecl
FUN_006a1100(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6)

{
  uint3 uVar1;
  int iVar2;
  ushort uVar2;
  ushort uVar3;
  int iVar5;
  int iVar3;
  int iVar4;
  RecoveredRecord_006A1370_30F34641 local_c;

  iVar2 = param_3;
  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {

    iVar5 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5);
    if (iVar5 == 0) {
      return false;
    }

    iVar3 = thunk_FUN_006a1370(param_1,param_2,param_3,param_4,&local_c);
    if (param_5 == 0xff) {
      STPiece<3,1>(param_3) = (byte)local_c.field_0004;
    }
    else if (param_5 == 1) {
      STPiece<3,1>(param_3) = STPiece<2,1>(local_c);
    }
    else {
      STPiece<3,1>(param_3) = STPiece<0,1>(local_c);
    }
    uVar2 = thunk_FUN_006a0ef0(param_1,param_2,iVar2,param_4,param_5,param_6);
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
    uVar3 = (ushort)iVar4;
    if (uVar3 == 0xffff) {
      return false;
    }
    if (param_5 == 0xff) {
      if (uVar3 != ((byte)local_c.field_0004 & 0xf)) {
        return false;
      }
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar1 = CONCAT12((byte)local_c.field_0004,(ushort)(byte)STPiece<2,1>(local_c));
      if (param_5 != 1) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar1 = CONCAT12(STPiece<2,1>(local_c),(ushort)(byte)STPiece<0,1>(local_c));
      }
      if ((short)uVar3 != (uVar1 & 0xf)) {
        return false;
      }
    }
  }
  return true;
}


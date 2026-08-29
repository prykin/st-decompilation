#include "../../pseudocode_runtime.h"


undefined4
FUN_00696eb0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  RecoveredRecord_006A1370_30F34641 local_1c;
  RecoveredRecord_006A1370_30F34641 local_14;
  uint local_c;
  int local_8;

  local_c = 0;
  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) &&
     ((param_4 < *param_1 && ((-1 < param_5 && (param_5 < param_1[1])))))) {

    iVar2 = thunk_FUN_006a1370(param_1,param_2,param_3,param_6,&local_14);

    iVar3 = thunk_FUN_006a1370(param_1,param_4,param_5,param_6,&local_1c);
    if (STPiece<2,2>(local_14) != 0) {
      pbVar3 = (byte *)(STField<int>(local_8,0x5833) * param_3 + STField<int>(local_8,0x584B) + param_2);
      *pbVar3 = *pbVar3 | '\x01' << ((byte)param_6 & 0x1f);
    }
    if (STPiece<2,2>(local_1c) != 0) {
      pbVar3 = (byte *)(STField<int>(local_8,0x5833) * param_5 + STField<int>(local_8,0x584B) + param_4);
      *pbVar3 = *pbVar3 | '\x01' << ((byte)param_6 & 0x1f);
    }
    if ((((STPiece<1,1>(local_1c.field_0004) == STPiece<1,1>(local_14.field_0004)) && ((short)iVar2 == (short)iVar3)
         ) && (((-(uint)((STPiece<2,2>(local_14) & 0x2000) != 0) & 0xffffff01) + 0xffff &
               (uint)(ushort)STPiece<2,2>(local_14)) ==
               ((-(uint)((STPiece<2,2>(local_1c) & 0x2000) != 0) & 0xffffff01) + 0xffff &
               (uint)(ushort)STPiece<2,2>(local_1c)))) &&
       (uVar1 = STReplaceLowWord((uint32_t)(local_1c), (uint16_t)(STPiece<0,2>(local_1c))),
       ((-(ushort)((STPiece<0,2>(local_14) & 0x2000) != 0) & 0xff01) - 1 & STPiece<0,2>(local_14)) ==
       ((-(ushort)((STPiece<0,2>(local_1c) & 0x2000) != 0) & 0xff01) - 1 & STPiece<0,2>(local_1c)))) {
      if (param_7 == 1) {
        uVar1 = (uint)(ushort)STPiece<2,2>(local_1c);
      }
      iVar4 = 0;
      piVar2 = &DAT_007df82c;
      while ((piVar2[-1] != param_4 - param_2 || (*piVar2 != param_5 - param_3))) {
        piVar2 = piVar2 + 2;
        iVar4 = iVar4 + 1;
        if (0x7df86b < (int)piVar2) {
          return local_c;
        }
      }
      if ((iVar4 != -1) && (*(short *)(&DAT_007df898 + (iVar4 + (uVar1 & 0xf) * 8) * 2) != 0)) {
        local_c = 1;
      }
    }
    return local_c;
  }
  return 0;
}


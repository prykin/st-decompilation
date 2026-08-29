#include "../../pseudocode_runtime.h"


void __thiscall FUN_006799b0(void *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  RecoveredRecordView_0068FD00_630BE91E *pRVar5;
  bool bVar6;
  RecoveredRecordView_0068FD00_630BE91E local_3c [3];
  uint local_8;

  local_8 = STField<uint>(this,0x640);
  if (STField<char>(this,0x644) == '\x01') {
    uVar1 = (ushort)param_1;
    if ((uVar1 < 8) &&
       ((((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[(short)uVar1].field_0022 < 8)) &&
         (uVar4 = (uint)(short)uVar1, uVar4 != local_8)) &&
        (uVar2 = STField<uint>(this,0x5d7), uVar4 != uVar2)))) {
      if (DAT_00808a8f == '\0') {

        iVar3 = thunk_FUN_005822e0(&DAT_00807620,(byte)param_1,(byte)uVar2);
        bVar6 = iVar3 < 0;
      }
      else {
        bVar6 = g_bulkInitializedRecords_008087C7[uVar2 & 0xff].field_0023 !=
                g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023;
      }
      if (bVar6) {
        if (STField<uint>(this,0x649) == uVar4) {
          STField<short>(this,0x64d) = STField<short>(this,0x64d) + 1;
          uVar2 = STField<uint>(this,0x640);
          if (*(char *)(g_bulkInitializedRecords_008087C7 + uVar4) == '\0') {
            if ((uVar2 < 8) && (*(char *)(g_bulkInitializedRecords_008087C7 + uVar2) == '\0')) {
              uVar2 = STField<int>(this,0xa4) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0xa4) = uVar2;
              iVar3 = (uVar2 >> 0x10 & 7) + 8;
            }
            else {
              uVar2 = STField<int>(this,0xa4) * 0x41c64e6d + 0x3039;
              STField<uint>(this,0xa4) = uVar2;
              iVar3 = (uVar2 >> 0x10) % 3 + 1;
            }
          }
          else if ((uVar2 < 8) && (*(char *)(g_bulkInitializedRecords_008087C7 + uVar2) == '\0')) {
            uVar2 = STField<int>(this,0xa4) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0xa4) = uVar2;
            iVar3 = (uVar2 >> 0x10) % 0xb + 0x14;
          }
          else {
            uVar2 = STField<int>(this,0xa4) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0xa4) = uVar2;
            iVar3 = (uVar2 >> 0x10 & 7) + 8;
          }
          if (iVar3 < STField<short>(this,0x64d)) {
            STField<uint>(this,0x640) = uVar4;
            STField<uint>(this,0x649) = uVar4;
            STField<undefined2>(this,0x64d) = 0;
          }
        }
        else {
          STField<uint>(this,0x649) = uVar4;
          STField<undefined2>(this,0x64d) = 1;
        }
      }
    }
  }
  STPiece<8,4>(local_3c[0]) = STField<uint>(this,0x640);
  if (STPiece<8,4>(local_3c[0]) != local_8) {
    pRVar5 = local_3c;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pRVar5 = 0;
      pRVar5 = (RecoveredRecordView_0068FD00_630BE91E *)&pRVar5->field_0x4;
    }
    STPiece<4,4>(local_3c[0]) = STField<undefined4>(this,0x6fe);
    STPiece<0,4>(local_3c[0]) = 0x6a;
    /* ST_CALLSITE[00679BB0]: CALL 0x00405dc6; direct=00405DC6 AiPlrClassTy::sub_0067A020 */
    AiPlrClassTy::sub_0067A020(this,local_3c,-1);
  }
  return;
}


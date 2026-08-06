#include "../../pseudocode_runtime.h"


undefined4
FUN_004d7480(char param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_18 = param_3;
  local_8 = param_7;
  iVar1 = (int)param_1;
  local_c = param_6;
  local_10 = param_5;
  local_14 = param_4;
  Library::DKW::TBL::DArrayAppend
            ((DArrayTy *)(&g_packedRecords_A62x8[iVar1].field_0x7ee + param_2 * 0x44),&local_18);
  (&g_packedRecords_A62x8[iVar1].field1626_0x80e)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1626_0x80e)[param_2 * 0x11] + param_4;
  (&g_packedRecords_A62x8[iVar1].field1627_0x812)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1627_0x812)[param_2 * 0x11] + param_5;
  (&g_packedRecords_A62x8[iVar1].field1628_0x816)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1628_0x816)[param_2 * 0x11] + param_6;
  (&g_packedRecords_A62x8[iVar1].field1629_0x81a)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1629_0x81a)[param_2 * 0x11] + param_7;
  thunk_FUN_004d78e0(param_1);
  return 0;
}


#include "../../pseudocode_runtime.h"


undefined4 FUN_004d86a0(uint param_1,int param_2)

{
  undefined4 uVar1;

  g_packedRecords_A62x8[param_1].field15_0x1f = *(undefined4 *)(&DAT_007bf558 + param_2 * 4);
  g_packedRecords_A62x8[param_1].field16_0x23 = *(undefined4 *)(&DAT_007bf570 + param_2 * 4);
  if (g_packedRecords_A62x8[param_1].field0_0x0 == '\x03') {
    uVar1 = *(undefined4 *)(&DAT_007bf564 + param_2 * 4);
    g_packedRecords_A62x8[param_1].field1951_0x99e = *(undefined4 *)(&DAT_007bf588 + param_2 * 4);
    g_packedRecords_A62x8[param_1].field1949_0x996 = uVar1;
  }
  else {
    g_packedRecords_A62x8[param_1].field17_0x27 = *(undefined4 *)(&DAT_007bf57c + param_2 * 4);
  }
  if (param_1 == DAT_0080874d) {
    thunk_FUN_004d8b70((char)param_1);
  }
  return 0;
}


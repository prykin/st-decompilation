
void FUN_004e6080(int param_1,int param_2,undefined4 param_3)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 0x6a)) {
    *(undefined4 *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593)) = param_3;
  }
  return;
}


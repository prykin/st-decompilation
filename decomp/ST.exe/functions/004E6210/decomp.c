
void FUN_004e6210(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < param_2)) && (param_2 < 0x9b)) {
    *(int *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x327)) =
         *(int *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x327)) + -1;
  }
  return;
}


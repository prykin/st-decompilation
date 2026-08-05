
undefined4 FUN_004e60d0(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < param_2)) && (param_2 < 0x9b)) {
    return *(undefined4 *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x327));
  }
  return 0;
}


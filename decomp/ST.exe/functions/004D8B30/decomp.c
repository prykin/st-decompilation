
undefined4 FUN_004d8b30(char param_1,undefined4 param_2)

{
  if (param_1 == 0xff) {
    return 0;
  }
  g_packedRecords_A62x8[param_1].field21_0x27 = param_2;
  return param_2;
}



int FUN_004b71f0(uint param_1,int param_2)

{
  g_packedRecords_A62x8[(char)param_1].field1941_0x976 =
       g_packedRecords_A62x8[(char)param_1].field1941_0x976 + param_2;
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  return g_packedRecords_A62x8[(char)param_1].field1941_0x976;
}


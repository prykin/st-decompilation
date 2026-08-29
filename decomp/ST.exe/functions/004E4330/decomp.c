
int FUN_004e4330(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;

  puVar1 = &g_packedRecords_A62x8[param_1].field1949_0x996;
  iVar2 = g_packedRecords_A62x8[param_1].field1949_0x996 - param_2;
  *puVar1 = iVar2;
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  return *puVar1;
}


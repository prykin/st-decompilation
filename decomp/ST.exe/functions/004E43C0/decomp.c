

int FUN_004e43c0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;

  puVar1 = &g_packedRecords_A62x8[param_1].field1951_0x99e;
  iVar2 = g_packedRecords_A62x8[param_1].field1951_0x99e - param_2;
  *puVar1 = iVar2;
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  return *puVar1;
}


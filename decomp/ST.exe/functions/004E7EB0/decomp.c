
void FUN_004e7eb0(int param_1,int param_2,int param_3)

{
  uint uVar1;

  uVar1 = g_playSystem_00802A38->field_00E4 + param_3;
  if ((uint)(&g_packedRecords_A62x8[param_1].field1987_0xa22)[param_2] < uVar1) {
    (&g_packedRecords_A62x8[param_1].field1987_0xa22)[param_2] = uVar1;
    (&g_packedRecords_A62x8[param_1].field2013_0xa42)[param_2] = 0;
  }
  return;
}


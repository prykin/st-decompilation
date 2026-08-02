
void __thiscall FUN_004f91a0(void *this,byte param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;

  if (param_1 < 8) {
    if (param_2 != nullptr) {
      *param_2 = g_bulkInitializedRecords_008087C7[param_1].field_0030;
    }
    if (param_3 != nullptr) {
      uVar1 = (uint)param_1;
      if (g_bulkInitializedRecords_008087C7[uVar1].field_0030 != 0) {
        uVar2 = *(int *)((int)this + 0x9a0) -
                *(int *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x35;
        if (*(uint *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x31 <= uVar2) {
          *param_3 = 0;
          return;
        }
        *param_3 = *(uint *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x31 - uVar2;
        return;
      }
      *param_3 = *(int *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x31 +
                 *(int *)((int)this + 0x9a0);
    }
  }
  return;
}


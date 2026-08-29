
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=12,
   ignored=0, unknown=0 */

int FUN_007287e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (param_2 != DAT_00857104) {
    do {
      iVar2 = *param_1 + param_2;
      if (iVar2 < DAT_0085710c) {
        if (iVar2 < 0) {
          iVar2 = DAT_0085710c + -1;
        }
      }
      else {
        iVar2 = 0;
      }
      iVar1 = (int)g_runtimeRecords_00857110[iVar2].field_0002 -
              (int)g_runtimeRecords_00857110[param_2].field_0002;
      param_1[1] = iVar1;
      if (0 < iVar1) {
        param_1[2] = iVar2;
        param_1[3] = (int)g_runtimeRecords_00857110[param_2].field_0000 << 0x10;
        param_1[4] = (((int)g_runtimeRecords_00857110[iVar2].field_0000 -
                      (int)g_runtimeRecords_00857110[param_2].field_0000) * 0x10000) / param_1[1];
        param_1[5] = (short)g_runtimeRecords_00857110[param_2].field_0004 << 0x10;
        param_1[6] = (((short)g_runtimeRecords_00857110[iVar2].field_0004 -
                      (short)g_runtimeRecords_00857110[param_2].field_0004) * 0x10000) /
                     param_1[1];
        return 1;
      }
      param_2 = iVar2;
    } while (iVar2 != DAT_00857104);
  }
  return 0;
}


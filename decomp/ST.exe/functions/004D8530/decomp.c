
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00580D30 -> 004D8530 @ 00580D75 */

void FUN_004d8530(STResourceC *param_1)

{
  int iVar1;
  STResourceC *local_8;

  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    iVar1 = DArrayGetNext(g_array_007FA150,(byte *)&local_8);
    if (-1 < iVar1) {
      while (local_8 != param_1) {
        iVar1 = DArrayGetNext(g_array_007FA150,(byte *)&local_8);
        if (iVar1 < 0) {
          return;
        }
      }
      DArrayRemoveAt(g_array_007FA150,g_array_007FA150->iteratorIndex - 1);
    }
  }
  return;
}


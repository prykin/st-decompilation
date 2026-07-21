
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00580D30 -> 004D8530 @ 00580D75 */

void FUN_004d8530(STResourceC *param_1)

{
  int iVar1;
  STResourceC *local_8;

  if (PTR_007fa150 != (DArrayTy *)0x0) {
    PTR_007fa150->iteratorIndex = 0;
    iVar1 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_8);
    if (-1 < iVar1) {
      while (local_8 != param_1) {
        iVar1 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_8);
        if (iVar1 < 0) {
          return;
        }
      }
      FUN_006b0c70(PTR_007fa150,PTR_007fa150->iteratorIndex - 1);
    }
  }
  return;
}



/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005999C0 -> 006B2410 @ 00599A8C; data at 008075A8 */

void FUN_006b2410(DDXContext_008075A8 *param_1,uint param_2,uint param_3)

{
  DDXEntry_008075A8_01B0 *pDVar1;

  if ((param_2 < param_1->entryCount) &&
     (pDVar1 = param_1->entries_01B0[param_2], (pDVar1->flags & 0xc000) == 0xc000)) {
    pDVar1->field_00C0 = param_3;
    FUN_006b23e0((RecoveredRecord_006B23E0_5A2050A1 *)param_1,&pDVar1->flags);
  }
  return;
}


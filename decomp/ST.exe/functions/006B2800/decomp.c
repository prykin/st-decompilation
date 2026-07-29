
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0052D370 -> 006B2800 @ 0052D53C; data at 008075A8 | 0052D690 -> 006B2800 @ 0052D7A8;
   data at 008075A8 | 0052D690 -> 006B2800 @ 0052D7E9; data at 008075A8 | 0052D980 -> 006B2800 @
   0052DA55; data at 008075A8 | 0052D980 -> 006B2800 @ 0052DA96; data at 008075A8 | 0052DB90 ->
   006B2800 @ 0052DC56; data at 008075A8 | 0052DD20 -> 006B2800 @ 0052E158; data at 008075A8 |
   0052DD20 -> 006B2800 @ 0052E199; data at 008075A8 | 005449B0 -> 006B2800 @ 00544CE1; data at
   008075A8 | 005449B0 -> 006B2800 @ 0054500E; data at 008075A8 | 005449B0 -> 006B2800 @ 00546028;
   data at 008075A8 | 005449B0 -> 006B2800 @ 005460BB; data at 008075A8 | 005999C0 -> 006B2800 @
   00599AA9; data at 008075A8 | 005AACB0 -> 006B2800 @ 005AADE6; data at 008075A8 | 005AACB0 ->
   006B2800 @ 005AAE05; data at 008075A8 | 005E1330 -> 006B2800 @ 005E1E3B; data at 008075A8 |
   005E1330 -> 006B2800 @ 005E21BE; data at 008075A8 | 005E1330 -> 006B2800 @ 005E281E; data at
   008075A8 */

void FUN_006b2800(DDXContext_008075A8 *param_1,uint param_2,uint param_3,uint param_4)

{
  DDXEntry_008075A8_01B0 *pDVar1;

  if ((param_2 < param_1->entryCount) &&
     (pDVar1 = param_1->entries_01B0[param_2], (pDVar1->flags & 0xc000) == 0xc000)) {
    pDVar1->field_0038 = param_3;
    pDVar1->field_0030 = param_3;
    pDVar1->field_0020 = param_3;
    pDVar1->field_003C = param_4;
    pDVar1->field_0034 = param_4;
    pDVar1->field_0024 = param_4;
    FUN_006b23e0((int)param_1,&pDVar1->flags);
  }
  return;
}


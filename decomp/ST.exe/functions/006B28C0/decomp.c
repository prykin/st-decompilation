
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B28C0 @ 004F68E0; data at 008075A8 | 00543600 -> 006B28C0 @ 00543752;
   data at 008075A8 */

bool FUN_006b28c0(DDXContext_008075A8 *param_1,uint param_2,int param_3)

{
  DDXEntry_008075A8_01B0 *pDVar1;
  uint uVar2;
  bool bVar3;

  bVar3 = true;
  if (param_2 < param_1->entryCount) {
    pDVar1 = param_1->entries[param_2];
    uVar2 = pDVar1->flags;
    if ((uVar2 & 0xc000) == 0xc000) {
      bVar3 = (uVar2 & 0x40020000) == 0x40020000;
      pDVar1->flags = uVar2 & 0xbffdffff;
      if (param_3 != 0) {
        pDVar1->flags = uVar2 & 0xbffdffff | 0x40020000;
      }
      FUN_006b23e0((int)param_1,&pDVar1->flags);
    }
  }
  return bVar3;
}


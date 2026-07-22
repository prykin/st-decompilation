
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B28C0 @ 004F68E0 | 00543600 -> 006B28C0 @ 00543752 */

bool FUN_006b28c0(AnonShape_006B1B10_121F236C *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;

  bVar3 = true;
  if (param_2 < param_1->field_01A0) {
    puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4);
    uVar2 = *puVar1;
    if ((uVar2 & 0xc000) == 0xc000) {
      bVar3 = (uVar2 & 0x40020000) == 0x40020000;
      *puVar1 = uVar2 & 0xbffdffff;
      if (param_3 != 0) {
        *puVar1 = uVar2 & 0xbffdffff | 0x40020000;
      }
      FUN_006b23e0((int)param_1,puVar1);
    }
  }
  return bVar3;
}


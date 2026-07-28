
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00465C60 -> 004E15F0 @ 004667FA; /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 0046695D;
   /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 0046813F; /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 004682F0;
   /STBoatC+0x18 | 0046D450 -> 004E15F0 @ 0046D97D; /STBoatC+0x18 | 0046D450 -> 004E15F0 @ 0046DAFF;
   /STBoatC+0x18 */

undefined4 __thiscall FUN_004e15f0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  if (*(int *)((int)this + 0x24) != *(int *)((int)this + 0x23d)) {
    uVar2 = GetPlayerRaceId((char)*(int *)((int)this + 0x23d));
    iVar1 = *(int *)((int)this + 0x235);
    uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x24));
    if ((&DAT_007e1984)[(uVar3 & 0xff) + (iVar1 * 3 + (uVar2 & 0xff)) * 3] == '\0') {
      return 0;
    }
  }
  if (*(int *)((int)this + 0x4d8) != -1) {
    return 0;
  }
  *(uint *)((int)this + 0x4d8) = param_1;
  return 1;
}


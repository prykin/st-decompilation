
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DF6F0 @ 004CB0D1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004DF6F0 @ 004CB0D1

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004DF6F0 @ 004CB0D1 */

void __thiscall
FUN_004df6f0(void *this,Global_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar4 = (uVar3 & 0xff) - 1;
  if (param_1 == CASE_C) {
    iVar2 = *(int *)((int)this + 0x4d0);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                            (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                            (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
        return;
      }
      if (iVar2 != 2) {
        return;
      }
    }
    *param_4 = 0xffffffff;
    *param_3 = 0xffffffff;
    return;
  }
  if (((int)param_1 < 0xd) || (0xe < (int)param_1)) {
    *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
    return;
  }
  iVar2 = *(int *)((int)this + 0x4d0);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar3;
      *param_3 = uVar3;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                   (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = uVar3;
  *param_3 = uVar3;
  return;
}


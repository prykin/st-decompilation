
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004DC4B0 @ 004CB15D

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004DC4B0 @ 004CB15D

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DC4B0 @ 004CB15D */

void __thiscall
FUN_004dc4b0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  uVar2 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar3 = (uVar2 & 0xff) - 1;
  if ((0xc < (int)param_1) && ((int)param_1 < 0xf)) {
    switch(*(undefined4 *)((int)this + 0x4d0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 0:
      uVar2 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = uVar2;
      *param_3 = uVar2;
      return;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      uVar2 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar2;
      *param_3 = uVar2;
      return;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 2:
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      return;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    }
  }
  return;
}


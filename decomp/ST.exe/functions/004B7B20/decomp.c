
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3 */

void __thiscall
FUN_004b7b20(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar4;
  int uVar3;
  int iVar5;

  uVar3 = LookupRecordByte(*(char *)((int)this + 0x23d));
  uVar3 = (int)(byte)uVar3;
  iVar1 = *(int *)((int)this + 0x245);
  iVar5 = uVar3 + -1;
  if (param_1 == CASE_C) {
    *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                        (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                        (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
  }
  else if ((0xc < (int)param_1) && ((int)param_1 < 0xf)) {
    iVar2 = *(int *)((int)this + 0x4d0);
    if (iVar2 == 1) {
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      return;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                         (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = uVar4;
        *param_3 = uVar4;
        return;
      }
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      return;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar5 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
    *param_4 = uVar4;
    *param_3 = uVar4;
    return;
  }
  return;
}



/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004CFFF0 @ 004CB045 */

void __thiscall
FUN_004cfff0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,int *param_3,
            int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  uVar3 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar4 = (uVar3 & 0xff) - 1;
  if (param_1 == CASE_9) {
    iVar2 = *(int *)((int)this + 0x4d0);
  }
  else {
    if (param_1 == CASE_D) {
      *param_4 = 0;
      *param_3 = 0;
      return;
    }
    if (param_1 != CASE_E) {
      return;
    }
    iVar2 = *(int *)((int)this + 0x4d0);
  }
  if (iVar2 == 3) {
    *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8) + -0x10;
    *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    return;
  }
  if (iVar2 == 4) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004d014f:
    iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_3 = iVar1;
    *param_4 = iVar1;
    return;
  }
  if (iVar2 != 5) {
    if (iVar2 == 2) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_3 = iVar1 + -0x10;
      *param_4 = iVar1 + -0x10;
      return;
    }
    if (iVar2 != 1) goto LAB_004d014f;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8) + -0x10;
  return;
}


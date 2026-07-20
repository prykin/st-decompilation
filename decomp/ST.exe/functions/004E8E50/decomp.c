
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004E8E50 @ 004CB180
   
   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004E8E50 @ 004CB180
   
   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004E8E50 @ 004CB180 */

void __thiscall
FUN_004e8e50(void *this,Global_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar3 = (uVar2 & 0xff) - 1;
  if (param_1 == CASE_C) {
    if (*(int *)((int)this + 0x4f4) != 0) {
      *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                          (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                          (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      return;
    }
    uVar2 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                     (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = uVar2;
    *param_3 = uVar2;
  }
  else if ((0xc < (int)param_1) && ((int)param_1 < 0xf)) {
    *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar3 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
    return;
  }
  return;
}


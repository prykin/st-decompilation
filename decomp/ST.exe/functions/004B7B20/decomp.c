
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3
   
   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3
   
   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004B7B20 @ 004CB1A3 */

void __thiscall
FUN_004b7b20(void *this,Global_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar4 = (uVar3 & 0xff) - 1;
  if (param_1 == CASE_C) {
    *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                        (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                        (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
  }
  else if ((0xc < (int)param_1) && ((int)param_1 < 0xf)) {
    iVar2 = *(int *)((int)this + 0x4d0);
    if (iVar2 == 1) {
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      return;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        uVar3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                         (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = uVar3;
        *param_3 = uVar3;
        return;
      }
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      return;
    }
    uVar3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
    *param_4 = uVar3;
    *param_3 = uVar3;
    return;
  }
  return;
}



/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004EC900_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14
   
   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004EC900 @ 004CB13A
   
   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004EC900 @ 004CB13A */

void __thiscall
FUN_004ec900(void *this,Global_sub_004EC900_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  iVar1 = *(int *)((int)this + 0x245);
  iVar4 = (uVar3 & 0xff) - 1;
  switch(param_1) {
  case CASE_8:
  case CASE_9:
  case CASE_D:
  case CASE_E:
    iVar2 = *(int *)((int)this + 0x4d0);
    if (iVar2 != 3) {
      if ((iVar2 != 4) && (iVar2 != 6)) {
        if (iVar2 == 5) {
          *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                              (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
          *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                              (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
          return;
        }
        uVar3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                         (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
        *param_4 = uVar3;
        *param_3 = uVar3;
        return;
      }
      uVar3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar3;
      *param_3 = uVar3;
      return;
    }
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8);
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar4 + *(int *)((int)this + 0x235) * 3) * 4) * 8 + 4);
  return;
}


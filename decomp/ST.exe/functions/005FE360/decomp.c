#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=005FE3A0 MOVSX EDI,word ptr [EBP + 0x1c] */

undefined4
FUN_005fe360(short *param_1,int param_2,int param_3,short param_4,int param_5,short param_6,
            short param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000001a;

  param_1[7] = param_6;
  param_1[2] = param_4;
  param_1[8] = param_7;
  *param_1 = (short)param_2;
  param_1[1] = (short)param_3;
  *(int *)(param_1 + 0xc) = (short)param_5 - (short)param_2;
  param_1[6] = (short)param_5;
  *(int *)(param_1 + 0xe) = (int)param_6 - (short)param_3;
  iVar2 = FUN_006aced8(param_2,param_3,param_5,_param_6);
  *(int *)(param_1 + 0x10) = iVar2;
  param_1[0x12] = 0x11;
  param_1[0x13] = 0;
  if (iVar2 == 0) {
    return 0;
  }
  param_1[3] = *param_1;
  param_1[9] = *param_1;
  sVar1 = param_1[2];
  iVar3 = (iVar2 + -100) / 0x32;
  param_1[4] = param_1[1];
  param_1[5] = sVar1;
  param_1[10] = param_1[1];
  param_1[0xb] = sVar1;
  if (0x1d < iVar3) {
    iVar3 = 0xf;
  }
  iVar4 = (int)sVar1 - (int)param_1[8];
  STField<undefined4>(param_1,0x2d) = 7;
  STField<undefined4>(param_1,0x31) = 200;
  if (800 < iVar4) {
    if (iVar4 < 0x3b6) {
      iVar5 = *(int *)(&DAT_007ce948 + iVar3 * 4);
      iVar3 = *(int *)(&DAT_007ce9c8 + iVar3 * 4);
      STField<undefined4>(param_1,0x35) = 0;
      STField<int>(param_1,0x29) = iVar5 - ((iVar5 - iVar3) * (iVar4 + -800)) / 200;
      return 1;
    }
    return 0xffffffff;
  }
  if (iVar4 < 600) {
    if (iVar4 < 400) {
      if (iVar4 < 200) {
        iVar5 = *(int *)(iVar3 * 4 + 0x7ceac8);
      }
      else {
        iVar5 = *(int *)(iVar3 * 4 + 0x7ceac8);
        iVar5 = ((*(int *)(iVar3 * 4 + 0x7cea48) - iVar5) * (iVar4 + -400)) / 200 + iVar5;
      }
    }
    else {
      iVar5 = *(int *)(iVar3 * 4 + 0x7cea48);
      iVar5 = ((*(int *)(&DAT_007ce9c8 + iVar3 * 4) - iVar5) * (iVar4 + -400)) / 200 + iVar5;
    }
  }
  else {
    iVar5 = ((*(int *)(&DAT_007ce948 + iVar3 * 4) - *(int *)(&DAT_007ce9c8 + iVar3 * 4)) *
            (iVar4 + -600)) / 200 + *(int *)(&DAT_007ce9c8 + iVar3 * 4);
  }
  STField<int>(param_1,0x29) = iVar5;
  STField<undefined4>(param_1,0x35) = 0;
  return 1;
}


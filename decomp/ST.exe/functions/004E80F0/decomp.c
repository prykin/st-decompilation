
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004E80F0_param_2Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190 */

undefined4 FUN_004e80f0(int param_1,Global_sub_004E80F0_param_2Enum param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  switch(param_2) {
  case CASE_A3:
  case CASE_A8:
  case CASE_B2:
  case CASE_BE:
    iVar1 = param_2 * 3 + -0x1c2;
    iVar2 = (&DAT_007bf67c)[iVar1];
    if (((iVar2 < 0) || (iVar2 == 0)) ||
       (iVar2 = thunk_FUN_004e60d0(param_1,iVar2), (int)(&DAT_007bf680)[iVar1] <= iVar2)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


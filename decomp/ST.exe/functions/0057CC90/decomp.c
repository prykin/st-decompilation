
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_0057CC90_param_1Enum. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

undefined4 __thiscall FUN_0057cc90(void *this,Global_sub_0057CC90_param_1Enum param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = 0xffffffff;
  iVar3 = 0;
  if (8 < param_2) {
    return 0xffffffff;
  }
  switch(param_1) {
  case CASE_E7:
  case CASE_E8:
  case CASE_E9:
    uVar1 = thunk_FUN_004abce0((void *)((int)this + 0x1d5),0xe,0,0xb,'\0');
    return uVar1;
  case CASE_EA:
    if (param_2 != 0) {
      iVar3 = (8 - param_2 >> 1) * 0xf;
    }
    iVar2 = iVar3 + 0xe;
    break;
  case CASE_EB:
    if (param_2 != 0) {
      iVar3 = (8 - param_2 >> 1) * 0x14;
    }
    iVar2 = iVar3 + 0x13;
    break;
  default:
    goto switchD_0057ccb8_default;
  }
  uVar1 = thunk_FUN_004abce0((void *)((int)this + 0x1d5),0xe,iVar3,iVar2,'\0');
switchD_0057ccb8_default:
  return uVar1;
}


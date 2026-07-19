
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004FAB10_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18
    */

bool __thiscall FUN_004fab10(void *this,Global_sub_004FAB10_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_4:
  case CASE_5:
  case CASE_E:
  case CASE_F:
    return *(short *)((int)this + 0x23f) == 1;
  case CASE_6:
    if (DAT_008016e8 != 0) {
      return *(short *)(DAT_008016e8 + 0x172) != 2;
    }
  case CASE_7:
    if (DAT_0080167c != 0) {
      return *(short *)(DAT_0080167c + 0x172) != 2;
    }
  case CASE_8:
    if (DAT_00801684 != 0) {
      return *(short *)(DAT_00801684 + 0x172) != 2;
    }
  case CASE_9:
    if (DAT_00801698 != 0) {
      return *(short *)(DAT_00801698 + 0x172) != 2;
    }
  case CASE_A:
    if (DAT_00802a44 != 0) {
      return *(short *)(DAT_00802a44 + 0x172) != 2;
    }
  case CASE_B:
    if (DAT_00801678 != 0) {
      return *(short *)(DAT_00801678 + 0x172) != 2;
    }
  case CASE_C:
    if (DAT_00801680 != 0) {
      return *(short *)(DAT_00801680 + 0x172) != 2;
    }
  case CASE_10:
    if (DAT_00802a48 != 0) {
      return *(short *)(DAT_00802a48 + 0x172) != 2;
    }
    break;
  default:
    return false;
  case CASE_11:
    break;
  case CASE_12:
    goto switchD_004fab25_caseD_12;
  }
  if (DAT_0080168c != 0) {
    return *(short *)(DAT_0080168c + 0x172) != 2;
  }
switchD_004fab25_caseD_12:
  if (DAT_008016ec == 0) {
    return false;
  }
  return *(short *)(DAT_008016ec + 0x172) != 2;
}


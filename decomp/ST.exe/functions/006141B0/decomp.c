
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006141B0_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

undefined4 __thiscall
FUN_006141b0(void *this,int param_1,Global_sub_006141B0_param_2Enum param_2,int *param_3,
            int *param_4)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  switch(param_2) {
  case CASE_1:
    *param_3 = (int)*(short *)(&DAT_007cf8e0 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cf8e2 + param_1 * 4);
    break;
  case CASE_2:
    *param_3 = (int)*(short *)(&DAT_007cf9ac + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cf9ae + param_1 * 4);
    break;
  case CASE_3:
    *param_3 = (int)*(short *)(&DAT_007cfa78 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfa7a + param_1 * 4);
    break;
  case CASE_4:
    *param_3 = (int)*(short *)(&DAT_007cfb44 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfb46 + param_1 * 4);
    break;
  case CASE_5:
    *param_3 = (int)*(short *)(&DAT_007cfc10 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfc12 + param_1 * 4);
    break;
  case CASE_6:
    *param_3 = (int)*(short *)(&DAT_007cfcdc + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfcde + param_1 * 4);
    break;
  case CASE_7:
    *param_3 = (int)*(short *)(&DAT_007cfda8 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfdaa + param_1 * 4);
    break;
  case CASE_8:
    *param_3 = (int)*(short *)(*(int *)((int)this + 0x2e5) + param_1 * 4);
    *param_4 = (int)*(short *)(*(int *)((int)this + 0x2e5) + 2 + param_1 * 4);
    uVar1 = 1;
  default:
    return uVar1;
  }
  *param_4 = iVar2 / 0x1c2;
  return 1;
}


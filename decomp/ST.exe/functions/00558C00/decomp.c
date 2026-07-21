
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00558C00_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall
FUN_00558c00(void *this,Global_sub_00558C00_param_1Enum param_1,int param_2,int param_3,int *param_4
            ,int *param_5)

{
  int iVar1;

  switch(param_1) {
  case CASE_0:
    *param_4 = (param_2 - param_3) * 0xb505 + *(int *)((int)this + 0x30) * 0x8000 >> 0x10;
    *param_5 = (param_2 + param_3) * 0xb505 + 0x8fc3c >> 0x10;
    return;
  case CASE_1:
    *param_4 = (param_2 + param_3) * 0xb505 + 0x8fc3c >> 0x10;
    iVar1 = param_3;
    param_3 = param_2;
    break;
  case CASE_2:
    *param_4 = (param_3 - param_2) * 0xb505 + *(int *)((int)this + 0x30) * 0x8000 >> 0x10;
    *param_5 = ((param_2 + param_3) * -0xb505 + -0x8fc3c >> 0x10) + -1 + *(int *)((int)this + 0x34);
    return;
  case CASE_3:
    *param_4 = ((param_2 + param_3) * -0xb505 + -0x8fc3c >> 0x10) + -1 + *(int *)((int)this + 0x30);
    iVar1 = param_2;
    break;
  default:
    goto switchD_00558c11_default;
  }
  *param_5 = (iVar1 - param_3) * 0xb505 + *(int *)((int)this + 0x34) * 0x8000 >> 0x10;
switchD_00558c11_default:
  return;
}


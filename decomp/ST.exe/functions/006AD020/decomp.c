
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006AD020_param_3Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int FUN_006ad020(int param_1,int param_2,Global_sub_006AD020_param_3Enum param_3,int param_4,
                int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_4 - param_1;
  iVar2 = param_5 - param_2;
  iVar3 = iVar1;
  switch(param_3) {
  case CASE_1:
  case CASE_2:
    iVar3 = -iVar2;
    iVar2 = iVar1;
    break;
  case CASE_3:
  case CASE_4:
    iVar3 = -iVar1;
    iVar2 = -iVar2;
    break;
  case CASE_5:
  case CASE_6:
    iVar3 = iVar2;
    iVar2 = -iVar1;
  }
  if ((param_3 & CASE_1) == 0) {
    return iVar2 * 2;
  }
  iVar3 = (iVar3 - iVar2) * 4 + 1;
  iVar3 = (int)((ulonglong)((longlong)iVar3 * 0x55555555) >> 0x20) - iVar3;
  return (iVar3 >> 1) - (iVar3 >> 0x1f);
}


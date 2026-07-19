
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006777D0_param_1Enum. Cases:
   CASE_DD=221;CASE_DE=222;CASE_E1=225;CASE_E2=226 */

int __cdecl
FUN_006777d0(Global_sub_006777D0_param_1Enum param_1,int param_2,int param_3,undefined4 param_4,
            int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (DAT_007fa174 == 0) {
    return 0;
  }
  iVar3 = param_2;
  if (param_2 < 0) {
    iVar3 = 0;
  }
  iVar1 = param_3;
  if (param_3 < 0) {
    iVar1 = 0;
  }
  iVar4 = param_5;
  if (param_5 < 1) {
    iVar4 = (int)DAT_007fb240;
  }
  iVar2 = param_6;
  if (param_6 < 1) {
    iVar2 = (int)DAT_007fb242;
  }
  switch(param_1) {
  case CASE_DD:
  case CASE_DE:
  case CASE_E2:
    iVar3 = thunk_FUN_004b1fb0(param_1,&param_3,&param_2,iVar3,iVar1,iVar4,iVar2);
    if (iVar3 == 0) {
      return param_2;
    }
    break;
  case CASE_E1:
    local_8 = thunk_FUN_004d82b0(0);
  }
  return local_8;
}


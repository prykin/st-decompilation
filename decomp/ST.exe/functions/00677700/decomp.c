
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00677700_param_2Enum. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E2=226;CASE_E3=227 */

int __cdecl FUN_00677700(int param_1,Global_sub_00677700_param_2Enum param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;

  iVar1 = 0;
  if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
    return iVar1;
  }
  cVar3 = (char)param_1;
  switch(param_2) {
  case CASE_DC:
    iVar1 = thunk_FUN_004d8870(cVar3);
    return iVar1;
  case CASE_DD:
    iVar1 = thunk_FUN_004d89b0(cVar3);
    return iVar1;
  case CASE_DE:
    iVar1 = thunk_FUN_004d8af0(cVar3);
    return iVar1;
  case CASE_DF:
    iVar1 = thunk_FUN_004b72b0(cVar3);
    iVar2 = thunk_FUN_004b71c0(cVar3);
    return iVar2 - iVar1;
  case CASE_E2:
    iVar1 = thunk_FUN_004e4410(param_1);
    return iVar1;
  case CASE_E3:
    iVar1 = thunk_FUN_004e41c0(param_1);
  }
  return iVar1;
}


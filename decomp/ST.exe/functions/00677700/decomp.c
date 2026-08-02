
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00677700_param_2Enum. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E2=226;CASE_E3=227 */

int __cdecl FUN_00677700(int param_1,Global_sub_00677700_param_2Enum param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;

  uVar1 = 0;
  if (g_allPlayers_007FA174 == nullptr) {
    return uVar1;
  }
  cVar4 = (char)param_1;
  switch(param_2) {
  case CASE_DC:
    iVar2 = thunk_FUN_004d8870(cVar4);
    return iVar2;
  case CASE_DD:
    iVar2 = thunk_FUN_004d89b0(cVar4);
    return iVar2;
  case CASE_DE:
    iVar2 = thunk_FUN_004d8af0(cVar4);
    return iVar2;
  case CASE_DF:
    iVar2 = thunk_FUN_004b72b0(cVar4);
    iVar3 = thunk_FUN_004b71c0(cVar4);
    return iVar3 - iVar2;
  case CASE_E2:
    iVar2 = thunk_FUN_004e4410((byte *)param_1);
    return iVar2;
  case CASE_E3:
    uVar1 = thunk_FUN_004e41c0(param_1);
  }
  return uVar1;
}


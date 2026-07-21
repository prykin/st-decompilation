
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529500_param_1Enum. Cases:
   CASE_271D=10013;CASE_271E=10014;CASE_271F=10015;CASE_2731=10033
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=005061C0 @ 00506420
   -> PUSH PUSH EAX | 0050A340 @ 0050A5C4 -> PUSH PUSH EAX */

int __cdecl FUN_00529500(Global_sub_00529500_param_1Enum param_1)

{
  uint uVar1;

  uVar1 = (DAT_0080874e != '\x03') - 1 & 5;
  switch(param_1) {
  case CASE_271D:
    return 2;
  case CASE_271E:
  case CASE_2731:
    uVar1 = 4;
    break;
  case CASE_271F:
    return 3;
  }
  return uVar1;
}


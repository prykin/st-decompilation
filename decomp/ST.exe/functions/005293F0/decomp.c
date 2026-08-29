#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005293F0_param_1Enum. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E0=224;CASE_E1=225;CASE_E2=226;CASE_E3=227

   [STPrototypeApplier] Propagated return.
   Evidence: 005293F0 returns used as parameter 3 of HelpPanelTy::DrawTitle @ 00517BAD
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005061C0 @ 00506412 -> read as EAX on
   every CFG path | 0050A340 @ 0050A5B9 -> read as EAX on every CFG path | 00517A50 @ 00517B9C ->
   read as EAX on every CFG path */

int __cdecl FUN_005293f0(Global_sub_005293F0_param_1Enum param_1)

{
  int iVar1;

  iVar1 = 10000;
  switch(param_1) {
  case CASE_DC:
  case CASE_E1:
    iVar1 = 0x271f;
    break;
  case CASE_DD:
    return 0x271d;
  case CASE_DE:
    return 0x271e;
  case CASE_DF:
    return 0x2720;
  case CASE_E0:
  case CASE_E3:
    return 0x2730;
  case CASE_E2:
    return 0x2731;
  }
  return iVar1;
}


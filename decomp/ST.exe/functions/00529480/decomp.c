#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00529480_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005061C0 @ 0050640A -> read as EAX on
   every CFG path | 0050A340 @ 0050A5B1 -> read as EAX on every CFG path */

int __cdecl FUN_00529480(Global_sub_00529480_param_1Enum param_1)

{
  int iVar1;

  iVar1 = 10000;
  switch(param_1) {
  case CASE_0:
    return 0x271d;
  case CASE_1:
    return 0x271e;
  case CASE_2:
    return 0x271f;
  case CASE_3:
    return 0x2731;
  case CASE_4:
    iVar1 = 0x2730;
  }
  return iVar1;
}


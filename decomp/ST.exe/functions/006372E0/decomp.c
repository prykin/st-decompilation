#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00603740 @ 00603CD2 -> read as EAX on
   every CFG path | 00621B50 @ 00622178 -> read as EAX on every CFG path */

int __fastcall FUN_006372e0(int *param_1)

{
  int iVar2;
  int iVar1;


  iVar2 = thunk_FUN_006367d0(param_1);
  if (iVar2 != 0) {
    return 1;
  }
  if (param_1[10] == 0) {
    /* ST_CALLSITE[00637300]: CALL 0x00402162; direct=00402162 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00636260::sub_00636FC0 */
    iVar1 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00636260::sub_00636FC0
                      ((RecoveredReceiver_00636260 *)param_1);
    param_1[10] = iVar1;
    if (iVar1 != 0) {
      thunk_FUN_00636750((RecoveredRecordView_00636750_691F28DC *)param_1);
    }
    if (param_1[10] == 0) {
      return 0;
    }
  }
  thunk_FUN_00637180((AnonShape_00637180_4094267C *)param_1);
  return 0;
}


#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (6), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005F6F60 @ 005F76A4 -> read as EAX on
   every CFG path | 005F6F60 @ 005F77DF -> read as EAX on every CFG path | 005F6F60 @ 005F78EF ->
   read as EAX on every CFG path | 005F6F60 @ 005F7AEC -> read as EAX on every CFG path | 005F6F60 @
   005F7B4F -> read as EAX on every CFG path | 005F6F60 @ 005F7F18 -> read as EAX on every CFG path
   | 005F8CC0 @ 005F8CEE -> unknown: terminal before explicit accumulator kill */

int __thiscall FUN_005fa7f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  thunk_FUN_00417ff0(this,6);
  thunk_FUN_00418010(this,5);

  iVar1 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_004167A0::thunk_FUN_00418030
                    (this,(short)param_1,(short)param_2,(short)param_3);
  if (iVar1 == 0) {
    STField<undefined4>(this,0x299) = param_3;
    STField<undefined4>(this,0x291) = param_1;
    STField<undefined4>(this,0x295) = param_2;
    return 1;
  }
  if ((iVar1 != -1) && (iVar1 == 1)) {
    STField<undefined4>(this,0x299) = param_3;
    STField<undefined4>(this,0x291) = param_1;
    STField<undefined4>(this,0x295) = param_2;
    return 2;
  }
  return 0;
}


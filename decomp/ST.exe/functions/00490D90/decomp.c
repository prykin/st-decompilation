#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049DFA0 -> 00490D90 @ 0049E0F6 | 004A0990 -> 00490D90 @ 004A0AE6
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (25), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00445A40 @ 00445B82 -> read as EAX on
   every CFG path | 004845E0 @ 00484D8F -> read as EAX on every CFG path | 00499DE0 @ 00499F30 ->
   read as EAX on every CFG path | 00499DE0 @ 0049A241 -> read as EAX on every CFG path | 0049CD30 @
   0049CEAD -> read as EAX on every CFG path | 0049D230 @ 0049D367 -> read as EAX on every CFG path
   | 0049DB40 @ 0049DD05 -> read as EAX on every CFG path | 0049DFA0 @ 0049E0F6 -> read as EAX on
   every CFG path | 0049E510 @ 0049E6A5 -> read as EAX on every CFG path | 0049ED40 @ 0049EE9E ->
   read as EAX on every CFG path | 0049F100 @ 0049F24F -> read as EAX on every CFG path | 0049FBF0 @
   0049FD2B -> read as EAX on every CFG path | 004A0040 @ 004A0273 -> read as EAX on every CFG path
   | 004A0990 @ 004A0AE6 -> read as EAX on every CFG path | 004A0FA0 @ 004A159E -> read as EAX on
   every CFG path | 004A0FA0 @ 004A1835 -> read as EAX on every CFG path | 004A0FA0 @ 004A1A34 ->
   read as EAX on every CFG path | 004A0FA0 @ 004A1BEE -> read as EAX on every CFG path | 004A0FA0 @
   004A1CA7 -> read as EAX on every CFG path | 004A0FA0 @ 004A1DE5 -> read as EAX on every CFG path
   | 004A0FA0 @ 004A2040 -> read as EAX on every CFG path | 004A0FA0 @ 004A265A -> read as EAX on
   every CFG path | 004A0FA0 @ 004A2834 -> read as EAX on every CFG path | 004A0FA0 @ 004A2B14 ->
   read as EAX on every CFG path */

int __fastcall FUN_00490d90(STGameObjC *objPtr)

{
  int iVar1;

  iVar1 = objPtr->field_06F7;
  if (((((iVar1 == 8) || (iVar1 == 0x14)) || (iVar1 == 0x1a)) ||
      ((((iVar1 == 7 || (iVar1 == 0x13)) || ((iVar1 == 0x1b || ((iVar1 == 0xc || (iVar1 == 0x18)))))
        ) || (iVar1 == 0x19)))) ||
     (((iVar1 == 9 || (iVar1 == 0x15)) || (iVar1 = 1, objPtr->field_073E != 1)))) {
    iVar1 = 0;
  }
  return iVar1;
}



/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=005449B0 @ 00545079
   -> TEST TEST EAX,EAX | 005449B0 @ 00545337 -> TEST TEST EAX,EAX | 005449B0 @ 0054545E -> TEST
   TEST EAX,EAX | 005449B0 @ 005455EC -> TEST TEST EAX,EAX | 005449B0 @ 0054614F -> TEST TEST
   EAX,EAX | 0054AEE0 @ 0054AF24 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0054AEE0 -> 00544990 @ 0054AF24 */

int __fastcall FUN_00544990(CursorClassTy *param_1)

{
  return (uint)(param_1->field_0493 == '\x02');
}


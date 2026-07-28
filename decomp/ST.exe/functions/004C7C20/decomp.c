
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=004C7CC0 @ 004C7EEF
   -> TEST TEST EAX,EAX | 004C84C0 @ 004C8DA5 -> TEST TEST EAX,EAX | 004DE820 @ 004DE905 -> TEST
   TEST EAX,EAX | 004DE820 @ 004DE92B -> TEST TEST EAX,EAX | 004EA870 @ 004EA8C9 -> TEST TEST
   EAX,EAX | 004EA870 @ 004EA976 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C7CC0 -> 004C7C20 @ 004C7EEF; TLOBaseTy::FUN_004c7cc0 this; stable alias EBX */

int __fastcall FUN_004c7c20(TLOBaseTy *param_1)

{
  return (uint)(*(int *)&param_1->field_0x361 == 0);
}


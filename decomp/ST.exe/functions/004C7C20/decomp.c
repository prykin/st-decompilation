
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=004C7CC0 @ 004C7EEF
   -> TEST TEST EAX,EAX | 004C84C0 @ 004C8DA5 -> TEST TEST EAX,EAX | 004DE820 @ 004DE905 -> TEST
   TEST EAX,EAX | 004DE820 @ 004DE92B -> TEST TEST EAX,EAX | 004EA870 @ 004EA8C9 -> TEST TEST
   EAX,EAX | 004EA870 @ 004EA976 -> TEST TEST EAX,EAX */

int __fastcall FUN_004c7c20(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x361) == 0);
}


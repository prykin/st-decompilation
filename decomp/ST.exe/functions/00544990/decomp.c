
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=005449B0 @ 00545079
   -> TEST TEST EAX,EAX | 005449B0 @ 00545337 -> TEST TEST EAX,EAX | 005449B0 @ 0054545E -> TEST
   TEST EAX,EAX | 005449B0 @ 005455EC -> TEST TEST EAX,EAX | 005449B0 @ 0054614F -> TEST TEST
   EAX,EAX | 0054AEE0 @ 0054AF24 -> TEST TEST EAX,EAX */

int __fastcall FUN_00544990(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(char *)(param_1 + 0x493) == '\x02');
}



/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=004E1FB0 @ 004E1FC9
   -> TEST TEST EAX,EAX | 004E22F0 @ 004E22FB -> TEST TEST EAX,EAX */

int __thiscall FUN_004e1f70(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)((int)this + param_1 * 0x28 + 0x4d0) == 0);
}



/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00639C90 @ 0063A462
   -> TEST TEST EAX,EAX */

int __thiscall FUN_0063c4a0(void *this,int param_1)

{
  int iVar1;

  *(undefined4 *)((int)this + 0x27a) = *(undefined4 *)((int)this + 0x26e);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = (int)*(short *)((int)this + 0x251) -
          (param_1 - *(int *)((int)this + 0x28e)) * *(int *)((int)this + 0x292);
  *(int *)((int)this + 0x26e) = iVar1;
  return (uint)(iVar1 < 0x3e9);
}


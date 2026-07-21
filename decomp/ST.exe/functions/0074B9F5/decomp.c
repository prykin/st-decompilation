
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=006D7380 @ 006D73EF
   -> TEST TEST EAX,EAX | 0074CA21 @ 0074CA70 -> TEST TEST EAX,EAX */

int __thiscall FUN_0074b9f5(void *this,char *param_1)

{
  int iVar1;

  iVar1 = FUN_0074b99c(this,(AnonShape_0074B99C_A57FB945 *)param_1);
  return (uint)(iVar1 == 0);
}


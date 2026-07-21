
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0061FE80 -> 00620DA0 @ 0061FFAF | 006202B0 -> 00620DA0 @ 00620392 | 00620A00 ->
   00620DA0 @ 00620ABA | 00620E40 -> 00620DA0 @ 00620EF8 | 006211E0 -> 00620DA0 @ 0062129A */

undefined4 __thiscall FUN_00620da0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;

  iVar1 = 0;
  pcVar2 = (char *)((int)this + 0x20);
  do {
    if (*pcVar2 == '\0') {
      *(undefined1 *)((int)this + iVar1 * 0x1d + 0x20) = 1;
      *(int *)((int)this + iVar1 * 0x1d + 0x21) = param_1;
      *(undefined4 *)((int)this + iVar1 * 0x1d + 0x25) = param_2;
      *(undefined4 *)((int)this + iVar1 * 0x1d + 0x29) = param_3;
      *(int *)((int)this + iVar1 * 0x1d + 0x2d) = *(int *)((int)this + 0x1c) * 10;
      *(uint *)((int)this + iVar1 * 0x1d + 0x39) = PTR_00802a38->field_00E4;
      *(undefined4 *)((int)this + iVar1 * 0x1d + 0x31) = 0xf;
      *(float *)((int)this + iVar1 * 0x1d + 0x35) =
           (float)_DAT_0079cee0 / ((float)*(int *)((int)this + 0x1c) * (float)_DAT_0079cef0);
      return 1;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x1d;
  } while (iVar1 < 5);
  return 0;
}


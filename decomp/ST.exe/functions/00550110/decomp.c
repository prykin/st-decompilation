
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0054F1D0 @ 0054F999
   -> TEST TEST EAX,EAX | 0054F1D0 @ 0054F9D0 -> TEST TEST EAX,EAX */

int __fastcall FUN_00550110(int param_1)

{
  uint uVar1;
  bool bVar2;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(byte *)(param_1 + 0x4e) < *(byte *)(param_1 + 0x4d)) {
    *(undefined2 *)(*(int *)(param_1 + 0x3d) + 5) = 0;
    *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
    thunk_FUN_00550190(param_1);
    return 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x3d) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x3d) + 5) = *(undefined2 *)(param_1 + 0x57);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar2 = *(short *)(param_1 + 0x57) != 0;
    if (bVar2) {
      thunk_FUN_00550190(param_1);
    }
    uVar1 = (uint)bVar2;
    *(undefined2 *)(param_1 + 0x57) = 0;
  }
  return uVar1;
}


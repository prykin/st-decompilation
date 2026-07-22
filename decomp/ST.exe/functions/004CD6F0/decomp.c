
undefined4 __fastcall FUN_004cd6f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_8;

  iVar3 = 0;
  local_8 = (void *)0x0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x524)) {
    piVar2 = (int *)(param_1 + 0x4d0);
    do {
      iVar1 = FUN_006e62d0(g_playSystem_00802A38,*piVar2,(int *)&local_8);
      if (iVar1 == 0) {
        *(undefined4 *)((int)local_8 + 0x4d4) = 0;
        *(undefined4 *)((int)local_8 + 0x5d3) = 0;
        thunk_FUN_004c91a0(local_8);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar3 < *(int *)(param_1 + 0x524));
    *(undefined4 *)(param_1 + 0x524) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x524) = 0;
  return 0;
}


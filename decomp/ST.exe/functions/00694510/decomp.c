
char * __fastcall FUN_00694510(void *param_1)

{
  char *pcVar1;
  int iVar2;

  *(undefined4 *)((int)param_1 + 0x199d) = 0xffffffff;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)((int)param_1 + 0x199d) + 1;
    *(int *)((int)param_1 + 0x199d) = iVar2;
    while( true ) {
      if (7 < iVar2) {
        return (char *)0x0;
      }
      iVar2 = thunk_FUN_00693e60(param_1,iVar2);
      if (iVar2 != 0) break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)((int)param_1 + 0x199d) + 1;
      *(int *)((int)param_1 + 0x199d) = iVar2;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar1 = (char *)thunk_FUN_00693e60(param_1,*(int *)((int)param_1 + 0x199d));
    if (pcVar1 == (char *)0x0) break;
    if (*pcVar1 == '\0') {
      return pcVar1;
    }
  }
  return (char *)0x0;
}


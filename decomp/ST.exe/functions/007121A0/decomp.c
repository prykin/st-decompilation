
undefined4 __cdecl FUN_007121a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;

  iVar1 = param_2 + param_3;
  if (param_2 < iVar1) {
    do {
      if (*(int *)(param_1 + 8) <= param_2) {
        return 0;
      }
      if (param_2 < 0) {
        return 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar2 = *(char **)(*(int *)(param_1 + 0x14) + param_2 * 4);
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        return 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar1);
  }
  return 0;
}


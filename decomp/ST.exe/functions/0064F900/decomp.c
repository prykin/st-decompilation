
undefined4 __cdecl FUN_0064f900(short *param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') goto LAB_0064f931;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  uVar2 = 1;
  if (*param_1 < 3) {
    param_1[8] = 1;
    param_1[9] = 0;
    return uVar2;
  }
  if ((char)param_1[0x69] != '\b') {
LAB_0064f931:
    uVar2 = 0;
  }
  return uVar2;
}


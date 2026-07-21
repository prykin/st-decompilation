
undefined4 __cdecl FUN_0052a540(int param_1)

{
  undefined4 local_8;

  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(*(int *)(param_1 + 0x14) + 4)) {
  case 0:
    return 0;
  case 1:
  case 3:
    local_8 = 1;
    break;
  case 2:
    return 2;
  }
  return local_8;
}


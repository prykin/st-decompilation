
undefined4 __cdecl FUN_0073b060(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_007f1c14 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}


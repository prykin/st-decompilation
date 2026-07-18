
uint __cdecl FUN_00731ae0(int param_1)

{
  uint local_c;
  
  local_c = DAT_0085a5c0;
  while( true ) {
    if (DAT_0085a5c0 + DAT_0085a5bc * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}


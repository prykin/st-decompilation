
int FUN_00740c80(void)

{
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  local_c = -1;
  local_10 = 0;
  do {
    if (0x3f < local_10) {
      return local_c;
    }
    if ((&DAT_0085a1a0)[local_10] == 0) {
      local_8 = (undefined4 *)thunk_FUN_006a3c10(0x100,2,"osfinfo.c",0x79);
      if (local_8 == (undefined4 *)0x0) {
        return local_c;
      }
      (&DAT_0085a1a0)[local_10] = local_8;
      DAT_0085a2dc = DAT_0085a2dc + 0x20;
      for (; local_8 < (undefined4 *)((&DAT_0085a1a0)[local_10] + 0x100); local_8 = local_8 + 2) {
        *(undefined1 *)(local_8 + 1) = 0;
        *local_8 = 0xffffffff;
        *(undefined1 *)((int)local_8 + 5) = 10;
      }
      return local_10 << 5;
    }
    for (local_8 = (undefined4 *)(&DAT_0085a1a0)[local_10];
        local_8 < (undefined4 *)((&DAT_0085a1a0)[local_10] + 0x100); local_8 = local_8 + 2) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        *local_8 = 0xffffffff;
        local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_0085a1a0)[local_10] >> 3);
        break;
      }
    }
    if (local_c != -1) {
      return local_c;
    }
    local_10 = local_10 + 1;
  } while( true );
}


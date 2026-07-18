
void FUN_0073e620(void)

{
  uint local_8;
  
  if (DAT_0085a180 == 0) {
    DAT_0085a180 = 0x200;
  }
  else if (DAT_0085a180 < 0x14) {
    DAT_0085a180 = 0x14;
  }
  DAT_00858e40 = thunk_FUN_006a40c0(DAT_0085a180,4,2,"_file.c",0x83);
  if (DAT_00858e40 == (undefined4 *)0x0) {
    DAT_0085a180 = 0x14;
    DAT_00858e40 = thunk_FUN_006a40c0(0x14,4,2,"_file.c",0x86);
    if (DAT_00858e40 == (undefined4 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    DAT_00858e40[local_8] = &PTR_DAT_007f2090 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_0085a1a0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 8) == -1) ||
       (*(int *)((&DAT_0085a1a0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 8) == 0)) {
      *(undefined4 *)(&DAT_007f20a0 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}


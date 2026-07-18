
undefined4 thunk_FUN_00680b50(void)

{
  if (((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] != '\x02') &&
     ((&DAT_00813bc8)[DAT_008488b0 * 0x2b14] != '\x04')) {
    return 0;
  }
  if ((int)(&DAT_00813bc4)[DAT_008488b0 * 0xac5] < 2) {
    (&DAT_00811c84)[DAT_008488b0 * 0xac5] = 0xffffffff;
  }
  else if ((&DAT_00813bc9)[DAT_008488b0 * 0x2b14] != '\x02') {
    return 0;
  }
  return 1;
}


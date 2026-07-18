
bool FUN_00731a80(void)

{
  DAT_0085a5c0 = HeapAlloc(DAT_0085a5c4,0,0x140);
  if (DAT_0085a5c0 != (LPVOID)0x0) {
    DAT_0085a5b8 = 0;
    DAT_0085a5bc = 0;
    DAT_0085a5a0 = 0x10;
    DAT_0085a5b4 = DAT_0085a5c0;
  }
  return DAT_0085a5c0 != (LPVOID)0x0;
}


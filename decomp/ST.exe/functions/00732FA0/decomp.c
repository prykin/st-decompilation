
void FUN_00732fa0(void)

{
  if (DAT_0085a5b8 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_0085a5b8[3] + DAT_0085a5b0 * 0x8000),0x8000,0x4000);
    DAT_0085a5b8[2] = DAT_0085a5b8[2] | 0x80000000U >> ((byte)DAT_0085a5b0 & 0x1f);
    *(undefined4 *)(DAT_0085a5b8[4] + 0xc4 + DAT_0085a5b0 * 4) = 0;
    *(char *)(DAT_0085a5b8[4] + 0x43) = *(char *)(DAT_0085a5b8[4] + 0x43) + -1;
    if (*(char *)(DAT_0085a5b8[4] + 0x43) == '\0') {
      DAT_0085a5b8[1] = DAT_0085a5b8[1] & 0xfffffffe;
    }
    if ((DAT_0085a5b8[2] == -1) && (1 < DAT_0085a5bc)) {
      HeapFree(DAT_0085a5c4,0,(LPVOID)DAT_0085a5b8[4]);
      FUN_0072da70(DAT_0085a5b8,DAT_0085a5b8 + 5,
                   (DAT_0085a5c0 + DAT_0085a5bc * 0x14) - (int)(DAT_0085a5b8 + 5));
      DAT_0085a5bc = DAT_0085a5bc + -1;
    }
    DAT_0085a5b8 = (undefined4 *)0x0;
  }
  return;
}


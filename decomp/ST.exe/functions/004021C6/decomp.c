
undefined4 thunk_FUN_0056a500(void)

{
  DWORD DVar1;
  char acStack_2c [2];
  undefined1 uStack_2a;
  undefined1 uStack_20;
  undefined4 uStack_1e;
  
  if (DAT_00808783 == '\x03') {
    DVar1 = timeGetTime();
    if (499 < DVar1 - DAT_00806720) {
      uStack_2a = 5;
      DAT_00806720 = DVar1;
      if (DAT_0080877e != '\0') {
        uStack_20 = DAT_0080733b;
        uStack_1e = DAT_00808754;
        FUN_00715360(DAT_00811764,0,'\x1a',acStack_2c,0x26,0,0xffffffff);
        return 0;
      }
      FUN_00715360(DAT_00811764,1,'\x1a',acStack_2c,0x26,0,0xffffffff);
    }
  }
  return 0;
}


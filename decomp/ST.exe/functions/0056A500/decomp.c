
undefined4 FUN_0056a500(void)

{
  DWORD DVar1;
  char local_2c [2];
  undefined1 local_2a;
  undefined1 local_20;
  undefined4 local_1e;
  
  if (DAT_00808783 == '\x03') {
    DVar1 = timeGetTime();
    if (499 < DVar1 - DAT_00806720) {
      local_2a = 5;
      DAT_00806720 = DVar1;
      if (DAT_0080877e != '\0') {
        local_20 = DAT_0080733b;
        local_1e = DAT_00808754;
        FUN_00715360(DAT_00811764,0,'\x1a',local_2c,0x26,0,0xffffffff);
        return 0;
      }
      FUN_00715360(DAT_00811764,1,'\x1a',local_2c,0x26,0,0xffffffff);
    }
  }
  return 0;
}


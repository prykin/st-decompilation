
void __fastcall FUN_005daf20(int param_1)

{
  char cVar1;
  
  if (DAT_00811764 == (undefined4 *)0x0) goto LAB_005dafab;
  FUN_006b6500((int)DAT_00811764,1);
  if (DAT_0080877e == '\0') {
    if (DAT_0080c50e != 0) {
      FUN_00715360(DAT_00811764,0,'\x13',(char *)0x0,0,0,0xffffffff);
    }
    if (DAT_0080c50a != 0) {
      cVar1 = '\x11';
      goto LAB_005daf91;
    }
  }
  else {
    cVar1 = '\x10';
LAB_005daf91:
    FUN_00715360(DAT_00811764,0,cVar1,(char *)0x0,0,0,0xffffffff);
  }
  FUN_006b6500((int)DAT_00811764,DAT_0080733c);
LAB_005dafab:
  thunk_FUN_005dab30(param_1);
  thunk_FUN_005dac60();
  thunk_FUN_005daa60();
  if (*(byte **)(param_1 + 0x696) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(param_1 + 0x696));
  }
  *(undefined4 *)(param_1 + 0x696) = 0;
  return;
}


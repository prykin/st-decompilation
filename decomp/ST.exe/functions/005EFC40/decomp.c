
void __fastcall FUN_005efc40(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x24e) = 1;
  iVar1 = thunk_FUN_00495ff0(*(short *)(param_1 + 0x242),*(short *)(param_1 + 0x244),
                             *(short *)(param_1 + 0x246),0,param_1);
  if (iVar1 == 0) {
    *(char *)(param_1 + 0x252) = *(char *)(param_1 + 0x252) + -1;
  }
  *(undefined4 *)(param_1 + 0x23a) = 4;
  *(undefined1 *)(param_1 + 0x2e9) = 0;
  *(undefined1 *)(param_1 + 0x317) = 0;
  thunk_FUN_005f0620(param_1);
  return;
}


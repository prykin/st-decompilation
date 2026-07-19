
void thunk_FUN_0054edf0(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  STPlaySystemC *in_ECX;
  char cVar2;
  
  cVar2 = (char)param_1;
  if ((((*(char *)((int)&DAT_008087c4 + (uint)DAT_0080874d * 0x51 + 3) == '\0') &&
       (DAT_0080874f == '\0')) || (cVar2 == '\x05')) && (DAT_008087a5 == 0)) {
    if (param_3 != 0) {
      STPlaySystemC::SetCtrlCmd(in_ECX,DAT_0080874d,0,cVar2,param_2,param_4,(undefined4 *)0x0,0);
      return;
    }
    param_1 = (undefined4 *)0x0;
    uVar1 = STAllPlayersC::PrepareToCmd(DAT_007fa174,&param_1,&param_3);
    if (uVar1 != 0xffffffff) {
      STPlaySystemC::SetCtrlCmd(in_ECX,DAT_0080874d,uVar1,cVar2,param_2,param_4,param_1,param_3);
    }
    if (param_1 != (undefined4 *)0x0) {
      FUN_006ab060(&param_1);
    }
  }
  return;
}



uint FUN_0042b620(uint param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_3) {
  case 1:
    iVar2 = *(int *)((int)&DAT_007f4e29 + (char)param_1 * 0xa62);
    if (iVar2 == 0) {
      return 0;
    }
    break;
  case 2:
    iVar2 = DAT_007fa154;
    if (DAT_007fa154 == 0) {
      return 0;
    }
    break;
  case 3:
    iVar2 = DAT_007fa158;
    if (DAT_007fa158 == 0) {
      return 0;
    }
    break;
  case 4:
    iVar2 = DAT_007fa15c;
    if (DAT_007fa15c == 0) {
      return 0;
    }
    break;
  case 5:
    iVar2 = DAT_007fa160;
    if (DAT_007fa160 == 0) {
      return 0;
    }
    break;
  case 6:
    iVar2 = DAT_007fa164;
    if (DAT_007fa164 == 0) {
      return 0;
    }
    break;
  default:
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x17a,0,0,
                               s_STAllPlayersC__GetObjPtr_player__007a609c,(int)(char)param_1,
                               param_2 & 0xffff);
    if (iVar2 == 0) {
      return 0;
    }
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = FUN_006acc70(iVar2,param_2 & 0xffff,&param_1);
  return -(uint)(uVar3 != 0xfffffffc) & param_1;
}


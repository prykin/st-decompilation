
int __cdecl
FUN_006778c0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar3 = 0;
  if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
    return 0;
  }
  iVar5 = param_2;
  if (param_2 < 0) {
    iVar5 = 0;
  }
  iVar4 = param_3;
  if (param_3 < 0) {
    iVar4 = 0;
  }
  iVar2 = param_5;
  if (param_5 < 1) {
    iVar2 = (int)g_worldGrid.sizeX;
  }
  iVar1 = param_6;
  if (param_6 < 1) {
    iVar1 = (int)g_worldGrid.sizeY;
  }
  if ((0xdc < param_1) && (param_1 < 0xdf)) {
    iVar5 = thunk_FUN_004b1fb0(param_1,&param_2,&param_3,iVar5,iVar4,iVar2,iVar1);
    if (iVar5 == 0) {
      iVar3 = param_2;
    }
  }
  return iVar3;
}



void FUN_0042a9f0(char param_1)

{
  int iVar1;
  STAllPlayersC *in_ECX;
  undefined4 *puVar2;
  
  STAllPlayersC::ResetActivityFromTmp(in_ECX,param_1,0,0,0);
  STAllPlayersC::ResetActivityFromTmp(in_ECX,param_1,1,0,0);
  iVar1 = (int)param_1;
  _param_1 = 5;
  puVar2 = &g_playerRuntime[iVar1].field329_0x16d;
  do {
    if ((byte *)*puVar2 != (byte *)0x0) {
      FUN_006ae110((byte *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)((int)puVar2 + -10) = 0;
    if ((byte *)puVar2[0x14] != (byte *)0x0) {
      FUN_006ae110((byte *)puVar2[0x14]);
      puVar2[0x14] = 0;
    }
    *(undefined4 *)((int)puVar2 + 0x46) = 0;
    puVar2 = puVar2 + 4;
    _param_1 = _param_1 + -1;
  } while (_param_1 != 0);
  puVar2 = &g_playerRuntime[iVar1].field446_0x211;
  iVar1 = 10;
  do {
    if ((byte *)*puVar2 != (byte *)0x0) {
      FUN_006ae110((byte *)*puVar2);
      *puVar2 = 0;
    }
    *(undefined4 *)((int)puVar2 + -10) = 0;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


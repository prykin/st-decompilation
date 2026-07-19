
undefined4 thunk_FUN_004d0f00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_20 [7];
  
  puVar2 = auStack_20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  auStack_20[4] = 0;
  auStack_20[3] = 1;
  auStack_20[2] = 2;
  auStack_20[1] = 0xff;
  auStack_20[0] = 0x3ea;
  STPlaySystemC::CreateGameObject(DAT_00802a38,0x3ea,0,0,auStack_20,0);
  return 0;
}


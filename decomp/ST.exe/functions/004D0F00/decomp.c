
undefined4 FUN_004d0f00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_20 [7];
  
  puVar2 = local_20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20[4] = 0;
  local_20[3] = 1;
  local_20[2] = 2;
  local_20[1] = 0xff;
  local_20[0] = 0x3ea;
  STPlaySystemC::CreateGameObject(PTR_00802a38,0x3ea,0,0,local_20,0);
  return 0;
}


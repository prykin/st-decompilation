
undefined4 __fastcall thunk_FUN_004dccf0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_48 [7];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  int iStack_8;
  
  puVar4 = auStack_48;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)puVar4 = 0;
  uStack_2c = *(undefined4 *)(param_1 + 0x5b4);
  auStack_48[3] = 1;
  auStack_48[2] = 1;
  auStack_48[1] = *(undefined4 *)(param_1 + 0x24);
  auStack_48[6] = *(undefined4 *)(param_1 + 0x5b0);
  iStack_24 = (int)*(short *)(param_1 + 0x41);
  iStack_20 = (int)*(short *)(param_1 + 0x43);
  uStack_28 = *(undefined4 *)(param_1 + 0x5b8);
  iStack_1c = *(short *)(param_1 + 0x45) + 0x4b;
  iStack_8 = 0;
  auStack_48[4] = 0;
  auStack_48[0] = 0x186;
  auStack_48[5] = 7;
  uStack_14 = 100;
  uStack_18 = 0xf;
  uStack_10 = uVar2;
  uStack_c = uVar1;
  STPlaySystemC::CreateGameObject(DAT_00802a38,0x186,0,&iStack_8,auStack_48,0);
  if (iStack_8 != 0) {
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(iStack_8 + 0x18);
  }
  return 0;
}


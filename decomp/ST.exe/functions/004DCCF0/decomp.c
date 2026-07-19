
undefined4 __fastcall FUN_004dccf0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_48 [7];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  int local_8;
  
  puVar4 = local_48;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)puVar4 = 0;
  local_2c = *(undefined4 *)(param_1 + 0x5b4);
  local_48[3] = 1;
  local_48[2] = 1;
  local_48[1] = *(undefined4 *)(param_1 + 0x24);
  local_48[6] = *(undefined4 *)(param_1 + 0x5b0);
  local_24 = (int)*(short *)(param_1 + 0x41);
  local_20 = (int)*(short *)(param_1 + 0x43);
  local_28 = *(undefined4 *)(param_1 + 0x5b8);
  local_1c = *(short *)(param_1 + 0x45) + 0x4b;
  local_8 = 0;
  local_48[4] = 0;
  local_48[0] = 0x186;
  local_48[5] = 7;
  local_14 = 100;
  local_18 = 0xf;
  local_10 = uVar2;
  local_c = uVar1;
  STPlaySystemC::CreateGameObject(DAT_00802a38,0x186,0,&local_8,local_48,0);
  if (local_8 != 0) {
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(local_8 + 0x18);
  }
  return 0;
}


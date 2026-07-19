
void __cdecl
thunk_FUN_006405f0(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                  undefined2 param_9,undefined2 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_38 [5];
  undefined4 uStack_24;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  puVar2 = auStack_38;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == 0xa8) {
    uStack_24 = 1;
  }
  else if (param_1 == 0xbe) {
    uStack_24 = 2;
  }
  uStack_1c = param_5;
  auStack_38[1] = param_2;
  uStack_10 = param_2;
  uStack_8 = param_4;
  uStack_16 = param_8;
  uStack_c = param_3;
  uStack_18 = param_7;
  uStack_1a = param_6;
  uStack_6 = param_10;
  auStack_38[0] = 0x78;
  uStack_14 = param_9;
  uStack_12 = 0;
  STPlaySystemC::CreateGameObject(DAT_00802a38,0x78,0,0,auStack_38,0);
  return;
}



void __cdecl
thunk_FUN_0057b990(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4,
                  undefined2 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_40 [5];
  undefined4 *puStack_2c;
  undefined4 auStack_20 [3];
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  if (param_3 != 0) {
    puVar2 = auStack_40;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = auStack_20;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    auStack_20[2] = param_1;
    auStack_20[0] = param_2;
    uStack_14 = param_5;
    uStack_12 = param_4;
    auStack_40[2] = *(undefined4 *)(param_3 + 8);
    auStack_20[1] = param_6;
    puStack_2c = auStack_20;
    auStack_40[3] = 2;
    auStack_40[4] = param_7;
    (**(code **)(*DAT_00802a38 + 0x18))(auStack_40);
  }
  return;
}


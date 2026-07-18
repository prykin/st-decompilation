
void __cdecl
thunk_FUN_005fd750(uint param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  uint param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint auStack_30 [5];
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int iStack_16;
  undefined2 uStack_12;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar3 = auStack_30;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uStack_1c = param_2;
  uStack_1a = param_3;
  uStack_18 = param_4;
  uStack_12 = (undefined2)param_5;
  auStack_30[3] = 1;
  auStack_30[2] = 1;
  auStack_30[1] = param_1;
  auStack_30[0] = 0x82;
  piVar1 = (int *)thunk_FUN_0042b620(param_1,param_5,1);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xf8))();
    if (iVar2 != 0) {
      iStack_16 = piVar1[6];
    }
  }
  uStack_10 = param_6;
  uStack_c = 0xb4;
  uStack_8 = 5;
  (**(code **)(*DAT_00802a38 + 8))(0x10a,0,0,auStack_30,0);
  return;
}


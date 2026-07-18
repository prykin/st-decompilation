
undefined4 __thiscall thunk_FUN_0060bdd0(void *this,undefined4 *param_1)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int *apiStack_58 [6];
  undefined4 uStack_40;
  int aiStack_38 [3];
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  ppiVar2 = apiStack_58;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppiVar2 = (int *)0x0;
    ppiVar2 = ppiVar2 + 1;
  }
  piVar3 = aiStack_38;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  apiStack_58[3] = (int *)0x4;
  apiStack_58[2] = (int *)param_1[6];
  aiStack_38[1] = *(undefined4 *)((int)this + 0x1f5);
  switch(aiStack_38[1]) {
  case 0x42:
    aiStack_38[2] = *(undefined4 *)((int)this + 0x1d9);
    aiStack_38[0] = DAT_007e67b0;
    aiStack_38[1] = 0x42;
    iVar1 = thunk_FUN_004406c0(*(char *)(param_1 + 9));
    if ((char)iVar1 == '\x03') {
      iVar1 = thunk_FUN_004e60d0(param_1[9],0x6a);
    }
    else {
      iVar1 = thunk_FUN_004e60d0(param_1[9],0x2d);
    }
    if (iVar1 != 0) {
      aiStack_38[0] = aiStack_38[0] - ((int)(aiStack_38[0] + (aiStack_38[0] >> 0x1f & 3U)) >> 2);
    }
    uStack_2c = *(undefined2 *)((int)this + 0x205);
    uStack_2a = *(undefined2 *)((int)this + 0x201);
    apiStack_58[5] = aiStack_38;
    apiStack_58[4] = (int *)0x110;
    break;
  case 0x43:
    iStack_10 = *(int *)((int)this + 0x1d9);
    uStack_c = 100;
    uStack_8 = 0;
    apiStack_58[4] = (int *)0x121;
    apiStack_58[5] = &iStack_10;
    break;
  case 0x4c:
    iStack_1c = *(int *)((int)this + 0x1d9);
    apiStack_58[5] = &iStack_1c;
    uStack_14 = 0x19;
    uStack_18 = 0x41;
    apiStack_58[4] = (int *)0x122;
    break;
  case 0x65:
    aiStack_38[2] = *(undefined4 *)((int)this + 0x1d9);
    uStack_2c = *(undefined2 *)((int)this + 0x205);
    uStack_2a = *(undefined2 *)((int)this + 0x201);
    aiStack_38[0] = DAT_007e67c4;
    aiStack_38[1] = 0x65;
    apiStack_58[4] = (int *)0x110;
    apiStack_58[5] = aiStack_38;
  }
  (**(code **)*param_1)(apiStack_58);
  return uStack_40;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl
thunk_FUN_0062bbc0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  int *piStack_8;
  
  piStack_8 = (int *)FUN_006aac70(0x6d);
  piVar7 = piStack_8;
  for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  *(undefined1 *)piVar7 = 0;
  *piStack_8 = param_1;
  piStack_8[1] = param_2;
  piStack_8[2] = param_3;
  piStack_8[0xc] = param_4;
  piStack_8[0xd] = param_5;
  piStack_8[0xe] = param_6;
  piStack_8[3] = param_8;
  piStack_8[4] = param_7;
  *(undefined1 *)(piStack_8 + 0xf) = 3;
  *(undefined4 *)((int)piStack_8 + 0x3d) = param_9;
  *(undefined4 *)((int)piStack_8 + 0x41) = param_10;
  *(undefined4 *)((int)piStack_8 + 0x45) = 0;
  fStack_2c = (float)(piStack_8[0xc] - *piStack_8);
  fStack_28 = (float)(piStack_8[0xd] - piStack_8[1]);
  fStack_24 = (float)(piStack_8[0xe] - piStack_8[2]);
  fVar1 = SQRT(fStack_2c * fStack_2c + fStack_28 * fStack_28 + fStack_24 * fStack_24);
  fStack_2c = fStack_2c / fVar1;
  fStack_28 = fStack_28 / fVar1;
  fStack_24 = fStack_24 / fVar1;
  iVar6 = piStack_8[0xe];
  if (iVar6 == piStack_8[2]) {
    fStack_14 = 0.0;
    fStack_10 = 0.0;
    fStack_c = 1.0;
  }
  else {
    fVar1 = (float)(piStack_8[1] - piStack_8[0xd]);
    fVar4 = (float)(*piStack_8 - piStack_8[0xc]);
    fVar3 = fVar1 * fStack_28 + fVar4 * fStack_2c;
    if (fVar3 == _DAT_0079034c) {
      FUN_006ab060(&piStack_8);
      return (int *)0x0;
    }
    fStack_14 = (float)*piStack_8;
    fVar5 = (float)piStack_8[0xd];
    fVar2 = (float)piStack_8[0xc];
    fVar3 = (--(fStack_14 * fStack_2c +
               (float)piStack_8[1] * fStack_28 + (float)piStack_8[2] * fStack_24) -
            ((float)iVar6 * fStack_24 + fVar5 * fStack_28 + fVar2 * fStack_2c)) / fVar3;
    fStack_14 = (fVar4 * fVar3 + fVar2) - fStack_14;
    fStack_10 = (fVar1 * fVar3 + fVar5) - (float)piStack_8[1];
    fStack_c = (float)iVar6 - (float)piStack_8[2];
    fVar1 = SQRT(fStack_14 * fStack_14 + fStack_10 * fStack_10 + fStack_c * fStack_c);
    fStack_14 = fStack_14 / fVar1;
    fStack_10 = fStack_10 / fVar1;
    fStack_c = fStack_c / fVar1;
  }
  fStack_20 = fStack_10 * fStack_24 - fStack_c * fStack_28;
  fStack_1c = fStack_c * fStack_2c - fStack_14 * fStack_24;
  fStack_18 = fStack_14 * fStack_28 - fStack_10 * fStack_2c;
  iVar6 = thunk_FUN_0062ba50(&fStack_2c,(float *)((int)piStack_8 + 0x49));
  if (iVar6 == 0) {
    return (int *)0x0;
  }
  return piStack_8;
}


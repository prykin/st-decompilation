
void __cdecl
FUN_0072a810(byte *param_1,int param_2,ushort *param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_5 + -1;
  *param_5 = iVar1;
  while (-1 < iVar1) {
    if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
      *param_1 = *(byte *)((uint)*param_1 + param_6);
    }
    uVar2 = param_5[8];
    param_5[8] = uVar2 >> 1;
    if (uVar2 >> 1 == 0) {
      param_5[8] = -0x80000000;
    }
    uVar2 = param_5[4] + param_5[5];
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    param_5[4] = uVar2;
    if (uVar2 >> 0x10 != 0) {
      param_3 = param_3 + param_4;
      param_1 = param_1 + param_2;
      param_5[4] = uVar2 & 0xffff;
    }
    iVar1 = *param_5 + -1;
    param_5[6] = param_5[6] + param_5[7];
    *param_5 = iVar1;
  }
  return;
}



/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 007297E0 -> 0072A6F0 @ 00729AC4 | 007297E0 -> 0072A6F0 @ 00729CD1 | 007297E0 ->
   0072A6F0 @ 00729E01 | 007297E0 -> 0072A6F0 @ 0072A06C */

void __cdecl
FUN_0072a6f0(byte *param_1,int param_2,ushort *param_3,int param_4,int *param_5,uint *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_5[1];
  if (iVar2 < param_5[2]) {
    do {
      iVar1 = *param_5;
      *param_5 = iVar1 + -1;
      if (iVar1 + -1 < 0) break;
      uVar3 = param_5[8];
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_5[8] = uVar3 >> 1;
      if (uVar3 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar3 = param_5[4] + param_5[5];
      param_5[4] = uVar3;
      if (uVar3 >> 0x10 != 0) {
        param_5[4] = uVar3 & 0xffff;
        param_1 = param_1 + param_2;
        param_5[1] = iVar2 + 1;
        param_3 = param_3 + param_4;
        if (param_5[3] <= iVar2 + 1) break;
      }
      param_5[6] = param_5[6] + param_5[7];
      iVar2 = param_5[1];
    } while (iVar2 < param_5[2]);
  }
  if (param_5[1] < param_5[3]) {
    iVar2 = *param_5 + -1;
    *param_5 = iVar2;
    while (-1 < iVar2) {
      if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
        *param_1 = *(byte *)((uint)*param_1 + (int)param_6);
      }
      uVar3 = param_5[8];
      param_5[8] = uVar3 >> 1;
      if (uVar3 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar3 = param_5[4] + param_5[5];
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_5[4] = uVar3;
      if (uVar3 >> 0x10 != 0) {
        param_1 = param_1 + param_2;
        param_5[4] = uVar3 & 0xffff;
        iVar2 = param_5[1];
        param_3 = param_3 + param_4;
        param_5[1] = iVar2 + 1;
        if (param_5[3] <= iVar2 + 1) {
          return;
        }
      }
      iVar2 = *param_5 + -1;
      param_5[6] = param_5[6] + param_5[7];
      *param_5 = iVar2;
    }
  }
  return;
}


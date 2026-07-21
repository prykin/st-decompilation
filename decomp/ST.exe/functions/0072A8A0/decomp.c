
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 007297E0 -> 0072A8A0 @ 0072A3D6 */

void __cdecl
FUN_0072a8a0(undefined1 *param_1,int param_2,ushort *param_3,uint *param_4,int *param_5,
            undefined1 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = param_5[1];
  if (iVar3 < param_5[2]) {
    do {
      iVar1 = *param_5;
      *param_5 = iVar1 + -1;
      if (iVar1 + -1 < 0) break;
      param_1 = param_1 + param_2;
      param_3 = param_3 + (int)param_4;
      uVar4 = param_5[8];
      param_5[8] = uVar4 >> 1;
      if (uVar4 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      uVar4 = param_5[4] + param_5[5];
      param_5[4] = uVar4;
      if (uVar4 >> 0x10 != 0) {
        uVar2 = param_5[8];
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        param_5[8] = uVar2 >> 1;
        if (uVar2 >> 1 == 0) {
          param_5[8] = -0x80000000;
        }
        param_5[4] = uVar4 & 0xffff;
        param_5[1] = iVar3 + 1;
        if (param_5[3] <= iVar3 + 1) break;
      }
      param_5[6] = param_5[6] + param_5[7];
      iVar3 = param_5[1];
    } while (iVar3 < param_5[2]);
  }
  if (param_5[1] < param_5[3]) {
    iVar3 = *param_5 + -1;
    *param_5 = iVar3;
    while (-1 < iVar3) {
      if (((param_5[9] & param_5[8]) != 0) && (param_5[6] >> 0x10 < (int)(uint)*param_3)) {
        *param_1 = param_6;
      }
      uVar4 = param_5[8];
      param_5[8] = uVar4 >> 1;
      if (uVar4 >> 1 == 0) {
        param_5[8] = -0x80000000;
      }
      param_1 = param_1 + param_2;
      uVar4 = param_5[4] + param_5[5];
      param_3 = param_3 + (int)param_4;
      param_5[4] = uVar4;
      if (uVar4 >> 0x10 != 0) {
        param_5[4] = uVar4 & 0xffff;
        iVar3 = param_5[1];
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        param_5[1] = iVar3 + 1;
        if (param_5[3] <= iVar3 + 1) {
          return;
        }
      }
      iVar3 = *param_5 + -1;
      param_5[6] = param_5[6] + param_5[7];
      *param_5 = iVar3;
    }
  }
  return;
}


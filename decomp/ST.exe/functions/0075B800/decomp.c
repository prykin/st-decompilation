
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0075C180 -> 0075B800 @ 0075C2A9 */

uint FUN_0075b800(undefined4 *param_1,AnonShape_0075C180_8EED234B *param_2,int param_3,int param_4,
                 int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_3 < param_5) {
    iVar1 = FUN_0075b720(param_1,(uint)param_2,param_3,param_5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    param_2 = (AnonShape_0075C180_8EED234B *)param_1[3];
    param_3 = param_1[4];
  }
  iVar1 = param_3 - param_5;
  piVar3 = (int *)(param_4 + 0x44 + param_5 * 4);
  uVar2 = (int)param_2 >> ((byte)iVar1 & 0x1f) & (1 << ((byte)param_5 & 0x1f)) - 1U;
  if (*piVar3 < (int)uVar2) {
    do {
      if (iVar1 < 1) {
        iVar1 = FUN_0075b720(param_1,(uint)param_2,iVar1,1);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        param_2 = (AnonShape_0075C180_8EED234B *)param_1[3];
        iVar1 = param_1[4];
      }
      iVar1 = iVar1 + -1;
      piVar3 = piVar3 + 1;
      uVar2 = uVar2 << 1 | (int)param_2 >> ((byte)iVar1 & 0x1f) & 1U;
      param_5 = param_5 + 1;
    } while (*piVar3 < (int)uVar2);
  }
  param_1[4] = iVar1;
  param_1[3] = param_2;
  if (0x10 < param_5) {
    return 0;
  }
  return (uint)*(byte *)((*(int *)(param_4 + 0x8c + param_5 * 4) - *(int *)(param_4 + param_5 * 4))
                         + *(int *)(param_4 + 0xd0) + 0x11 + uVar2);
}


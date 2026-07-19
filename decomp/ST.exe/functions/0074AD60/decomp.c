
/* [STVTableApplier] Virtual slot 0079DB78+0xB4
   
   [STVTableApplier] Virtual slot 007A15E8+0xB4 */

void __thiscall FUN_0074ad60(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2 / 10000;
  if ((1000 < (int)uVar4) || ((int)uVar4 < -1000)) {
    if (*(int *)(param_1 + 0x10c) < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = (((int)uVar4 < 1) - 1 & 2000) - 1000;
    }
  }
  iVar3 = *(int *)(param_1 + 0x10c);
  if (1 < iVar3) {
    puVar1 = (uint *)(param_1 + 0x110);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(param_1 + 0x114) =
         *(int *)(param_1 + 0x114) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
    uVar4 = uVar4 * uVar4;
    puVar1 = (uint *)(param_1 + 0x118);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(param_1 + 0x11c) =
         *(int *)(param_1 + 0x11c) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
  }
  if (2 < iVar3) {
    uVar4 = param_3 / 10000;
    if ((1000 < (int)uVar4) || ((int)uVar4 < 0)) {
      uVar4 = 1000;
    }
    puVar1 = (uint *)(param_1 + 0x128);
    uVar5 = uVar4 * uVar4;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar5;
    *(int *)(param_1 + 300) =
         *(int *)(param_1 + 300) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5);
    puVar1 = (uint *)(param_1 + 0x130);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(param_1 + 0x134) =
         *(int *)(param_1 + 0x134) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
  }
  *(int *)(param_1 + 0x10c) = iVar3 + 1;
  return;
}



/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00755830 -> 007574C0 @ 00755958 */

void FUN_007574c0(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  sVar2 = *(short *)(*(int *)(param_1 + 0xc) + 0x34);
  if (sVar2 == 0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(param_3 + 2);
  }
  else {
    iVar3 = (int)sVar2;
  }
  uVar1 = iVar3 + 8;
  puVar5 = (uint *)(param_2 + 0x10 + param_4);
  Library::MSVCRT::FUN_0072da70
            ((undefined4 *)(uVar1 + param_2 + 0x10 + param_4),puVar5,
             *(short *)(param_2 + 8) - param_4);
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)puVar5 = (char)*param_3;
    param_3 = (uint *)((int)param_3 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  *(short *)(param_2 + 8) = *(short *)(param_2 + 8) + (short)uVar1;
  return;
}


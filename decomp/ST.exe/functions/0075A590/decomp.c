
void FUN_0075a590(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int local_8;
  
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0x196);
  if (0 < *(int *)(param_1 + 0x1c)) {
    piVar6 = (int *)(*(int *)(param_1 + 0xd0) + 0xc);
    do {
      uVar5 = piVar6[6] * *piVar6;
      iVar3 = (int)uVar5 / *(int *)(param_1 + 0x12a);
      uVar7 = (uint)piVar6[8] % uVar5;
      if ((uint)piVar6[8] % uVar5 == 0) {
        uVar7 = uVar5;
      }
      if (local_8 == 0) {
        *(int *)(iVar2 + 0x48) = (int)(uVar7 - 1) / iVar3 + 1;
      }
      iVar3 = iVar3 * 2;
      if (0 < iVar3) {
        puVar1 = (undefined4 *)
                 (*(int *)(*(int *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4) + local_8 * 4) +
                 uVar7 * 4);
        puVar4 = puVar1;
        do {
          *puVar4 = puVar1[-1];
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_8 = local_8 + 1;
      piVar6 = piVar6 + 0x15;
    } while (local_8 < *(int *)(param_1 + 0x1c));
  }
  return;
}



void __fastcall FUN_006dd870(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int local_14;
  int local_10;
  int local_c;
  
  if (((*(int *)(param_1 + 0x148) < 1) || (*(int *)(param_1 + 0x154) == 0)) ||
     (*(double *)(param_1 + 0x164) <= *(double *)(param_1 + 0x15c))) {
    FUN_006ab060((undefined4 *)(param_1 + 0x158));
  }
  else {
    if (*(int *)(param_1 + 0x158) == 0) {
      iVar1 = FUN_006aac70(0xc000);
      *(int *)(param_1 + 0x158) = iVar1;
    }
    lVar8 = __ftol();
    uVar5 = (uint)lVar8 & 0x7f00;
    *(uint *)(param_1 + 0x16c) = uVar5;
    lVar8 = __ftol();
    *(uint *)(param_1 + 0x170) = (uint)lVar8 & 0x7f00;
    local_c = 0;
    iVar1 = (int)uVar5 >> 8;
    if (iVar1 != 0) {
      iVar4 = 0;
      iVar2 = iVar1;
      do {
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0x158) + iVar4);
        iVar4 = iVar4 + 0x100;
        iVar2 = iVar2 + -1;
        puVar6 = *(undefined4 **)(param_1 + 0x154);
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        local_c = iVar1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c);
    iVar1 = *(int *)(param_1 + 0x148);
    iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8;
    iVar2 = 0;
    if (0 < iVar4) {
      local_10 = local_c << 8;
      iVar3 = iVar4 / 2;
      local_14 = iVar4;
      do {
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0x158) + local_10);
        local_10 = local_10 + 0x100;
        puVar6 = (undefined4 *)((iVar3 / iVar4 + 1) * 0x100 + *(int *)(param_1 + 0x154));
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar3 = iVar3 + iVar1;
        local_14 = local_14 + -1;
        iVar2 = iVar4;
      } while (local_14 != 0);
    }
    if (local_c + iVar2 < 0xc0) {
      iVar1 = (local_c + iVar2) * 0x100;
      do {
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0x158) + iVar1);
        iVar1 = iVar1 + 0x100;
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x148) * 0x100 + *(int *)(param_1 + 0x154));
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      } while (iVar1 < 0xc000);
    }
    lVar8 = __ftol();
    iVar1 = (int)lVar8;
    *(int *)(param_1 + 0x174) = iVar1;
    if (((*(int *)(param_1 + 0x144) != 0) && (0 < iVar1)) && (iVar1 < *(int *)(param_1 + 0x2c))) {
      iVar1 = FUN_006acf50(*(undefined4 **)(param_1 + 0x1c),*(int *)(param_1 + 0x28) * iVar1);
      *(int *)(param_1 + 0x1c) = iVar1;
      return;
    }
  }
  return;
}


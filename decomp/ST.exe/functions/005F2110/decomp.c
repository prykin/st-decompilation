
undefined4 __thiscall FUN_005f2110(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;

  puVar4 = param_1;
  puVar6 = (undefined4 *)((int)this + 0x20);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  DAT_00811788 = *(undefined4 *)((int)this + 0x34);
  piVar5 = param_1 + 10;
  if (*(int *)((int)this + 0x38) != 0) {
    uVar1 = FUN_006b0060((uint *)0x0,param_1 + 0xb);
    *(undefined4 *)((int)this + 0x38) = uVar1;
    piVar5 = (int *)((int)(param_1 + 0xb) + *piVar5);
  }
  if (*(int *)((int)this + 0x3c) != 0) {
    iVar2 = FUN_006b0060((uint *)0x0,(uint *)(piVar5 + 1));
    *(int *)((int)this + 0x3c) = iVar2;
    uVar3 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = *(int *)((int)this + 0x3c);
        if ((uVar3 < *(uint *)(iVar2 + 0xc)) &&
           (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(*(int *)((int)this + 0x3c) + 0xc));
    }
  }
  return 0x28;
}


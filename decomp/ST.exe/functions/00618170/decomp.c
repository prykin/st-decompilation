
int __thiscall FUN_00618170(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  
  puVar3 = param_1;
  puVar5 = (undefined4 *)((int)this + 0x1c);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar3;
  piVar4 = (int *)((int)param_1 + 0x52);
  local_8 = 0x52;
  if (*(int *)((int)this + 0x5e) != 0) {
    uVar1 = FUN_006b0060((uint *)0x0,(uint *)((int)param_1 + 0x56));
    *(undefined4 *)((int)this + 0x5e) = uVar1;
    local_8 = *piVar4;
    piVar4 = (int *)((int)param_1 + 0x56 + local_8);
    local_8 = local_8 + 0x52;
  }
  if (*(int *)((int)this + 0x62) != 0) {
    uVar1 = FUN_006b0060((uint *)0x0,(uint *)(piVar4 + 1));
    *(undefined4 *)((int)this + 0x62) = uVar1;
    iVar2 = *piVar4;
    piVar4 = (int *)((int)(piVar4 + 1) + iVar2);
    local_8 = local_8 + iVar2;
  }
  if (*(int *)((int)this + 0x66) != 0) {
    uVar1 = FUN_006b0060((uint *)0x0,(uint *)(piVar4 + 1));
    *(undefined4 *)((int)this + 0x66) = uVar1;
    return local_8 + *piVar4;
  }
  return local_8;
}


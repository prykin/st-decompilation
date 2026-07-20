
undefined4 __thiscall FUN_006d7000(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  iVar1 = *(int *)(*(int *)((int)this + 0xe0) + 0x90);
  piVar2 = *(int **)(iVar1 + 0x18);
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_006d4cf0(*(AnonShape_006D4CF0_8A8947BE **)(*(int *)((int)this + 0xe0) + 0xa0),
                         param_1);
    return uVar3;
  }
  iVar4 = 4;
  bVar7 = true;
  piVar5 = param_1 + 4;
  piVar6 = (int *)(iVar1 + 0x2c);
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *piVar5 == *piVar6;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,param_1);
    return uVar3;
  }
  return 0x8004022a;
}


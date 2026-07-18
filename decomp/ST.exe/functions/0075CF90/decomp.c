
void FUN_0075cf90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = param_6;
  iVar3 = param_1;
  iVar2 = *(int *)(param_1 + 0x19e);
  uVar5 = param_7 - *param_6;
  if (*(uint *)(iVar2 + 0x10) < (uint)(param_7 - *param_6)) {
    uVar5 = *(uint *)(iVar2 + 0x10);
  }
  piVar1 = (int *)(param_1 + 0x1b2);
  param_1 = 0;
  (**(code **)(*piVar1 + 4))
            (iVar3,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),&param_1,uVar5);
  (**(code **)(*(int *)(iVar3 + 0x1ba) + 4))
            (iVar3,*(undefined4 *)(iVar2 + 0xc),param_5 + *piVar4 * 4,param_1);
  *piVar4 = *piVar4 + param_1;
  return;
}


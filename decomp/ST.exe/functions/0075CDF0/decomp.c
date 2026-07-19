
void FUN_0075cdf0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x1c);
  *(undefined4 **)((int)param_1 + 0x19e) = puVar2;
  *puVar2 = Library::DKW::JPG::FUN_0075ce80;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (param_1[0x13] != 0) {
    iVar5 = *(int *)((int)param_1 + 0x126);
    puVar2[4] = iVar5;
    if (param_2 != 0) {
      iVar1 = *param_1;
      iVar3 = FUN_00759e90(param_1[0x1b],iVar5);
      uVar4 = (**(code **)(iVar1 + 0x10))(param_1,1,0,param_1[0x1c] * param_1[0x1a],iVar3,iVar5);
      puVar2[2] = uVar4;
      return;
    }
    uVar4 = (**(code **)(*param_1 + 8))(param_1,1,param_1[0x1c] * param_1[0x1a],iVar5);
    puVar2[3] = uVar4;
  }
  return;
}


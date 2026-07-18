
void FUN_0075e000(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 0x1b2);
  if (*(int *)(iVar1 + 0x24) == 0) {
    uVar3 = 2;
    if (*(uint *)(iVar1 + 0x2c) < 2) {
      uVar3 = *(uint *)(iVar1 + 0x2c);
    }
    iVar2 = *param_6;
    if ((uint)(param_7 - iVar2) < uVar3) {
      uVar3 = param_7 - iVar2;
    }
    local_c = *(undefined4 *)(param_5 + iVar2 * 4);
    if (uVar3 < 2) {
      local_8 = *(undefined4 *)(iVar1 + 0x20);
      *(undefined4 *)(iVar1 + 0x24) = 1;
    }
    else {
      local_8 = *(undefined4 *)(param_5 + 4 + iVar2 * 4);
    }
    (**(code **)(iVar1 + 0xc))(param_1,param_2,*param_3,&local_c);
  }
  else {
    FUN_00759eb0(iVar1 + 0x20,0,param_5 + *param_6 * 4,0,1,*(uint *)(iVar1 + 0x28));
    uVar3 = 1;
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  *param_6 = *param_6 + uVar3;
  *(uint *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) - uVar3;
  if (*(int *)(iVar1 + 0x24) == 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}


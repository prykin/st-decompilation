
int FUN_006cecb0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_38c [95];
  undefined4 local_210;
  byte local_20c;
  byte local_164;
  undefined4 local_94 [18];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_2c;
  uint local_18 [4];
  int *local_8;
  
  puVar4 = local_94;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_94[3] = *(undefined4 *)(param_1 + 0x18);
  local_94[2] = *(undefined4 *)(param_1 + 0x1c);
  local_8 = (int *)0x0;
  local_94[0] = 0x7c;
  local_94[1] = 7;
  local_2c = 0x40;
  if (((*(uint *)(param_1 + 0xc) & 0x200) != 0) ||
     ((param_2 != 0 && ((*(uint *)(param_1 + 8) & 0x10000000) != 0)))) {
    local_2c = 0x840;
  }
  if (*(int *)(param_1 + 0x20) == 8) {
    local_94[1] = 0x1007;
    local_4c = 0x20;
    local_48 = 0x60;
    local_40 = 8;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x30) + 0x18))
                    (*(int **)(param_1 + 0x30),local_94,&local_8,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
      piVar1 = *(int **)(param_1 + 0x44);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      *(int **)(param_1 + 0x44) = local_8;
    }
    else {
      piVar1 = *(int **)(param_1 + 0x40);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      *(int **)(param_1 + 0x40) = local_8;
      (**(code **)(*local_8 + 0x38))(local_8,local_18);
      local_210 = 0x17c;
      local_38c[0] = 0x17c;
      (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))
                (*(int **)(param_1 + 0x30),&local_210,local_38c);
      uVar2 = *(uint *)(param_1 + 0xc) & 0xfffffffd;
      *(uint *)(param_1 + 0xc) = uVar2;
      if ((((local_18[0] & 0x4000) != 0) && ((local_20c & 0x40) != 0)) ||
         (((local_18[0] & 0x800) != 0 && ((local_164 & 0x40) != 0)))) {
        *(uint *)(param_1 + 0xc) = uVar2 | 2;
        return 0;
      }
    }
  }
  return iVar3;
}


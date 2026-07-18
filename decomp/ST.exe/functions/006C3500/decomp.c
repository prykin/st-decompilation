
void FUN_006c3500(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_80 [26];
  uint local_18;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 4) & 1) != 0) && (*(int *)(iVar1 + 0x40) == 0)) {
    puVar3 = local_80;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_80[0] = 0x7c;
    local_18 = *(uint *)(param_1 + 0x2c) & 0x4840;
    local_80[1] = 7;
    local_80[3] = *(undefined4 *)(iVar1 + 0x18);
    local_80[2] = *(undefined4 *)(iVar1 + 0x1c);
    (**(code **)(**(int **)(iVar1 + 0x30) + 0x18))(*(int **)(iVar1 + 0x30),local_80,iVar1 + 0x40,0);
  }
  return;
}


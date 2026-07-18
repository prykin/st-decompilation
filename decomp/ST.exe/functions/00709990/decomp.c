
int __cdecl FUN_00709990(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_34 [10];
  int local_b;
  
  *param_3 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0;
  uVar2 = FUN_006b1190(*(int *)(param_1 + 4),local_34);
  while( true ) {
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (local_b == param_2) break;
    uVar2 = FUN_006b1190(*(int *)(param_1 + 4),local_34);
  }
  *param_3 = uVar2;
  iVar1 = *(int *)(param_1 + 4);
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    return *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
  }
  return 0;
}


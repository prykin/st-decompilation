
undefined4 __cdecl FUN_006e3450(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 0xc) <= uVar1) {
      return 0xfffffffc;
    }
    iVar2 = *(int *)(param_1 + 8) * uVar1 + *(int *)(param_1 + 0x1c);
    *(uint *)(param_1 + 4) = uVar1 + 1;
    if (iVar2 == 0) break;
    if (*(int *)(*(int *)(iVar2 + 4) + 8) == param_2) {
      if (param_3 != (int *)0x0) {
        *param_3 = iVar3;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(iVar2 + 4);
      }
      return 0;
    }
    iVar3 = iVar3 + 1;
  }
  return 0xfffffffc;
}


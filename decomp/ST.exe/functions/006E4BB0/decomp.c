
void FUN_006e4bb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_14;
  
  if (*param_1 == 1) {
    local_1c = 0xf;
    local_14 = 9;
    (**(code **)(*(int *)param_1[1] + 0x20))(local_24);
    SystemClassTy::GetToAllObjects((SystemClassTy *)param_1[1],local_24);
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 4) = 0;
    while( true ) {
      iVar1 = param_1[2];
      uVar2 = *(uint *)(iVar1 + 4);
      if (*(uint *)(iVar1 + 0xc) <= uVar2) break;
      piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
      *(uint *)(iVar1 + 4) = uVar2 + 1;
      if (piVar3 == (int *)0x0) {
        return;
      }
      FUN_006e4bb0(piVar3);
    }
  }
  return;
}

